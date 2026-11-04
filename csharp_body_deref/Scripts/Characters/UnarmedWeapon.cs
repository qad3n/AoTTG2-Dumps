// ==================== AoTTG2 cross-reference ====================
// Type: Characters.UnarmedWeapon
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/UnarmedWeapon.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200068F")]
internal class UnarmedWeapon : BaseUseable
{
	[Token(Token = "0x600407C")]
	[Address(RVA = "0x2179B40", Offset = "0x2178140", VA = "0x182179B40")]
	public UnarmedWeapon(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600407D")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
