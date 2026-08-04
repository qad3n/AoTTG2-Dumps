// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmellSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmellSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000528")]
internal class SmellSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x400181D")]
	[FieldOffset(Offset = "0x4C")]
	protected float Delay;

	[Token(Token = "0x170009F7")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035F7")]
		[Address(RVA = "0x41F77C0", Offset = "0x41F77C0", VA = "0x41F77C0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009F8")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035F8")]
		[Address(RVA = "0x41F77D0", Offset = "0x41F77D0", VA = "0x41F77D0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035F9")]
	[Address(RVA = "0x41E4120", Offset = "0x41E4120", VA = "0x41E4120")]
	public SmellSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035FA")]
	[Address(RVA = "0x41F77E0", Offset = "0x41F77E0", VA = "0x41F77E0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035FB")]
	[Address(RVA = "0x41F7C60", Offset = "0x41F7C60", VA = "0x41F7C60", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
