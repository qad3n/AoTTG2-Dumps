// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DanceSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DanceSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DanceSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067B")]
internal class DanceSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB2")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B23")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004014")]
		[Address(RVA = "0x1D9F790", Offset = "0x1D9DD90", VA = "0x181D9F790", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B24")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6004015")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004016")]
	[Address(RVA = "0x216AE10", Offset = "0x2169410", VA = "0x18216AE10")]
	public DanceSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004017")]
	[Address(RVA = "0x216AA60", Offset = "0x2169060", VA = "0x18216AA60", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004018")]
	[Address(RVA = "0x216AAE0", Offset = "0x21690E0", VA = "0x18216AAE0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
