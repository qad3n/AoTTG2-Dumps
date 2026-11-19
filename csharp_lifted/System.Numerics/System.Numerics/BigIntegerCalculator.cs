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
		[Address(RVA = "0x5F7DF40", Offset = "0x5F7CF40", VA = "0x5F7DF40")]
		public BitsBuffer(int size, uint value)
		{
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x5F7E250", Offset = "0x5F7D250", VA = "0x5F7E250")]
		public BitsBuffer(int size, uint[] value)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x5F7F520", Offset = "0x5F7E520", VA = "0x5F7F520")]
		public void MultiplySelf(ref BitsBuffer value, ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x5F7F770", Offset = "0x5F7E770", VA = "0x5F7F770")]
		public void SquareSelf(ref BitsBuffer temp)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x5F7F830", Offset = "0x5F7E830", VA = "0x5F7F830")]
		public void Reduce(ref FastReducer reducer)
		{
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x5F7F650", Offset = "0x5F7E650", VA = "0x5F7F650")]
		public void Reduce(uint[] modulus)
		{
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x5F81440", Offset = "0x5F80440", VA = "0x5F81440")]
		public uint[] GetBits()
		{
			return null;
		}

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x5F7E550", Offset = "0x5F7D550", VA = "0x5F7E550")]
		public int GetSize()
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x5F812D0", Offset = "0x5F802D0", VA = "0x5F812D0")]
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
		[Address(RVA = "0x5F7ECC0", Offset = "0x5F7DCC0", VA = "0x5F7ECC0")]
		public FastReducer(uint[] modulus)
		{
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x5F813B0", Offset = "0x5F803B0", VA = "0x5F813B0")]
		public int Reduce(uint[] value, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x5F81450", Offset = "0x5F80450", VA = "0x5F81450")]
		private static int DivMul(uint[] left, int leftLength, uint[] right, int rightLength, uint[] bits, int k)
		{
			return default(int);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x5F815D0", Offset = "0x5F805D0", VA = "0x5F815D0")]
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
	[Address(RVA = "0x5F79E40", Offset = "0x5F78E40", VA = "0x5F79E40")]
	public static uint[] Add(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x5F79F00", Offset = "0x5F78F00", VA = "0x5F79F00")]
	public static uint[] Add(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5F7D1E0", Offset = "0x5F7C1E0", VA = "0x5F7D1E0")]
	private unsafe static void Add(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5F7D300", Offset = "0x5F7C300", VA = "0x5F7D300")]
	private unsafe static void AddSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5F7A330", Offset = "0x5F79330", VA = "0x5F7A330")]
	public static uint[] Subtract(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5F7A440", Offset = "0x5F79440", VA = "0x5F7A440")]
	public static uint[] Subtract(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5F7D3E0", Offset = "0x5F7C3E0", VA = "0x5F7D3E0")]
	private unsafe static void Subtract(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5F7D4F0", Offset = "0x5F7C4F0", VA = "0x5F7D4F0")]
	private unsafe static void SubtractSelf(uint* left, int leftLength, uint* right, int rightLength)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5F7A3D0", Offset = "0x5F793D0", VA = "0x5F7A3D0")]
	public static int Compare(uint[] left, uint[] right)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5F7D5E0", Offset = "0x5F7C5E0", VA = "0x5F7D5E0")]
	private unsafe static int Compare(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5F7C230", Offset = "0x5F7B230", VA = "0x5F7C230")]
	public static uint[] Divide(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5F7C690", Offset = "0x5F7B690", VA = "0x5F7C690")]
	public static uint Remainder(uint[] left, uint right)
	{
		return default(uint);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x5F7C2E0", Offset = "0x5F7B2E0", VA = "0x5F7C2E0")]
	public static uint[] Divide(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5F7C770", Offset = "0x5F7B770", VA = "0x5F7C770")]
	public static uint[] Remainder(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x5F7D6A0", Offset = "0x5F7C6A0", VA = "0x5F7D6A0")]
	private unsafe static void Divide(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x5F7DC70", Offset = "0x5F7CC70", VA = "0x5F7DC70")]
	private unsafe static uint AddDivisor(uint* left, int leftLength, uint* right, int rightLength)
	{
		return default(uint);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x5F7DC30", Offset = "0x5F7CC30", VA = "0x5F7DC30")]
	private unsafe static uint SubtractDivisor(uint* left, int leftLength, uint* right, int rightLength, ulong q)
	{
		return default(uint);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x5F7DC00", Offset = "0x5F7CC00", VA = "0x5F7DC00")]
	private static bool DivideGuessTooBig(ulong q, ulong valHi, uint valLo, uint divHi, uint divLo)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5F7D630", Offset = "0x5F7C630", VA = "0x5F7D630")]
	private static uint[] CreateCopy(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x5F7DB90", Offset = "0x5F7CB90", VA = "0x5F7DB90")]
	private static int LeadingZeros(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x5F788C0", Offset = "0x5F778C0", VA = "0x5F788C0")]
	public static uint Pow(uint value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x5F78650", Offset = "0x5F77650", VA = "0x5F78650")]
	public static uint Pow(uint[] value, uint power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x5F78860", Offset = "0x5F77860", VA = "0x5F78860")]
	public static uint Pow(uint value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x5F784F0", Offset = "0x5F774F0", VA = "0x5F784F0")]
	public static uint Pow(uint[] value, uint[] power, uint modulus)
	{
		return default(uint);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x5F7DD90", Offset = "0x5F7CD90", VA = "0x5F7DD90")]
	private static uint PowCore(uint[] power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x5F7DD00", Offset = "0x5F7CD00", VA = "0x5F7DD00")]
	private static uint PowCore(uint power, uint modulus, ulong value, ulong result)
	{
		return default(uint);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x5F78C70", Offset = "0x5F77C70", VA = "0x5F78C70")]
	public static uint[] Pow(uint value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5F78AD0", Offset = "0x5F77AD0", VA = "0x5F78AD0")]
	public static uint[] Pow(uint[] value, uint power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5F78B80", Offset = "0x5F77B80", VA = "0x5F78B80")]
	public static uint[] Pow(uint value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5F78A10", Offset = "0x5F77A10", VA = "0x5F78A10")]
	public static uint[] Pow(uint[] value, uint[] power, uint[] modulus)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x5F7E360", Offset = "0x5F7D360", VA = "0x5F7E360")]
	private static uint[] PowCore(uint[] power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x5F7DFC0", Offset = "0x5F7CFC0", VA = "0x5F7DFC0")]
	private static uint[] PowCore(uint power, uint[] modulus, ref BitsBuffer value)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x5F7E570", Offset = "0x5F7D570", VA = "0x5F7E570")]
	private static void PowCore(uint[] power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5F7F430", Offset = "0x5F7E430", VA = "0x5F7F430")]
	private static void PowCore(uint power, uint[] modulus, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5F7EE60", Offset = "0x5F7DE60", VA = "0x5F7EE60")]
	private static void PowCore(uint[] power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5F7F4A0", Offset = "0x5F7E4A0", VA = "0x5F7F4A0")]
	private static void PowCore(uint power, ref FastReducer reducer, ref BitsBuffer value, ref BitsBuffer result, ref BitsBuffer temp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5F7F850", Offset = "0x5F7E850", VA = "0x5F7F850")]
	private static int ActualLength(uint[] value)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5F7F8D0", Offset = "0x5F7E8D0", VA = "0x5F7F8D0")]
	private static int ActualLength(uint[] value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5F7BEC0", Offset = "0x5F7AEC0", VA = "0x5F7BEC0")]
	public static uint[] Square(uint[] value)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5F7F930", Offset = "0x5F7E930", VA = "0x5F7F930")]
	private unsafe static void Square(uint* value, int valueLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5F7BE10", Offset = "0x5F7AE10", VA = "0x5F7BE10")]
	public static uint[] Multiply(uint[] left, uint right)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5F7BF80", Offset = "0x5F7AF80", VA = "0x5F7BF80")]
	public static uint[] Multiply(uint[] left, uint[] right)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5F804A0", Offset = "0x5F7F4A0", VA = "0x5F804A0")]
	private unsafe static void Multiply(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5F802E0", Offset = "0x5F7F2E0", VA = "0x5F802E0")]
	private unsafe static void SubtractCore(uint* left, int leftLength, uint* right, int rightLength, uint* core, int coreLength)
	{
	}
}
