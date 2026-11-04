// ==================== AoTTG2 cross-reference ====================
// Type: System.ValueTuple
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000152")]
public struct ValueTuple : IEquatable<ValueTuple>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x17000101")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x1B58590", Offset = "0x1B56B90", VA = "0x181B58590", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "4")]
	public bool Equals(ValueTuple other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x1B58700", Offset = "0x1B56D00", VA = "0x181B58700", Slot = "5")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x1B58750", Offset = "0x1B56D50", VA = "0x181B58750", Slot = "8")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
	public int CompareTo(ValueTuple other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x1B585E0", Offset = "0x1B56BE0", VA = "0x181B585E0", Slot = "7")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x1B588A0", Offset = "0x1B56EA0", VA = "0x181B588A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x1B58870", Offset = "0x1B56E70", VA = "0x181B58870", Slot = "11")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	public static (T1, T2) Create<T1, T2>(T1 item1, T2 item2)
	{
		return default((T1, T2));
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x1B57CF0", Offset = "0x1B562F0", VA = "0x181B57CF0")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x1B582D0", Offset = "0x1B568D0", VA = "0x181B582D0")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x1B581E0", Offset = "0x1B567E0", VA = "0x181B581E0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x1B57D60", Offset = "0x1B56360", VA = "0x181B57D60")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x1B57EA0", Offset = "0x1B564A0", VA = "0x181B57EA0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x1B58020", Offset = "0x1B56620", VA = "0x181B58020")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x1B58390", Offset = "0x1B56990", VA = "0x181B58390")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x2000153")]
public struct ValueTuple<T1> : IEquatable<ValueTuple<T1>>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple<T1>>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000481")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x17000102")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BFF")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BF3")]
	public ValueTuple(T1 item1)
	{
	}

	[Token(Token = "0x6000BF4")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF5")]
	public bool Equals(ValueTuple<T1> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF6")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF7")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF8")]
	public int CompareTo(ValueTuple<T1> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF9")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFA")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BFB")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFC")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFD")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BFE")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000154")]
public struct ValueTuple<T1, T2> : IEquatable<(T1, T2)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000482")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000483")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x17000103")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C0D")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C00")]
	public ValueTuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000C01")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C02")]
	public bool Equals((T1, T2) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C03")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C05")]
	public int CompareTo((T1, T2) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C06")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C07")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C08")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0B")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C0C")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000155")]
public struct ValueTuple<T1, T2, T3> : IEquatable<(T1, T2, T3)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000484")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000485")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000486")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x17000104")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C1B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C0E")]
	public ValueTuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000C0F")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C10")]
	public bool Equals((T1, T2, T3) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C11")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C12")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C13")]
	public int CompareTo((T1, T2, T3) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C14")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C16")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C17")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C18")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C19")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000156")]
public struct ValueTuple<T1, T2, T3, T4> : IEquatable<(T1, T2, T3, T4)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000487")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000488")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000489")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x400048A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x17000105")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C29")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C1C")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000C1D")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1E")]
	public bool Equals((T1, T2, T3, T4) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1F")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C20")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C21")]
	public int CompareTo((T1, T2, T3, T4) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C22")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C23")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C24")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C25")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C26")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C27")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000157")]
public struct ValueTuple<T1, T2, T3, T4, T5> : IEquatable<(T1, T2, T3, T4, T5)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x400048B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400048C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x400048D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x400048E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x400048F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x17000106")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C37")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C2A")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5)
	{
	}

	[Token(Token = "0x6000C2B")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2C")]
	public bool Equals((T1, T2, T3, T4, T5) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2D")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2E")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2F")]
	public int CompareTo((T1, T2, T3, T4, T5) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C30")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C31")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C32")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C33")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C34")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C35")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000158")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6> : IEquatable<(T1, T2, T3, T4, T5, T6)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5, T6)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000491")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x4000493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x4000494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x4000495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x17000107")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C45")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C38")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6)
	{
	}

	[Token(Token = "0x6000C39")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3A")]
	public bool Equals((T1, T2, T3, T4, T5, T6) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3B")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3C")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3D")]
	public int CompareTo((T1, T2, T3, T4, T5, T6) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3E")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3F")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C40")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C41")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C42")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C43")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000159")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6, T7> : IEquatable<(T1, T2, T3, T4, T5, T6, T7)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5, T6, T7)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x4000499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x400049A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x400049B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x400049C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x17000108")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C53")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C46")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7)
	{
	}

	[Token(Token = "0x6000C47")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C48")]
	public bool Equals((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4A")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4B")]
	public int CompareTo((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4C")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4D")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C4E")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4F")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C50")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C51")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200015A")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> : IEquatable<ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest>>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest>>, System.IValueTupleInternal, ITuple where TRest : struct
{
	[Token(Token = "0x400049D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400049E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x400049F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40004A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x40004A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x40004A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x40004A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x40004A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public TRest Rest;

	[Token(Token = "0x17000109")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C61")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C54")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest)
	{
	}

	[Token(Token = "0x6000C55")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C56")]
	public bool Equals(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C57")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C58")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C59")]
	public int CompareTo(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5A")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5B")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C5C")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5D")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5E")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5F")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C60")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
