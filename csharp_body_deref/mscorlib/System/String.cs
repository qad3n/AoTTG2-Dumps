// ==================== AoTTG2 cross-reference ====================
// Type: System.String
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Buffers;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000066")]
public sealed class String : IComparable, IEnumerable, IEnumerable<char>, IComparable<string>, IEquatable<string>, IConvertible, ICloneable
{
	[Token(Token = "0x2000067")]
	private enum TrimType
	{
		[Token(Token = "0x40001A0")]
		Head,
		[Token(Token = "0x40001A1")]
		Tail,
		[Token(Token = "0x40001A2")]
		Both
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000068")]
	private struct ProbabilisticMap
	{
	}

	[Token(Token = "0x4000198")]
	private const int StackallocIntBufferSizeLimit = 128;

	[Token(Token = "0x4000199")]
	private const int PROBABILISTICMAP_BLOCK_INDEX_MASK = 7;

	[Token(Token = "0x400019A")]
	private const int PROBABILISTICMAP_BLOCK_INDEX_SHIFT = 3;

	[Token(Token = "0x400019B")]
	private const int PROBABILISTICMAP_SIZE = 8;

	[NonSerialized]
	[Token(Token = "0x400019C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int _stringLength;

	[NonSerialized]
	[Token(Token = "0x400019D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private char _firstChar;

	[Token(Token = "0x400019E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string Empty;

	[Token(Token = "0x1700003D")]
	public int Length
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x3AFD0C0", Offset = "0x3AFD0C0", VA = "0x3AFD0C0")]
		get
		{
			return default(int);
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x1700003E")]
	public char this[int index]
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x3AF0060", Offset = "0x3AF0060", VA = "0x3AF0060")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(char);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3AF3C40", Offset = "0x3AF3C40", VA = "0x3AF3C40")]
	private static bool EqualsHelper(string strA, string strB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3AF3C80", Offset = "0x3AF3C80", VA = "0x3AF3C80")]
	private static int CompareOrdinalHelper(string strA, int indexA, int countA, string strB, int indexB, int countB)
	{
		return default(int);
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x3AF3CC0", Offset = "0x3AF3CC0", VA = "0x3AF3CC0")]
	private static int CompareOrdinalHelper(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x3AF3E60", Offset = "0x3AF3E60", VA = "0x3AF3E60")]
	public static int Compare(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x3AF4150", Offset = "0x3AF4150", VA = "0x3AF4150")]
	public static int Compare(string strA, string strB, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x3AF3E70", Offset = "0x3AF3E70", VA = "0x3AF3E70")]
	public static int Compare(string strA, string strB, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x3AF4180", Offset = "0x3AF4180", VA = "0x3AF4180")]
	public static int Compare(string strA, string strB, CultureInfo culture, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3AF4220", Offset = "0x3AF4220", VA = "0x3AF4220")]
	public static int Compare(string strA, string strB, bool ignoreCase, CultureInfo culture)
	{
		return default(int);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3AF4230", Offset = "0x3AF4230", VA = "0x3AF4230")]
	public static int Compare(string strA, int indexA, string strB, int indexB, int length, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x3AF46D0", Offset = "0x3AF46D0", VA = "0x3AF46D0")]
	public static int CompareOrdinal(string strA, string strB)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3AF4710", Offset = "0x3AF4710", VA = "0x3AF4710")]
	internal static int CompareOrdinal(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3AF47A0", Offset = "0x3AF47A0", VA = "0x3AF47A0")]
	public static int CompareOrdinal(string strA, int indexA, string strB, int indexB, int length)
	{
		return default(int);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x3AF4980", Offset = "0x3AF4980", VA = "0x3AF4980", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x3AF49F0", Offset = "0x3AF49F0", VA = "0x3AF49F0", Slot = "7")]
	public int CompareTo(string strB)
	{
		return default(int);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x3AF4A00", Offset = "0x3AF4A00", VA = "0x3AF4A00")]
	public bool EndsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x3AF4A10", Offset = "0x3AF4A10", VA = "0x3AF4A10")]
	public bool EndsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x3AF4D10", Offset = "0x3AF4D10", VA = "0x3AF4D10")]
	public bool EndsWith(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3AF4D50", Offset = "0x3AF4D50", VA = "0x3AF4D50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3AF4DB0", Offset = "0x3AF4DB0", VA = "0x3AF4DB0", Slot = "8")]
	public bool Equals(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3AF4DE0", Offset = "0x3AF4DE0", VA = "0x3AF4DE0")]
	public bool Equals(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3AF50B0", Offset = "0x3AF50B0", VA = "0x3AF50B0")]
	public static bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3AF50F0", Offset = "0x3AF50F0", VA = "0x3AF50F0")]
	public static bool Equals(string a, string b, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3AE5C50", Offset = "0x3AE5C50", VA = "0x3AE5C50")]
	public static bool operator ==(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3AF53D0", Offset = "0x3AF53D0", VA = "0x3AF53D0")]
	public static bool operator !=(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3AF5410", Offset = "0x3AF5410", VA = "0x3AF5410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3AF5490", Offset = "0x3AF5490", VA = "0x3AF5490")]
	internal int GetLegacyNonRandomizedHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3AF5510", Offset = "0x3AF5510", VA = "0x3AF5510")]
	public bool StartsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3AF5570", Offset = "0x3AF5570", VA = "0x3AF5570")]
	public bool StartsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3AF4160", Offset = "0x3AF4160", VA = "0x3AF4160")]
	internal static void CheckStringComparison(StringComparison comparisonType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x3AF58A0", Offset = "0x3AF58A0", VA = "0x3AF58A0")]
	public extern String(char[] value);

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x3AF58B0", Offset = "0x3AF58B0", VA = "0x3AF58B0")]
	private static string Ctor(char[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x3AF5940", Offset = "0x3AF5940", VA = "0x3AF5940")]
	public extern String(char[] value, int startIndex, int length);

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x3AF5950", Offset = "0x3AF5950", VA = "0x3AF5950")]
	private static string Ctor(char[] value, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x3AF5AE0", Offset = "0x3AF5AE0", VA = "0x3AF5AE0")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value);

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x3AF5AF0", Offset = "0x3AF5AF0", VA = "0x3AF5AF0")]
	private unsafe static string Ctor(char* ptr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x3AF5C60", Offset = "0x3AF5C60", VA = "0x3AF5C60")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value, int startIndex, int length);

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x3AF5C70", Offset = "0x3AF5C70", VA = "0x3AF5C70")]
	private unsafe static string Ctor(char* ptr, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x3AF5DD0", Offset = "0x3AF5DD0", VA = "0x3AF5DD0")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length);

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x3AF5DE0", Offset = "0x3AF5DE0", VA = "0x3AF5DE0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x3AF5F50", Offset = "0x3AF5F50", VA = "0x3AF5F50")]
	private unsafe static string CreateStringForSByteConstructor(byte* pb, int numBytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x3AF5FB0", Offset = "0x3AF5FB0", VA = "0x3AF5FB0")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length, Encoding enc);

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3AF5FC0", Offset = "0x3AF5FC0", VA = "0x3AF5FC0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x3AF6170", Offset = "0x3AF6170", VA = "0x3AF6170")]
	public extern String(char c, int count);

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x3AF6180", Offset = "0x3AF6180", VA = "0x3AF6180")]
	private static string Ctor(char c, int count)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3AF62D0", Offset = "0x3AF62D0", VA = "0x3AF62D0")]
	public extern String(ReadOnlySpan<char> value);

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x3AF62E0", Offset = "0x3AF62E0", VA = "0x3AF62E0")]
	private static string Ctor(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	public static string Create<TState>(int length, TState state, SpanAction<char, TState> action)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x3AF6390", Offset = "0x3AF6390", VA = "0x3AF6390")]
	public static implicit operator ReadOnlySpan<char>(string value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x3AF63D0", Offset = "0x3AF63D0", VA = "0x3AF63D0", Slot = "26")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x3AF63E0", Offset = "0x3AF63E0", VA = "0x3AF63E0")]
	public static string Copy(string str)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x3AF6470", Offset = "0x3AF6470", VA = "0x3AF6470")]
	public void CopyTo(int sourceIndex, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x3AF65F0", Offset = "0x3AF65F0", VA = "0x3AF65F0")]
	public char[] ToCharArray()
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x3AF6710", Offset = "0x3AF6710", VA = "0x3AF6710")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNullOrEmpty(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x3AF6730", Offset = "0x3AF6730", VA = "0x3AF6730")]
	public static bool IsNullOrWhiteSpace(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x3AF3C70", Offset = "0x3AF3C70", VA = "0x3AF3C70")]
	internal unsafe ref char GetRawStringData()
	{
		return ref *(char*)null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x3AF67C0", Offset = "0x3AF67C0", VA = "0x3AF67C0")]
	internal unsafe static string CreateStringFromEncoding(byte* bytes, int byteLength, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x3AF6870", Offset = "0x3AF6870", VA = "0x3AF6870")]
	internal static string CreateFromChar(char c)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x3AF5930", Offset = "0x3AF5930", VA = "0x3AF5930")]
	internal unsafe static void wstrcpy(char* dmem, char* smem, int charCount)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x3AF6890", Offset = "0x3AF6890", VA = "0x3AF6890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x3AF68A0", Offset = "0x3AF68A0", VA = "0x3AF68A0", Slot = "24")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x3AF68B0", Offset = "0x3AF68B0", VA = "0x3AF68B0", Slot = "6")]
	private IEnumerator<char> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EChar_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x3AF6900", Offset = "0x3AF6900", VA = "0x3AF6900", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x3AF5B60", Offset = "0x3AF5B60", VA = "0x3AF5B60")]
	internal unsafe static int wcslen(char* ptr)
	{
		return default(int);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x3AF6950", Offset = "0x3AF6950", VA = "0x3AF6950", Slot = "9")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x3AF6960", Offset = "0x3AF6960", VA = "0x3AF6960", Slot = "10")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x3AF69C0", Offset = "0x3AF69C0", VA = "0x3AF69C0", Slot = "11")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x3AF6A20", Offset = "0x3AF6A20", VA = "0x3AF6A20", Slot = "12")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3AF6A80", Offset = "0x3AF6A80", VA = "0x3AF6A80", Slot = "13")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3AF6AE0", Offset = "0x3AF6AE0", VA = "0x3AF6AE0", Slot = "14")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3AF6B40", Offset = "0x3AF6B40", VA = "0x3AF6B40", Slot = "15")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3AF6BA0", Offset = "0x3AF6BA0", VA = "0x3AF6BA0", Slot = "16")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3AF6C00", Offset = "0x3AF6C00", VA = "0x3AF6C00", Slot = "17")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3AF6C60", Offset = "0x3AF6C60", VA = "0x3AF6C60", Slot = "18")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3AF6CC0", Offset = "0x3AF6CC0", VA = "0x3AF6CC0", Slot = "19")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3AF6D20", Offset = "0x3AF6D20", VA = "0x3AF6D20", Slot = "20")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3AF6D80", Offset = "0x3AF6D80", VA = "0x3AF6D80", Slot = "21")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x3AF6DE0", Offset = "0x3AF6DE0", VA = "0x3AF6DE0", Slot = "22")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3AF6E40", Offset = "0x3AF6E40", VA = "0x3AF6E40", Slot = "23")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3AF6EA0", Offset = "0x3AF6EA0", VA = "0x3AF6EA0", Slot = "25")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3AF6F00", Offset = "0x3AF6F00", VA = "0x3AF6F00")]
	public string Normalize(NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3AF6F50", Offset = "0x3AF6F50", VA = "0x3AF6F50")]
	private static void FillStringChecked(string dest, int destPos, string src)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3AF6FD0", Offset = "0x3AF6FD0", VA = "0x3AF6FD0")]
	public static string Concat(object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3AF7070", Offset = "0x3AF7070", VA = "0x3AF7070")]
	public static string Concat(object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3AF7200", Offset = "0x3AF7200", VA = "0x3AF7200")]
	public static string Concat(params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3AE5BA0", Offset = "0x3AE5BA0", VA = "0x3AE5BA0")]
	public static string Concat(string str0, string str1)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3AF7150", Offset = "0x3AF7150", VA = "0x3AF7150")]
	public static string Concat(string str0, string str1, string str2)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3AF7470", Offset = "0x3AF7470", VA = "0x3AF7470")]
	public static string Concat(string str0, string str1, string str2, string str3)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3AF7570", Offset = "0x3AF7570", VA = "0x3AF7570")]
	public static string Concat(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3AEAA60", Offset = "0x3AEAA60", VA = "0x3AEAA60")]
	public static string Format(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3AF78E0", Offset = "0x3AF78E0", VA = "0x3AF78E0")]
	public static string Format(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3AF7930", Offset = "0x3AF7930", VA = "0x3AF7930")]
	public static string Format(string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3AF7980", Offset = "0x3AF7980", VA = "0x3AF7980")]
	public static string Format(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3AF7A30", Offset = "0x3AF7A30", VA = "0x3AF7A30")]
	public static string Format(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3AF7A80", Offset = "0x3AF7A80", VA = "0x3AF7A80")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3AF7AE0", Offset = "0x3AF7AE0", VA = "0x3AF7AE0")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3AF7B40", Offset = "0x3AF7B40", VA = "0x3AF7B40")]
	public static string Format(IFormatProvider provider, string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x3AF77D0", Offset = "0x3AF77D0", VA = "0x3AF77D0")]
	private static string FormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3AF7BF0", Offset = "0x3AF7BF0", VA = "0x3AF7BF0")]
	public string Insert(int startIndex, string value)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3AF7D30", Offset = "0x3AF7D30", VA = "0x3AF7D30")]
	public static string Join(string separator, params string[] value)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	public static string Join<T>(string separator, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3AF7E00", Offset = "0x3AF7E00", VA = "0x3AF7E00")]
	public static string Join(string separator, IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x3AF7DC0", Offset = "0x3AF7DC0", VA = "0x3AF7DC0")]
	public static string Join(string separator, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	private unsafe static string JoinCore<T>(char* separator, int separatorLength, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x3AF8380", Offset = "0x3AF8380", VA = "0x3AF8380")]
	private unsafe static string JoinCore(char* separator, int separatorLength, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x3AF8900", Offset = "0x3AF8900", VA = "0x3AF8900")]
	public string PadLeft(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x3AF8A30", Offset = "0x3AF8A30", VA = "0x3AF8A30")]
	public string PadRight(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x3AF8B80", Offset = "0x3AF8B80", VA = "0x3AF8B80")]
	public string Remove(int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x3AF8CF0", Offset = "0x3AF8CF0", VA = "0x3AF8CF0")]
	public string Remove(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x3AF8F30", Offset = "0x3AF8F30", VA = "0x3AF8F30")]
	public string Replace(char oldChar, char newChar)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x3AF9030", Offset = "0x3AF9030", VA = "0x3AF9030")]
	public string Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x3AF9330", Offset = "0x3AF9330", VA = "0x3AF9330")]
	private string ReplaceHelper(int oldValueLength, string newValue, ReadOnlySpan<int> indices)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x3AF96C0", Offset = "0x3AF96C0", VA = "0x3AF96C0")]
	public string[] Split(char separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x3AF9A70", Offset = "0x3AF9A70", VA = "0x3AF9A70")]
	public string[] Split(params char[] separator)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x3AF9AD0", Offset = "0x3AF9AD0", VA = "0x3AF9AD0")]
	public string[] Split(char[] separator, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x3AF9B20", Offset = "0x3AF9B20", VA = "0x3AF9B20")]
	public string[] Split(char[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x3AF9710", Offset = "0x3AF9710", VA = "0x3AF9710")]
	private string[] SplitInternal(ReadOnlySpan<char> separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x3AFA740", Offset = "0x3AFA740", VA = "0x3AFA740")]
	public string[] Split(string separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x3AFAB90", Offset = "0x3AFAB90", VA = "0x3AFAB90")]
	public string[] Split(string[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x3AFA780", Offset = "0x3AFA780", VA = "0x3AFA780")]
	private string[] SplitInternal(string separator, string[] separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x3AFABB0", Offset = "0x3AFABB0", VA = "0x3AFABB0")]
	private string[] SplitInternal(string separator, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x3AFA150", Offset = "0x3AFA150", VA = "0x3AFA150")]
	private string[] SplitKeepEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x3AFA370", Offset = "0x3AFA370", VA = "0x3AFA370")]
	private string[] SplitOmitEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x3AF9B80", Offset = "0x3AF9B80", VA = "0x3AF9B80")]
	private void MakeSeparatorList(ReadOnlySpan<char> separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3AFB0A0", Offset = "0x3AFB0A0", VA = "0x3AFB0A0")]
	private void MakeSeparatorList(string separator, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3AFAD40", Offset = "0x3AFAD40", VA = "0x3AFAD40")]
	private void MakeSeparatorList(string[] separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder, ref System.Collections.Generic.ValueListBuilder<int> lengthListBuilder)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x3AFB460", Offset = "0x3AFB460", VA = "0x3AFB460")]
	public string Substring(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3AF8DA0", Offset = "0x3AF8DA0", VA = "0x3AF8DA0")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x3AFB530", Offset = "0x3AFB530", VA = "0x3AFB530")]
	private string InternalSubString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3AFB580", Offset = "0x3AFB580", VA = "0x3AFB580")]
	public string ToLower()
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x3AFB620", Offset = "0x3AFB620", VA = "0x3AFB620")]
	public string ToLower(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x3AFB6B0", Offset = "0x3AFB6B0", VA = "0x3AFB6B0")]
	public string ToLowerInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x3AFB750", Offset = "0x3AFB750", VA = "0x3AFB750")]
	public string ToUpper()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x3AFB7F0", Offset = "0x3AFB7F0", VA = "0x3AFB7F0")]
	public string ToUpper(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3AFB880", Offset = "0x3AFB880", VA = "0x3AFB880")]
	public string ToUpperInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3AFB920", Offset = "0x3AFB920", VA = "0x3AFB920")]
	public string Trim()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3AFBA90", Offset = "0x3AFBA90", VA = "0x3AFBA90")]
	public string Trim(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3AFBC70", Offset = "0x3AFBC70", VA = "0x3AFBC70")]
	public string Trim(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3AFBCB0", Offset = "0x3AFBCB0", VA = "0x3AFBCB0")]
	public string TrimStart(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3AFBCD0", Offset = "0x3AFBCD0", VA = "0x3AFBCD0")]
	public string TrimStart(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3AFBD00", Offset = "0x3AFBD00", VA = "0x3AFBD00")]
	public string TrimEnd()
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3AFBD10", Offset = "0x3AFBD10", VA = "0x3AFBD10")]
	public string TrimEnd(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3AFBD30", Offset = "0x3AFBD30", VA = "0x3AFBD30")]
	public string TrimEnd(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3AFB930", Offset = "0x3AFB930", VA = "0x3AFB930")]
	private string TrimWhiteSpaceHelper(TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3AFBAB0", Offset = "0x3AFBAB0", VA = "0x3AFBAB0")]
	private unsafe string TrimHelper(char* trimChars, int trimCharsLength, TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3AFBD70", Offset = "0x3AFBD70", VA = "0x3AFBD70")]
	private string CreateTrimmedString(int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3AFBDF0", Offset = "0x3AFBDF0", VA = "0x3AFBDF0")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3AFBE20", Offset = "0x3AFBE20", VA = "0x3AFBE20")]
	public bool Contains(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3AFBE40", Offset = "0x3AFBE40", VA = "0x3AFBE40")]
	public int IndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3AFBE50", Offset = "0x3AFBE50", VA = "0x3AFBE50")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3AFBE60", Offset = "0x3AFBE60", VA = "0x3AFBE60")]
	public int IndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3AFBF20", Offset = "0x3AFBF20", VA = "0x3AFBF20")]
	public int IndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x3AFC130", Offset = "0x3AFC130", VA = "0x3AFC130")]
	public int IndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3AFBF30", Offset = "0x3AFBF30", VA = "0x3AFBF30")]
	public int IndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3AFC140", Offset = "0x3AFC140", VA = "0x3AFC140")]
	private int IndexOfAny(char value1, char value2, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3AFC1B0", Offset = "0x3AFC1B0", VA = "0x3AFC1B0")]
	private int IndexOfAny(char value1, char value2, char value3, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3AFC200", Offset = "0x3AFC200", VA = "0x3AFC200")]
	private int IndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3AFB470", Offset = "0x3AFB470", VA = "0x3AFB470")]
	private unsafe static void InitializeProbabilisticMap(uint* charMap, ReadOnlySpan<char> anyOf)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3AFC3F0", Offset = "0x3AFC3F0", VA = "0x3AFC3F0")]
	private static bool ArrayContains(char searchChar, char[] anyOf)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3AFB510", Offset = "0x3AFB510", VA = "0x3AFB510")]
	private unsafe static bool IsCharBitSet(uint* charMap, byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3AFC420", Offset = "0x3AFC420", VA = "0x3AFC420")]
	private unsafe static void SetCharBit(uint* charMap, byte value)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3AFC440", Offset = "0x3AFC440", VA = "0x3AFC440")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3AFC450", Offset = "0x3AFC450", VA = "0x3AFC450")]
	public int IndexOf(string value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3AFBE10", Offset = "0x3AFBE10", VA = "0x3AFBE10")]
	public int IndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3AFC460", Offset = "0x3AFC460", VA = "0x3AFC460")]
	public int IndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3AFC470", Offset = "0x3AFC470", VA = "0x3AFC470")]
	public int IndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3AFC830", Offset = "0x3AFC830", VA = "0x3AFC830")]
	public int LastIndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3AFC840", Offset = "0x3AFC840", VA = "0x3AFC840")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3AFC850", Offset = "0x3AFC850", VA = "0x3AFC850")]
	public int LastIndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3AFC930", Offset = "0x3AFC930", VA = "0x3AFC930")]
	public int LastIndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3AFCA90", Offset = "0x3AFCA90", VA = "0x3AFCA90")]
	public int LastIndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3AFC940", Offset = "0x3AFC940", VA = "0x3AFC940")]
	public int LastIndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3AFCAA0", Offset = "0x3AFCAA0", VA = "0x3AFCAA0")]
	private int LastIndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3AFCC90", Offset = "0x3AFCC90", VA = "0x3AFCC90")]
	public int LastIndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3AFD0B0", Offset = "0x3AFD0B0", VA = "0x3AFD0B0")]
	public int LastIndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3AFCCA0", Offset = "0x3AFCCA0", VA = "0x3AFCCA0")]
	public int LastIndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3AFD0D0", Offset = "0x3AFD0D0", VA = "0x3AFD0D0")]
	internal int IndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3AFD1F0", Offset = "0x3AFD1F0", VA = "0x3AFD1F0")]
	internal int IndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3AFD470", Offset = "0x3AFD470", VA = "0x3AFD470")]
	internal int LastIndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3AFD570", Offset = "0x3AFD570", VA = "0x3AFD570")]
	internal int LastIndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3AFD750", Offset = "0x3AFD750", VA = "0x3AFD750")]
	internal bool StartsWithOrdinalUnchecked(string value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3AF5920", Offset = "0x3AF5920", VA = "0x3AF5920")]
	internal static extern string FastAllocateString(int length);

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3AFD790", Offset = "0x3AFD790", VA = "0x3AFD790")]
	private unsafe static void memset(byte* dest, int val, int len)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3AFD960", Offset = "0x3AFD960", VA = "0x3AFD960")]
	private unsafe static void memcpy(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3AFD970", Offset = "0x3AFD970", VA = "0x3AFD970")]
	internal unsafe static void bzero(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3AFDAE0", Offset = "0x3AFDAE0", VA = "0x3AFDAE0")]
	internal unsafe static void bzero_aligned_1(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3AFDAF0", Offset = "0x3AFDAF0", VA = "0x3AFDAF0")]
	internal unsafe static void bzero_aligned_2(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3AFDB00", Offset = "0x3AFDB00", VA = "0x3AFDB00")]
	internal unsafe static void bzero_aligned_4(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3AFDB10", Offset = "0x3AFDB10", VA = "0x3AFDB10")]
	internal unsafe static void bzero_aligned_8(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3AFDB20", Offset = "0x3AFDB20", VA = "0x3AFDB20")]
	internal unsafe static void memcpy_aligned_1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3AFDB30", Offset = "0x3AFDB30", VA = "0x3AFDB30")]
	internal unsafe static void memcpy_aligned_2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x3AFDB40", Offset = "0x3AFDB40", VA = "0x3AFDB40")]
	internal unsafe static void memcpy_aligned_4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3AFDB50", Offset = "0x3AFDB50", VA = "0x3AFDB50")]
	internal unsafe static void memcpy_aligned_8(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3AF6160", Offset = "0x3AF6160", VA = "0x3AF6160")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3AFDB60", Offset = "0x3AFDB60", VA = "0x3AFDB60")]
	private unsafe string CreateString(char* value)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3AFDBD0", Offset = "0x3AFDBD0", VA = "0x3AFDBD0")]
	private unsafe string CreateString(char* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3AFDBE0", Offset = "0x3AFDBE0", VA = "0x3AFDBE0")]
	private string CreateString(char[] val, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3AF3BD0", Offset = "0x3AF3BD0", VA = "0x3AF3BD0")]
	private string CreateString(char[] val)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3AFDBF0", Offset = "0x3AFDBF0", VA = "0x3AFDBF0")]
	private string CreateString(char c, int count)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3AFDC00", Offset = "0x3AFDC00", VA = "0x3AFDC00")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3AFDC10", Offset = "0x3AFDC10", VA = "0x3AFDC10")]
	private string CreateString(ReadOnlySpan<char> value)
	{
		return null;
	}
}
