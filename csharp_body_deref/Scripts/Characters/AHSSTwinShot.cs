// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSTwinShot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSTwinShot.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000673")]
internal class AHSSTwinShot : ExtendedUseable
{
	[Token(Token = "0x6003FEB")]
	[Address(RVA = "0x21625B0", Offset = "0x2160BB0", VA = "0x1821625B0")]
	public AHSSTwinShot(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003FEC")]
	[Address(RVA = "0x2162410", Offset = "0x2160A10", VA = "0x182162410", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003FED")]
	[Address(RVA = "0x2161850", Offset = "0x215FE50", VA = "0x182161850", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FEE")]
	[Address(RVA = "0x21624D0", Offset = "0x2160AD0", VA = "0x1821624D0", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x6003FEF")]
	[Address(RVA = "0x2161980", Offset = "0x215FF80", VA = "0x182161980", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
