#include "$CurrentDir:\\spawnLoot.c"

void addSpawnLoot(GameInventory inventory)
{
        foreach (auto item: SPAWN_LOOT)
                inventory.CreateInInventory(item);
}
