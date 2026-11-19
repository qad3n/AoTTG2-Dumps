// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Recursion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001BA")]
public class Recursion<T> : IPoolable, IDisposable
{
	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> traversedOrder;

	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<T, int> traversedCount;

	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x0")]
	private bool disposed;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x0")]
	protected int maxDepth;

	[Token(Token = "0x6001087")]
	protected Recursion()
	{
	}

	[Token(Token = "0x6001088")]
	public void Enter(T o)
	{
	}

	[Token(Token = "0x6001089")]
	public bool TryEnter(T o)
	{
		return default(bool);
	}

	[Token(Token = "0x600108A")]
	public void Exit(T o)
	{
	}

	[Token(Token = "0x600108B")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600108C")]
	protected virtual void Free()
	{
	}

	[Token(Token = "0x600108D")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x600108E")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x600108F")]
	public static Recursion<T> New()
	{
		return null;
	}

	[Token(Token = "0x6001090")]
	public static Recursion<T> New(int maxDepth)
	{
		return null;
	}
}
[Token(Token = "0x20001BC")]
public sealed class Recursion : Recursion<object>
{
	[Token(Token = "0x170001D8")]
	public static int defaultMaxDepth
	{
		[Token(Token = "0x6001095")]
		[Address(RVA = "0x684AD10", Offset = "0x6849D10", VA = "0x684AD10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001096")]
		[Address(RVA = "0x684AD80", Offset = "0x6849D80", VA = "0x684AD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	public static bool safeMode
	{
		[Token(Token = "0x6001097")]
		[Address(RVA = "0x684ADD0", Offset = "0x6849DD0", VA = "0x684ADD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001098")]
		[Address(RVA = "0x684AE40", Offset = "0x6849E40", VA = "0x684AE40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x684ACD0", Offset = "0x6849CD0", VA = "0x684ACD0")]
	private Recursion()
	{
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x684AE90", Offset = "0x6849E90", VA = "0x684AE90")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x684B050", Offset = "0x684A050", VA = "0x684B050", Slot = "7")]
	protected override void Free()
	{
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x684B0B0", Offset = "0x684A0B0", VA = "0x684B0B0")]
	public new static Recursion New()
	{
		return null;
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x684B160", Offset = "0x684A160", VA = "0x684B160")]
	public new static Recursion New(int maxDepth)
	{
		return null;
	}
}
