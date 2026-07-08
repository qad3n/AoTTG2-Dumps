using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004CD")]
internal class RefillTimePerk : BasePerk
{
	[Token(Token = "0x17000973")]
	public override string Name
	{
		[Token(Token = "0x600334A")]
		[Address(RVA = "0x3EDA730", Offset = "0x3EDA730", VA = "0x3EDA730", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000974")]
	public override int MaxPoints
	{
		[Token(Token = "0x600334B")]
		[Address(RVA = "0x3EDA760", Offset = "0x3EDA760", VA = "0x3EDA760", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600334C")]
	[Address(RVA = "0x3ED8650", Offset = "0x3ED8650", VA = "0x3ED8650")]
	public RefillTimePerk()
	{
	}
}
