using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000FD")]
internal readonly struct ParamsArray
{
	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] s_oneArgArray;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object[] s_twoArgArray;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object[] s_threeArgArray;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _arg0;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _arg1;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _arg2;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _args;

	[Token(Token = "0x170000A2")]
	public int Length
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x4FE3B00", Offset = "0x4FE3B00", VA = "0x4FE3B00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public object this[int index]
	{
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x4FE3B20", Offset = "0x4FE3B20", VA = "0x4FE3B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x4FE3870", Offset = "0x4FE3870", VA = "0x4FE3870")]
	public ParamsArray(object arg0)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4FE3910", Offset = "0x4FE3910", VA = "0x4FE3910")]
	public ParamsArray(object arg0, object arg1)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4FE39B0", Offset = "0x4FE39B0", VA = "0x4FE39B0")]
	public ParamsArray(object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x4FE3A50", Offset = "0x4FE3A50", VA = "0x4FE3A50")]
	public ParamsArray(object[] args)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x4FE3BB0", Offset = "0x4FE3BB0", VA = "0x4FE3BB0")]
	private object GetAtSlow(int index)
	{
		return null;
	}
}
