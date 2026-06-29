const express = require("express");
let notes = [
    {
        id: 1,
        text: "learn express"
    }, 
    {
        id: 2,
        text: "go to gym"
    }
]
const app = express();

app.get("/", (req, res) => {
    res.send("Home");
});

app.get("/notes", (req, res) => {
    res.send(["Math", "Physics"]);
});

app.post("/notes", (req, res) => {
    res.send("Note Created");
});

app.delete("/notes", (req, res) => {
    res.send("Deleted");
});

app.get("/notes/:id", (req, res) => {
    res.send("Note " + req.params.id);
});

app.listen(3000);