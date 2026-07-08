using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004CB")]
internal class DurableBladesPerk : BasePerk
{
	[Token(Token = "0x1700096B")]
	public override string Name
	{
		[Token(Token = "0x600333F")]
		[Address(RVA = "0x3EDA610", Offset = "0x3EDA610", VA = "0x3EDA610", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700096C")]
	public override int MaxPoints
	{
		[Token(Token = "0x6003340")]
		[Address(RVA = "0x3EDA640", Offset = "0x3EDA640", VA = "0x3EDA640", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003341")]
	[Address(RVA = "0x3ED85C0", Offset = "0x3ED85C0", VA = "0x3ED85C0")]
	public DurableBladesPerk()
	{
	}
}
