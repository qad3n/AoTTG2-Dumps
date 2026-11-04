// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x2000622")]
internal class HumanAIState
{
	[Token(Token = "0x4001B8E")]
	[FieldOffset(Offset = "0x10")]
	protected Human Human;

	[Token(Token = "0x4001B8F")]
	[FieldOffset(Offset = "0x18")]
	protected HumanAIController Controller;

	[Token(Token = "0x17000AAC")]
	public virtual string Name
	{
		[Token(Token = "0x6003C59")]
		[Address(RVA = "0x2117A20", Offset = "0x2116020", VA = "0x182117A20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C5A")]
	[Address(RVA = "0x2117930", Offset = "0x2115F30", VA = "0x182117930", Slot = "5")]
	public virtual HumanAIState Init(Human human)
	{
		return null;
	}

	[Token(Token = "0x6003C5B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void OnStateEntry()
	{
	}

	[Token(Token = "0x6003C5C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void Action()
	{
	}

	[Token(Token = "0x6003C5D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void OnStateExit()
	{
	}

	[Token(Token = "0x6003C5E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HumanAIState()
	{
	}
}
