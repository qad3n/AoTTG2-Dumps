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
	[Token(Token = "0x6000A85")]
	public static Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2)
	{
		return null;
	}

	[Token(Token = "0x6000A86")]
	public static Tuple<T1, T2, T3> Create<T1, T2, T3>(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x54D71F0", Offset = "0x54D61F0", VA = "0x54D71F0")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x54D7200", Offset = "0x54D6200", VA = "0x54D7200")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x54D7220", Offset = "0x54D6220", VA = "0x54D7220")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x200011D")]
public class Tuple<T1, T2> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x170000BA")]
	public T1 Item1
	{
		[Token(Token = "0x6000A8A")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BB")]
	public T2 Item2
	{
		[Token(Token = "0x6000A8B")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BC")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000A95")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A8C")]
	public Tuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000A8D")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8E")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8F")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A90")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A91")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A92")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A93")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x200011E")]
public class Tuple<T1, T2, T3> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x170000BD")]
	public T1 Item1
	{
		[Token(Token = "0x6000A96")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000BE")]
	public T2 Item2
	{
		[Token(Token = "0x6000A97")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000BF")]
	public T3 Item3
	{
		[Token(Token = "0x6000A98")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C0")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000AA2")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A99")]
	public Tuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000A9A")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9B")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9C")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A9D")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000A9E")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A9F")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA0")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AA1")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x200011F")]
public class Tuple<T1, T2, T3, T4> : IStructuralEquatable, IStructuralComparable, IComparable, System.ITupleInternal, ITuple
{
	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x0")]
	private readonly T1 m_Item1;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x0")]
	private readonly T2 m_Item2;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x0")]
	private readonly T3 m_Item3;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x0")]
	private readonly T4 m_Item4;

	[Token(Token = "0x170000C1")]
	public T1 Item1
	{
		[Token(Token = "0x6000AA3")]
		get
		{
			return (T1)null;
		}
	}

	[Token(Token = "0x170000C2")]
	public T2 Item2
	{
		[Token(Token = "0x6000AA4")]
		get
		{
			return (T2)null;
		}
	}

	[Token(Token = "0x170000C3")]
	public T3 Item3
	{
		[Token(Token = "0x6000AA5")]
		get
		{
			return (T3)null;
		}
	}

	[Token(Token = "0x170000C4")]
	public T4 Item4
	{
		[Token(Token = "0x6000AA6")]
		get
		{
			return (T4)null;
		}
	}

	[Token(Token = "0x170000C5")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AA7")]
	public Tuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000AA8")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA9")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAA")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAB")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAC")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AAD")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAE")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AAF")]
	private string System_002EITupleInternal_002EToString(StringBuilder sb)
	{
		return null;
	}
}
