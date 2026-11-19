// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterTransformSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterTransformSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E0")]
internal class ShifterTransformSpecial : RechargeableUseable
{
	[Token(Token = "0x4002065")]
	[FieldOffset(Offset = "0x40")]
	public float LiveTime;

	[Token(Token = "0x4002066")]
	[FieldOffset(Offset = "0x48")]
	protected string _shifter;

	[Token(Token = "0x17000B74")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042C9")]
		[Address(RVA = "0x5B0DAB0", Offset = "0x5B0CAB0", VA = "0x5B0DAB0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042CA")]
	[Address(RVA = "0x5B0DAC0", Offset = "0x5B0CAC0", VA = "0x5B0DAC0")]
	public ShifterTransformSpecial(BaseCharacter owner, string shifter)
	{
	}

	[Token(Token = "0x60042CB")]
	[Address(RVA = "0x5B0DB20", Offset = "0x5B0CB20", VA = "0x5B0DB20", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042CC")]
	[Address(RVA = "0x5B0DBD0", Offset = "0x5B0CBD0", VA = "0x5B0DBD0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
