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
		[Address(RVA = "0x466BCB0", Offset = "0x466BCB0", VA = "0x466BCB0")]
		public BitsBuffer(int size, uint value)
		{
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x466BF10", Offset = "0x466BF10", VA = "0x466BF10")]
		public BitsBuffer(int size, uint[] value)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x466CAC0", Offset = "0x466CAC0", VA = "0x466CAC0")]
		public void MultiplySelf(ref BitsBuffer value, ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x466CCE0", Offset = "0x466CCE0", VA = "0x466CCE0")]
		public void SquareSelf(ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x466CD90", Offset = "0x466CD90", VA = "0x466CD90")]
		public void Reduce(ref FastReducer reducer)
		{
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x466CBF0", Offset = "0x466CBF0", VA = "0x466CBF0")]
		public void Reduce(uint[] modulus)
		{
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x466EAF0", Offset = "0x466EAF0", VA = "0x466EAF0")]
		public uint[] GetBits()
		{
			return null;
		}

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x466C1F0", Offset = "0x466C1F0", VA = "0x466C1F0")]
		public int GetSize()
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x466E990", Offset = "0x466E990", VA = "0x466E990")]
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
		[Address(RVA = "0x466C440", Offset = "0x466C440", VA = "0x466C440")]
		public FastReducer(uint[] modulus)
		{
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x466EA60", Offset = "0x466EA60", VA = "0x466EA60")]
		public int Reduce(uint[] value, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x466EB00", Offset = "0x466EB00", VA = "0x466EB00")]
		private static int DivMul(uint[] left, int leftLength, uint[] right, int rightLength, uint[] bits, int k)
		{
			return default(int);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x466EC80", Offset = "0x466EC80", VA = "0x466EC80")]
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
	[Address(RVA = "0x4667DE0", Offset = "0x4667DE0", VA = "0x4667DE0")]
	public static uint[] Add(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4667EA0", Offset = "0x4667EA0", VA = "0x4667EA0")]
	public static uint[] Add(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x466AFC0", Offset = "0x466AFC0", VA = "0x466AFC0")]
	private unsafe static void Add(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x466B0F0", Offset = "0x466B0F0", VA = "0x466B0F0")]
	private unsafe static void AddSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4668370", Offset = "0x4668370", VA = "0x4668370")]
	public static uint[] Subtract(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4668480", Offset = "0x4668480", VA = "0x4668480")]
	public static uint[] Subtract(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x466B1C0", Offset = "0x466B1C0", VA = "0x466B1C0")]
	private unsafe static void Subtract(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x466B2E0", Offset = "0x466B2E0", VA = "0x466B2E0")]
	private unsafe static void SubtractSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4668410", Offset = "0x4668410", VA = "0x4668410")]
	public static int Compare(uint[] left, uint[] right)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x466B3C0", Offset = "0x466B3C0", VA = "0x466B3C0")]
	private unsafe static int Compare(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x466A1F0", Offset = "0x466A1F0", VA = "0x466A1F0")]
	public static uint[] Divide(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x466A5E0", Offset = "0x466A5E0", VA = "0x466A5E0")]
	public static uint Remainder(uint[] left, uint right)
	{
		return default(uint);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x466A2A0", Offset = "0x466A2A0", VA = "0x466A2A0")]
	public static uint[] Divide(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x466A640", Offset = "0x466A640", VA = "0x466A640")]
	public static uint[] Remainder(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x466B480", Offset = "0x466B480", VA = "0x466B480")]
	private unsafe static void Divide(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x466BA70", Offset = "0x466BA70", VA = "0x466BA70")]
	private unsafe static uint AddDivisor(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(uint);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x466BA30", Offset = "0x466BA30", VA = "0x466BA30")]
	private unsafe static uint SubtractDivisor(uint* left, int leftLength, uint* right, int rightLength, ulong q)
	{
		return default(uint);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x466BA00", Offset = "0x466BA00", VA = "0x466BA00")]
	private static bool DivideGuessTooBig(ulong q, ulong valHi, uint valLo, uint divHi, uint divLo)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x466B410", Offset = "0x466B410", VA = "0x466B410")]
	private static uint[] CreateCopy(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x466B990", Offset = "0x466B990", VA = "0x466B990")]
	private static int LeadingZeros(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4666880", Offset = "0x4666880", VA = "0x4666880")]
	public static uint Pow(uint value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4666700", Offset = "0x4666700", VA = "0x4666700")]
	public static uint Pow(uint[] value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4666820", Offset = "0x4666820", VA = "0x4666820")]
	public static uint Pow(uint value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4666630", Offset = "0x4666630", VA = "0x4666630")]
	public static uint Pow(uint[] value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x466BB60", Offset = "0x466BB60", VA = "0x466BB60")]
	private static uint PowCore(uint[] power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x466BB10", Offset = "0x466BB10", VA = "0x466BB10")]
	private static uint PowCore(uint power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4666BC0", Offset = "0x4666BC0", VA = "0x4666BC0")]
	public static uint[] Pow(uint value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4666A30", Offset = "0x4666A30", VA = "0x4666A30")]
	public static uint[] Pow(uint[] value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4666AE0", Offset = "0x4666AE0", VA = "0x4666AE0")]
	public static uint[] Pow(uint value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4666970", Offset = "0x4666970", VA = "0x4666970")]
	public static uint[] Pow(uint[] value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x466C010", Offset = "0x466C010", VA = "0x466C010")]
	private static uint[] PowCore(uint[] power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x466BD30", Offset = "0x466BD30", VA = "0x466BD30")]
	private static uint[] PowCore(uint power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x466C210", Offset = "0x466C210", VA = "0x466C210")]
	private static void PowCore(uint[] power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x466C820", Offset = "0x466C820", VA = "0x466C820")]
	private static void PowCore(uint power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x466C5E0", Offset = "0x466C5E0", VA = "0x466C5E0")]
	private static void PowCore(uint[] power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x466C960", Offset = "0x466C960", VA = "0x466C960")]
	private static void PowCore(uint power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x466CDB0", Offset = "0x466CDB0", VA = "0x466CDB0")]
	private static int ActualLength(uint[] value)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x466CE30", Offset = "0x466CE30", VA = "0x466CE30")]
	private static int ActualLength(uint[] value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4669E90", Offset = "0x4669E90", VA = "0x4669E90")]
	public static uint[] Square(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x466CE70", Offset = "0x466CE70", VA = "0x466CE70")]
	private unsafe static void Square(uint* value, int valueLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4669DD0", Offset = "0x4669DD0", VA = "0x4669DD0")]
	public static uint[] Multiply(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4669F50", Offset = "0x4669F50", VA = "0x4669F50")]
	public static uint[] Multiply(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x466DA10", Offset = "0x466DA10", VA = "0x466DA10")]
	private unsafe static void Multiply(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x466D860", Offset = "0x466D860", VA = "0x466D860")]
	private unsafe static void SubtractCore(uint* left, int leftLength, uint* right, int rightLength, uint* core, int coreLength)
	{
	}
}
