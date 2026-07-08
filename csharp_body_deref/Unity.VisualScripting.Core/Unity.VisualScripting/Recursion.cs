using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001BA")]
public class Recursion<T> : IPoolable, IDisposable
{
	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> traversedOrder;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<T, int> traversedCount;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x0")]
	private bool disposed;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x0")]
	protected int maxDepth;

	[Token(Token = "0x600107A")]
	protected Recursion()
	{
	}

	[Token(Token = "0x600107B")]
	public void Enter(T o)
	{
	}

	[Token(Token = "0x600107C")]
	public bool TryEnter(T o)
	{
		return default(bool);
	}

	[Token(Token = "0x600107D")]
	public void Exit(T o)
	{
	}

	[Token(Token = "0x600107E")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600107F")]
	protected virtual void Free()
	{
	}

	[Token(Token = "0x6001080")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x6001081")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x6001082")]
	public static Recursion<T> New()
	{
		return null;
	}

	[Token(Token = "0x6001083")]
	public static Recursion<T> New(int maxDepth)
	{
		return null;
	}
}
[Token(Token = "0x20001BC")]
public sealed class Recursion : Recursion<object>
{
	[Token(Token = "0x170001D5")]
	public static int defaultMaxDepth
	{
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x4A3BAF0", Offset = "0x4A3BAF0", VA = "0x4A3BAF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x4A3BB60", Offset = "0x4A3BB60", VA = "0x4A3BB60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D6")]
	public static bool safeMode
	{
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x4A3BBB0", Offset = "0x4A3BBB0", VA = "0x4A3BBB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x4A3BC20", Offset = "0x4A3BC20", VA = "0x4A3BC20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x4A3BAB0", Offset = "0x4A3BAB0", VA = "0x4A3BAB0")]
	private Recursion()
	{
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x4A3BC70", Offset = "0x4A3BC70", VA = "0x4A3BC70")]
	internal static void OnRuntimeMethodLoad()
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x4A3BD80", Offset = "0x4A3BD80", VA = "0x4A3BD80", Slot = "7")]
	protected override void Free()
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x4A3BDE0", Offset = "0x4A3BDE0", VA = "0x4A3BDE0")]
	public new static Recursion New()
	{
		return null;
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x4A3BE90", Offset = "0x4A3BE90", VA = "0x4A3BE90")]
	public new static Recursion New(int maxDepth)
	{
		return null;
	}
}
