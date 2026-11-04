// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ConfuseSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ConfuseSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067A")]
internal class ConfuseSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB1")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B21")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600400F")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B22")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6004010")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004011")]
	[Address(RVA = "0x216AA30", Offset = "0x2169030", VA = "0x18216AA30")]
	public ConfuseSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004012")]
	[Address(RVA = "0x216A6C0", Offset = "0x2168CC0", VA = "0x18216A6C0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004013")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
