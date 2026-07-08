using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BD")]
internal class HWStack : ICloneable
{
	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x10")]
	private object[] stack;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x18")]
	private int growthRate;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x1C")]
	private int used;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x20")]
	private int size;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x24")]
	private int limit;

	[Token(Token = "0x170002E0")]
	internal object this[int index]
	{
		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x44A7E00", Offset = "0x44A7E00", VA = "0x44A7E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x44A7E70", Offset = "0x44A7E70", VA = "0x44A7E70")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	internal int Length
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x44A7F20", Offset = "0x44A7F20", VA = "0x44A7F20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x44A7B20", Offset = "0x44A7B20", VA = "0x44A7B20")]
	internal HWStack(int GrowthRate)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x44A7B90", Offset = "0x44A7B90", VA = "0x44A7B90")]
	internal HWStack(int GrowthRate, int limit)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x44A7C00", Offset = "0x44A7C00", VA = "0x44A7C00")]
	internal object Push()
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x44A7D10", Offset = "0x44A7D10", VA = "0x44A7D10")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x44A7D50", Offset = "0x44A7D50", VA = "0x44A7D50")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x44A7D80", Offset = "0x44A7D80", VA = "0x44A7D80")]
	internal void AddToTop(object o)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x44A7F30", Offset = "0x44A7F30", VA = "0x44A7F30")]
	private HWStack(object[] stack, int growthRate, int used, int size)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x44A7F80", Offset = "0x44A7F80", VA = "0x44A7F80", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
