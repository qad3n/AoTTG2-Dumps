// ==================== AoTTG2 cross-reference ====================
// Type: System.Numerics.BigIntegerCalculator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Numerics;

[Token(Token = "0x2000005")]
internal static class BigIntegerCalculator
{
	[Token(Token = "0x2000006")]
	internal struct BitsBuffer
	{
		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x0")]
		private uint[] _bits;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x8")]
		private int _length;

		[Token(Token = "0x600007A")]
		[Address(RVA = "0x25C6260", Offset = "0x25C4860", VA = "0x1825C6260")]
		public BitsBuffer(int size, uint value)
		{
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x25C6150", Offset = "0x25C4750", VA = "0x1825C6150")]
		public BitsBuffer(int size, uint[] value)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x25C5DA0", Offset = "0x25C43A0", VA = "0x1825C5DA0")]
		public void MultiplySelf(ref BitsBuffer value, ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x25C6070", Offset = "0x25C4670", VA = "0x1825C6070")]
		public void SquareSelf(ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x25C6040", Offset = "0x25C4640", VA = "0x1825C6040")]
		public void Reduce(ref FastReducer reducer)
		{
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x25C5F20", Offset = "0x25C4520", VA = "0x1825C5F20")]
		public void Reduce(uint[] modulus)
		{
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		public uint[] GetBits()
		{
			return null;
		}

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x128C570", Offset = "0x128AB70", VA = "0x18128C570")]
		public int GetSize()
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x25C5CE0", Offset = "0x25C42E0", VA = "0x1825C5CE0")]
		private void Apply(ref BitsBuffer temp, int maxLength)
		{
		}
	}

	[Token(Token = "0x2000007")]
	internal readonly struct FastReducer
	{
		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint[] _modulus;

		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x8")]
		private readonly uint[] _mu;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x10")]
		private readonly uint[] _q1;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x18")]
		private readonly uint[] _q2;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x20")]
		private readonly int _muLength;

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x25C67F0", Offset = "0x25C4DF0", VA = "0x1825C67F0")]
		public FastReducer(uint[] modulus)
		{
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x25C6480", Offset = "0x25C4A80", VA = "0x1825C6480")]
		public int Reduce(uint[] value, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x25C62F0", Offset = "0x25C48F0", VA = "0x1825C62F0")]
		private static int DivMul(uint[] left, int leftLength, uint[] right, int rightLength, uint[] bits, int k)
		{
			return default(int);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x25C6580", Offset = "0x25C4B80", VA = "0x1825C6580")]
		private static int SubMod(uint[] left, int leftLength, uint[] right, int rightLength, uint[] modulus, int k)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private static int ReducerThreshold;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x4")]
	private static int SquareThreshold;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x8")]
	private static int AllocationThreshold;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0xC")]
	private static int MultiplyThreshold;

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x25BACC0", Offset = "0x25B92C0", VA = "0x1825BACC0")]
	public static uint[] Add(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x25BAD80", Offset = "0x25B9380", VA = "0x1825BAD80")]
	public static uint[] Add(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x25BAC40", Offset = "0x25B9240", VA = "0x1825BAC40")]
	private unsafe static void Add(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x25BABD0", Offset = "0x25B91D0", VA = "0x1825BABD0")]
	private unsafe static void AddSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x25BDA40", Offset = "0x25BC040", VA = "0x1825BDA40")]
	public static uint[] Subtract(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x25BD860", Offset = "0x25BBE60", VA = "0x1825BD860")]
	public static uint[] Subtract(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x25BD9D0", Offset = "0x25BBFD0", VA = "0x1825BD9D0")]
	private unsafe static void Subtract(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x25BD7F0", Offset = "0x25BBDF0", VA = "0x1825BD7F0")]
	private unsafe static void SubtractSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x25BAF10", Offset = "0x25B9510", VA = "0x1825BAF10")]
	public static int Compare(uint[] left, uint[] right)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x25BAEE0", Offset = "0x25B94E0", VA = "0x1825BAEE0")]
	private unsafe static int Compare(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x25BB400", Offset = "0x25B9A00", VA = "0x1825BB400")]
	public static uint[] Divide(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x25BD130", Offset = "0x25BB730", VA = "0x1825BD130")]
	public static uint Remainder(uint[] left, uint right)
	{
		return default(uint);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x25BB4B0", Offset = "0x25B9AB0", VA = "0x1825BB4B0")]
	public static uint[] Divide(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x25BD030", Offset = "0x25BB630", VA = "0x1825BD030")]
	public static uint[] Remainder(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x25BB040", Offset = "0x25B9640", VA = "0x1825BB040")]
	private unsafe static void Divide(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x25BAB80", Offset = "0x25B9180", VA = "0x1825BAB80")]
	private unsafe static uint AddDivisor(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(uint);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x25BD790", Offset = "0x25BBD90", VA = "0x1825BD790")]
	private unsafe static uint SubtractDivisor(uint* left, int leftLength, uint* right, int rightLength, ulong q)
	{
		return default(uint);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x25BB000", Offset = "0x25B9600", VA = "0x1825BB000")]
	private static bool DivideGuessTooBig(ulong q, ulong valHi, uint valLo, uint divHi, uint divLo)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x25BAF80", Offset = "0x25B9580", VA = "0x1825BAF80")]
	private static uint[] CreateCopy(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x25BB5F0", Offset = "0x25B9BF0", VA = "0x1825BB5F0")]
	private static int LeadingZeros(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x25BCD40", Offset = "0x25BB340", VA = "0x1825BCD40")]
	public static uint Pow(uint value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x25BCA80", Offset = "0x25BB080", VA = "0x1825BCA80")]
	public static uint Pow(uint[] value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x25BCFB0", Offset = "0x25BB5B0", VA = "0x1825BCFB0")]
	public static uint Pow(uint value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x25BC9C0", Offset = "0x25BAFC0", VA = "0x1825BC9C0")]
	public static uint Pow(uint[] value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x25BBD80", Offset = "0x25BA380", VA = "0x1825BBD80")]
	private static uint PowCore(uint[] power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x25BC110", Offset = "0x25BA710", VA = "0x1825BC110")]
	private static uint PowCore(uint power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x25BCDF0", Offset = "0x25BB3F0", VA = "0x1825BCDF0")]
	public static uint[] Pow(uint value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x25BCEE0", Offset = "0x25BB4E0", VA = "0x1825BCEE0")]
	public static uint[] Pow(uint[] value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x25BCB70", Offset = "0x25BB170", VA = "0x1825BCB70")]
	public static uint[] Pow(uint value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x25BCC70", Offset = "0x25BB270", VA = "0x1825BCC70")]
	public static uint[] Pow(uint[] value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x25BC170", Offset = "0x25BA770", VA = "0x1825BC170")]
	private static uint[] PowCore(uint[] power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x25BC740", Offset = "0x25BAD40", VA = "0x1825BC740")]
	private static uint[] PowCore(uint power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x25BC5F0", Offset = "0x25BABF0", VA = "0x1825BC5F0")]
	private static void PowCore(uint[] power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x25BC550", Offset = "0x25BAB50", VA = "0x1825BC550")]
	private static void PowCore(uint power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x25BBF00", Offset = "0x25BA500", VA = "0x1825BBF00")]
	private static void PowCore(uint[] power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x25BC060", Offset = "0x25BA660", VA = "0x1825BC060")]
	private static void PowCore(uint power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x25BAAC0", Offset = "0x25B90C0", VA = "0x1825BAAC0")]
	private static int ActualLength(uint[] value)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x25BAB40", Offset = "0x25B9140", VA = "0x1825BAB40")]
	private static int ActualLength(uint[] value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x25BD600", Offset = "0x25BBC00", VA = "0x1825BD600")]
	public static uint[] Square(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x25BD180", Offset = "0x25BB780", VA = "0x1825BD180")]
	private unsafe static void Square(uint* value, int valueLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x25BBCC0", Offset = "0x25BA2C0", VA = "0x1825BBCC0")]
	public static uint[] Multiply(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x25BB670", Offset = "0x25B9C70", VA = "0x1825BB670")]
	public static uint[] Multiply(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x25BB790", Offset = "0x25B9D90", VA = "0x1825BB790")]
	private unsafe static void Multiply(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x25BD6E0", Offset = "0x25BBCE0", VA = "0x1825BD6E0")]
	private unsafe static void SubtractCore(uint* left, int leftLength, uint* right, int rightLength, uint* core, int coreLength)
	{
	}
}
