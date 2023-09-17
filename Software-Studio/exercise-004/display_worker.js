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
  
  let currentDisplayColorIndex = 0;
  
  function updateToNextColorIndex() {
    currentDisplayColorIndex = (currentDisplayColorIndex + 1) % display_background_colors.length;
    return currentDisplayColorIndex;
  }
  
  function sendMessageWithUpdatedColor() {
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
    const shouldDisplay = event.data;
  
    if (!shouldDisplay && updateDisplay) {
      clearInterval(updateDisplay);
      return;
    }
  
    sendMessageWithUpdatedColor();
    updateDisplay = setInterval(() => {
      updateToNextColorIndex();
      sendMessageWithUpdatedColor();
    }, 1000);
  };
  