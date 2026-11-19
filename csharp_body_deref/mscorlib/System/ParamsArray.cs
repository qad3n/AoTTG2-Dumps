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
	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] s_oneArgArray;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object[] s_twoArgArray;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object[] s_threeArgArray;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _arg0;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _arg1;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _arg2;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _args;

	[Token(Token = "0x170000A2")]
	public int Length
	{
		[Token(Token = "0x6000962")]
		[Address(RVA = "0x54CCF30", Offset = "0x54CBF30", VA = "0x54CCF30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public object this[int index]
	{
		[Token(Token = "0x6000963")]
		[Address(RVA = "0x54CCF50", Offset = "0x54CBF50", VA = "0x54CCF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x54CCC80", Offset = "0x54CBC80", VA = "0x54CCC80")]
	public ParamsArray(object arg0)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x54CCD20", Offset = "0x54CBD20", VA = "0x54CCD20")]
	public ParamsArray(object arg0, object arg1)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x54CCDC0", Offset = "0x54CBDC0", VA = "0x54CCDC0")]
	public ParamsArray(object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x54CCE60", Offset = "0x54CBE60", VA = "0x54CCE60")]
	public ParamsArray(object[] args)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x54CCFE0", Offset = "0x54CBFE0", VA = "0x54CCFE0")]
	private object GetAtSlow(int index)
	{
		return null;
	}
}
