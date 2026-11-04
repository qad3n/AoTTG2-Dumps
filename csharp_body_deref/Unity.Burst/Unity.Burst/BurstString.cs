// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstString
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x200001C")]
internal static class BurstString
{
	[Token(Token = "0x200001D")]
	public struct tBigInt
	{
		[Token(Token = "0x40000DA")]
		private const int c_BigInt_MaxBlocks = 35;

		[Token(Token = "0x40000DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int m_length;

		[Token(Token = "0x40000DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public unsafe fixed uint m_blocks[35];

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		public int GetLength()
		{
			return default(int);
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x297C1D0", Offset = "0x297A7D0", VA = "0x18297C1D0")]
		public uint GetBlock(int idx)
		{
			return default(uint);
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0xB47950", Offset = "0xB45F50", VA = "0x180B47950")]
		public void SetZero()
		{
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x2372150", Offset = "0x2370750", VA = "0x182372150")]
		public bool IsZero()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x297C210", Offset = "0x297A810", VA = "0x18297C210")]
		public void SetU64(ulong val)
		{
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x297C1F0", Offset = "0x297A7F0", VA = "0x18297C1F0")]
		public void SetU32(uint val)
		{
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x297C1E0", Offset = "0x297A7E0", VA = "0x18297C1E0")]
		public uint GetU32()
		{
			return default(uint);
		}
	}

	[Token(Token = "0x200001F")]
	public enum CutoffMode
	{
		[Token(Token = "0x40000DF")]
		Unique,
		[Token(Token = "0x40000E0")]
		TotalLength,
		[Token(Token = "0x40000E1")]
		FractionLength
	}

	[Token(Token = "0x2000020")]
	public enum PrintFloatFormat
	{
		[Token(Token = "0x40000E3")]
		Positional,
		[Token(Token = "0x40000E4")]
		Scientific
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000021")]
	public struct tFloatUnion32
	{
		[Token(Token = "0x40000E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public float m_floatingPoint;

		[Token(Token = "0x40000E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public uint m_integer;

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x1B9B730", Offset = "0x1B99D30", VA = "0x181B9B730")]
		public bool IsNegative()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x297C240", Offset = "0x297A840", VA = "0x18297C240")]
		public uint GetExponent()
		{
			return default(uint);
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x297C250", Offset = "0x297A850", VA = "0x18297C250")]
		public uint GetMantissa()
		{
			return default(uint);
		}
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000022")]
	public struct tFloatUnion64
	{
		[Token(Token = "0x40000E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public double m_floatingPoint;

		[Token(Token = "0x40000E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong m_integer;

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x297C290", Offset = "0x297A890", VA = "0x18297C290")]
		public bool IsNegative()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x297C260", Offset = "0x297A860", VA = "0x18297C260")]
		public uint GetExponent()
		{
			return default(uint);
		}

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x297C270", Offset = "0x297A870", VA = "0x18297C270")]
		public ulong GetMantissa()
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x2000023")]
	internal class PreserveAttribute : Attribute
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public PreserveAttribute()
		{
		}
	}

	[Token(Token = "0x2000024")]
	private enum NumberBufferKind
	{
		[Token(Token = "0x40000EA")]
		Integer,
		[Token(Token = "0x40000EB")]
		Float
	}

	[Token(Token = "0x2000025")]
	private struct NumberBuffer
	{
		[Token(Token = "0x40000EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private unsafe readonly byte* _buffer;

		[Token(Token = "0x40000ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public NumberBufferKind Kind;

		[Token(Token = "0x40000EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int DigitsCount;

		[Token(Token = "0x40000EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int Scale;

		[Token(Token = "0x40000F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public readonly bool IsNegative;

		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x297BB90", Offset = "0x297A190", VA = "0x18297BB90")]
		public unsafe NumberBuffer(NumberBufferKind kind, byte* buffer, int digitsCount, int scale, bool isNegative)
		{
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		public unsafe byte* GetDigitsPointer()
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x2000026")]
	public enum NumberFormatKind : byte
	{
		[Token(Token = "0x40000F2")]
		General,
		[Token(Token = "0x40000F3")]
		Decimal,
		[Token(Token = "0x40000F4")]
		DecimalForceSigned,
		[Token(Token = "0x40000F5")]
		Hexadecimal
	}

	[Token(Token = "0x2000027")]
	public struct FormatOptions
	{
		[Token(Token = "0x40000F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public NumberFormatKind Kind;

		[Token(Token = "0x40000F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		public sbyte AlignAndSize;

		[Token(Token = "0x40000F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		public byte Specifier;

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
		public bool Lowercase;

		[Token(Token = "0x17000017")]
		public bool Uppercase
		{
			[Token(Token = "0x60000D5")]
			[Address(RVA = "0x25D0DF0", Offset = "0x25CF3F0", VA = "0x1825D0DF0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x1055E10", Offset = "0x1054410", VA = "0x181055E10")]
		public FormatOptions(NumberFormatKind kind, sbyte alignAndSize, byte specifier, bool lowercase)
		{
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		public int EncodeToRaw()
		{
			return default(int);
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x295AC20", Offset = "0x2959220", VA = "0x18295AC20")]
		public int GetBase()
		{
			return default(int);
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x295AC40", Offset = "0x2959240", VA = "0x18295AC40", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly byte[] logTable;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly uint[] g_PowerOf10_U32;

	[Token(Token = "0x40000D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly byte[] InfinityString;

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly byte[] NanString;

	[Token(Token = "0x40000D3")]
	private const int SinglePrecision = 9;

	[Token(Token = "0x40000D4")]
	private const int DoublePrecision = 17;

	[Token(Token = "0x40000D5")]
	internal const int SingleNumberBufferLength = 10;

	[Token(Token = "0x40000D6")]
	internal const int DoubleNumberBufferLength = 18;

	[Token(Token = "0x40000D7")]
	private const int SinglePrecisionCustomFormat = 7;

	[Token(Token = "0x40000D8")]
	private const int DoublePrecisionCustomFormat = 15;

	[Token(Token = "0x40000D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly char[] SplitByColon;

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2959CF0", Offset = "0x29582F0", VA = "0x182959CF0")]
	private static uint LogBase2(uint val)
	{
		return default(uint);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2955B00", Offset = "0x2954100", VA = "0x182955B00")]
	private static int BigInt_Compare(in tBigInt lhs, in tBigInt rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2955A70", Offset = "0x2954070", VA = "0x182955A70")]
	private static void BigInt_Add(out tBigInt pResult, in tBigInt lhs, in tBigInt rhs)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x29559C0", Offset = "0x2953FC0", VA = "0x1829559C0")]
	private static void BigInt_Add_internal(out tBigInt pResult, in tBigInt pLarge, in tBigInt pSmall)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2956280", Offset = "0x2954880", VA = "0x182956280")]
	private static void BigInt_Multiply(out tBigInt pResult, in tBigInt lhs, in tBigInt rhs)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x29560F0", Offset = "0x29546F0", VA = "0x1829560F0")]
	private static void BigInt_Multiply_internal(out tBigInt pResult, in tBigInt pLarge, in tBigInt pSmall)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2956210", Offset = "0x2954810", VA = "0x182956210")]
	private static void BigInt_Multiply(out tBigInt pResult, in tBigInt lhs, uint rhs)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2955D30", Offset = "0x2954330", VA = "0x182955D30")]
	private static void BigInt_Multiply2(out tBigInt pResult, in tBigInt input)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2955DA0", Offset = "0x29543A0", VA = "0x182955DA0")]
	private static void BigInt_Multiply2(ref tBigInt pResult)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2955CE0", Offset = "0x29542E0", VA = "0x182955CE0")]
	private static void BigInt_Multiply10(ref tBigInt pResult)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x295A7E0", Offset = "0x2958DE0", VA = "0x18295A7E0")]
	private static tBigInt g_PowerOf10_Big(int i)
	{
		return default(tBigInt);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2956310", Offset = "0x2954910", VA = "0x182956310")]
	private static void BigInt_Pow10(out tBigInt pResult, uint exponent)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2955DF0", Offset = "0x29543F0", VA = "0x182955DF0")]
	private static void BigInt_MultiplyPow10(out tBigInt pResult, in tBigInt input, uint exponent)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x29565A0", Offset = "0x2954BA0", VA = "0x1829565A0")]
	private static void BigInt_Pow2(out tBigInt pResult, uint exponent)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2955B50", Offset = "0x2954150", VA = "0x182955B50")]
	private static uint BigInt_DivideWithRemainder_MaxQuotient9(ref tBigInt pDividend, in tBigInt divisor)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2956610", Offset = "0x2954C10", VA = "0x182956610")]
	private static void BigInt_ShiftLeft(ref tBigInt pResult, uint shift)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2957080", Offset = "0x2955680", VA = "0x182957080")]
	private unsafe static uint Dragon4(ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, CutoffMode cutoffMode, uint cutoffNumber, byte* pOutBuffer, uint bufferSize, out int pOutExponent)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2958BD0", Offset = "0x29571D0", VA = "0x182958BD0")]
	private unsafe static int FormatPositional(byte* pOutBuffer, uint bufferSize, ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, int precision)
	{
		return default(int);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2958DD0", Offset = "0x29573D0", VA = "0x182958DD0")]
	private unsafe static int FormatScientific(byte* pOutBuffer, uint bufferSize, ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, int precision)
	{
		return default(int);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2958680", Offset = "0x2956C80", VA = "0x182958680")]
	private unsafe static void FormatInfinityNaN(byte* dest, ref int destIndex, int destLength, ulong mantissa, bool isNegative, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2956A50", Offset = "0x2955050", VA = "0x182956A50")]
	private unsafe static void ConvertFloatToString(byte* dest, ref int destIndex, int destLength, float value, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2956790", Offset = "0x2954D90", VA = "0x182956790")]
	private unsafe static void ConvertDoubleToString(byte* dest, ref int destIndex, int destLength, double value, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2957050", Offset = "0x2955650", VA = "0x182957050")]
	[Preserve]
	public unsafe static void CopyFixedString(byte* dest, int destLength, byte* src, int srcLength)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2959600", Offset = "0x2957C00", VA = "0x182959600")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, byte* src, int srcLength, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2959A50", Offset = "0x2958050", VA = "0x182959A50")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, float value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2959770", Offset = "0x2957D70", VA = "0x182959770")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, double value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x29597F0", Offset = "0x2957DF0", VA = "0x1829597F0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, bool value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2959000", Offset = "0x2957600", VA = "0x182959000")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, char value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2959AD0", Offset = "0x29580D0", VA = "0x182959AD0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, byte value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2959260", Offset = "0x2957860", VA = "0x182959260")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, ushort value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2959700", Offset = "0x2957D00", VA = "0x182959700")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, uint value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x29591F0", Offset = "0x29577F0", VA = "0x1829591F0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, ulong value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2959300", Offset = "0x2957900", VA = "0x182959300")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, sbyte value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2959500", Offset = "0x2957B00", VA = "0x182959500")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, short value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2959400", Offset = "0x2957A00", VA = "0x182959400")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, int value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2959950", Offset = "0x2957F50", VA = "0x182959950")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, long value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2956EA0", Offset = "0x29554A0", VA = "0x182956EA0")]
	private unsafe static void ConvertUnsignedIntegerToString(byte* dest, ref int destIndex, int destLength, ulong value, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2959CC0", Offset = "0x29582C0", VA = "0x182959CC0")]
	private static int GetLengthIntegerToString(long value, int basis, int zeroPadding)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2956CF0", Offset = "0x29552F0", VA = "0x182956CF0")]
	private unsafe static void ConvertIntegerToString(byte* dest, ref int destIndex, int destLength, long value, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2958850", Offset = "0x2956E50", VA = "0x182958850")]
	private unsafe static void FormatNumber(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int nMaxDigits, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2958430", Offset = "0x2956A30", VA = "0x182958430")]
	private unsafe static void FormatDecimalOrHexadecimal(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int zeroPadding, bool outputPositiveSign)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x295A590", Offset = "0x2958B90", VA = "0x18295A590")]
	private static byte ValueToIntegerChar(int value, bool uppercase)
	{
		return default(byte);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2959E60", Offset = "0x2958460", VA = "0x182959E60")]
	private static void OptsSplit(string fullFormat, out string padding, out string format)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x295A020", Offset = "0x2958620", VA = "0x18295A020")]
	public static FormatOptions ParseFormatToFormatOptions(string fullFormat)
	{
		return default(FormatOptions);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2955930", Offset = "0x2953F30", VA = "0x182955930")]
	private unsafe static bool AlignRight(byte* dest, ref int destIndex, int destLength, int align, int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x29558F0", Offset = "0x2953EF0", VA = "0x1829558F0")]
	private unsafe static bool AlignLeft(byte* dest, ref int destIndex, int destLength, int align, int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2959B70", Offset = "0x2958170", VA = "0x182959B70")]
	private static int GetLengthForFormatGeneral(ref NumberBuffer number, int nMaxDigits)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x29584E0", Offset = "0x2956AE0", VA = "0x1829584E0")]
	private unsafe static void FormatGeneral(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int nMaxDigits, byte expChar)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x295A480", Offset = "0x2958A80", VA = "0x18295A480")]
	private static void RoundNumber(ref NumberBuffer number, int pos, bool isCorrectlyRounded)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x295A560", Offset = "0x2958B60", VA = "0x18295A560")]
	private unsafe static bool ShouldRoundUp(byte* dig, int i, bool isCorrectlyRounded)
	{
		return default(bool);
	}
}
