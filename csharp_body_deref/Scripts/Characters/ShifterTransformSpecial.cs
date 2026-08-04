// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterTransformSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterTransformSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000527")]
internal class ShifterTransformSpecial : RechargeableUseable
{
	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0x40")]
	public float LiveTime;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0x48")]
	protected string _shifter;

	[Token(Token = "0x170009F6")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035F3")]
		[Address(RVA = "0x41F7680", Offset = "0x41F7680", VA = "0x41F7680", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60035F4")]
	[Address(RVA = "0x41E4310", Offset = "0x41E4310", VA = "0x41E4310")]
	public ShifterTransformSpecial(BaseCharacter owner, string shifter)
	{
	}

	[Token(Token = "0x60035F5")]
	[Address(RVA = "0x41F7690", Offset = "0x41F7690", VA = "0x41F7690", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035F6")]
	[Address(RVA = "0x41F7740", Offset = "0x41F7740", VA = "0x41F7740", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
