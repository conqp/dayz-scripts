EntityAI addCustomWeapon(GameInventory inventory, string weapon, array<string> attachments)
{
        auto weapon = inventory.CreateInInventory(weapon);
        auto weaponInventory = weapon.GetInventory();

        foreach (auto attachment: attachments)
                weaponInventory.CreateInInventory(attachment);

        return weapon;
};
