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

[Token(Token = "0x2000681")]
internal class HumanAIState
{
	[Token(Token = "0x4001D31")]
	[FieldOffset(Offset = "0x10")]
	protected Human Human;

	[Token(Token = "0x4001D32")]
	[FieldOffset(Offset = "0x18")]
	protected HumanAIController Controller;

	[Token(Token = "0x17000AF4")]
	public virtual string Name
	{
		[Token(Token = "0x6003EE8")]
		[Address(RVA = "0x5AAA9A0", Offset = "0x5AA99A0", VA = "0x5AAA9A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003EE9")]
	[Address(RVA = "0x5AAA9D0", Offset = "0x5AA99D0", VA = "0x5AAA9D0", Slot = "5")]
	public virtual HumanAIState Init(Human human)
	{
		return null;
	}

	[Token(Token = "0x6003EEA")]
	[Address(RVA = "0x5AAAAA0", Offset = "0x5AA9AA0", VA = "0x5AAAAA0", Slot = "6")]
	public virtual void OnStateEntry()
	{
	}

	[Token(Token = "0x6003EEB")]
	[Address(RVA = "0x5AAAAB0", Offset = "0x5AA9AB0", VA = "0x5AAAAB0", Slot = "7")]
	public virtual void Action()
	{
	}

	[Token(Token = "0x6003EEC")]
	[Address(RVA = "0x5AAAAC0", Offset = "0x5AA9AC0", VA = "0x5AAAAC0", Slot = "8")]
	public virtual void OnStateExit()
	{
	}

	[Token(Token = "0x6003EED")]
	[Address(RVA = "0x5AAAAD0", Offset = "0x5AA9AD0", VA = "0x5AAAAD0")]
	public HumanAIState()
	{
	}
}
