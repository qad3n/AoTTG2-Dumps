using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000234")]
internal static class StateTuple
{
	[Token(Token = "0x6000CCF")]
	public static StateTuple<T1> Create<T1>(T1 item1)
	{
		return null;
	}

	[Token(Token = "0x6000CD0")]
	public static StateTuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	public static StateTuple<T1, T2, T3> Create<T1, T2, T3>(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}
}
[Token(Token = "0x2000235")]
internal class StateTuple<T1> : IDisposable
{
	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x6000CD2")]
	public void Deconstruct(out T1 item1)
	{
	}

	[Token(Token = "0x6000CD3")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CD4")]
	public StateTuple()
	{
	}
}
[Token(Token = "0x2000237")]
internal class StateTuple<T1, T2> : IDisposable
{
	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x6000CD8")]
	public void Deconstruct(out T1 item1, out T2 item2)
	{
	}

	[Token(Token = "0x6000CD9")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CDA")]
	public StateTuple()
	{
	}
}
[Token(Token = "0x2000239")]
internal class StateTuple<T1, T2, T3> : IDisposable
{
	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x6000CDE")]
	public void Deconstruct(out T1 item1, out T2 item2, out T3 item3)
	{
	}

	[Token(Token = "0x6000CDF")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CE0")]
	public StateTuple()
	{
	}
}
