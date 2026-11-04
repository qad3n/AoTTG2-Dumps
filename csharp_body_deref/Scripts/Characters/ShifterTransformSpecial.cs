// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterTransformSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterTransformSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000681")]
internal class ShifterTransformSpecial : RechargeableUseable
{
	[Token(Token = "0x4001EB7")]
	[FieldOffset(Offset = "0x48")]
	public float LiveTime;

	[Token(Token = "0x4001EB8")]
	[FieldOffset(Offset = "0x50")]
	protected string _shifter;

	[Token(Token = "0x17000B2A")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004031")]
		[Address(RVA = "0x21698F0", Offset = "0x2167EF0", VA = "0x1821698F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004032")]
	[Address(RVA = "0x2175A70", Offset = "0x2174070", VA = "0x182175A70")]
	public ShifterTransformSpecial(BaseCharacter owner, string shifter)
	{
	}

	[Token(Token = "0x6004033")]
	[Address(RVA = "0x2175920", Offset = "0x2173F20", VA = "0x182175920", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004034")]
	[Address(RVA = "0x21759E0", Offset = "0x2173FE0", VA = "0x1821759E0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
