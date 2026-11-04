// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.StateTuple
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000237")]
internal static class StateTuple
{
	[Token(Token = "0x6000CF3")]
	public static StateTuple<T1> Create<T1>(T1 item1)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	public static StateTuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	public static StateTuple<T1, T2, T3> Create<T1, T2, T3>(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}
}
[Token(Token = "0x2000238")]
internal class StateTuple<T1> : IDisposable
{
	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x6000CF6")]
	public void Deconstruct(out T1 item1)
	{
	}

	[Token(Token = "0x6000CF7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CF8")]
	public StateTuple()
	{
	}
}
[Token(Token = "0x200023A")]
internal class StateTuple<T1, T2> : IDisposable
{
	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x6000CFC")]
	public void Deconstruct(out T1 item1, out T2 item2)
	{
	}

	[Token(Token = "0x6000CFD")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CFE")]
	public StateTuple()
	{
	}
}
[Token(Token = "0x200023C")]
internal class StateTuple<T1, T2, T3> : IDisposable
{
	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x6000D02")]
	public void Deconstruct(out T1 item1, out T2 item2, out T3 item3)
	{
	}

	[Token(Token = "0x6000D03")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D04")]
	public StateTuple()
	{
	}
}
