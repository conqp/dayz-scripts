/*
 * Miscellaneous functions.
 */
void addInventoryItems(GameInventory inventory, array<string> items) {
        foreach (auto item: items)
                inventory.CreateInInventory(item);
}

EntityAI addWeapon(
        GameInventory inventory,
        string weaponType,
        array<string> attachments,
        string magazineType = "",
        int flags = WeaponWithAmmoFlags.CHAMBER
)
{
        auto weapon = inventory.CreateInInventory(weaponType);

        if (attachments)
                addInventoryItems(weapon.GetInventory(), attachments);

        if (magazineType)
                weapon.SpawnAmmo(magazineType, flags);

        return weapon;
}
