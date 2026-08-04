// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DistractSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DistractSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000522")]
internal class DistractSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001816")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x170009F1")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035DB")]
		[Address(RVA = "0x41F4E30", Offset = "0x41F4E30", VA = "0x41F4E30", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009F2")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035DC")]
		[Address(RVA = "0x41F4E40", Offset = "0x41F4E40", VA = "0x41F4E40", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035DD")]
	[Address(RVA = "0x41E40A0", Offset = "0x41E40A0", VA = "0x41E40A0")]
	public DistractSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035DE")]
	[Address(RVA = "0x41F4E50", Offset = "0x41F4E50", VA = "0x41F4E50", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035DF")]
	[Address(RVA = "0x41F4EC0", Offset = "0x41F4EC0", VA = "0x41F4EC0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
