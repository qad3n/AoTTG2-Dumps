// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSTwinShot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSTwinShot.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D2")]
internal class AHSSTwinShot : ExtendedUseable
{
	[Token(Token = "0x6004283")]
	[Address(RVA = "0x5B07F00", Offset = "0x5B06F00", VA = "0x5B07F00")]
	public AHSSTwinShot(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004284")]
	[Address(RVA = "0x5B07F20", Offset = "0x5B06F20", VA = "0x5B07F20", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6004285")]
	[Address(RVA = "0x5B08010", Offset = "0x5B07010", VA = "0x5B08010", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004286")]
	[Address(RVA = "0x5B080F0", Offset = "0x5B070F0", VA = "0x5B080F0", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x6004287")]
	[Address(RVA = "0x5B081C0", Offset = "0x5B071C0", VA = "0x5B081C0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
