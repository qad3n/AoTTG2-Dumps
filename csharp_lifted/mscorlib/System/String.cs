// ==================== AoTTG2 cross-reference ====================
// Type: System.String
// Update status: CHANGED in this game update
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
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x5308580", Offset = "0x5307580", VA = "0x5308580")]
		get
		{
			return default(int);
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x1700003E")]
	public char this[int index]
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x52FAB60", Offset = "0x52F9B60", VA = "0x52FAB60")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(char);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000240")]
	[Address(RVA = "0x52FE9A0", Offset = "0x52FD9A0", VA = "0x52FE9A0")]
	private static bool EqualsHelper(string strA, string strB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000241")]
	[Address(RVA = "0x52FE9E0", Offset = "0x52FD9E0", VA = "0x52FE9E0")]
	private static int CompareOrdinalHelper(string strA, int indexA, int countA, string strB, int indexB, int countB)
	{
		return default(int);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x52FEA20", Offset = "0x52FDA20", VA = "0x52FEA20")]
	private static int CompareOrdinalHelper(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x52FEBE0", Offset = "0x52FDBE0", VA = "0x52FEBE0")]
	public static int Compare(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x52FEED0", Offset = "0x52FDED0", VA = "0x52FEED0")]
	public static int Compare(string strA, string strB, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x52FEBF0", Offset = "0x52FDBF0", VA = "0x52FEBF0")]
	public static int Compare(string strA, string strB, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x52FEF00", Offset = "0x52FDF00", VA = "0x52FEF00")]
	public static int Compare(string strA, string strB, CultureInfo culture, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x52FEFA0", Offset = "0x52FDFA0", VA = "0x52FEFA0")]
	public static int Compare(string strA, string strB, bool ignoreCase, CultureInfo culture)
	{
		return default(int);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x52FEFB0", Offset = "0x52FDFB0", VA = "0x52FEFB0")]
	public static int Compare(string strA, int indexA, string strB, int indexB, int length, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x52FF440", Offset = "0x52FE440", VA = "0x52FF440")]
	public static int CompareOrdinal(string strA, string strB)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024A")]
	[Address(RVA = "0x52FF480", Offset = "0x52FE480", VA = "0x52FF480")]
	internal static int CompareOrdinal(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x52FF510", Offset = "0x52FE510", VA = "0x52FF510")]
	public static int CompareOrdinal(string strA, int indexA, string strB, int indexB, int length)
	{
		return default(int);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x52FF6F0", Offset = "0x52FE6F0", VA = "0x52FF6F0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x52FF760", Offset = "0x52FE760", VA = "0x52FF760", Slot = "7")]
	public int CompareTo(string strB)
	{
		return default(int);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x52FF770", Offset = "0x52FE770", VA = "0x52FF770")]
	public bool EndsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x52FF780", Offset = "0x52FE780", VA = "0x52FF780")]
	public bool EndsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x52FFA70", Offset = "0x52FEA70", VA = "0x52FFA70")]
	public bool EndsWith(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x52FFAB0", Offset = "0x52FEAB0", VA = "0x52FFAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x52FFAF0", Offset = "0x52FEAF0", VA = "0x52FFAF0", Slot = "8")]
	public bool Equals(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x52FFB20", Offset = "0x52FEB20", VA = "0x52FFB20")]
	public bool Equals(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x52FFDF0", Offset = "0x52FEDF0", VA = "0x52FFDF0")]
	public static bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x52FFE30", Offset = "0x52FEE30", VA = "0x52FFE30")]
	public static bool Equals(string a, string b, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x52F03B0", Offset = "0x52EF3B0", VA = "0x52F03B0")]
	public static bool operator ==(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x5300110", Offset = "0x52FF110", VA = "0x5300110")]
	public static bool operator !=(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x5300150", Offset = "0x52FF150", VA = "0x5300150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x53001D0", Offset = "0x52FF1D0", VA = "0x53001D0")]
	internal int GetLegacyNonRandomizedHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5300250", Offset = "0x52FF250", VA = "0x5300250")]
	public bool StartsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x53002B0", Offset = "0x52FF2B0", VA = "0x53002B0")]
	public bool StartsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x52FEEE0", Offset = "0x52FDEE0", VA = "0x52FEEE0")]
	internal static void CheckStringComparison(StringComparison comparisonType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x53005D0", Offset = "0x52FF5D0", VA = "0x53005D0")]
	public extern String(char[] value);

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x53005E0", Offset = "0x52FF5E0", VA = "0x53005E0")]
	private static string Ctor(char[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x5300670", Offset = "0x52FF670", VA = "0x5300670")]
	public extern String(char[] value, int startIndex, int length);

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x5300680", Offset = "0x52FF680", VA = "0x5300680")]
	private static string Ctor(char[] value, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x5300810", Offset = "0x52FF810", VA = "0x5300810")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value);

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5300820", Offset = "0x52FF820", VA = "0x5300820")]
	private unsafe static string Ctor(char* ptr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x5300990", Offset = "0x52FF990", VA = "0x5300990")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value, int startIndex, int length);

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x53009A0", Offset = "0x52FF9A0", VA = "0x53009A0")]
	private unsafe static string Ctor(char* ptr, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000265")]
	[Address(RVA = "0x5300B00", Offset = "0x52FFB00", VA = "0x5300B00")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length);

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x5300B10", Offset = "0x52FFB10", VA = "0x5300B10")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x5300C80", Offset = "0x52FFC80", VA = "0x5300C80")]
	private unsafe static string CreateStringForSByteConstructor(byte* pb, int numBytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5300CE0", Offset = "0x52FFCE0", VA = "0x5300CE0")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length, Encoding enc);

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5300CF0", Offset = "0x52FFCF0", VA = "0x5300CF0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x5300EA0", Offset = "0x52FFEA0", VA = "0x5300EA0")]
	public extern String(char c, int count);

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x5300EB0", Offset = "0x52FFEB0", VA = "0x5300EB0")]
	private static string Ctor(char c, int count)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600026C")]
	[Address(RVA = "0x5301020", Offset = "0x5300020", VA = "0x5301020")]
	public extern String(ReadOnlySpan<char> value);

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x5301030", Offset = "0x5300030", VA = "0x5301030")]
	private static string Ctor(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	public static string Create<TState>(int length, TState state, SpanAction<char, TState> action)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x53010E0", Offset = "0x53000E0", VA = "0x53010E0")]
	public static implicit operator ReadOnlySpan<char>(string value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x5301120", Offset = "0x5300120", VA = "0x5301120", Slot = "26")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x5301130", Offset = "0x5300130", VA = "0x5301130")]
	public static string Copy(string str)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x53011C0", Offset = "0x53001C0", VA = "0x53011C0")]
	public void CopyTo(int sourceIndex, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x5301370", Offset = "0x5300370", VA = "0x5301370")]
	public char[] ToCharArray()
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x5301490", Offset = "0x5300490", VA = "0x5301490")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNullOrEmpty(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x53014B0", Offset = "0x53004B0", VA = "0x53014B0")]
	public static bool IsNullOrWhiteSpace(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x52FE9D0", Offset = "0x52FD9D0", VA = "0x52FE9D0")]
	internal unsafe ref char GetRawStringData()
	{
		return ref *(char*)null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x5301510", Offset = "0x5300510", VA = "0x5301510")]
	internal unsafe static string CreateStringFromEncoding(byte* bytes, int byteLength, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x53015C0", Offset = "0x53005C0", VA = "0x53015C0")]
	internal static string CreateFromChar(char c)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x5300660", Offset = "0x52FF660", VA = "0x5300660")]
	internal unsafe static void wstrcpy(char* dmem, char* smem, int charCount)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x53015E0", Offset = "0x53005E0", VA = "0x53015E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x53015F0", Offset = "0x53005F0", VA = "0x53015F0", Slot = "24")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x5301600", Offset = "0x5300600", VA = "0x5301600", Slot = "6")]
	private IEnumerator<char> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EChar_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x5301650", Offset = "0x5300650", VA = "0x5301650", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x5300890", Offset = "0x52FF890", VA = "0x5300890")]
	internal unsafe static int wcslen(char* ptr)
	{
		return default(int);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x53016A0", Offset = "0x53006A0", VA = "0x53016A0", Slot = "9")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x53016B0", Offset = "0x53006B0", VA = "0x53016B0", Slot = "10")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x5301710", Offset = "0x5300710", VA = "0x5301710", Slot = "11")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x5301770", Offset = "0x5300770", VA = "0x5301770", Slot = "12")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x53017D0", Offset = "0x53007D0", VA = "0x53017D0", Slot = "13")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x5301830", Offset = "0x5300830", VA = "0x5301830", Slot = "14")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5301890", Offset = "0x5300890", VA = "0x5301890", Slot = "15")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x53018F0", Offset = "0x53008F0", VA = "0x53018F0", Slot = "16")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5301950", Offset = "0x5300950", VA = "0x5301950", Slot = "17")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x53019B0", Offset = "0x53009B0", VA = "0x53019B0", Slot = "18")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x5301A10", Offset = "0x5300A10", VA = "0x5301A10", Slot = "19")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x5301A70", Offset = "0x5300A70", VA = "0x5301A70", Slot = "20")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x5301AD0", Offset = "0x5300AD0", VA = "0x5301AD0", Slot = "21")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x5301B30", Offset = "0x5300B30", VA = "0x5301B30", Slot = "22")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x5301B90", Offset = "0x5300B90", VA = "0x5301B90", Slot = "23")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5301BF0", Offset = "0x5300BF0", VA = "0x5301BF0", Slot = "25")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x5301C50", Offset = "0x5300C50", VA = "0x5301C50")]
	public string Normalize(NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x5301CA0", Offset = "0x5300CA0", VA = "0x5301CA0")]
	private static void FillStringChecked(string dest, int destPos, string src)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x5301D20", Offset = "0x5300D20", VA = "0x5301D20")]
	public static string Concat(object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x5301E30", Offset = "0x5300E30", VA = "0x5301E30")]
	public static string Concat(object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x5302070", Offset = "0x5301070", VA = "0x5302070")]
	public static string Concat(params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x53022F0", Offset = "0x53012F0", VA = "0x53022F0")]
	public static string Concat(IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x52F0320", Offset = "0x52EF320", VA = "0x52F0320")]
	public static string Concat(string str0, string str1)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5301F10", Offset = "0x5300F10", VA = "0x5301F10")]
	public static string Concat(string str0, string str1, string str2)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5302810", Offset = "0x5301810", VA = "0x5302810")]
	public static string Concat(string str0, string str1, string str2, string str3)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5302910", Offset = "0x5301910", VA = "0x5302910")]
	public static string Concat(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x52F51C0", Offset = "0x52F41C0", VA = "0x52F51C0")]
	public static string Format(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5302C50", Offset = "0x5301C50", VA = "0x5302C50")]
	public static string Format(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x5302CA0", Offset = "0x5301CA0", VA = "0x5302CA0")]
	public static string Format(string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x5302CF0", Offset = "0x5301CF0", VA = "0x5302CF0")]
	public static string Format(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x5302DA0", Offset = "0x5301DA0", VA = "0x5302DA0")]
	public static string Format(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x5302DF0", Offset = "0x5301DF0", VA = "0x5302DF0")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x5302E50", Offset = "0x5301E50", VA = "0x5302E50")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x5302EB0", Offset = "0x5301EB0", VA = "0x5302EB0")]
	public static string Format(IFormatProvider provider, string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x5302B50", Offset = "0x5301B50", VA = "0x5302B50")]
	private static string FormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x5302F60", Offset = "0x5301F60", VA = "0x5302F60")]
	public string Insert(int startIndex, string value)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	public static string Join<T>(char separator, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x53030A0", Offset = "0x53020A0", VA = "0x53030A0")]
	public static string Join(string separator, params string[] value)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5303170", Offset = "0x5302170", VA = "0x5303170")]
	public static string Join(string separator, params object[] values)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	public static string Join<T>(string separator, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5303350", Offset = "0x5302350", VA = "0x5303350")]
	public static string Join(string separator, IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5303130", Offset = "0x5302130", VA = "0x5303130")]
	public static string Join(string separator, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x53031B0", Offset = "0x53021B0", VA = "0x53031B0")]
	private unsafe static string JoinCore(char* separator, int separatorLength, object[] values)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	private unsafe static string JoinCore<T>(char* separator, int separatorLength, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5303880", Offset = "0x5302880", VA = "0x5303880")]
	private unsafe static string JoinCore(char* separator, int separatorLength, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x5303E50", Offset = "0x5302E50", VA = "0x5303E50")]
	public string PadLeft(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x5303F80", Offset = "0x5302F80", VA = "0x5303F80")]
	public string PadRight(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x53040D0", Offset = "0x53030D0", VA = "0x53040D0")]
	public string Remove(int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x5304240", Offset = "0x5303240", VA = "0x5304240")]
	public string Remove(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x5304480", Offset = "0x5303480", VA = "0x5304480")]
	public string Replace(char oldChar, char newChar)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x5304550", Offset = "0x5303550", VA = "0x5304550")]
	public string Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x5304830", Offset = "0x5303830", VA = "0x5304830")]
	private string ReplaceHelper(int oldValueLength, string newValue, ReadOnlySpan<int> indices)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x5304BC0", Offset = "0x5303BC0", VA = "0x5304BC0")]
	public string[] Split(char separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5304F50", Offset = "0x5303F50", VA = "0x5304F50")]
	public string[] Split(params char[] separator)
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5304FB0", Offset = "0x5303FB0", VA = "0x5304FB0")]
	public string[] Split(char[] separator, int count)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x5305000", Offset = "0x5304000", VA = "0x5305000")]
	public string[] Split(char[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x5304C10", Offset = "0x5303C10", VA = "0x5304C10")]
	private string[] SplitInternal(ReadOnlySpan<char> separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x5305BE0", Offset = "0x5304BE0", VA = "0x5305BE0")]
	public string[] Split(string separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5306040", Offset = "0x5305040", VA = "0x5306040")]
	public string[] Split(string[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x5305C20", Offset = "0x5304C20", VA = "0x5305C20")]
	private string[] SplitInternal(string separator, string[] separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5306060", Offset = "0x5305060", VA = "0x5306060")]
	private string[] SplitInternal(string separator, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x53055D0", Offset = "0x53045D0", VA = "0x53055D0")]
	private string[] SplitKeepEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x5305810", Offset = "0x5304810", VA = "0x5305810")]
	private string[] SplitOmitEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x5305060", Offset = "0x5304060", VA = "0x5305060")]
	private void MakeSeparatorList(ReadOnlySpan<char> separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5306630", Offset = "0x5305630", VA = "0x5306630")]
	private void MakeSeparatorList(string separator, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x5306200", Offset = "0x5305200", VA = "0x5306200")]
	private void MakeSeparatorList(string[] separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder, ref System.Collections.Generic.ValueListBuilder<int> lengthListBuilder)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x5306890", Offset = "0x5305890", VA = "0x5306890")]
	public string Substring(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x53042F0", Offset = "0x53032F0", VA = "0x53042F0")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x5306960", Offset = "0x5305960", VA = "0x5306960")]
	private string InternalSubString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x53069B0", Offset = "0x53059B0", VA = "0x53069B0")]
	public string ToLower()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5306A50", Offset = "0x5305A50", VA = "0x5306A50")]
	public string ToLower(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x5306AE0", Offset = "0x5305AE0", VA = "0x5306AE0")]
	public string ToLowerInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5306B80", Offset = "0x5305B80", VA = "0x5306B80")]
	public string ToUpper()
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x5306C20", Offset = "0x5305C20", VA = "0x5306C20")]
	public string ToUpper(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x5306CB0", Offset = "0x5305CB0", VA = "0x5306CB0")]
	public string ToUpperInvariant()
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x5306D50", Offset = "0x5305D50", VA = "0x5306D50")]
	public string Trim()
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x5306EC0", Offset = "0x5305EC0", VA = "0x5306EC0")]
	public string Trim(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x5307100", Offset = "0x5306100", VA = "0x5307100")]
	public string Trim(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5307140", Offset = "0x5306140", VA = "0x5307140")]
	public string TrimStart()
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x5307150", Offset = "0x5306150", VA = "0x5307150")]
	public string TrimStart(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x5307170", Offset = "0x5306170", VA = "0x5307170")]
	public string TrimStart(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x53071A0", Offset = "0x53061A0", VA = "0x53071A0")]
	public string TrimEnd()
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x53071B0", Offset = "0x53061B0", VA = "0x53071B0")]
	public string TrimEnd(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x53071D0", Offset = "0x53061D0", VA = "0x53071D0")]
	public string TrimEnd(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x5306D60", Offset = "0x5305D60", VA = "0x5306D60")]
	private string TrimWhiteSpaceHelper(TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x5306EE0", Offset = "0x5305EE0", VA = "0x5306EE0")]
	private unsafe string TrimHelper(char* trimChars, int trimCharsLength, TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x5307210", Offset = "0x5306210", VA = "0x5307210")]
	private string CreateTrimmedString(int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5307290", Offset = "0x5306290", VA = "0x5307290")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x53072C0", Offset = "0x53062C0", VA = "0x53072C0")]
	public bool Contains(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x53072E0", Offset = "0x53062E0", VA = "0x53072E0")]
	public int IndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x53072F0", Offset = "0x53062F0", VA = "0x53072F0")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5307300", Offset = "0x5306300", VA = "0x5307300")]
	public int IndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x53073C0", Offset = "0x53063C0", VA = "0x53073C0")]
	public int IndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x53075E0", Offset = "0x53065E0", VA = "0x53075E0")]
	public int IndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x53073D0", Offset = "0x53063D0", VA = "0x53073D0")]
	public int IndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x53075F0", Offset = "0x53065F0", VA = "0x53075F0")]
	private int IndexOfAny(char value1, char value2, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x5307670", Offset = "0x5306670", VA = "0x5307670")]
	private int IndexOfAny(char value1, char value2, char value3, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x53076D0", Offset = "0x53066D0", VA = "0x53076D0")]
	private int IndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x53068A0", Offset = "0x53058A0", VA = "0x53068A0")]
	private unsafe static void InitializeProbabilisticMap(uint* charMap, ReadOnlySpan<char> anyOf)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x53078C0", Offset = "0x53068C0", VA = "0x53078C0")]
	private static bool ArrayContains(char searchChar, char[] anyOf)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x5306940", Offset = "0x5305940", VA = "0x5306940")]
	private unsafe static bool IsCharBitSet(uint* charMap, byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x5307910", Offset = "0x5306910", VA = "0x5307910")]
	private unsafe static void SetCharBit(uint* charMap, byte value)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x5307930", Offset = "0x5306930", VA = "0x5307930")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5307940", Offset = "0x5306940", VA = "0x5307940")]
	public int IndexOf(string value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x53072B0", Offset = "0x53062B0", VA = "0x53072B0")]
	public int IndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x5307950", Offset = "0x5306950", VA = "0x5307950")]
	public int IndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x5307960", Offset = "0x5306960", VA = "0x5307960")]
	public int IndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x5307D10", Offset = "0x5306D10", VA = "0x5307D10")]
	public int LastIndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x5307D20", Offset = "0x5306D20", VA = "0x5307D20")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x5307D30", Offset = "0x5306D30", VA = "0x5307D30")]
	public int LastIndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5307E00", Offset = "0x5306E00", VA = "0x5307E00")]
	public int LastIndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x5307F40", Offset = "0x5306F40", VA = "0x5307F40")]
	public int LastIndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x5307E10", Offset = "0x5306E10", VA = "0x5307E10")]
	public int LastIndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x5307F50", Offset = "0x5306F50", VA = "0x5307F50")]
	private int LastIndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x5308140", Offset = "0x5307140", VA = "0x5308140")]
	public int LastIndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x5308560", Offset = "0x5307560", VA = "0x5308560")]
	public int LastIndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x5308570", Offset = "0x5307570", VA = "0x5308570")]
	public int LastIndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x5308150", Offset = "0x5307150", VA = "0x5308150")]
	public int LastIndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5308590", Offset = "0x5307590", VA = "0x5308590")]
	internal int IndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x53086B0", Offset = "0x53076B0", VA = "0x53086B0")]
	internal int IndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x5308930", Offset = "0x5307930", VA = "0x5308930")]
	internal int LastIndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x5308A20", Offset = "0x5307A20", VA = "0x5308A20")]
	internal int LastIndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x5308C10", Offset = "0x5307C10", VA = "0x5308C10")]
	internal bool StartsWithOrdinalUnchecked(string value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5300650", Offset = "0x52FF650", VA = "0x5300650")]
	internal static extern string FastAllocateString(int length);

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5308C50", Offset = "0x5307C50", VA = "0x5308C50")]
	private unsafe static void memset(byte* dest, int val, int len)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x5308DB0", Offset = "0x5307DB0", VA = "0x5308DB0")]
	private unsafe static void memcpy(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x5308DC0", Offset = "0x5307DC0", VA = "0x5308DC0")]
	internal unsafe static void bzero(byte* dest, int len)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x5308EF0", Offset = "0x5307EF0", VA = "0x5308EF0")]
	internal unsafe static void bzero_aligned_1(byte* dest, int len)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x5308F00", Offset = "0x5307F00", VA = "0x5308F00")]
	internal unsafe static void bzero_aligned_2(byte* dest, int len)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x5308F10", Offset = "0x5307F10", VA = "0x5308F10")]
	internal unsafe static void bzero_aligned_4(byte* dest, int len)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x5308F20", Offset = "0x5307F20", VA = "0x5308F20")]
	internal unsafe static void bzero_aligned_8(byte* dest, int len)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x5308F30", Offset = "0x5307F30", VA = "0x5308F30")]
	internal unsafe static void memcpy_aligned_1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x5308F40", Offset = "0x5307F40", VA = "0x5308F40")]
	internal unsafe static void memcpy_aligned_2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x5308F50", Offset = "0x5307F50", VA = "0x5308F50")]
	internal unsafe static void memcpy_aligned_4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x5308F60", Offset = "0x5307F60", VA = "0x5308F60")]
	internal unsafe static void memcpy_aligned_8(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x5300E90", Offset = "0x52FFE90", VA = "0x5300E90")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x5308F70", Offset = "0x5307F70", VA = "0x5308F70")]
	private unsafe string CreateString(char* value)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x5308FE0", Offset = "0x5307FE0", VA = "0x5308FE0")]
	private unsafe string CreateString(char* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x5308FF0", Offset = "0x5307FF0", VA = "0x5308FF0")]
	private string CreateString(char[] val, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x52FE930", Offset = "0x52FD930", VA = "0x52FE930")]
	private string CreateString(char[] val)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x5309000", Offset = "0x5308000", VA = "0x5309000")]
	private string CreateString(char c, int count)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x5309010", Offset = "0x5308010", VA = "0x5309010")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x5309020", Offset = "0x5308020", VA = "0x5309020")]
	private string CreateString(ReadOnlySpan<char> value)
	{
		return null;
	}
}
