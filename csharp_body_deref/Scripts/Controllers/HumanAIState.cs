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

[Token(Token = "0x20004CB")]
internal class HumanAIState
{
	[Token(Token = "0x400152B")]
	[FieldOffset(Offset = "0x10")]
	protected Human Human;

	[Token(Token = "0x400152C")]
	[FieldOffset(Offset = "0x18")]
	protected HumanAIController Controller;

	[Token(Token = "0x170009A7")]
	public virtual string Name
	{
		[Token(Token = "0x60032A3")]
		[Address(RVA = "0x4197440", Offset = "0x4197440", VA = "0x4197440", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032A4")]
	[Address(RVA = "0x4197470", Offset = "0x4197470", VA = "0x4197470", Slot = "5")]
	public virtual HumanAIState Init(Human human)
	{
		return null;
	}

	[Token(Token = "0x60032A5")]
	[Address(RVA = "0x4197540", Offset = "0x4197540", VA = "0x4197540", Slot = "6")]
	public virtual void OnStateEntry()
	{
	}

	[Token(Token = "0x60032A6")]
	[Address(RVA = "0x4197550", Offset = "0x4197550", VA = "0x4197550", Slot = "7")]
	public virtual void Action()
	{
	}

	[Token(Token = "0x60032A7")]
	[Address(RVA = "0x4197560", Offset = "0x4197560", VA = "0x4197560", Slot = "8")]
	public virtual void OnStateExit()
	{
	}

	[Token(Token = "0x60032A8")]
	[Address(RVA = "0x4197570", Offset = "0x4197570", VA = "0x4197570")]
	public HumanAIState()
	{
	}
}
