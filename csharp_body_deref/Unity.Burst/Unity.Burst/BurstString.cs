// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstString
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6318730", Offset = "0x6317730", VA = "0x6318730")]
		public int GetLength()
		{
			return default(int);
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x6315320", Offset = "0x6314320", VA = "0x6315320")]
		public uint GetBlock(int idx)
		{
			return default(uint);
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x6318740", Offset = "0x6317740", VA = "0x6318740")]
		public void SetZero()
		{
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x6315330", Offset = "0x6314330", VA = "0x6315330")]
		public bool IsZero()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x63152F0", Offset = "0x63142F0", VA = "0x63152F0")]
		public void SetU64(ulong val)
		{
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x6313620", Offset = "0x6312620", VA = "0x6313620")]
		public void SetU32(uint val)
		{
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x6318750", Offset = "0x6317750", VA = "0x6318750")]
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
		[Address(RVA = "0x6316380", Offset = "0x6315380", VA = "0x6316380")]
		public bool IsNegative()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x6316360", Offset = "0x6315360", VA = "0x6316360")]
		public uint GetExponent()
		{
			return default(uint);
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x6316370", Offset = "0x6315370", VA = "0x6316370")]
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
		[Address(RVA = "0x6316A20", Offset = "0x6315A20", VA = "0x6316A20")]
		public bool IsNegative()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x6316A00", Offset = "0x6315A00", VA = "0x6316A00")]
		public uint GetExponent()
		{
			return default(uint);
		}

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x6316A10", Offset = "0x6315A10", VA = "0x6316A10")]
		public ulong GetMantissa()
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x2000023")]
	internal class PreserveAttribute : Attribute
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x6318760", Offset = "0x6317760", VA = "0x6318760")]
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
		[Address(RVA = "0x6316390", Offset = "0x6315390", VA = "0x6316390")]
		public unsafe NumberBuffer(NumberBufferKind kind, byte* buffer, int digitsCount, int scale, bool isNegative)
		{
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x6318770", Offset = "0x6317770", VA = "0x6318770")]
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
			[Address(RVA = "0x6317A10", Offset = "0x6316A10", VA = "0x6317A10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x6318520", Offset = "0x6317520", VA = "0x6318520")]
		public FormatOptions(NumberFormatKind kind, sbyte alignAndSize, byte specifier, bool lowercase)
		{
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x6318780", Offset = "0x6317780", VA = "0x6318780")]
		public int EncodeToRaw()
		{
			return default(int);
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x63179F0", Offset = "0x63169F0", VA = "0x63179F0")]
		public int GetBase()
		{
			return default(int);
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x6318790", Offset = "0x6317790", VA = "0x6318790", Slot = "3")]
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
	[Address(RVA = "0x63125F0", Offset = "0x63115F0", VA = "0x63125F0")]
	private static uint LogBase2(uint val)
	{
		return default(uint);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6312750", Offset = "0x6311750", VA = "0x6312750")]
	private static int BigInt_Compare(in tBigInt lhs, in tBigInt rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6312780", Offset = "0x6311780", VA = "0x6312780")]
	private static void BigInt_Add(out tBigInt pResult, in tBigInt lhs, in tBigInt rhs)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6312A50", Offset = "0x6311A50", VA = "0x6312A50")]
	private static void BigInt_Add_internal(out tBigInt pResult, in tBigInt pLarge, in tBigInt pSmall)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6312B80", Offset = "0x6311B80", VA = "0x6312B80")]
	private static void BigInt_Multiply(out tBigInt pResult, in tBigInt lhs, in tBigInt rhs)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6312E10", Offset = "0x6311E10", VA = "0x6312E10")]
	private static void BigInt_Multiply_internal(out tBigInt pResult, in tBigInt pLarge, in tBigInt pSmall)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6312F20", Offset = "0x6311F20", VA = "0x6312F20")]
	private static void BigInt_Multiply(out tBigInt pResult, in tBigInt lhs, uint rhs)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6312FF0", Offset = "0x6311FF0", VA = "0x6312FF0")]
	private static void BigInt_Multiply2(out tBigInt pResult, in tBigInt input)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x63130B0", Offset = "0x63120B0", VA = "0x63130B0")]
	private static void BigInt_Multiply2(ref tBigInt pResult)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6313180", Offset = "0x6312180", VA = "0x6313180")]
	private static void BigInt_Multiply10(ref tBigInt pResult)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6313270", Offset = "0x6312270", VA = "0x6313270")]
	private static tBigInt g_PowerOf10_Big(int i)
	{
		return default(tBigInt);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x63133E0", Offset = "0x63123E0", VA = "0x63133E0")]
	private static void BigInt_Pow10(out tBigInt pResult, uint exponent)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6313640", Offset = "0x6312640", VA = "0x6313640")]
	private static void BigInt_MultiplyPow10(out tBigInt pResult, in tBigInt input, uint exponent)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6313940", Offset = "0x6312940", VA = "0x6313940")]
	private static void BigInt_Pow2(out tBigInt pResult, uint exponent)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6313980", Offset = "0x6312980", VA = "0x6313980")]
	private static uint BigInt_DivideWithRemainder_MaxQuotient9(ref tBigInt pDividend, in tBigInt divisor)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x6313B60", Offset = "0x6312B60", VA = "0x6313B60")]
	private static void BigInt_ShiftLeft(ref tBigInt pResult, uint shift)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x6313D60", Offset = "0x6312D60", VA = "0x6313D60")]
	private unsafe static uint Dragon4(ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, CutoffMode cutoffMode, uint cutoffNumber, byte* pOutBuffer, uint bufferSize, out int pOutExponent)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6315340", Offset = "0x6314340", VA = "0x6315340")]
	private unsafe static int FormatPositional(byte* pOutBuffer, uint bufferSize, ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, int precision)
	{
		return default(int);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6315640", Offset = "0x6314640", VA = "0x6315640")]
	private unsafe static int FormatScientific(byte* pOutBuffer, uint bufferSize, ulong mantissa, int exponent, uint mantissaHighBitIdx, bool hasUnequalMargins, int precision)
	{
		return default(int);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x63158F0", Offset = "0x63148F0", VA = "0x63158F0")]
	private unsafe static void FormatInfinityNaN(byte* dest, ref int destIndex, int destLength, ulong mantissa, bool isNegative, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x6316100", Offset = "0x6315100", VA = "0x6316100")]
	private unsafe static void ConvertFloatToString(byte* dest, ref int destIndex, int destLength, float value, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x6316790", Offset = "0x6315790", VA = "0x6316790")]
	private unsafe static void ConvertDoubleToString(byte* dest, ref int destIndex, int destLength, double value, FormatOptions formatOptions)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x6316A30", Offset = "0x6315A30", VA = "0x6316A30")]
	[Preserve]
	public unsafe static void CopyFixedString(byte* dest, int destLength, byte* src, int srcLength)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x6316A50", Offset = "0x6315A50", VA = "0x6316A50")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, byte* src, int srcLength, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x6316BC0", Offset = "0x6315BC0", VA = "0x6316BC0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, float value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x6316C40", Offset = "0x6315C40", VA = "0x6316C40")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, double value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x6316CC0", Offset = "0x6315CC0", VA = "0x6316CC0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, bool value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x6316EE0", Offset = "0x6315EE0", VA = "0x6316EE0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, char value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x6317110", Offset = "0x6316110", VA = "0x6317110")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, byte value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x6317250", Offset = "0x6316250", VA = "0x6317250")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, ushort value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x6317320", Offset = "0x6316320", VA = "0x6317320")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, uint value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x63171E0", Offset = "0x63161E0", VA = "0x63171E0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, ulong value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x6317580", Offset = "0x6316580", VA = "0x6317580")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, sbyte value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x6317810", Offset = "0x6316810", VA = "0x6317810")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, short value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x63178B0", Offset = "0x63168B0", VA = "0x63178B0")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, int value, int formatOptionsRaw)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x6317950", Offset = "0x6316950", VA = "0x6317950")]
	[Preserve]
	public unsafe static void Format(byte* dest, ref int destIndex, int destLength, long value, int formatOptionsRaw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x6317390", Offset = "0x6316390", VA = "0x6317390")]
	private unsafe static void ConvertUnsignedIntegerToString(byte* dest, ref int destIndex, int destLength, ulong value, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x6317A50", Offset = "0x6316A50", VA = "0x6317A50")]
	private static int GetLengthIntegerToString(long value, int basis, int zeroPadding)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x6317620", Offset = "0x6316620", VA = "0x6317620")]
	private unsafe static void ConvertIntegerToString(byte* dest, ref int destIndex, int destLength, long value, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x63163B0", Offset = "0x63153B0", VA = "0x63163B0")]
	private unsafe static void FormatNumber(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int nMaxDigits, FormatOptions options)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x6317AA0", Offset = "0x6316AA0", VA = "0x6317AA0")]
	private unsafe static void FormatDecimalOrHexadecimal(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int zeroPadding, bool outputPositiveSign)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x6317A20", Offset = "0x6316A20", VA = "0x6317A20")]
	private static byte ValueToIntegerChar(int value, bool uppercase)
	{
		return default(byte);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x6317FB0", Offset = "0x6316FB0", VA = "0x6317FB0")]
	private static void OptsSplit(string fullFormat, out string padding, out string format)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x6318170", Offset = "0x6317170", VA = "0x6318170")]
	public static FormatOptions ParseFormatToFormatOptions(string fullFormat)
	{
		return default(FormatOptions);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x6316060", Offset = "0x6315060", VA = "0x6316060")]
	private unsafe static bool AlignRight(byte* dest, ref int destIndex, int destLength, int align, int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x6316030", Offset = "0x6315030", VA = "0x6316030")]
	private unsafe static bool AlignLeft(byte* dest, ref int destIndex, int destLength, int align, int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x6317C30", Offset = "0x6316C30", VA = "0x6317C30")]
	private static int GetLengthForFormatGeneral(ref NumberBuffer number, int nMaxDigits)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x6317DF0", Offset = "0x6316DF0", VA = "0x6317DF0")]
	private unsafe static void FormatGeneral(byte* dest, ref int destIndex, int destLength, ref NumberBuffer number, int nMaxDigits, byte expChar)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x6317B30", Offset = "0x6316B30", VA = "0x6317B30")]
	private static void RoundNumber(ref NumberBuffer number, int pos, bool isCorrectlyRounded)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x6318530", Offset = "0x6317530", VA = "0x6318530")]
	private unsafe static bool ShouldRoundUp(byte* dig, int i, bool isCorrectlyRounded)
	{
		return default(bool);
	}
}
