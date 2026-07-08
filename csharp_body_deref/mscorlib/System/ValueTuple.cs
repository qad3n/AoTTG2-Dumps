using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200012B")]
public struct ValueTuple : IEquatable<ValueTuple>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x17000100")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x4FF4C30", Offset = "0x4FF4C30", VA = "0x4FF4C30", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x4FF4900", Offset = "0x4FF4900", VA = "0x4FF4900", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x4FF4940", Offset = "0x4FF4940", VA = "0x4FF4940", Slot = "4")]
	public bool Equals(ValueTuple other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x4FF4950", Offset = "0x4FF4950", VA = "0x4FF4950", Slot = "5")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x4FF4990", Offset = "0x4FF4990", VA = "0x4FF4990", Slot = "8")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x4FF4A90", Offset = "0x4FF4A90", VA = "0x4FF4A90", Slot = "9")]
	public int CompareTo(ValueTuple other)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x4FF4AA0", Offset = "0x4FF4AA0", VA = "0x4FF4AA0", Slot = "7")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x4FF4BA0", Offset = "0x4FF4BA0", VA = "0x4FF4BA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x4FF4BB0", Offset = "0x4FF4BB0", VA = "0x4FF4BB0", Slot = "6")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x4FF4BC0", Offset = "0x4FF4BC0", VA = "0x4FF4BC0", Slot = "10")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4FF4BD0", Offset = "0x4FF4BD0", VA = "0x4FF4BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4FF4C00", Offset = "0x4FF4C00", VA = "0x4FF4C00", Slot = "11")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4FF4C40", Offset = "0x4FF4C40", VA = "0x4FF4C40")]
	internal static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4FF4CB0", Offset = "0x4FF4CB0", VA = "0x4FF4CB0")]
	internal static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4FF4D90", Offset = "0x4FF4D90", VA = "0x4FF4D90")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4FF4E00", Offset = "0x4FF4E00", VA = "0x4FF4E00")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4FF4EB0", Offset = "0x4FF4EB0", VA = "0x4FF4EB0")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4FF4F30", Offset = "0x4FF4F30", VA = "0x4FF4F30")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x4FF5000", Offset = "0x4FF5000", VA = "0x4FF5000")]
	internal static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8)
	{
		return default(int);
	}
}
[Serializable]
[Token(Token = "0x200012C")]
public struct ValueTuple<T1> : IEquatable<ValueTuple<T1>>, IStructuralEquatable, IStructuralComparable, IComparable, IComparable<ValueTuple<T1>>, System.IValueTupleInternal, ITuple
{
	[Token(Token = "0x4000424")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x17000101")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BB8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BAC")]
	public ValueTuple(T1 item1)
	{
	}

	[Token(Token = "0x6000BAD")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAE")]
	public bool Equals(ValueTuple<T1> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAF")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB0")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB1")]
	public int CompareTo(ValueTuple<T1> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB2")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB5")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB6")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
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
	[Token(Token = "0x4000425")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000426")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x17000102")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BC6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BB9")]
	public ValueTuple(T1 item1, T2 item2)
	{
	}

	[Token(Token = "0x6000BBA")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBB")]
	public bool Equals((T1, T2) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBC")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBD")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	public int CompareTo((T1, T2) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBF")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC0")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC3")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC4")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
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
	[Token(Token = "0x4000427")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000428")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000429")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x17000103")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BD4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BC7")]
	public ValueTuple(T1 item1, T2 item2, T3 item3)
	{
	}

	[Token(Token = "0x6000BC8")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC9")]
	public bool Equals((T1, T2, T3) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCA")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCB")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCC")]
	public int CompareTo((T1, T2, T3) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCD")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCE")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BCF")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD0")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD1")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD2")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
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
	[Token(Token = "0x400042A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400042B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x400042C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x400042D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x17000104")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BE2")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BD5")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4)
	{
	}

	[Token(Token = "0x6000BD6")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD7")]
	public bool Equals((T1, T2, T3, T4) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD8")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD9")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDA")]
	public int CompareTo((T1, T2, T3, T4) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDB")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDC")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BDD")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDE")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDF")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
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
	[Token(Token = "0x400042E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400042F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000430")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x4000431")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x4000432")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x17000105")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BE3")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5)
	{
	}

	[Token(Token = "0x6000BE4")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE5")]
	public bool Equals((T1, T2, T3, T4, T5) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE7")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE8")]
	public int CompareTo((T1, T2, T3, T4, T5) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE9")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEA")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BEB")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEC")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BED")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEE")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
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
	[Token(Token = "0x4000433")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000434")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000435")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x4000436")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x4000437")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x4000438")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x17000106")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000BFE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BF1")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6)
	{
	}

	[Token(Token = "0x6000BF2")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF3")]
	public bool Equals((T1, T2, T3, T4, T5, T6) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF4")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF5")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF6")]
	public int CompareTo((T1, T2, T3, T4, T5, T6) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF8")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BF9")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFA")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFB")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFC")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
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
	[Token(Token = "0x4000439")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x400043A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x400043B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x400043C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x400043D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x400043E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x400043F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x17000107")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C0C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BFF")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7)
	{
	}

	[Token(Token = "0x6000C00")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	public bool Equals((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C02")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C03")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C04")]
	public int CompareTo((T1, T2, T3, T4, T5, T6, T7) other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C05")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C06")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C07")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C08")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
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
	[Token(Token = "0x4000440")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T1 Item1;

	[Token(Token = "0x4000441")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T2 Item2;

	[Token(Token = "0x4000442")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T3 Item3;

	[Token(Token = "0x4000443")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T4 Item4;

	[Token(Token = "0x4000444")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T5 Item5;

	[Token(Token = "0x4000445")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T6 Item6;

	[Token(Token = "0x4000446")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T7 Item7;

	[Token(Token = "0x4000447")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public TRest Rest;

	[Token(Token = "0x17000108")]
	private int System_002ERuntime_002ECompilerServices_002EITuple_002ELength
	{
		[Token(Token = "0x6000C1A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C0D")]
	public ValueTuple(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest)
	{
	}

	[Token(Token = "0x6000C0E")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0F")]
	public bool Equals(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C10")]
	private bool System_002ECollections_002EIStructuralEquatable_002EEquals(object other, IEqualityComparer comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C11")]
	private int System_002EIComparable_002ECompareTo(object other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C12")]
	public int CompareTo(ValueTuple<T1, T2, T3, T4, T5, T6, T7, TRest> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000C13")]
	private int System_002ECollections_002EIStructuralComparable_002ECompareTo(object other, IComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C14")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	private int System_002ECollections_002EIStructuralEquatable_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C16")]
	private int GetHashCodeCore(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C17")]
	private int System_002EIValueTupleInternal_002EGetHashCode(IEqualityComparer comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C18")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	private string System_002EIValueTupleInternal_002EToStringEnd()
	{
		return null;
	}
}
