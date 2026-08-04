// ==================== AoTTG2 cross-reference ====================
// Type: System.Tuple
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200011C")]
public static class Tuple
{
	[Token(Token = "0x6000A64")]
	public static Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2)
	{
		return null;
	}

	[Token(Token = "0x6000A65")]
	public static Tuple<T1, T2, T3> Create<T1, T2, T3>(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x3CD31F0", Offset = "0x3CD31F0", VA = "0x3CD31F0")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x3CD3200", Offset = "0x3CD3200", VA = "0x3CD3200")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x3CD3220", Offset = "0x3CD3220", VA = "0x3CD3220")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x200011D")]
public class Tuple<T1, T2> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x170000BA")]
	public T1 Item1
	{
		[Token(Token = "0x6000A69")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BB")]
	public T2 Item2
	{
		[Token(Token = "0x6000A6A")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BC")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000A74")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6B")]
	public Tuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000A6C")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6D")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6E")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A6F")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A70")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A71")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A72")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x200011E")]
public class Tuple<T1, T2, T3> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x170000BD")]
	public T1 Item1
	{
		[Token(Token = "0x6000A75")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BE")]
	public T2 Item2
	{
		[Token(Token = "0x6000A76")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BF")]
	public T3 Item3
	{
		[Token(Token = "0x6000A77")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C0")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000A81")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A78")]
	public Tuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000A79")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7A")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7B")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7C")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7D")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A7E")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7F")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A80")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x200011F")]
public class Tuple<T1, T2, T3, T4> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x0")]
	private readonly T4 m_Item4;

	[Token(Token = "0x170000C1")]
	public T1 Item1
	{
		[Token(Token = "0x6000A82")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000C2")]
	public T2 Item2
	{
		[Token(Token = "0x6000A83")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000C3")]
	public T3 Item3
	{
		[Token(Token = "0x6000A84")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C4")]
	public T4 Item4
	{
		[Token(Token = "0x6000A85")]
		get
		{
			return (T4)null;
		}
	}

	[Token(Token = "0x170000C5")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000A8F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A86")]
	public Tuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000A87")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A88")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A89")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A8A")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A8B")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A8C")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A8D")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A8E")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
