/*
 * Miscellaneous functions.
 */
 #ifndef RNE_FUNCTIONS
 #define RNE_FUNCTIONS
void addInventoryItems(GameInventory inventory, array<string> items) {
        foreach (auto item: items)
                inventory.CreateInInventory(item);
}

Weapon_Base addWeapon(
        GameInventory inventory,
        string weaponType,
        array<string> attachments,
        string magazineType,
        int flags
)
{
        auto entity = inventory.CreateInInventory(weaponType);
        auto weapon = Weapon_Base.Cast(entity);

        if (attachments)
                addInventoryItems(weapon.GetInventory(), attachments);

        if (magazineType)
                weapon.SpawnAmmo(magazineType, flags);

        return weapon;
}

Weapon_Base addWeapon(
        GameInventory inventory,
        string weaponType,
        array<string> attachments,
        string magazineType
)
{
        return addWeapon(inventory, weaponType, attachments, magazineType, WeaponWithAmmoFlags.CHAMBER);
}

#endif
