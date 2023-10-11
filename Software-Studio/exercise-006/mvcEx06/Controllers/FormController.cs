using Microsoft.AspNetCore.Mvc; 
public class FormController : Controller
{
    public IActionResult Index()
    {
        return View();
    }

    [HttpPost]
    public IActionResult Submit(string firstname, string lastname, string email, string c1, string inputTiebreaker)
    {
        // จัดเก็บข้อมูลลงใน ViewBag
        ViewBag.FirstName = firstname;
        ViewBag.LastName = lastname;
        ViewBag.Email = email;
        ViewBag.C1 = c1;
        ViewBag.InputTiebreaker = inputTiebreaker;

        return View("Index"); // ส่งกลับไปยัง view เดิม แต่แสดงผลข้อมูล
    }
}
