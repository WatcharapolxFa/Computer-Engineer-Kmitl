using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using mvcEx06.Models;

namespace mvcEx06.Controllers;

public class HomeController : Controller
{
    private readonly ILogger<HomeController> _logger;

    public HomeController(ILogger<HomeController> logger)
    {
        _logger = logger;
    }

    public IActionResult Index()
    {
        return View();
    }

    [HttpPost]
    public IActionResult OnEnterCompetition(string fname, string lname, string email, string heights, string answer)
    {
        ViewBag.fname = fname;
        ViewBag.lname = lname;
        ViewBag.email = email;
        ViewBag.heights = heights;
        ViewBag.answer = answer;
        return View();
    }

    [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
    public IActionResult Error()
    {
        return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
    }
}