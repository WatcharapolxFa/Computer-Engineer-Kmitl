//เป็น arrays ที่บรรจุสีต่าง ๆ เพื่อใช้สำหรับการตั้งค่าสีพื้นหลังและสีข้อความตามลำดับ
const display_background_colors = [
  "#2E3136",
  "#2A505A",
  "#656C5C",
  "#695A5B",
  "#EEE4E1",
];

const display_text_colors = [
  "#FFBBDA",
  "#F0F4BF",
  "#DBCDE3",
  "#C0E4F6",
  "#E8ABB5",
];

let currentDisplayColorIndex = 0; // เป็นตัวแปรที่เก็บ index ปัจจุบันของสีที่ถูกแสดง

function updateToNextColorIndex() {
  //เป็นฟังก์ชันที่เพิ่มค่า index ของสีและทำการวนซ้ำกลับไปที่ index แรกเมื่อครบรอบ
  currentDisplayColorIndex =
    (currentDisplayColorIndex + 1) % display_background_colors.length;
  return currentDisplayColorIndex;
}

function sendMessageWithUpdatedColor() {
  // เป็นฟังก์ชันที่สร้าง object ที่บรรจุข้อมูลเกี่ยวกับวันและเวลาปัจจุบัน, สีพื้นหลัง, สีข้อความ, และสไตล์ CSS แล้วส่งข้อมูลนี้ผ่าน postMessage
  const date = new Date();

  postMessage({
    date: date,
    background: display_background_colors[currentDisplayColorIndex],
    color: display_text_colors[currentDisplayColorIndex],
    style: "font-size: 20px; position: fixed; top: 0%; right: 0%;",
  });
}

let updateDisplay;

self.onmessage = (event) => {
  // เป็น event listener ที่ตรวจสอบเมื่อมีข้อมูลถูกส่งมายัง Web Worker นี้
  const shouldDisplay = event.data;

  if (!shouldDisplay && updateDisplay) {
    //หาก shouldDisplay เป็น false และมีการตั้งเวลาการปรับปรุงสีด้วย setInterval ก่อนหน้านี้ การตั้งเวลานั้นจะถูกยกเลิก
    //หาก shouldDisplay เป็น true, การแสดงผลสีของข้อความและสีพื้นหลังจะเริ่มทำงานและทุก ๆ 1 วินาที สีพื้นหลังและสีข้อความจะถูกเปลี่ยนแปลง
    clearInterval(updateDisplay);
    return;
  }

  sendMessageWithUpdatedColor();
  // เป็นฟังก์ชัน JavaScript ที่ใช้เรียกฟังก์ชันที่กำหนดในแบบฟอร์มการเรียกซ้ำเพียงครั้งเดียวหลังจากผ่านเวลาที่กำหนด (ในที่นี้คือ 1000 มิลลิวินาที หรือ 1 วินาที)
  updateDisplay = setInterval(() => {
    updateToNextColorIndex(); //เพื่อเปลี่ยนสีไปยัง index ถัดไป และเรียก sendMessageWithUpdatedColor() เพื่อส่งข้อมูลสีที่เปลี่ยนแปลงแล้วไปยัง main thread
    sendMessageWithUpdatedColor();
  }, 1000);
};
