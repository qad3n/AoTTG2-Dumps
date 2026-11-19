// ==================== AoTTG2 cross-reference ====================
// Type: Characters.NoneSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/NoneSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/NoneSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DE")]
internal class NoneSpecial : SimpleUseable
{
	[Token(Token = "0x60042BF")]
	[Address(RVA = "0x5B0D7B0", Offset = "0x5B0C7B0", VA = "0x5B0D7B0")]
	public NoneSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042C0")]
	[Address(RVA = "0x5B0D7D0", Offset = "0x5B0C7D0", VA = "0x5B0D7D0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60042C1")]
	[Address(RVA = "0x5B0D7E0", Offset = "0x5B0C7E0", VA = "0x5B0D7E0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042C2")]
	[Address(RVA = "0x5B0D7F0", Offset = "0x5B0C7F0", VA = "0x5B0D7F0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
