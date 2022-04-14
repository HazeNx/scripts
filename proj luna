-- init
local library = loadstring(game:HttpGet("https://raw.githubusercontent.com/HazeNx/luau/main/zaurce.lua"))()
local venyx = library.new("Syndicates ", 5013109572)


if game.PlaceId == 6284583030 then
    local start = tick()
    repeat task.wait() until game:isLoaded()
    repeat task.wait() until game:GetService("Players")
    repeat task.wait() until game:GetService("Players").LocalPlayer
    repeat task.wait() until game:GetService("Players").LocalPlayer.Character:FindFirstChild("HumanoidRootPart")
    repeat task.wait() until game:GetService("Players").LocalPlayer.PlayerGui.Main.Enabled
    repeat task.wait() until game:GetService("Workspace"):FindFirstChild('__MAP')
end

local VirtualUser = game:GetService('VirtualUser')
local HttpService = game:GetService("HttpService")
local RunService = game:GetService("RunService")
-- themes
local themes = {
	Background = Color3.fromRGB(24, 24, 24),
	Glow = Color3.fromRGB(0, 0, 0),
	Accent = Color3.fromRGB(10, 10, 10),
	LightContrast = Color3.fromRGB(20, 20, 20),
	DarkContrast = Color3.fromRGB(14, 14, 14),  
	TextColor = Color3.fromRGB(255, 255, 255)
}

-- first page
local page = venyx:addPage("Home")
local section1 = page:addSection("Home Page")
local section2 = page:addSection("Credits")
local GC = getconnections or get_signal_cons
if GC then
    for i,v in pairs(GC(game.Players.LocalPlayer.Idled)) do
        if v["Disable"] then
            v["Disable"](v)
        elseif v["Disconnect"] then
            v["Disconnect"](v)
        end
    end
else
    print("unlucky")
    local vu = game:GetService("VirtualUser")
    game:GetService("Players").LocalPlayer.Idled:connect(function()
        vu:Button2Down(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
        wait(1)
        vu:Button2Up(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
    end)
end
section1:addButton("Join Our Discord", function()
   setclipboard("http://dsc.gg/synds")
   venyx:Notify("Syndicate", "Discord Link Has Been Copied")
end)
section2:addButton("Nx#2089", function()
      print("Nx Developer")
   end)
section2:addButton("Blacktrap Community", function ()
      print("Blacktrap")
   end)
section2:addButton("Roblox Scripts", function ()
      print("RBLX Script")
  end)
-- farming
local auto = venyx:addPage("Autofarm")
local autofarm = auto:addSection("Auto-Farm")
local mastery = auto:addSection("Auto-Mastery")
local chest = auto:addSection("Auto-Chest")
   -- Service
workspace.__THINGS.__REMOTES.MAIN:FireServer("b", "join coin")
workspace.__THINGS.__REMOTES.MAIN:FireServer("a", "farm coin")
workspace.__THINGS.__REMOTES.MAIN:FireServer("a", "claim orbs")
workspace.__THINGS.__REMOTES.MAIN:FireServer("a", "change pet target")
workspace.__THINGS.__REMOTES.MAIN:FireServer("a", "toggle setting")
local CurrencyOrder = {"Rainbow Coins", "Tech Coins", "Fantasy Coins", "Coins", "Diamonds",}

local syfarm = {
    --Misc
    ['VIP'] = {'VIP'; 'VIP FRONT'};
    --Spawn
    ['Town'] = {'Town', 'Town FRONT'};
    ['Forest'] = {'Forest', 'Forest FRONT'};
    ['Beach'] = {'Beach', 'Beach FRONT'};
    ['Mine'] = {'Mine', 'Mine FRONT'};
    ['Winter'] = {'Winter', 'Winter FRONT'};
    ['Glacier'] = {'Glacier', 'Glacier Lake'};
    ['Desert'] = {'Desert', 'Desert FRONT'};
    ['Volcano'] = {'Volcano', 'Volcano FRONT'};
    -- Fantasy init
    ['Enchanted Forest'] = {'Enchanted Forest', 'Enchanted Forest FRONT'};
    ['Ancient Island'] = {'Ancient Island'; 'Heaven Island FRONT'};
    ['Samurai Island'] = {'Samurai Island', 'Samurai Island FRONT'};
    ['Candy Island'] = {'Candy Island'; 'Candy Island FRONT'};
    ['Haunted Island'] = {'Haunted Island', 'Haunted Island FRONT'};
    ['Hell Island'] = {'Hell Island'; 'Hell Island FRONT'};
    ['Heaven Island'] = {'Heaven Island'; 'Heaven Island FRONT'};
    -- Tech
    ['Tech City'] = {'Tech City'; 'Tech City FRONT'};
    ['Dark Tech'] = {'Dark Tech'; 'Dark Tech FRONT'};
    ['Steampunk'] = {'Steampunk'; 'Steampunk FRONT'};
    ['Alien Forest'] = {"Alien Forest"; "Alien Forest FRONT"};
    ['Alien Lab'] = {"Alien lab"; "Alien Lab FRONT"};
    ['Glitch'] = {"Glitch"; "Glitch FRONT"};
    ['Hacker Portal'] = {"Hacker Portal"; "Hacker Portal FRONT"};
    -- Axolotls
    ['Axolotl Ocean'] = {"Axolotl Ocean"; "Axolotl Ocean FRONT"};
    ['Axolotl Deep Ocean'] = {"Axolotl Deep Ocean"; "Axolotl Deep Ocean FRONT"};
    ['Axolotl Cave'] = {"Axolotl Cave"; "Axolotl Cave FRONT"};
    -- PIXEL
    ['Pixel Forest'] = {'Pixel Forest'; 'Pixel Forest FRONT'};
    ['Pixel Kyoto'] = {'Pixel Kyoto'; 'Pixel Kyoto FRONT'};
    ['Pixel Alps'] = {'Pixel Alps'; 'Pixel Alps FRONT'};
}

local AreaList = {
    'All'; 'VIP';
    'SPAWN WORLD';
    'Town'; 'Forest'; 'Beach'; 'Mine'; 'Winter'; 'Glacier'; 'Desert'; 'Volcano';
    'FANTASY WORLD';
    'Enchanted Forest'; 'Ancient Island'; 'Samurai Island'; 'Candy Island'; 'Haunted Island'; 'Hell Island'; 'Heaven Island';
    'TECH WORLD';
    'Tech City'; 'Dark Tech'; 'Steampunk'; 'Alien Lab'; 'Alien Forest'; 'Glitch'; 'Hacker Portal';
    '-- AXOLOTLS WORLD --';
    'Axolotl Ocean'; 'Axolotl Deep Ocean'; 'Axolotl Cave';
    '-- PIXEL WORLD --';
    'Pixel Forest'; 'Pixel Kyoto'; 'Pixel Alps';
}

local Chests = {
    "All";
    'SPAWN WORLD';
    "Volcano Magma Chest";
    'FANTASY WORLD';
    "Enchanted Forest Chest"; "Ancient Island Enchanted Chest"; "Haunted Island Haunted Chest"; "Hell Island Hell Chest"; "Heaven Island Angel Chest"; "Heavens Gate Grand Heaven Chest";
    'TECH WORLD',
    "Giant Tech Chest"; "Giant Steampunk Chest"; "Giant Alien Chest";
    'AXOLOTLS WORLD';
    "Giant Ocean Chest";
    'PIXEL WORLD';
    "Giant Pixel Chest";
}


local CratesMasteryList = {"Town Crate"; "Forest Crate"; "Beach Crate"; "Mine Crate"; "Desert Crate"; "Volcano Crate"; "Winter Crate"; "Glacier Crate"; "Enchanted Forest Crate"; "Ancient Island Crate"; "Samurai Island Crate"; "Candy Island Crate"; "Haunted Island Crate"; "Hell Island Crate"; "Heaven Island Crate"; "Tech City Crate"; "Dark Tech Crate"; "Alien Forest Crate"; "Axolotl Ocean Crate"; "Pixel Forest Crate"; "Pixel Alps Crate";}

local CoinsPilesMasteryList ={"Town Coins", "Town Large Coins", 'Town Tiny Coins', "Forest Coins", "Forest Large Coins", "Forest Tiny Coins", "Beach Coins", "Beach Large Coins", "Beach Tiny Coins", "Mine Coins", "Mine Large Coins", "Mine Tiny Coins", "Desert Coins", "Desert Large Coins", "Desert Tiny Coins", "Volcano Coins", "Volcano Large Coins", "Volcano Tiny Coins", "Winter Coins", "Winter Large Coins", "Winter Tiny Coins", "Glacier Coins", "Glacier Large Coins", "Glacier Tiny Coins", "Enchanted Forest Coins", "Enchanted Forest Large Coins", "Enchanted Forest Tiny Coins", "Ancient Island Coins", "Ancient Island Large Coins", "Ancient Island Tiny Coins", "Samurai Island Coins", "Samurai Island Large Coins", "Samurai Island Tiny Coins", "Candy Island Coins", "Candy Island Large Coins", "Candy Island Tiny Coins", "Haunted Island Coins", 'Haunted Island Large Coins', 'Haunted Island Tiny Coins', 'Heaven Island Coins', 'Heaven Island Large Coins', 'Heaven Island Tiny Coins', 'Tech City Coins', 'Tech City Large Coins', 'Tech City Tiny Coins', 'Dark Tech Coins', 'Dark Tech Large Coins', 'Dark Tech Tiny Coins', 'Steampunk Coins', 'Steampunk Large Coins', 'Steampunk Tiny Coins', 'Alien Lab Coins', 'Alien Lab Large Coins', 'Alien Lab Tiny Coins', 'Alien Forest Coins', 'Alien Forest Large Coins', 'Alien Forest Tiny Coins', 'Blue Glitched Coins', 'Blue Glitched Large Coins', 'Blue Glitched Tiny Coins', 'Pink Glitched Coins', 'Pink Glitched Large Coins', 'Pink Glitched Tiny Coins', 'Axolotl Ocean Coins', 'Axolotl Ocean Large Coins', 'Axolotl Ocean Tiny Coins', 'Pixel Forest Coins', 'Pixel Forest Large Coins', 'Pixel Forest Tiny Coins', 'Pixel Kyoto Coins', 'Pixel Kyoto Large Coins'}


local ChestsMasteryList = {'Town Chest', "Forest Small Chest", "Forest Chest", "Beach Chest", "Beach Small Chest", "Mine Small Chest", "Mine Chest", "Desert Chest", "Desert Small Chest", "Winter Chest", "Winter Small Chest", "Glacier Chest", "Glacier Small Chest", "Enchanted Forest Chest", "Enchanted Forest Small Chest", "Samurai Island Chest", "Samurai Island Small Chest", "Candy Island Chest", "Candy Island Small Chest", "Hell Island Chest", 'Hell Island Small Chest', "Heaven Island Chest", 'Heaven Island Small Chest', "Axolotl Deep Ocean Chest", "Axolotl Deep Ocean Small Chest", "Pixel Forest Chest", 'Pixel Forest Small Chest', "Pixel Alps Chest", 'Pixel Alps Small Chest'}

local PresentsMasteryList = {"Town Present", "Forest Present", "Beach Present", "Mine Present", "Desert Present", "Volcano Present", "Winter Present", "Glacier Present", "Enchanted Forest Present", "Ancient Island Present", "Samurai Island Present", "Candy Island Present", "Haunted Island Present", "Hell Island Present", "Heaven Island Present", "Tech City Present", "Dark Tech Present", "Alien Forest Present", "Blue Glitched Present", "Pink Glitched Present", "Axolotl Ocean Present", "Pixel Forest Present", "Pixel Kyoto Present", "Pixel Kyoto Large Present"}

local VaultsSafesMasteryList = {"Forest Safe", "Forest Vault", "Beach Safe", "Beach Vault", "Mine Safe", "Mine Vault", "Desert Safe", "Desert Vault", "Volcano Safe", "Volcano Vault", "Winter Safe", "Winter Vault", "Glacier Safe", "Glacier Vault", "Enchanted Forest Safe", "Enchanted Forest Vault", "Ancient Island Vault", 'Ancient Island Safe', "Candy Island Vault", 'Candy Island Safe', "Haunted Island Vault", 'Haunted Island Safe', "Heaven Island Vault", 'Heaven Island Safe', "Tech City Vault", 'Tech City Safe', "Steampunk Vault", 'Steampunk Safe', "Alien Lab Vault", 'Alien Lab Safe', "Blue Glitched Vault", 'Blue Glitched Safe', "Pink Glitched Vault", 'Pink Glitched Safe', "Axolotl Deep Ocean Vault", 'Axolotl Deep Ocean Safe', "Pixel Forest Vault", 'Pixel Forest Safe', "Pixel Vault Safe", "Pixel Vault Vault"}
local DiamondsMasteryList = {"Diamonds", "Tiny Diamonds"}
local MasteryIndex = {"Coins Piles Mastery", "Crates Mastery", "Chests Mastery", "Presents Mastery", "Vaults & Safes Mastery", "Diamonds Mastery"}

--------------------------------------------------------------------------------Mastery Farm (Syndicate)
 mastery:addDropdown("Mastery List", MasteryIndex, function(selectmasteryfunc)
    _G.MasteryList = selectmasteryfunc
end)
mastery:addToggle("Auto Farm Mastery", false, function(masteryfunc)
    _G.Mastery = masteryfunc
    while _G.Mastery do
        if _G.MasteryList == "Crates Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(CratesMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        elseif _G.MasteryList == "Coins Piles Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(CoinsPilesMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        elseif _G.MasteryList == "Chests Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(ChestsMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        elseif _G.MasteryList == "Presents Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(PresentsMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        elseif _G.MasteryList == "Vaults & Safes Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(VaultsSafesMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        elseif _G.MasteryList == "Diamonds Mastery" then
            local CurrentFarmingPets = {}
            local pethingy = GetMyPets()
            for i,v in pairs(DiamondsMastery()) do
                if v.index%#pethingy == #pethingy-1 then wait() end
                if not CurrentFarmingPets[pethingy[v.index%#pethingy+1]] or CurrentFarmingPets[pethingy[v.index%#pethingy+1]] == nil then
                    if game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) then
                        pcall(function()
                            CurrentFarmingPets[pethingy[v.index%#pethingy+1]] = 'Farming'
                            FarmCoin(v.index, pethingy[v.index%#pethingy+1])
                        end)
                    end
                end
            end
        end
    end
end)

function CratesMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(CratesMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(CratesMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function CoinsPilesMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(CoinsPilesMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(CoinsPilesMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function ChestsMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(ChestsMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(ChestsMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function PresentsMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(PresentsMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(PresentsMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function VaultsSafesMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(VaultsSafesMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(VaultsSafesMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function DiamondsMastery()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(DiamondsMasteryList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(DiamondsMasteryList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end
--------------------------------------------------------------------------------
local Library = require(game:GetService("ReplicatedStorage").Framework.Library)
local Network = Library.Network
local rs = RunService.RenderStepped
local IDToName = {}
local NameToID = {}
for i,v in pairs(Library.Directory.Pets) do
    IDToName[i] = v.name
    NameToID[v.name] = i
end

function AllChests()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(Chests) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(Chests, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end

function GetMyPets()
   local returntable = {}
   for i,v in pairs(Library.Save.Get().Pets) do
       if v.e then 
           table.insert(returntable, v.uid)
       end
   end
   return returntable
end

function FarmCoin(CoinID, PetID)
    game.workspace['__THINGS']['__REMOTES']["join coin"]:InvokeServer({[1] = CoinID, [2] = {[1] = PetID}})
    game.workspace['__THINGS']['__REMOTES']["farm coin"]:FireServer({[1] = CoinID, [2] = PetID})
end

function GetCoinsNormal(area)
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        if string.lower(v.a) == string.lower(area) then
            table.insert(returntable, i)
        end
    end
    return returntable
end
        
function GetCoins(area, exclude)
    exclude = exclude or {}
    local Areas = (syfarm)
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        if _G.AreaFarm == "All" or table.find(Areas[_G.AreaFarm], v.a) and not table.find(exclude, v.n) then
            local shit = v
            shit["index"] = i
            table.insert(returntable, shit)
         end
    end
    return returntable
end

function GetCoinTable(area, Type, exclude)
    exclude = exclude or {}
    local CoinTable = GetCoins(area, exclude)
    local function getKeysSortedByValue(tbl, sortFunction)
        local keys = {}
        for key in pairs(tbl) do
            table.insert(keys, key)
        end
        table.sort(keys, function(a, b)
            return sortFunction(tbl[a].h, tbl[b].h)
        end)
        return keys
    end
    local sortedKeys
    if Type == 'Highest' then
        sortedKeys = getKeysSortedByValue(CoinTable, function(a, b) return a > b end)
    elseif Type == 'Lowest' then
        sortedKeys = getKeysSortedByValue(CoinTable, function(a, b) return a < b end)
    end
    local newCoinTable = {}
    for i,v in pairs(sortedKeys) do
        table.insert(newCoinTable, CoinTable[v])
    end
    return newCoinTable
end

if _G.MyConnection then
    _G.MyConnection:Disconnect()
end
_G.MyConnection = game.Workspace.__THINGS.Orbs.ChildAdded:Connect(function(Orb)
    game.Workspace.__THINGS.__REMOTES["claim orbs"]:FireServer({{Orb.Name}})
    Orb.Name:Destroy()
end)

local PixelList = {"Pixel Vault Vault", "Pixel Vault Safe"}

function PixelVaultAreas()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        local shit = v
        shit["index"] = i
        for aa,bb in pairs(PixelList) do
            if string.find(v.n, bb) then
                local thing = string.gsub(v.n, bb.." ", " ")
                if table.find(PixelList, thing) then
                    shit.n = thing
                    table.insert(returntable, shit)
                end
            end
        end
    end
    return returntable
end
function PixelAreasss()
    local returntable = {}
    local ListCoins = game.workspace['__THINGS']['__REMOTES']["get coins"]:InvokeServer({})[1]
    for i,v in pairs(ListCoins) do
        if v.Name == "Pixel Vault Vault" or v.Name == "Pixel Vault Safe" then
            table.insert(returntable, i)
        end
    end
    return returntable
end

--------------------------------------------------------------------------------Auto Farm (Syndicate)
autofarm:addDropdown("Select Area List", AreaList, function(areafunc)
    _G.AreaFarm = areafunc
end)

autofarm:addToggle("Multi Target #1", false, function(multi1func)
    _G.MultiTarget1 = multi1func
    local CurrentFarmingPets = {}
    while _G.MultiTarget1 do
        local pethingy = GetMyPets()
        local cointhiny = GetCoins(_G.AreaFarm)
        for i = 1, #cointhiny do
            if i%#pethingy == #pethingy-1 then wait() end
            if not CurrentFarmingPets[pethingy[i%#pethingy+1]] or CurrentFarmingPets[pethingy[i%#pethingy+1]] == nil then
                spawn(function()
                    CurrentFarmingPets[pethingy[i%#pethingy+1]] = 'Farming'
                    FarmCoin(cointhiny[i].index, pethingy[i%#pethingy+1])
                    repeat task.wait() until not game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(cointhiny[i].index) or #game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(cointhiny[i].index).Pets:GetChildren() == 0
                    CurrentFarmingPets[pethingy[i%#pethingy+1]] = nil
                end)
            end
        end
    end
end)

autofarm:addToggle("Multi Target #2", false, function(multi2func)
    _G.MultiTarget2 = multi2func
    while _G.MultiTarget2 do
        local pethingy = GetMyPets()
        local cointhiny = GetCoinsNormal(_G.AreaFarm)
        for i = 1, #cointhiny do
            pcall(function()
                FarmCoin(cointhiny[i], pethingy[i%#pethingy+1])
            end)
        end
    end
end)

autofarm:addToggle("Normal Mode", false, function(farmnormfunc)
    _G.FarmNorm = farmnormfunc
    local CurrentFarmingPets = {}
    while _G.FarmNorm do
        local pethingy = GetMyPets ()
        local cointhiny = GetCoins(_G.AreaFarm)
        for i = 1, #cointhiny do
            if _G.FarmNorm and game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(cointhiny[i].index) then
                for _, bb in pairs(pethingy) do
                    coroutine.wrap(function()
                        FarmCoin(cointhiny[i].index, bb)
                    end)()
                end
                repeat task.wait(0.001) until not game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(cointhiny[i].index) or not _G.FarmNorm
            end
        end
    end
end)

--------------------------------------------------------------------------------Chest Farm (Syndicate)
chest:addDropdown("Chest List", Chests, function(chestlistfunc)
    _G.ListChest = chestlistfunc
end)

chest:addToggle("Enable Chest Farm", false, function(chestfunc)
    _G.ChestFarm = chestfunc
    local CurrentFarmingPets = {}
    while _G.ChestFarm do
        local pethingy = GetMyPets()
        for i,v in pairs(AllChests()) do
            if (v.n == _G.ListChest) or (_G.ListChest == 'All') then
                local StartTick = tick()
                for a,b in pairs(pethingy) do
                    coroutine.wrap(function()
                        FarmCoin(v.index, b)
                        tick(StartTick)
                        repeat task.wait() until not game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index) or #game:GetService("Workspace")["__THINGS"].Coins:FindFirstChild(v.index).Pets:GetChildren() == 0 or tick() > StartTick + 1 or not _G.ChestFarm
                    end)()
                end
            end
        end
    end
end)
-- Eggs
local egg = venyx:addPage("Auto Hatch")
local auto = egg:addSection("Auto-Egg")
-- Service
workspace.__THINGS.__REMOTES.MAIN:FireServer("b", "buy egg")

-- Eggs
local EggData = {}
local ListEgg = game:GetService("ReplicatedStorage").Game.Eggs
for i,v in pairs(ListEgg:GetChildren()) do
    if v.Name == 'Pixel Eggs' or v.Name == 'Axolotl Ocean' or v.Name == 'Tech Eggs' or v.Name == 'Fantasy Eggs' or v.Name == 'Spawn Eggs' or v.Name == 'Other' then
        table.insert(EggData, "-- " .. v.Name .. " World --")
        for aa,bb in pairs(v:GetChildren()) do
            if v.Name == 'Pixel Eggs' or v.Name == 'Axolotl Ocean' or v.Name == 'Tech Eggs' or v.Name == 'Fantasy Eggs' or v.Name == 'Spawn Eggs' or v.Name == 'Other' then
                table.insert(EggData, bb.Name)
            end
        end
    end
end
--------------------------------------------------------------------------------Auto Hatch (Syndicate)
auto:addDropdown("Select Eggs", EggData, function(egglistfunc)
    _G.SelectEgg = egglistfunc
end)
auto:addToggle("Auto Hatch Eggs", false, function(openeggsfunc)
    _G.OpenEgg = openeggsfunc
    while _G.OpenEgg do
        local Table1 = {
            [1] = _G.SelectEgg,
            [2] = _G.TripleEggs
        }
        Workspace.__THINGS.__REMOTES["buy egg"]:InvokeServer(Table1)
    end
end)

auto:addToggle("Triple Eggs [Gamepass Required]", false, function(tripleeggfunc)
    _G.TripleEggs = tripleeggfunc
end)

spawn(function()
    while task.wait() do
        if _G.OpenEgg then
            wait(180)
            game:GetService("Players").LocalPlayer.PlayerGui.Inventory.Enabled = true
            wait(1)
            game:GetService("Players").LocalPlayer.PlayerGui.Inventory.Enabled = false
        end
    end
end)
spawn(function()
    while task.wait() do
        if _G.OpenEgg == true then
            game:GetService("Players").LocalPlayer.PlayerScripts.Scripts.Game["Open Eggs"].Disabled = true
        elseif _G.OpenEgg == false then
            game:GetService("Players").LocalPlayer.PlayerScripts.Scripts.Game["Open Eggs"].Disabled = false
        end
    end
end)
-- End Eggs
-- Merchant (Syndicate)
local merch = venyx:addPage("Merchant")
local buy = merch:addSection("Auto Buy Slot")
-- Service
workspace.__THINGS.__REMOTES.MAIN:FireServer("b", "get merchant items")
workspace.__THINGS.__REMOTES.MAIN:FireServer("b", "buy merchant item")
workspace.__THINGS.__REMOTES.MAIN:FireServer("a", "Merchant Arrival")

--- mecrch
buy:addToggle("Auto Buy [Slot #1]", false, function(merchant1func)
    _G.m1 = merchant1func
    while task.wait() do
        if _G.m1 then
            if game:GetService("Players").LocalPlayer.PlayerGui.Merchant.Frame.Container:FindFirstChild("1") then
                workspace.__THINGS.__REMOTES["get merchant items"]:InvokeServer({[1] = "1"})
                wait(1)
                workspace.__THINGS.__REMOTES["buy merchant item"]:InvokeServer({1})
            end
        end
    end
end)

buy:addToggle("Auto Buy [Slot #2]", false, function(merchant2func)
    _G.m2 = merchant2func
    while task.wait() do
        if _G.m2 then
            if game:GetService("Players").LocalPlayer.PlayerGui.Merchant.Frame.Container:FindFirstChild("2") then
                workspace.__THINGS.__REMOTES["get merchant items"]:InvokeServer({[2] = "2"})
                wait(1)
                workspace.__THINGS.__REMOTES["buy merchant item"]:InvokeServer({2})
            end
        end
    end
end)

buy:addToggle("Auto Buy [Slot #3]", false, function(merchant3func)
    _G.m3 = merchant3func
    while task.wait() do
        if _G.m3 then
            if game:GetService("Players").LocalPlayer.PlayerGui.Merchant.Frame.Container:FindFirstChild("3") then
                workspace.__THINGS.__REMOTES["get merchant items"]:InvokeServer({[3] = "3"})
                wait(1)
                workspace.__THINGS.__REMOTES["buy merchant item"]:InvokeServer({3})
            end
        end
    end
end)

buy:addButton("Open Merchant Slot", function()
    game:GetService("Players").LocalPlayer.PlayerGui.Merchant.Enabled = not game:GetService("Players").LocalPlayer.PlayerGui.Merchant.Enabled
end)
-- load
venyx:SelectPage(venyx.pages[1], true)
