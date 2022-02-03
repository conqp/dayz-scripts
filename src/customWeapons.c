void addCustomM4A1 (GameInventory inventory, array<string> attachments)
{
        M4A1_Base m4 = inventory.CreateInInventory("M4A1");
        GameInventory m4inventory = m4.GetInventory();

        foreach (auto attachment: attachments)
                m4inventory.CreateInInventory(attachment);
};
