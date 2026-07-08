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
		[Address(RVA = "0x432E550", Offset = "0x432E550", VA = "0x432E550")]
		public BitsBuffer(int size, uint value)
		{
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x432E7B0", Offset = "0x432E7B0", VA = "0x432E7B0")]
		public BitsBuffer(int size, uint[] value)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x432F360", Offset = "0x432F360", VA = "0x432F360")]
		public void MultiplySelf(ref BitsBuffer value, ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x432F580", Offset = "0x432F580", VA = "0x432F580")]
		public void SquareSelf(ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x432F630", Offset = "0x432F630", VA = "0x432F630")]
		public void Reduce(ref FastReducer reducer)
		{
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x432F490", Offset = "0x432F490", VA = "0x432F490")]
		public void Reduce(uint[] modulus)
		{
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4331390", Offset = "0x4331390", VA = "0x4331390")]
		public uint[] GetBits()
		{
			return null;
		}

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x432EA90", Offset = "0x432EA90", VA = "0x432EA90")]
		public int GetSize()
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4331230", Offset = "0x4331230", VA = "0x4331230")]
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
		[Address(RVA = "0x432ECE0", Offset = "0x432ECE0", VA = "0x432ECE0")]
		public FastReducer(uint[] modulus)
		{
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x4331300", Offset = "0x4331300", VA = "0x4331300")]
		public int Reduce(uint[] value, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x43313A0", Offset = "0x43313A0", VA = "0x43313A0")]
		private static int DivMul(uint[] left, int leftLength, uint[] right, int rightLength, uint[] bits, int k)
		{
			return default(int);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x4331520", Offset = "0x4331520", VA = "0x4331520")]
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
	[Address(RVA = "0x432A680", Offset = "0x432A680", VA = "0x432A680")]
	public static uint[] Add(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x432A740", Offset = "0x432A740", VA = "0x432A740")]
	public static uint[] Add(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x432D860", Offset = "0x432D860", VA = "0x432D860")]
	private unsafe static void Add(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x432D990", Offset = "0x432D990", VA = "0x432D990")]
	private unsafe static void AddSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x432AC10", Offset = "0x432AC10", VA = "0x432AC10")]
	public static uint[] Subtract(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x432AD20", Offset = "0x432AD20", VA = "0x432AD20")]
	public static uint[] Subtract(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x432DA60", Offset = "0x432DA60", VA = "0x432DA60")]
	private unsafe static void Subtract(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x432DB80", Offset = "0x432DB80", VA = "0x432DB80")]
	private unsafe static void SubtractSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x432ACB0", Offset = "0x432ACB0", VA = "0x432ACB0")]
	public static int Compare(uint[] left, uint[] right)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x432DC60", Offset = "0x432DC60", VA = "0x432DC60")]
	private unsafe static int Compare(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x432CA90", Offset = "0x432CA90", VA = "0x432CA90")]
	public static uint[] Divide(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x432CE80", Offset = "0x432CE80", VA = "0x432CE80")]
	public static uint Remainder(uint[] left, uint right)
	{
		return default(uint);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x432CB40", Offset = "0x432CB40", VA = "0x432CB40")]
	public static uint[] Divide(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x432CEE0", Offset = "0x432CEE0", VA = "0x432CEE0")]
	public static uint[] Remainder(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x432DD20", Offset = "0x432DD20", VA = "0x432DD20")]
	private unsafe static void Divide(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x432E310", Offset = "0x432E310", VA = "0x432E310")]
	private unsafe static uint AddDivisor(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(uint);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x432E2D0", Offset = "0x432E2D0", VA = "0x432E2D0")]
	private unsafe static uint SubtractDivisor(uint* left, int leftLength, uint* right, int rightLength, ulong q)
	{
		return default(uint);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x432E2A0", Offset = "0x432E2A0", VA = "0x432E2A0")]
	private static bool DivideGuessTooBig(ulong q, ulong valHi, uint valLo, uint divHi, uint divLo)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x432DCB0", Offset = "0x432DCB0", VA = "0x432DCB0")]
	private static uint[] CreateCopy(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x432E230", Offset = "0x432E230", VA = "0x432E230")]
	private static int LeadingZeros(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4329120", Offset = "0x4329120", VA = "0x4329120")]
	public static uint Pow(uint value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4328FA0", Offset = "0x4328FA0", VA = "0x4328FA0")]
	public static uint Pow(uint[] value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x43290C0", Offset = "0x43290C0", VA = "0x43290C0")]
	public static uint Pow(uint value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4328ED0", Offset = "0x4328ED0", VA = "0x4328ED0")]
	public static uint Pow(uint[] value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x432E400", Offset = "0x432E400", VA = "0x432E400")]
	private static uint PowCore(uint[] power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x432E3B0", Offset = "0x432E3B0", VA = "0x432E3B0")]
	private static uint PowCore(uint power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4329460", Offset = "0x4329460", VA = "0x4329460")]
	public static uint[] Pow(uint value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x43292D0", Offset = "0x43292D0", VA = "0x43292D0")]
	public static uint[] Pow(uint[] value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4329380", Offset = "0x4329380", VA = "0x4329380")]
	public static uint[] Pow(uint value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4329210", Offset = "0x4329210", VA = "0x4329210")]
	public static uint[] Pow(uint[] value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x432E8B0", Offset = "0x432E8B0", VA = "0x432E8B0")]
	private static uint[] PowCore(uint[] power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x432E5D0", Offset = "0x432E5D0", VA = "0x432E5D0")]
	private static uint[] PowCore(uint power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x432EAB0", Offset = "0x432EAB0", VA = "0x432EAB0")]
	private static void PowCore(uint[] power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x432F0C0", Offset = "0x432F0C0", VA = "0x432F0C0")]
	private static void PowCore(uint power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x432EE80", Offset = "0x432EE80", VA = "0x432EE80")]
	private static void PowCore(uint[] power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x432F200", Offset = "0x432F200", VA = "0x432F200")]
	private static void PowCore(uint power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x432F650", Offset = "0x432F650", VA = "0x432F650")]
	private static int ActualLength(uint[] value)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x432F6D0", Offset = "0x432F6D0", VA = "0x432F6D0")]
	private static int ActualLength(uint[] value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x432C730", Offset = "0x432C730", VA = "0x432C730")]
	public static uint[] Square(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x432F710", Offset = "0x432F710", VA = "0x432F710")]
	private unsafe static void Square(uint* value, int valueLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x432C670", Offset = "0x432C670", VA = "0x432C670")]
	public static uint[] Multiply(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x432C7F0", Offset = "0x432C7F0", VA = "0x432C7F0")]
	public static uint[] Multiply(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x43302B0", Offset = "0x43302B0", VA = "0x43302B0")]
	private unsafe static void Multiply(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4330100", Offset = "0x4330100", VA = "0x4330100")]
	private unsafe static void SubtractCore(uint* left, int leftLength, uint* right, int rightLength, uint* core, int coreLength)
	{
	}
}
