using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000070")]
internal struct Range
{
	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	private int _min;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x4")]
	private int _max;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x8")]
	private bool _isNotNull;

	[Token(Token = "0x17000120")]
	public int Count
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x4279660", Offset = "0x4279660", VA = "0x4279660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000121")]
	public bool IsNull
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x4279040", Offset = "0x4279040", VA = "0x4279040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000122")]
	public int Min
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x4279680", Offset = "0x4279680", VA = "0x4279680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x427FF20", Offset = "0x427FF20", VA = "0x427FF20")]
	public Range(int min, int max)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x427FF60", Offset = "0x427FF60", VA = "0x427FF60")]
	internal void CheckNull()
	{
	}
}
