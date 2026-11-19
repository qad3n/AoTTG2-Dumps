// ==================== AoTTG2 cross-reference ====================
// Type: Characters.EscapeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/EscapeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DD")]
internal class EscapeSpecial : RechargeableUseable
{
	[Token(Token = "0x17000B71")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042BA")]
		[Address(RVA = "0x5B0B950", Offset = "0x5B0A950", VA = "0x5B0B950", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042BB")]
	[Address(RVA = "0x5B0B960", Offset = "0x5B0A960", VA = "0x5B0B960")]
	public EscapeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042BC")]
	[Address(RVA = "0x5B0B9A0", Offset = "0x5B0A9A0", VA = "0x5B0B9A0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60042BD")]
	[Address(RVA = "0x5B0BA50", Offset = "0x5B0AA50", VA = "0x5B0BA50", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042BE")]
	[Address(RVA = "0x5B0BCF0", Offset = "0x5B0ACF0", VA = "0x5B0BCF0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
