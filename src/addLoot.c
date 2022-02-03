void addLoot(GameInventory inventory, array<string> items) {
        foreach (auto item: items)
                inventory.CreateInInventory(item);
}
