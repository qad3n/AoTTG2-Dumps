// ==================== AoTTG2 cross-reference ====================
// Type: System.ParamsArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CC9620", Offset = "0x3CC9620", VA = "0x3CC9620")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public object this[int index]
	{
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x3CC9640", Offset = "0x3CC9640", VA = "0x3CC9640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x3CC9390", Offset = "0x3CC9390", VA = "0x3CC9390")]
	public ParamsArray(object arg0)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x3CC9430", Offset = "0x3CC9430", VA = "0x3CC9430")]
	public ParamsArray(object arg0, object arg1)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x3CC94D0", Offset = "0x3CC94D0", VA = "0x3CC94D0")]
	public ParamsArray(object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x3CC9570", Offset = "0x3CC9570", VA = "0x3CC9570")]
	public ParamsArray(object[] args)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x3CC96D0", Offset = "0x3CC96D0", VA = "0x3CC96D0")]
	private object GetAtSlow(int index)
	{
		return null;
	}
}
