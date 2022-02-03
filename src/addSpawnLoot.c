#include "$CurrentDir:/dayz-scripts/src/spawnLoot.c"
#include "$CurrentDir:/dayz-scripts/src/customWeapons.c"

void addSpawnLoot(GameInventory inventory)
{
        foreach (auto item: SPAWN_LOOT)
                inventory.CreateInInventory(item);

        addCustomM4A1(inventory, {
                "M4_OEBttstck",
                "M4_RISHndgrd",
                "UniversalLight",
                "M4_T3NRDSOptic",
                "Battery9V",
                "Battery9V",
                "M4_Suppressor"
        });
}
