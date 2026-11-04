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
[Token(Token = "0x200008F")]
public sealed class String : IComparable, IEnumerable, IEnumerable<char>, IComparable<string>, IEquatable<string>, IConvertible, ICloneable
{
	[Token(Token = "0x2000090")]
	private enum TrimType
	{
		[Token(Token = "0x400024F")]
		Head,
		[Token(Token = "0x4000250")]
		Tail,
		[Token(Token = "0x4000251")]
		Both
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000091")]
	private struct ProbabilisticMap
	{
	}

	[Token(Token = "0x4000247")]
	private const int StackallocIntBufferSizeLimit = 128;

	[Token(Token = "0x4000248")]
	private const int PROBABILISTICMAP_BLOCK_INDEX_MASK = 7;

	[Token(Token = "0x4000249")]
	private const int PROBABILISTICMAP_BLOCK_INDEX_SHIFT = 3;

	[Token(Token = "0x400024A")]
	private const int PROBABILISTICMAP_SIZE = 8;

	[NonSerialized]
	[Token(Token = "0x400024B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int _stringLength;

	[NonSerialized]
	[Token(Token = "0x400024C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private char _firstChar;

	[Token(Token = "0x400024D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string Empty;

	[Token(Token = "0x1700003D")]
	public int Length
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x1700003E")]
	public char this[int index]
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x1973B00", Offset = "0x1972100", VA = "0x181973B00")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(char);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x196C180", Offset = "0x196A780", VA = "0x18196C180")]
	private static bool EqualsHelper(string strA, string strB)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x19685D0", Offset = "0x1966BD0", VA = "0x1819685D0")]
	private static int CompareOrdinalHelper(string strA, int indexA, int countA, string strB, int indexB, int countB)
	{
		return default(int);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x1968470", Offset = "0x1966A70", VA = "0x181968470")]
	private static int CompareOrdinalHelper(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x1968960", Offset = "0x1966F60", VA = "0x181968960")]
	public static int Compare(string strA, string strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x1969060", Offset = "0x1967660", VA = "0x181969060")]
	public static int Compare(string strA, string strB, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x1969070", Offset = "0x1967670", VA = "0x181969070")]
	public static int Compare(string strA, string strB, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x19694D0", Offset = "0x1967AD0", VA = "0x1819694D0")]
	public static int Compare(string strA, string strB, CultureInfo culture, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x1969410", Offset = "0x1967A10", VA = "0x181969410")]
	public static int Compare(string strA, string strB, bool ignoreCase, CultureInfo culture)
	{
		return default(int);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x1968B80", Offset = "0x1967180", VA = "0x181968B80")]
	public static int Compare(string strA, int indexA, string strB, int indexB, int length, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x1968920", Offset = "0x1966F20", VA = "0x181968920")]
	public static int CompareOrdinal(string strA, string strB)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x1968620", Offset = "0x1966C20", VA = "0x181968620")]
	internal static int CompareOrdinal(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x19686C0", Offset = "0x1966CC0", VA = "0x1819686C0")]
	public static int CompareOrdinal(string strA, int indexA, string strB, int indexB, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x1968A40", Offset = "0x1967040", VA = "0x181968A40", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x1968960", Offset = "0x1966F60", VA = "0x181968960", Slot = "7")]
	public int CompareTo(string strB)
	{
		return default(int);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x196C070", Offset = "0x196A670", VA = "0x18196C070")]
	public bool EndsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x196BD20", Offset = "0x196A320", VA = "0x18196BD20")]
	public bool EndsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x196C1F0", Offset = "0x196A7F0", VA = "0x18196C1F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x196C860", Offset = "0x196AE60", VA = "0x18196C860", Slot = "8")]
	public bool Equals(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x196C240", Offset = "0x196A840", VA = "0x18196C240")]
	public bool Equals(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x196C1B0", Offset = "0x196A7B0", VA = "0x18196C1B0")]
	public static bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x196C550", Offset = "0x196AB50", VA = "0x18196C550")]
	public static bool Equals(string a, string b, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x196C1B0", Offset = "0x196A7B0", VA = "0x18196C1B0")]
	public static bool operator ==(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x1973CC0", Offset = "0x19722C0", VA = "0x181973CC0")]
	public static bool operator !=(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x196D580", Offset = "0x196BB80", VA = "0x18196D580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x196D580", Offset = "0x196BB80", VA = "0x18196D580")]
	internal int GetLegacyNonRandomizedHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x1972620", Offset = "0x1970C20", VA = "0x181972620")]
	public bool StartsWith(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x19722C0", Offset = "0x19708C0", VA = "0x1819722C0")]
	public bool StartsWith(string value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x1968450", Offset = "0x1966A50", VA = "0x181968450")]
	internal static void CheckStringComparison(StringComparison comparisonType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	public extern String(char[] value);

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x196B560", Offset = "0x1969B60", VA = "0x18196B560")]
	private static string Ctor(char[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	public extern String(char[] value, int startIndex, int length);

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x196BAF0", Offset = "0x196A0F0", VA = "0x18196BAF0")]
	private static string Ctor(char[] value, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value);

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x196B340", Offset = "0x1969940", VA = "0x18196B340")]
	private unsafe static string Ctor(char* ptr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	[CLSCompliant(false)]
	public unsafe extern String(char* value, int startIndex, int length);

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x196B8E0", Offset = "0x1969EE0", VA = "0x18196B8E0")]
	private unsafe static string Ctor(char* ptr, int startIndex, int length)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length);

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x196B140", Offset = "0x1969740", VA = "0x18196B140")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x196AB30", Offset = "0x1969130", VA = "0x18196AB30")]
	private unsafe static string CreateStringForSByteConstructor(byte* pb, int numBytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	[CLSCompliant(false)]
	public unsafe extern String(sbyte* value, int startIndex, int length, Encoding enc);

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x196B6C0", Offset = "0x1969CC0", VA = "0x18196B6C0")]
	private unsafe static string Ctor(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x1973A40", Offset = "0x1972040", VA = "0x181973A40")]
	public extern String(char c, int count);

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x196B5E0", Offset = "0x1969BE0", VA = "0x18196B5E0")]
	private static string Ctor(char c, int count)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x1973A50", Offset = "0x1972050", VA = "0x181973A50")]
	public extern String(ReadOnlySpan<char> value);

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x196B4B0", Offset = "0x1969AB0", VA = "0x18196B4B0")]
	private static string Ctor(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	public static string Create<TState>(int length, TState state, SpanAction<char, TState> action)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x1973C40", Offset = "0x1972240", VA = "0x181973C40")]
	public static implicit operator ReadOnlySpan<char>(string value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "26")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x196AA60", Offset = "0x1969060", VA = "0x18196AA60")]
	public static string Copy(string str)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x196A810", Offset = "0x1968E10", VA = "0x18196A810")]
	public void CopyTo(int sourceIndex, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x1972FC0", Offset = "0x19715C0", VA = "0x181972FC0")]
	public char[] ToCharArray()
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x196E6C0", Offset = "0x196CCC0", VA = "0x18196E6C0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNullOrEmpty(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x196E6D0", Offset = "0x196CCD0", VA = "0x18196E6D0")]
	public static bool IsNullOrWhiteSpace(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x196D5D0", Offset = "0x196BBD0", VA = "0x18196D5D0")]
	internal unsafe ref char GetRawStringData()
	{
		return ref *(char*)null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x196AB90", Offset = "0x1969190", VA = "0x18196AB90")]
	internal unsafe static string CreateStringFromEncoding(byte* bytes, int byteLength, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x196AB00", Offset = "0x1969100", VA = "0x18196AB00")]
	internal static string CreateFromChar(char c)
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x6598F0", Offset = "0x657EF0", VA = "0x1806598F0")]
	internal unsafe static void wstrcpy(char* dmem, char* smem, int charCount)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "24")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x1972930", Offset = "0x1970F30", VA = "0x181972930", Slot = "6")]
	private IEnumerator<char> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EChar_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x1972990", Offset = "0x1970F90", VA = "0x181972990", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x1973D10", Offset = "0x1972310", VA = "0x181973D10")]
	internal unsafe static int wcslen(char* ptr)
	{
		return default(int);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x196D5E0", Offset = "0x196BBE0", VA = "0x18196D5E0", Slot = "9")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x19729F0", Offset = "0x1970FF0", VA = "0x1819729F0", Slot = "10")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x1972AB0", Offset = "0x19710B0", VA = "0x181972AB0", Slot = "11")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x1972D70", Offset = "0x1971370", VA = "0x181972D70", Slot = "12")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x1972A50", Offset = "0x1971050", VA = "0x181972A50", Slot = "13")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x1972C50", Offset = "0x1971250", VA = "0x181972C50", Slot = "14")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x1972EA0", Offset = "0x19714A0", VA = "0x181972EA0", Slot = "15")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x1972CB0", Offset = "0x19712B0", VA = "0x181972CB0", Slot = "16")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x1972F00", Offset = "0x1971500", VA = "0x181972F00", Slot = "17")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x1972D10", Offset = "0x1971310", VA = "0x181972D10", Slot = "18")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x1972F60", Offset = "0x1971560", VA = "0x181972F60", Slot = "19")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x1972DD0", Offset = "0x19713D0", VA = "0x181972DD0", Slot = "20")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x1972BF0", Offset = "0x19711F0", VA = "0x181972BF0", Slot = "21")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x1972B70", Offset = "0x1971170", VA = "0x181972B70", Slot = "22")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x1972B10", Offset = "0x1971110", VA = "0x181972B10", Slot = "23")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x1972E30", Offset = "0x1971430", VA = "0x181972E30", Slot = "25")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x19704B0", Offset = "0x196EAB0", VA = "0x1819704B0")]
	public string Normalize(NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x196C8A0", Offset = "0x196AEA0", VA = "0x18196C8A0")]
	private static void FillStringChecked(string dest, int destPos, string src)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x1969AE0", Offset = "0x19680E0", VA = "0x181969AE0")]
	public static string Concat(object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x1969D90", Offset = "0x1968390", VA = "0x181969D90")]
	public static string Concat(object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x1969FD0", Offset = "0x19685D0", VA = "0x181969FD0")]
	public static string Concat(params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x196A290", Offset = "0x1968890", VA = "0x18196A290")]
	public static string Concat(IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x1969E50", Offset = "0x1968450", VA = "0x181969E50")]
	public static string Concat(string str0, string str1)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x1969B70", Offset = "0x1968170", VA = "0x181969B70")]
	public static string Concat(string str0, string str1, string str2)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x1969590", Offset = "0x1967B90", VA = "0x181969590")]
	public static string Concat(string str0, string str1, string str2, string str3)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x1969830", Offset = "0x1967E30", VA = "0x181969830")]
	public static string Concat(params string[] values)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x196D190", Offset = "0x196B790", VA = "0x18196D190")]
	public static string Format(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x196D440", Offset = "0x196BA40", VA = "0x18196D440")]
	public static string Format(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x196D050", Offset = "0x196B650", VA = "0x18196D050")]
	public static string Format(string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x196CEB0", Offset = "0x196B4B0", VA = "0x18196CEB0")]
	public static string Format(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x196CA50", Offset = "0x196B050", VA = "0x18196CA50")]
	public static string Format(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x196CD50", Offset = "0x196B350", VA = "0x18196CD50")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x196D2D0", Offset = "0x196B8D0", VA = "0x18196D2D0")]
	public static string Format(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x196CBA0", Offset = "0x196B1A0", VA = "0x18196CBA0")]
	public static string Format(IFormatProvider provider, string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x196C930", Offset = "0x196AF30", VA = "0x18196C930")]
	private static string FormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x196E4D0", Offset = "0x196CAD0", VA = "0x18196E4D0")]
	public string Insert(int startIndex, string value)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	public static string Join<T>(char separator, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x196EC20", Offset = "0x196D220", VA = "0x18196EC20")]
	public static string Join(string separator, params string[] value)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	public static string Join<T>(string separator, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x196ECD0", Offset = "0x196D2D0", VA = "0x18196ECD0")]
	public static string Join(string separator, IEnumerable<string> values)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x196F060", Offset = "0x196D660", VA = "0x18196F060")]
	public static string Join(string separator, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	private unsafe static string JoinCore<T>(char* separator, int separatorLength, IEnumerable<T> values)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x196E760", Offset = "0x196CD60", VA = "0x18196E760")]
	private unsafe static string JoinCore(char* separator, int separatorLength, string[] value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x1970510", Offset = "0x196EB10", VA = "0x181970510")]
	public string PadLeft(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x1970600", Offset = "0x196EC00", VA = "0x181970600")]
	public string PadRight(int totalWidth, char paddingChar)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x1970700", Offset = "0x196ED00", VA = "0x181970700")]
	public string Remove(int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x19708E0", Offset = "0x196EEE0", VA = "0x1819708E0")]
	public string Remove(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x1970D90", Offset = "0x196F390", VA = "0x181970D90")]
	public string Replace(char oldChar, char newChar)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x1970E80", Offset = "0x196F480", VA = "0x181970E80")]
	public string Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x19709C0", Offset = "0x196EFC0", VA = "0x1819709C0")]
	private string ReplaceHelper(int oldValueLength, string newValue, ReadOnlySpan<int> indices)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x19721F0", Offset = "0x19707F0", VA = "0x1819721F0")]
	public string[] Split(char separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x1972010", Offset = "0x1970610", VA = "0x181972010")]
	public string[] Split(params char[] separator)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x19720E0", Offset = "0x19706E0", VA = "0x1819720E0")]
	public string[] Split(char[] separator, int count)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x1972160", Offset = "0x1970760", VA = "0x181972160")]
	public string[] Split(char[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x1971130", Offset = "0x196F730", VA = "0x181971130")]
	private string[] SplitInternal(ReadOnlySpan<char> separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x1972090", Offset = "0x1970690", VA = "0x181972090")]
	public string[] Split(string separator, StringSplitOptions options = StringSplitOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x1971FE0", Offset = "0x19705E0", VA = "0x181971FE0")]
	public string[] Split(string[] separator, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x1971750", Offset = "0x196FD50", VA = "0x181971750")]
	private string[] SplitInternal(string separator, string[] separators, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x1971450", Offset = "0x196FA50", VA = "0x181971450")]
	private string[] SplitInternal(string separator, int count, StringSplitOptions options)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x1971B70", Offset = "0x1970170", VA = "0x181971B70")]
	private string[] SplitKeepEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x1971D30", Offset = "0x1970330", VA = "0x181971D30")]
	private string[] SplitOmitEmptyEntries(ReadOnlySpan<int> sepList, ReadOnlySpan<int> lengthList, int defaultLength, int count)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x19701A0", Offset = "0x196E7A0", VA = "0x1819701A0")]
	private void MakeSeparatorList(ReadOnlySpan<char> separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x196FD90", Offset = "0x196E390", VA = "0x18196FD90")]
	private void MakeSeparatorList(string separator, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x196FF60", Offset = "0x196E560", VA = "0x18196FF60")]
	private void MakeSeparatorList(string[] separators, ref System.Collections.Generic.ValueListBuilder<int> sepListBuilder, ref System.Collections.Generic.ValueListBuilder<int> lengthListBuilder)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x1972730", Offset = "0x1970D30", VA = "0x181972730")]
	public string Substring(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x1972740", Offset = "0x1970D40", VA = "0x181972740")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x196E650", Offset = "0x196CC50", VA = "0x18196E650")]
	private string InternalSubString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x1973150", Offset = "0x1971750", VA = "0x181973150")]
	public string ToLower()
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x19731E0", Offset = "0x19717E0", VA = "0x1819731E0")]
	public string ToLower(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x19730C0", Offset = "0x19716C0", VA = "0x1819730C0")]
	public string ToLowerInvariant()
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x1973310", Offset = "0x1971910", VA = "0x181973310")]
	public string ToUpper()
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x19733A0", Offset = "0x19719A0", VA = "0x1819733A0")]
	public string ToUpper(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x1973280", Offset = "0x1971880", VA = "0x181973280")]
	public string ToUpperInvariant()
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x1973950", Offset = "0x1971F50", VA = "0x181973950")]
	public string Trim()
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x1973960", Offset = "0x1971F60", VA = "0x181973960")]
	public string Trim(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x19738F0", Offset = "0x1971EF0", VA = "0x1819738F0")]
	public string Trim(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x19737A0", Offset = "0x1971DA0", VA = "0x1819737A0")]
	public string TrimStart()
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x19736A0", Offset = "0x1971CA0", VA = "0x1819736A0")]
	public string TrimStart(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x1973750", Offset = "0x1971D50", VA = "0x181973750")]
	public string TrimStart(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x1973440", Offset = "0x1971A40", VA = "0x181973440")]
	public string TrimEnd()
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x19734B0", Offset = "0x1971AB0", VA = "0x1819734B0")]
	public string TrimEnd(char trimChar)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x1973450", Offset = "0x1971A50", VA = "0x181973450")]
	public string TrimEnd(params char[] trimChars)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x19737B0", Offset = "0x1971DB0", VA = "0x1819737B0")]
	private string TrimWhiteSpaceHelper(TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x1973560", Offset = "0x1971B60", VA = "0x181973560")]
	private unsafe string TrimHelper(char* trimChars, int trimCharsLength, TrimType trimType)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x196B090", Offset = "0x1969690", VA = "0x18196B090")]
	private string CreateTrimmedString(int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x196A620", Offset = "0x1968C20", VA = "0x18196A620")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x196A7F0", Offset = "0x1968DF0", VA = "0x18196A7F0")]
	public bool Contains(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x196E2E0", Offset = "0x196C8E0", VA = "0x18196E2E0")]
	public int IndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x196DE40", Offset = "0x196C440", VA = "0x18196DE40")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x196E2F0", Offset = "0x196C8F0", VA = "0x18196E2F0")]
	public int IndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x196D970", Offset = "0x196BF70", VA = "0x18196D970")]
	public int IndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x196D5F0", Offset = "0x196BBF0", VA = "0x18196D5F0")]
	public int IndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x196D610", Offset = "0x196BC10", VA = "0x18196D610")]
	public int IndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x196D9F0", Offset = "0x196BFF0", VA = "0x18196D9F0")]
	private int IndexOfAny(char value1, char value2, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x196D990", Offset = "0x196BF90", VA = "0x18196D990")]
	private int IndexOfAny(char value1, char value2, char value3, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x196DA60", Offset = "0x196C060", VA = "0x18196DA60")]
	private int IndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x196E400", Offset = "0x196CA00", VA = "0x18196E400")]
	private unsafe static void InitializeProbabilisticMap(uint* charMap, ReadOnlySpan<char> anyOf)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x1968400", Offset = "0x1966A00", VA = "0x181968400")]
	private static bool ArrayContains(char searchChar, char[] anyOf)
	{
		return default(bool);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x196E6A0", Offset = "0x196CCA0", VA = "0x18196E6A0")]
	private unsafe static bool IsCharBitSet(uint* charMap, byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x1971110", Offset = "0x196F710", VA = "0x181971110")]
	private unsafe static void SetCharBit(uint* charMap, byte value)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x196E2A0", Offset = "0x196C8A0", VA = "0x18196E2A0")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x196E2C0", Offset = "0x196C8C0", VA = "0x18196E2C0")]
	public int IndexOf(string value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x196DE90", Offset = "0x196C490", VA = "0x18196DE90")]
	public int IndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x196DE60", Offset = "0x196C460", VA = "0x18196DE60")]
	public int IndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x196DEC0", Offset = "0x196C4C0", VA = "0x18196DEC0")]
	public int IndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x196FC20", Offset = "0x196E220", VA = "0x18196FC20")]
	public int LastIndexOf(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x196FBD0", Offset = "0x196E1D0", VA = "0x18196FBD0")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x196FC60", Offset = "0x196E260", VA = "0x18196FC60")]
	public int LastIndexOf(char value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x196F0B0", Offset = "0x196D6B0", VA = "0x18196F0B0")]
	public int LastIndexOfAny(char[] anyOf)
	{
		return default(int);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x196F350", Offset = "0x196D950", VA = "0x18196F350")]
	public int LastIndexOfAny(char[] anyOf, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x196F0D0", Offset = "0x196D6D0", VA = "0x18196F0D0")]
	public int LastIndexOfAny(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x196F370", Offset = "0x196D970", VA = "0x18196F370")]
	private int LastIndexOfCharArray(char[] anyOf, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x196FC30", Offset = "0x196E230", VA = "0x18196FC30")]
	public int LastIndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x196FBF0", Offset = "0x196E1F0", VA = "0x18196FBF0")]
	public int LastIndexOf(string value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x196FBA0", Offset = "0x196E1A0", VA = "0x18196FBA0")]
	public int LastIndexOf(string value, int startIndex, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x196F780", Offset = "0x196DD80", VA = "0x18196F780")]
	public int LastIndexOf(string value, int startIndex, int count, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x196DD50", Offset = "0x196C350", VA = "0x18196DD50")]
	internal int IndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x196DB80", Offset = "0x196C180", VA = "0x18196DB80")]
	internal int IndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x196F680", Offset = "0x196DC80", VA = "0x18196F680")]
	internal int LastIndexOfUnchecked(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x196F490", Offset = "0x196DA90", VA = "0x18196F490")]
	internal int LastIndexOfUncheckedIgnoreCase(string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x1972270", Offset = "0x1970870", VA = "0x181972270")]
	internal bool StartsWithOrdinalUnchecked(string value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000335")]
	[Address(RVA = "0x196C890", Offset = "0x196AE90", VA = "0x18196C890")]
	internal static extern string FastAllocateString(int length);

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x1973B90", Offset = "0x1972190", VA = "0x181973B90")]
	private unsafe static void memset(byte* dest, int val, int len)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x1973B80", Offset = "0x1972180", VA = "0x181973B80")]
	private unsafe static void memcpy(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x1973A80", Offset = "0x1972080", VA = "0x181973A80")]
	internal unsafe static void bzero(byte* dest, int len)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x564910", Offset = "0x562F10", VA = "0x180564910")]
	internal unsafe static void bzero_aligned_1(byte* dest, int len)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x1973A70", Offset = "0x1972070", VA = "0x181973A70")]
	internal unsafe static void bzero_aligned_2(byte* dest, int len)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0xB47950", Offset = "0xB45F50", VA = "0x180B47950")]
	internal unsafe static void bzero_aligned_4(byte* dest, int len)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x18191E0", Offset = "0x18177E0", VA = "0x1818191E0")]
	internal unsafe static void bzero_aligned_8(byte* dest, int len)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x1973B50", Offset = "0x1972150", VA = "0x181973B50")]
	internal unsafe static void memcpy_aligned_1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x1973B60", Offset = "0x1972160", VA = "0x181973B60")]
	internal unsafe static void memcpy_aligned_2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x1973B70", Offset = "0x1972170", VA = "0x181973B70")]
	internal unsafe static void memcpy_aligned_4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0xBDB200", Offset = "0xBD9800", VA = "0x180BDB200")]
	internal unsafe static void memcpy_aligned_8(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x196AFC0", Offset = "0x19695C0", VA = "0x18196AFC0")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x196AD10", Offset = "0x1969310", VA = "0x18196AD10")]
	private unsafe string CreateString(char* value)
	{
		return null;
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x196AE70", Offset = "0x1969470", VA = "0x18196AE70")]
	private unsafe string CreateString(char* value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x196AFE0", Offset = "0x19695E0", VA = "0x18196AFE0")]
	private string CreateString(char[] val, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x196B000", Offset = "0x1969600", VA = "0x18196B000")]
	private string CreateString(char[] val)
	{
		return null;
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x196AEC0", Offset = "0x19694C0", VA = "0x18196AEC0")]
	private string CreateString(char c, int count)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x196AE90", Offset = "0x1969490", VA = "0x18196AE90")]
	private unsafe string CreateString(sbyte* value, int startIndex, int length, Encoding enc)
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x196AC50", Offset = "0x1969250", VA = "0x18196AC50")]
	private string CreateString(ReadOnlySpan<char> value)
	{
		return null;
	}
}
