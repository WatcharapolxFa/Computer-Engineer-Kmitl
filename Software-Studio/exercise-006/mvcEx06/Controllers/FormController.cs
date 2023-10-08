using Microsoft.AspNetCore.Mvc;

namespace mvcEx06.Controllers
{
    public class FormController : Controller
    {
        public ActionResult Index()
        {
            return View();
        }

        [HttpPost]
        public ActionResult Submit(string firstname, string lastname, string email, string c1, string inputTiebreaker)
        {
            ViewBag.Firstname = firstname;
            ViewBag.Lastname = lastname;
            ViewBag.Email = email;
            ViewBag.C1 = c1;
            ViewBag.InputTiebreaker = inputTiebreaker;
            return View("Index");
        }
    }
}
