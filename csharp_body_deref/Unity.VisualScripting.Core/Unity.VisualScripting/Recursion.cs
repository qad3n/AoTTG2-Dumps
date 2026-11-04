// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Recursion
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2E551F0", Offset = "0x2E537F0", VA = "0x182E551F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001096")]
		[Address(RVA = "0x2E55290", Offset = "0x2E53890", VA = "0x182E55290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	public static bool safeMode
	{
		[Token(Token = "0x6001097")]
		[Address(RVA = "0x2E55240", Offset = "0x2E53840", VA = "0x182E55240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001098")]
		[Address(RVA = "0x2E552F0", Offset = "0x2E538F0", VA = "0x182E552F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x2E551B0", Offset = "0x2E537B0", VA = "0x182E551B0")]
	private Recursion()
	{
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x2E55010", Offset = "0x2E53610", VA = "0x182E55010")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x2E54D10", Offset = "0x2E53310", VA = "0x182E54D10", Slot = "7")]
	protected override void Free()
	{
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x2E54D70", Offset = "0x2E53370", VA = "0x182E54D70")]
	public new static Recursion New()
	{
		return null;
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x2E54E00", Offset = "0x2E53400", VA = "0x182E54E00")]
	public new static Recursion New(int maxDepth)
	{
		return null;
	}
}
