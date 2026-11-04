// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DistractSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DistractSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067C")]
internal class DistractSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB3")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B25")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004019")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B26")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x600401A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600401B")]
	[Address(RVA = "0x216B1F0", Offset = "0x21697F0", VA = "0x18216B1F0")]
	public DistractSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600401C")]
	[Address(RVA = "0x216AE40", Offset = "0x2169440", VA = "0x18216AE40", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600401D")]
	[Address(RVA = "0x216AEC0", Offset = "0x21694C0", VA = "0x18216AEC0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
