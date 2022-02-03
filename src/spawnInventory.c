#include "$CurrentDir:/dayz-scripts/src/functions.c"

const autoptr array<string> SPAWN_LOOT = {
        "AliceBag_Black",
        "Compass",
        "Canteen",
        "SardinesCan",
        "CombatKnife",
        "MilitaryBelt",
        "NylonKnifeSheath",
        "PlateCarrierHolster",
        "CanOpener",
        "Mag_STANAGCoupled_30Rnd",
        "AmmoBox_556x45_20Rnd",
        "AmmoBox_556x45_20Rnd",
        "Mag_Glock_15Rnd",
        "AmmoBox_9x19_25rnd",
        "AmmoBox_9x19_25rnd",
        "BandageDressing",
        "WoodAxe",
        "SodaCan_Pipsi",
        "SodaCan_Spite",
        "TacticalBaconCan",
        "Matchbox",
        "WeaponCleaningKit"
};
const autoptr array<string> M4A1_ATTACHMENTS = {
        "M4_OEBttstck",
        "M4_RISHndgrd",
        "UniversalLight",
        "M4_Suppressor",
        "M4_T3NRDSOptic",
        "Battery9V",
        "Battery9V"
};
const autoptr array<string> GLOCK19_ATTACHMENTS = {
        "PistolSuppressor",
        "FNP45_MRDSOptic",
        "TLRLight",
        "Battery9V",
        "Battery9V"
};

void addSpawnInventory(GameInventory inventory)
{
        addInventoryItems(inventory, SPAWN_LOOT);
        auto m4a1 = M4A1_Base.CreateWeaponWithAmmo("M4A1", "Mag_STANAGCoupled_30Rnd");
        addAttachments(m4a1, M4A1_ATTACHMENTS);
        inventory.AddEntityToInventory(m4a1);
        auto glock19 = Glock19_Base.CreateWeaponWithAmmo("Glock19", "Mag_Glock_15Rnd");
        addAttachments(glock19, GLOCK19_ATTACHMENTS);
        inventory.AddEntityToInventory(glock19);
}
