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
[Token(Token = "0x200012B")]
public struct ValueTuple : IEquatable<ValueTuple>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x17000101")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x54DE910", Offset = "0x54DD910", VA = "0x54DE910", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x54DE5E0", Offset = "0x54DD5E0", VA = "0x54DE5E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x54DE620", Offset = "0x54DD620", VA = "0x54DE620", Slot = "4")]
	public bool Equals(ValueTuple other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x54DE630", Offset = "0x54DD630", VA = "0x54DE630", Slot = "5")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x54DE670", Offset = "0x54DD670", VA = "0x54DE670", Slot = "8")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x54DE770", Offset = "0x54DD770", VA = "0x54DE770", Slot = "9")]
	public int CompareTo(ValueTuple other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x54DE780", Offset = "0x54DD780", VA = "0x54DE780", Slot = "7")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x54DE880", Offset = "0x54DD880", VA = "0x54DE880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x54DE890", Offset = "0x54DD890", VA = "0x54DE890", Slot = "6")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x54DE8A0", Offset = "0x54DD8A0", VA = "0x54DE8A0", Slot = "10")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x54DE8B0", Offset = "0x54DD8B0", VA = "0x54DE8B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x54DE8E0", Offset = "0x54DD8E0", VA = "0x54DE8E0", Slot = "11")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	public static (T1, T2) Create<T1, T2>(T1 item1, T2 item2)
	{
		return default((T1, T2));
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x54DE920", Offset = "0x54DD920", VA = "0x54DE920")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x54DE990", Offset = "0x54DD990", VA = "0x54DE990")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x54DEA70", Offset = "0x54DDA70", VA = "0x54DEA70")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x54DEAE0", Offset = "0x54DDAE0", VA = "0x54DEAE0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x54DEB90", Offset = "0x54DDB90", VA = "0x54DEB90")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x54DEC10", Offset = "0x54DDC10", VA = "0x54DEC10")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x54DECE0", Offset = "0x54DDCE0", VA = "0x54DECE0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x200012C")]
public struct ValueTuple<T1> : IEquatable<ValueTuple<T1>>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple<T1>>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x17000102")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BDD")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BD1")]
	public ValueTuple(T1 item1)
	{
	}

	[Token(Token = "0x6000BD2")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD3")]
	public bool Equals(ValueTuple<T1> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD4")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD5")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD6")]
	public int CompareTo(ValueTuple<T1> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD7")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD8")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BD9")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDA")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDB")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200012D")]
public struct ValueTuple<T1, T2> : IEquatable<(T1, T2)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x17000103")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BEB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BDE")]
	public ValueTuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000BDF")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE0")]
	public bool Equals((T1, T2) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE1")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE2")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE3")]
	public int CompareTo((T1, T2) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE4")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE5")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BE6")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE8")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE9")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BEA")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200012E")]
public struct ValueTuple<T1, T2, T3> : IEquatable<(T1, T2, T3)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x17000104")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BF9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BEC")]
	public ValueTuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000BED")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEE")]
	public bool Equals((T1, T2, T3) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEF")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF0")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF1")]
	public int CompareTo((T1, T2, T3) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF2")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF3")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BF4")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF5")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF6")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200012F")]
public struct ValueTuple<T1, T2, T3, T4> : IEquatable<(T1, T2, T3, T4)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40003E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x17000105")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C07")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BFA")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000BFB")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFC")]
	public bool Equals((T1, T2, T3, T4) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFD")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFE")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFF")]
	public int CompareTo((T1, T2, T3, T4) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C00")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C01")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C02")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C03")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C04")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C05")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C06")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000130")]
public struct ValueTuple<T1, T2, T3, T4, T5> : IEquatable<(T1, T2, T3, T4, T5)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40003EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x40003ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x17000106")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C08")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5)
	{
	}

	[Token(Token = "0x6000C09")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	public bool Equals((T1, T2, T3, T4, T5) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0B")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0C")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0D")]
	public int CompareTo((T1, T2, T3, T4, T5) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0E")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0F")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C10")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C11")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C12")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C13")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000131")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6> : IEquatable<(T1, T2, T3, T4, T5, T6)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5, T6)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40003F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x40003F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x17000107")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C16")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6)
	{
	}

	[Token(Token = "0x6000C17")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	public bool Equals((T1, T2, T3, T4, T5, T6) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1A")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1B")]
	public int CompareTo((T1, T2, T3, T4, T5, T6) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1C")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1D")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C1E")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1F")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C20")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C21")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000132")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6, T7> : IEquatable<(T1, T2, T3, T4, T5, T6, T7)>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<(T1, T2, T3, T4, T5, T6, T7)>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40003F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x40003F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x40003F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x40003FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x17000108")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C31")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C24")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7)
	{
	}

	[Token(Token = "0x6000C25")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C26")]
	public bool Equals((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C27")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C28")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C29")]
	public int CompareTo((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2A")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2B")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C2C")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2D")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2E")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C2F")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000133")]
public struct ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> : IEquatable<ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest>>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest>>, System.IValueTupleInternal, ITuple where TRest : struct
{
	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public TRest Rest;

	[Token(Token = "0x17000109")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C3F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C32")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest)
	{
	}

	[Token(Token = "0x6000C33")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C34")]
	public bool Equals(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C35")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C36")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C37")]
	public int CompareTo(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C38")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C39")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C3A")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3B")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3C")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3D")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
