#include "$CurrentDir:/dayz-scripts/src/addLoot.c"
#include "$CurrentDir:/dayz-scripts/src/customWeapons.c"

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

void addSpawnLoot(GameInventory inventory)
{
        addLoot(inventory, SPAWN_LOOT);
        addAttachments(
                inventory.CreateInInventory("M4A1"),
                {
                        "M4_OEBttstck",
                        "M4_RISHndgrd",
                        "UniversalLight",
                        "M4_T3NRDSOptic",
                        "Battery9V",
                        "Battery9V",
                        "M4_Suppressor",
                        "Mag_STANAGCoupled_30Rnd"
                }
        );
        addAttachments(
                inventory.CreateInInventory("Glock19"),
                {
                        "PistolSuppressor",
                        "Mag_Glock_15Rnd"
                }
        );
}
