// ==================== AoTTG2 cross-reference ====================
// Type: Characters.NoneSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/NoneSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/NoneSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000525")]
internal class NoneSpecial : SimpleUseable
{
	[Token(Token = "0x60035E9")]
	[Address(RVA = "0x41E4230", Offset = "0x41E4230", VA = "0x41E4230")]
	public NoneSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035EA")]
	[Address(RVA = "0x41F73E0", Offset = "0x41F73E0", VA = "0x41F73E0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60035EB")]
	[Address(RVA = "0x41F73F0", Offset = "0x41F73F0", VA = "0x41F73F0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035EC")]
	[Address(RVA = "0x41F7400", Offset = "0x41F7400", VA = "0x41F7400", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
