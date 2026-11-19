// ==================== AoTTG2 cross-reference ====================
// Type: Characters.UnarmedWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/UnarmedWeapon.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006EE")]
internal class UnarmedWeapon : BaseUseable
{
	[Token(Token = "0x6004314")]
	[Address(RVA = "0x5B13A60", Offset = "0x5B12A60", VA = "0x5B13A60")]
	public UnarmedWeapon(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004315")]
	[Address(RVA = "0x5B13A70", Offset = "0x5B12A70", VA = "0x5B13A70", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
