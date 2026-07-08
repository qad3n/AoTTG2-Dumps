using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x200048B")]
internal class MoveTo : HumanAIState
{
	[Token(Token = "0x400142E")]
	[FieldOffset(Offset = "0x20")]
	public float MoveToRange;

	[Token(Token = "0x17000940")]
	public override string Name
	{
		[Token(Token = "0x60030C0")]
		[Address(RVA = "0x3E90B00", Offset = "0x3E90B00", VA = "0x3E90B00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60030C1")]
	[Address(RVA = "0x3E90B30", Offset = "0x3E90B30", VA = "0x3E90B30", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x60030C2")]
	[Address(RVA = "0x3E90CB0", Offset = "0x3E90CB0", VA = "0x3E90CB0", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x60030C3")]
	[Address(RVA = "0x3E90CE0", Offset = "0x3E90CE0", VA = "0x3E90CE0")]
	public MoveTo()
	{
	}
}
