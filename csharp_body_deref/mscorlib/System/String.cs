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
		[Address(RVA = "0x4E175A0", Offset = "0x4E175A0", VA = "0x4E175A0")]
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
		[Address(RVA = "0x4E0A540", Offset = "0x4E0A540", VA = "0x4E0A540")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(char);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4E0E120", Offset = "0x4E0E120", VA = "0x4E0E120")]
	private static bool EqualsHelper(string strA, string strB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4E0E160", Offset = "0x4E0E160", VA = "0x4E0E160")]
	private static int CompareOrdinalHelper(string strA, int indexA, int countA, string strB, int indexB, int countB)
	{
		return default(int);
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4E0E1A0", Offset = "0x4E0E1A0", VA = "0x4E0E1A0")]
	private static int CompareOrdinalHelper(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4E0E340", Offset = "0x4E0E340", VA = "0x4E0E340")]
	public static int Compare(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4E0E630", Offset = "0x4E0E630", VA = "0x4E0E630")]
	public static int Compare(string strA, string strB, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4E0E350", Offset = "0x4E0E350", VA = "0x4E0E350")]
	public static int Compare(string strA, string strB, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4E0E660", Offset = "0x4E0E660", VA = "0x4E0E660")]
	public static int Compare(string strA, string strB, CultureInfo culture, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4E0E700", Offset = "0x4E0E700", VA = "0x4E0E700")]
	public static int Compare(string strA, string strB, bool ignoreCase, CultureInfo culture)
	{
		return default(int);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4E0E710", Offset = "0x4E0E710", VA = "0x4E0E710")]
	public static int Compare(string strA, int indexA, string strB, int indexB, int length, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4E0EBB0", Offset = "0x4E0EBB0", VA = "0x4E0EBB0")]
	public static int CompareOrdinal(string strA, string strB)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4E0EBF0", Offset = "0x4E0EBF0", VA = "0x4E0EBF0")]
	internal static int CompareOrdinal(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4E0EC80", Offset = "0x4E0EC80", VA = "0x4E0EC80")]
	public static int CompareOrdinal(string strA, int indexA, string strB, int indexB, int length)
	{
		return default(int);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4E0EE60", Offset = "0x4E0EE60", VA = "0x4E0EE60", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4E0EED0", Offset = "0x4E0EED0", VA = "0x4E0EED0", Slot = "7")]
	public int CompareTo(string strB)
	{
		return default(int);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4E0EEE0", Offset = "0x4E0EEE0", VA = "0x4E0EEE0")]
	public bool EndsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4E0EEF0", Offset = "0x4E0EEF0", VA = "0x4E0EEF0")]
	public bool EndsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4E0F1F0", Offset = "0x4E0F1F0", VA = "0x4E0F1F0")]
	public bool EndsWith(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4E0F230", Offset = "0x4E0F230", VA = "0x4E0F230", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4E0F290", Offset = "0x4E0F290", VA = "0x4E0F290", Slot = "8")]
	public bool Equals(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4E0F2C0", Offset = "0x4E0F2C0", VA = "0x4E0F2C0")]
	public bool Equals(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4E0F590", Offset = "0x4E0F590", VA = "0x4E0F590")]
	public static bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4E0F5D0", Offset = "0x4E0F5D0", VA = "0x4E0F5D0")]
	public static bool Equals(string a, string b, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4E00130", Offset = "0x4E00130", VA = "0x4E00130")]
	public static bool operator ==(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4E0F8B0", Offset = "0x4E0F8B0", VA = "0x4E0F8B0")]
	public static bool operator !=(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4E0F8F0", Offset = "0x4E0F8F0", VA = "0x4E0F8F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4E0F970", Offset = "0x4E0F970", VA = "0x4E0F970")]
	internal int GetLegacyNonRandomizedHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4E0F9F0", Offset = "0x4E0F9F0", VA = "0x4E0F9F0")]
	public bool StartsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4E0FA50", Offset = "0x4E0FA50", VA = "0x4E0FA50")]
	public bool StartsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4E0E640", Offset = "0x4E0E640", VA = "0x4E0E640")]
	internal static void CheckStringComparison(StringComparison comparisonType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4E0FD80", Offset = "0x4E0FD80", VA = "0x4E0FD80")]
	public extern String(char[] value);

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4E0FD90", Offset = "0x4E0FD90", VA = "0x4E0FD90")]
	private static string Ctor(char[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4E0FE20", Offset = "0x4E0FE20", VA = "0x4E0FE20")]
	public extern String(char[] value, int startIndex, int length);

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4E0FE30", Offset = "0x4E0FE30", VA = "0x4E0FE30")]
	private static string Ctor(char[] value, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4E0FFC0", Offset = "0x4E0FFC0", VA = "0x4E0FFC0")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value);

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4E0FFD0", Offset = "0x4E0FFD0", VA = "0x4E0FFD0")]
	private unsafe static string Ctor(char* ptr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x4E10140", Offset = "0x4E10140", VA = "0x4E10140")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value, int startIndex, int length);

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4E10150", Offset = "0x4E10150", VA = "0x4E10150")]
	private unsafe static string Ctor(char* ptr, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4E102B0", Offset = "0x4E102B0", VA = "0x4E102B0")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length);

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4E102C0", Offset = "0x4E102C0", VA = "0x4E102C0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4E10430", Offset = "0x4E10430", VA = "0x4E10430")]
	private unsafe static string CreateStringForSByteConstructor(byte* pb, int numBytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4E10490", Offset = "0x4E10490", VA = "0x4E10490")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length, Encoding enc);

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4E104A0", Offset = "0x4E104A0", VA = "0x4E104A0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4E10650", Offset = "0x4E10650", VA = "0x4E10650")]
	public extern String(char c, int count);

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4E10660", Offset = "0x4E10660", VA = "0x4E10660")]
	private static string Ctor(char c, int count)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4E107B0", Offset = "0x4E107B0", VA = "0x4E107B0")]
	public extern String(ReadOnlySpan<char> value);

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4E107C0", Offset = "0x4E107C0", VA = "0x4E107C0")]
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
	[Address(RVA = "0x4E10870", Offset = "0x4E10870", VA = "0x4E10870")]
	public static implicit operator ReadOnlySpan<char>(string value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4E108B0", Offset = "0x4E108B0", VA = "0x4E108B0", Slot = "26")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4E108C0", Offset = "0x4E108C0", VA = "0x4E108C0")]
	public static string Copy(string str)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4E10950", Offset = "0x4E10950", VA = "0x4E10950")]
	public void CopyTo(int sourceIndex, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4E10AD0", Offset = "0x4E10AD0", VA = "0x4E10AD0")]
	public char[] ToCharArray()
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4E10BF0", Offset = "0x4E10BF0", VA = "0x4E10BF0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNullOrEmpty(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4E10C10", Offset = "0x4E10C10", VA = "0x4E10C10")]
	public static bool IsNullOrWhiteSpace(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4E0E150", Offset = "0x4E0E150", VA = "0x4E0E150")]
	internal unsafe ref char GetRawStringData()
	{
		return ref *(char*)null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4E10CA0", Offset = "0x4E10CA0", VA = "0x4E10CA0")]
	internal unsafe static string CreateStringFromEncoding(byte* bytes, int byteLength, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4E10D50", Offset = "0x4E10D50", VA = "0x4E10D50")]
	internal static string CreateFromChar(char c)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4E0FE10", Offset = "0x4E0FE10", VA = "0x4E0FE10")]
	internal unsafe static void wstrcpy(char* dmem, char* smem, int charCount)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4E10D70", Offset = "0x4E10D70", VA = "0x4E10D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4E10D80", Offset = "0x4E10D80", VA = "0x4E10D80", Slot = "24")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4E10D90", Offset = "0x4E10D90", VA = "0x4E10D90", Slot = "6")]
	private IEnumerator<char> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EChar_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4E10DE0", Offset = "0x4E10DE0", VA = "0x4E10DE0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4E10040", Offset = "0x4E10040", VA = "0x4E10040")]
	internal unsafe static int wcslen(char* ptr)
	{
		return default(int);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4E10E30", Offset = "0x4E10E30", VA = "0x4E10E30", Slot = "9")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4E10E40", Offset = "0x4E10E40", VA = "0x4E10E40", Slot = "10")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4E10EA0", Offset = "0x4E10EA0", VA = "0x4E10EA0", Slot = "11")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4E10F00", Offset = "0x4E10F00", VA = "0x4E10F00", Slot = "12")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4E10F60", Offset = "0x4E10F60", VA = "0x4E10F60", Slot = "13")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4E10FC0", Offset = "0x4E10FC0", VA = "0x4E10FC0", Slot = "14")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4E11020", Offset = "0x4E11020", VA = "0x4E11020", Slot = "15")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4E11080", Offset = "0x4E11080", VA = "0x4E11080", Slot = "16")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4E110E0", Offset = "0x4E110E0", VA = "0x4E110E0", Slot = "17")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4E11140", Offset = "0x4E11140", VA = "0x4E11140", Slot = "18")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4E111A0", Offset = "0x4E111A0", VA = "0x4E111A0", Slot = "19")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x4E11200", Offset = "0x4E11200", VA = "0x4E11200", Slot = "20")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x4E11260", Offset = "0x4E11260", VA = "0x4E11260", Slot = "21")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4E112C0", Offset = "0x4E112C0", VA = "0x4E112C0", Slot = "22")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x4E11320", Offset = "0x4E11320", VA = "0x4E11320", Slot = "23")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4E11380", Offset = "0x4E11380", VA = "0x4E11380", Slot = "25")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4E113E0", Offset = "0x4E113E0", VA = "0x4E113E0")]
	public string Normalize(NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4E11430", Offset = "0x4E11430", VA = "0x4E11430")]
	private static void FillStringChecked(string dest, int destPos, string src)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4E114B0", Offset = "0x4E114B0", VA = "0x4E114B0")]
	public static string Concat(object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4E11550", Offset = "0x4E11550", VA = "0x4E11550")]
	public static string Concat(object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4E116E0", Offset = "0x4E116E0", VA = "0x4E116E0")]
	public static string Concat(params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4E00080", Offset = "0x4E00080", VA = "0x4E00080")]
	public static string Concat(string str0, string str1)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4E11630", Offset = "0x4E11630", VA = "0x4E11630")]
	public static string Concat(string str0, string str1, string str2)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4E11950", Offset = "0x4E11950", VA = "0x4E11950")]
	public static string Concat(string str0, string str1, string str2, string str3)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4E11A50", Offset = "0x4E11A50", VA = "0x4E11A50")]
	public static string Concat(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4E04F40", Offset = "0x4E04F40", VA = "0x4E04F40")]
	public static string Format(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4E11DC0", Offset = "0x4E11DC0", VA = "0x4E11DC0")]
	public static string Format(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4E11E10", Offset = "0x4E11E10", VA = "0x4E11E10")]
	public static string Format(string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4E11E60", Offset = "0x4E11E60", VA = "0x4E11E60")]
	public static string Format(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4E11F10", Offset = "0x4E11F10", VA = "0x4E11F10")]
	public static string Format(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4E11F60", Offset = "0x4E11F60", VA = "0x4E11F60")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x4E11FC0", Offset = "0x4E11FC0", VA = "0x4E11FC0")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4E12020", Offset = "0x4E12020", VA = "0x4E12020")]
	public static string Format(IFormatProvider provider, string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4E11CB0", Offset = "0x4E11CB0", VA = "0x4E11CB0")]
	private static string FormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4E120D0", Offset = "0x4E120D0", VA = "0x4E120D0")]
	public string Insert(int startIndex, string value)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4E12210", Offset = "0x4E12210", VA = "0x4E12210")]
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
	[Address(RVA = "0x4E122E0", Offset = "0x4E122E0", VA = "0x4E122E0")]
	public static string Join(string separator, IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x4E122A0", Offset = "0x4E122A0", VA = "0x4E122A0")]
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
	[Address(RVA = "0x4E12860", Offset = "0x4E12860", VA = "0x4E12860")]
	private unsafe static string JoinCore(char* separator, int separatorLength, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4E12DE0", Offset = "0x4E12DE0", VA = "0x4E12DE0")]
	public string PadLeft(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4E12F10", Offset = "0x4E12F10", VA = "0x4E12F10")]
	public string PadRight(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4E13060", Offset = "0x4E13060", VA = "0x4E13060")]
	public string Remove(int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4E131D0", Offset = "0x4E131D0", VA = "0x4E131D0")]
	public string Remove(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x4E13410", Offset = "0x4E13410", VA = "0x4E13410")]
	public string Replace(char oldChar, char newChar)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4E13510", Offset = "0x4E13510", VA = "0x4E13510")]
	public string Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4E13810", Offset = "0x4E13810", VA = "0x4E13810")]
	private string ReplaceHelper(int oldValueLength, string newValue, ReadOnlySpan<int> indices)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4E13BA0", Offset = "0x4E13BA0", VA = "0x4E13BA0")]
	public string[] Split(char separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4E13F50", Offset = "0x4E13F50", VA = "0x4E13F50")]
	public string[] Split(params char[] separator)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4E13FB0", Offset = "0x4E13FB0", VA = "0x4E13FB0")]
	public string[] Split(char[] separator, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4E14000", Offset = "0x4E14000", VA = "0x4E14000")]
	public string[] Split(char[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4E13BF0", Offset = "0x4E13BF0", VA = "0x4E13BF0")]
	private string[] SplitInternal(ReadOnlySpan<char> separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4E14C20", Offset = "0x4E14C20", VA = "0x4E14C20")]
	public string[] Split(string separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4E15070", Offset = "0x4E15070", VA = "0x4E15070")]
	public string[] Split(string[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4E14C60", Offset = "0x4E14C60", VA = "0x4E14C60")]
	private string[] SplitInternal(string separator, string[] separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4E15090", Offset = "0x4E15090", VA = "0x4E15090")]
	private string[] SplitInternal(string separator, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4E14630", Offset = "0x4E14630", VA = "0x4E14630")]
	private string[] SplitKeepEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4E14850", Offset = "0x4E14850", VA = "0x4E14850")]
	private string[] SplitOmitEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4E14060", Offset = "0x4E14060", VA = "0x4E14060")]
	private void MakeSeparatorList(ReadOnlySpan<char> separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4E15580", Offset = "0x4E15580", VA = "0x4E15580")]
	private void MakeSeparatorList(string separator, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4E15220", Offset = "0x4E15220", VA = "0x4E15220")]
	private void MakeSeparatorList(string[] separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder, ref System.Collections.Generic.ValueListBuilder<int> lengthListBuilder)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4E15940", Offset = "0x4E15940", VA = "0x4E15940")]
	public string Substring(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4E13280", Offset = "0x4E13280", VA = "0x4E13280")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4E15A10", Offset = "0x4E15A10", VA = "0x4E15A10")]
	private string InternalSubString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4E15A60", Offset = "0x4E15A60", VA = "0x4E15A60")]
	public string ToLower()
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4E15B00", Offset = "0x4E15B00", VA = "0x4E15B00")]
	public string ToLower(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4E15B90", Offset = "0x4E15B90", VA = "0x4E15B90")]
	public string ToLowerInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4E15C30", Offset = "0x4E15C30", VA = "0x4E15C30")]
	public string ToUpper()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4E15CD0", Offset = "0x4E15CD0", VA = "0x4E15CD0")]
	public string ToUpper(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4E15D60", Offset = "0x4E15D60", VA = "0x4E15D60")]
	public string ToUpperInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4E15E00", Offset = "0x4E15E00", VA = "0x4E15E00")]
	public string Trim()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4E15F70", Offset = "0x4E15F70", VA = "0x4E15F70")]
	public string Trim(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4E16150", Offset = "0x4E16150", VA = "0x4E16150")]
	public string Trim(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4E16190", Offset = "0x4E16190", VA = "0x4E16190")]
	public string TrimStart(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4E161B0", Offset = "0x4E161B0", VA = "0x4E161B0")]
	public string TrimStart(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4E161E0", Offset = "0x4E161E0", VA = "0x4E161E0")]
	public string TrimEnd()
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4E161F0", Offset = "0x4E161F0", VA = "0x4E161F0")]
	public string TrimEnd(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4E16210", Offset = "0x4E16210", VA = "0x4E16210")]
	public string TrimEnd(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4E15E10", Offset = "0x4E15E10", VA = "0x4E15E10")]
	private string TrimWhiteSpaceHelper(TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4E15F90", Offset = "0x4E15F90", VA = "0x4E15F90")]
	private unsafe string TrimHelper(char* trimChars, int trimCharsLength, TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4E16250", Offset = "0x4E16250", VA = "0x4E16250")]
	private string CreateTrimmedString(int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4E162D0", Offset = "0x4E162D0", VA = "0x4E162D0")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4E16300", Offset = "0x4E16300", VA = "0x4E16300")]
	public bool Contains(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4E16320", Offset = "0x4E16320", VA = "0x4E16320")]
	public int IndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4E16330", Offset = "0x4E16330", VA = "0x4E16330")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4E16340", Offset = "0x4E16340", VA = "0x4E16340")]
	public int IndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4E16400", Offset = "0x4E16400", VA = "0x4E16400")]
	public int IndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4E16610", Offset = "0x4E16610", VA = "0x4E16610")]
	public int IndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4E16410", Offset = "0x4E16410", VA = "0x4E16410")]
	public int IndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4E16620", Offset = "0x4E16620", VA = "0x4E16620")]
	private int IndexOfAny(char value1, char value2, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4E16690", Offset = "0x4E16690", VA = "0x4E16690")]
	private int IndexOfAny(char value1, char value2, char value3, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4E166E0", Offset = "0x4E166E0", VA = "0x4E166E0")]
	private int IndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4E15950", Offset = "0x4E15950", VA = "0x4E15950")]
	private unsafe static void InitializeProbabilisticMap(uint* charMap, ReadOnlySpan<char> anyOf)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4E168D0", Offset = "0x4E168D0", VA = "0x4E168D0")]
	private static bool ArrayContains(char searchChar, char[] anyOf)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4E159F0", Offset = "0x4E159F0", VA = "0x4E159F0")]
	private unsafe static bool IsCharBitSet(uint* charMap, byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4E16900", Offset = "0x4E16900", VA = "0x4E16900")]
	private unsafe static void SetCharBit(uint* charMap, byte value)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4E16920", Offset = "0x4E16920", VA = "0x4E16920")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4E16930", Offset = "0x4E16930", VA = "0x4E16930")]
	public int IndexOf(string value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4E162F0", Offset = "0x4E162F0", VA = "0x4E162F0")]
	public int IndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4E16940", Offset = "0x4E16940", VA = "0x4E16940")]
	public int IndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4E16950", Offset = "0x4E16950", VA = "0x4E16950")]
	public int IndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4E16D10", Offset = "0x4E16D10", VA = "0x4E16D10")]
	public int LastIndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4E16D20", Offset = "0x4E16D20", VA = "0x4E16D20")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4E16D30", Offset = "0x4E16D30", VA = "0x4E16D30")]
	public int LastIndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4E16E10", Offset = "0x4E16E10", VA = "0x4E16E10")]
	public int LastIndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4E16F70", Offset = "0x4E16F70", VA = "0x4E16F70")]
	public int LastIndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4E16E20", Offset = "0x4E16E20", VA = "0x4E16E20")]
	public int LastIndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4E16F80", Offset = "0x4E16F80", VA = "0x4E16F80")]
	private int LastIndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4E17170", Offset = "0x4E17170", VA = "0x4E17170")]
	public int LastIndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4E17590", Offset = "0x4E17590", VA = "0x4E17590")]
	public int LastIndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4E17180", Offset = "0x4E17180", VA = "0x4E17180")]
	public int LastIndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4E175B0", Offset = "0x4E175B0", VA = "0x4E175B0")]
	internal int IndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4E176D0", Offset = "0x4E176D0", VA = "0x4E176D0")]
	internal int IndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4E17950", Offset = "0x4E17950", VA = "0x4E17950")]
	internal int LastIndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4E17A50", Offset = "0x4E17A50", VA = "0x4E17A50")]
	internal int LastIndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4E17C30", Offset = "0x4E17C30", VA = "0x4E17C30")]
	internal bool StartsWithOrdinalUnchecked(string value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4E0FE00", Offset = "0x4E0FE00", VA = "0x4E0FE00")]
	internal static extern string FastAllocateString(int length);

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4E17C70", Offset = "0x4E17C70", VA = "0x4E17C70")]
	private unsafe static void memset(byte* dest, int val, int len)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4E17E40", Offset = "0x4E17E40", VA = "0x4E17E40")]
	private unsafe static void memcpy(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4E17E50", Offset = "0x4E17E50", VA = "0x4E17E50")]
	internal unsafe static void bzero(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4E17FC0", Offset = "0x4E17FC0", VA = "0x4E17FC0")]
	internal unsafe static void bzero_aligned_1(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4E17FD0", Offset = "0x4E17FD0", VA = "0x4E17FD0")]
	internal unsafe static void bzero_aligned_2(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4E17FE0", Offset = "0x4E17FE0", VA = "0x4E17FE0")]
	internal unsafe static void bzero_aligned_4(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4E17FF0", Offset = "0x4E17FF0", VA = "0x4E17FF0")]
	internal unsafe static void bzero_aligned_8(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4E18000", Offset = "0x4E18000", VA = "0x4E18000")]
	internal unsafe static void memcpy_aligned_1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4E18010", Offset = "0x4E18010", VA = "0x4E18010")]
	internal unsafe static void memcpy_aligned_2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4E18020", Offset = "0x4E18020", VA = "0x4E18020")]
	internal unsafe static void memcpy_aligned_4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4E18030", Offset = "0x4E18030", VA = "0x4E18030")]
	internal unsafe static void memcpy_aligned_8(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4E10640", Offset = "0x4E10640", VA = "0x4E10640")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4E18040", Offset = "0x4E18040", VA = "0x4E18040")]
	private unsafe string CreateString(char* value)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4E180B0", Offset = "0x4E180B0", VA = "0x4E180B0")]
	private unsafe string CreateString(char* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4E180C0", Offset = "0x4E180C0", VA = "0x4E180C0")]
	private string CreateString(char[] val, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4E0E0B0", Offset = "0x4E0E0B0", VA = "0x4E0E0B0")]
	private string CreateString(char[] val)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4E180D0", Offset = "0x4E180D0", VA = "0x4E180D0")]
	private string CreateString(char c, int count)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4E180E0", Offset = "0x4E180E0", VA = "0x4E180E0")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4E180F0", Offset = "0x4E180F0", VA = "0x4E180F0")]
	private string CreateString(ReadOnlySpan<char> value)
	{
		return null;
	}
}
