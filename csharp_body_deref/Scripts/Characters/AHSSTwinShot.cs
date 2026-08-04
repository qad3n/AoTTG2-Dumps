// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSTwinShot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSTwinShot.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000519")]
internal class AHSSTwinShot : ExtendedUseable
{
	[Token(Token = "0x60035AD")]
	[Address(RVA = "0x41E42F0", Offset = "0x41E42F0", VA = "0x41E42F0")]
	public AHSSTwinShot(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035AE")]
	[Address(RVA = "0x41F1E50", Offset = "0x41F1E50", VA = "0x41F1E50", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x60035AF")]
	[Address(RVA = "0x41F1F40", Offset = "0x41F1F40", VA = "0x41F1F40", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60035B0")]
	[Address(RVA = "0x41F2020", Offset = "0x41F2020", VA = "0x41F2020", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x60035B1")]
	[Address(RVA = "0x41F20F0", Offset = "0x41F20F0", VA = "0x41F20F0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
