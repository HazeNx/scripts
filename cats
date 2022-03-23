if game.PlaceId == 3956818381 then
    local Library = loadstring(game:HttpGet("https://raw.githubusercontent.com/xHeptc/Kavo-UI-Library/main/source.lua"))()
    local Window = Library.CreateLib("Midnight Hub - Ninja Legends", "Midnight")

    -- MAIN
    local Main = Window:NewTab("Main")
    local MainSection = Main:NewSection("Main")
    
    MainSection:NewToggle("Auto Farm", "Automatically Farm Ninjitsu", function(v)
        getgenv().autoswing = v
        while true do
            if not getgenv().autoswing then return end
            for _,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
                if v:FindFirstChild("ninjitsuGain") then
                    game.Players.LocalPlayer.Character.Humanoid:EquipTool(v)
                    break
                end
            end
            local A_1 = "swingKatana"
            local Event = game:GetService("Players").LocalPlayer.ninjaEvent
            Event:FireServer(A_1)
            wait(0.1)
        end
    end)

    MainSection:NewToggle("Auto Sell", "Automatically Sell Ninjitsu", function(v)
        getgenv().autosell = v
        while true do
            if getgenv().autoswing == false then return end
            game:GetService("Workspace").sellAreaCircles["sellAreaCircle16"].circleInner.CFrame = game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame
            wait(0.1)
            game:GetService("Workspace").sellAreaCircles["sellAreaCircle16"].circleInner.CFrame = CFrame.new(0,0,0)
            wait(0.1)
        end
    end)

    MainSection:NewButton("Unlock All Islands", "Unlock all islands", function()
        local oldcframe = game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame
        for _,v in pairs(game:GetService("Workspace").islandUnlockParts:GetChildren()) do
            game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = v.CFrame
            wait(0.1)
        end
        wait(0.1)
        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = oldcframe
    end)
    
    MainSection:NewToggle("Auto Buy Swords", "Auto buy swords", function(v)
        getgenv().buyswords = v
        while true do
            if not getgenv().buyswords then return end
            local A_1 = "buyAllSwords"
            local A_2 = "Inner Peace Island"
            local Event = game:GetService("Players").LocalPlayer.ninjaEvent
            Event:FireServer(A_1, A_2)
            wait(0.5)
        end
    end)

    MainSection:NewToggle("Auto Buy Belts", "Auto buy belts", function(v)
        getgenv().buybelts = v
        while true do
            if not getgenv().buybelts then return end
            local A_1 = "buyAllBelts"
            local A_2 = "Inner Peace Island"
            local Event = game:GetService("Players").LocalPlayer.ninjaEvent
            Event:FireServer(A_1, A_2)
            wait(0.5)
        end
    end)
 MainSection:NewButton("Anti AFK", "Idle For More Than 20Minutew", function(v)
   loadstring(game:HttpGet("https://rawscripts.net/raw/Universal-Script-NX-Anti-AFK-1283"))()
   end)
--Credits
local Credits = Window:NewTab("Credits")
local CreditSection = Credits:NewSection("Credits:")

CreditSection:NewLabel("Dev : HazeNx")
CreditSection:NewLabel("GUI : KavoUI Library")
CreditSection:NewLabel("AntiAFK : XxSwordmaster_2xX")

elseif game.PlaceId == 6284583030 then
  local Library = loadstring(game:HttpGet("https://raw.githubusercontent.com/HazeNx/nxscripts/main/minarcos"))()
    local Window = Library.CreateLib("Midnight Hub - Pet Simulator X", "Synapse")
    
    --Auto Egg
    local Egg = Window:NewTab("Auto Hatch")
    local EggSection = Egg:NewSection("Overworld Eggs")
     
     EggSection:NewToggle("Cracked Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Cracked Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Spotted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Spotted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Wood Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Wood Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Grass Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Grass Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Beachball Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Beachball Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Coconut Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Coconut Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Rock Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Rock Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Geode Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Geode Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Snow Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Snow Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Ice Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Ice Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Icicle Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Icicle Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Yeti Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Yeti Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Cactus Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Cactus Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Spiked Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Spiked Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Obsidian Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Obsidian Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Magma Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Magma Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Dominus Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Dominus Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)

EggSection:NewLabel("Fantasy World")

EggSection:NewToggle("Enchanted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Enchanted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Relic Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Relic Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Samurai Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Samurai Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Rainbow Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Rainbow Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Haunted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Haunted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Hell Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Hell Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Heaven Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Heaven Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Empyrean Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Empyrean Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewLabel("Tech World")
EggSection:NewToggle("Metal Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Metal Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Tech Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Tech Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Titanium Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Titanium Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Dark Tech Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Dark Tech Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Steampunk Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Steampunk Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Mechanical Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Mechanical Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Lab Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Lab Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Chemical Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Chemical Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Alien Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Alien Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Martian Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Martian Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Planet Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Planet Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Glitch Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Glitch Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Hacker Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Hacker Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewLabel("Axolotl World")
EggSection:NewToggle("Axolotl Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Axolotl Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)

EggSection:NewToggle("Shiny Axolotl Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Shiny Axolotl Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewLabel("Golden Eggs")
EggSection:NewToggle("Golden Cracked Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Cracked Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Spotted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Spotted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Wood Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Wood Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Grass Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Grass Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Beachball Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Beachball Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Coconut Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Coconut Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Rock Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Rock Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Geode Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Geode Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Snow Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Snow Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Ice Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Ice Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Icicle Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Icicle Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Yeti Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Yeti Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Cactus Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Cactus Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Spiked Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Spiked Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Obsidian Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Obsidian Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Magma Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Magma Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Dominus Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Dominus Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)

EggSection:NewLabel("Fantasy World")

EggSection:NewToggle("Golden Enchanted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Enchanted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Relic Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Relic Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Samurai Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Samurai Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Rainbow Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Rainbow Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Haunted Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Haunted Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Hell Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Hell Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Heaven Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Heaven Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Empyrean Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Empyrean Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewLabel("Tech World")
EggSection:NewToggle("Golden Metal Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Metal Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Tech Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Tech Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Titanium Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Titanium Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Dark Tech Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Dark Tech Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Steampunk Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Steampunk Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Mechanical Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Mechanical Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Lab Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Lab Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Chemical Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Chemical Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Alien Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Alien Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Martian Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Martian Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Planet Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Planet Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Glitch Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Glitch Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Hacker Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Hacker Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewLabel("Axolotl World")
EggSection:NewToggle("Golden Axolotl Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Axolotl Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)
EggSection:NewToggle("Golden Shiny Axolotl Egg", "Auto Hatch Egg", function(state)
    if state then
        _G.hatchegg = true
       while _G.hatchegg == true do
         local args = {
           [1] = {
             [1] = "Golden Shiny Axolotl Egg",
             [2] = false
           }
         }
         workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(unpack(args))
         wait()
         end
    else
        _G.hatchegg = false
    end
end)

--Player
local Player = Window:NewTab("Player")
local PlayerSection = Player:NewSection("Player Misc")

PlayerSection:NewSlider("Walkspeed", "Change Player Walkspeed", 250, 16, function(v)
        game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = v
    end)

    PlayerSection:NewSlider("Jumppower", "Change Player Jumppower", 250, 50, function(v)
        game.Players.LocalPlayer.Character.Humanoid.JumpPower = v
    end)

--Misc
local Misc = Window:NewTab("Misc")
local MiscSection = Misc:NewSection("Coming Soon")



--Credits
local Credit = Window:NewTab("Credits")
local CreditsSection = Credit:NewSection("Credits :")

CreditsSection:NewLabel("Dev : HazeNx")
CreditsSection:NewLabel("GUI : KavoUi Library")

local Changelog = Window:NewTab("Changelogs")
local ChangelogSection = Changelog:NewSection("Changelogs : ")

ChangelogSection:NewLabel("[+] Added Gold Eggs Section")
ChangelogSection:NewLabel("[+] Theme Slightly Changed")
ChangelogSection:NewLabel("[+] Misc Section Have Been Added (Coming Soon)")
ChangelogSection:NewLabel("v1.2.2")
end
