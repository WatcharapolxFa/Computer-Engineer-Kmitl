using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using project.Models;

namespace project.Controllers;

public class fromeController : Controller
{
    private readonly ILogger<fromeController> _logger;

    public fromeController(ILogger<fromeController> logger)
    {
        _logger = logger;
    }

    public IActionResult Index()
    {
        return View();
    }

    public IActionResult Privacy()
    {
        return View();
    }

    [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
    public IActionResult Error()
    {
        return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
    }

    public IActionResult Fromeeiei (string fname , string lname) {
        ViewBag.fname = fname;
        ViewBag.lname = lname;
        return View();  
    }

    
}
