/*
 * Miscellaneous functions.
 */
void addInventoryItems(GameInventory inventory, array<string> items) {
        foreach (auto item: items)
                inventory.CreateInInventory(item);
}

void addAttachments(EntityAI weapon, array<string> attachments)
{
        addInventoryItems(weapon.GetInventory(), attachments);
};
