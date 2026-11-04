// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CombatDashSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CombatDashSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000679")]
internal class CombatDashSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB0")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B1F")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600400A")]
		[Address(RVA = "0x1D9F790", Offset = "0x1D9DD90", VA = "0x181D9F790", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B20")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x600400B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600400C")]
	[Address(RVA = "0x216A690", Offset = "0x2168C90", VA = "0x18216A690")]
	public CombatDashSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600400D")]
	[Address(RVA = "0x216A4C0", Offset = "0x2168AC0", VA = "0x18216A4C0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600400E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
