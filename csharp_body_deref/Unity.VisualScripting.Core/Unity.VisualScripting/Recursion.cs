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
		[Address(RVA = "0x4D60950", Offset = "0x4D60950", VA = "0x4D60950")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x4D609C0", Offset = "0x4D609C0", VA = "0x4D609C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D6")]
	public static bool safeMode
	{
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x4D60A10", Offset = "0x4D60A10", VA = "0x4D60A10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x4D60A80", Offset = "0x4D60A80", VA = "0x4D60A80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x4D60910", Offset = "0x4D60910", VA = "0x4D60910")]
	private Recursion()
	{
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x4D60AD0", Offset = "0x4D60AD0", VA = "0x4D60AD0")]
	internal static void OnRuntimeMethodLoad()
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x4D60BE0", Offset = "0x4D60BE0", VA = "0x4D60BE0", Slot = "7")]
	protected override void Free()
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x4D60C40", Offset = "0x4D60C40", VA = "0x4D60C40")]
	public new static Recursion New()
	{
		return null;
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x4D60CF0", Offset = "0x4D60CF0", VA = "0x4D60CF0")]
	public new static Recursion New(int maxDepth)
	{
		return null;
	}
}
