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

[Token(Token = "0x2000143")]
public static class Tuple
{
	[Token(Token = "0x6000AA8")]
	public static Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2)
	{
		return null;
	}

	[Token(Token = "0x6000AA9")]
	public static Tuple<T1, T2, T3> Create<T1, T2, T3>(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0xA43250", Offset = "0xA41850", VA = "0x180A43250")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x1B500F0", Offset = "0x1B4E6F0", VA = "0x181B500F0")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x1B500D0", Offset = "0x1B4E6D0", VA = "0x181B500D0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x2000144")]
public class Tuple<T1, T2> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x170000BA")]
	public T1 Item1
	{
		[Token(Token = "0x6000AAD")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BB")]
	public T2 Item2
	{
		[Token(Token = "0x6000AAE")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BC")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000AB8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AAF")]
	public Tuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000AB0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB1")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB2")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB3")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB4")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AB5")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB6")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AB7")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000145")]
public class Tuple<T1, T2, T3> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x170000BD")]
	public T1 Item1
	{
		[Token(Token = "0x6000AB9")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BE")]
	public T2 Item2
	{
		[Token(Token = "0x6000ABA")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BF")]
	public T3 Item3
	{
		[Token(Token = "0x6000ABB")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C0")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000AC5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000ABC")]
	public Tuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000ABD")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABE")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABF")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC0")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC1")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC2")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AC4")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000146")]
public class Tuple<T1, T2, T3, T4> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x0")]
	private readonly T4 m_Item4;

	[Token(Token = "0x170000C1")]
	public T1 Item1
	{
		[Token(Token = "0x6000AC6")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000C2")]
	public T2 Item2
	{
		[Token(Token = "0x6000AC7")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000C3")]
	public T3 Item3
	{
		[Token(Token = "0x6000AC8")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C4")]
	public T4 Item4
	{
		[Token(Token = "0x6000AC9")]
		get
		{
			return (T4)null;
		}
	}

	[Token(Token = "0x170000C5")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000AD3")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000ACA")]
	public Tuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000ACB")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ACC")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ACD")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000ACE")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000ACF")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AD0")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AD1")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AD2")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
