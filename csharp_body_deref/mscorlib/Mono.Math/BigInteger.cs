using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Math;

[Token(Token = "0x200004F")]
internal class BigInteger
{
	[Token(Token = "0x2000050")]
	public enum Sign
	{
		[Token(Token = "0x4000182")]
		Negative = -1,
		[Token(Token = "0x4000183")]
		Zero,
		[Token(Token = "0x4000184")]
		Positive
	}

	[Token(Token = "0x2000051")]
	internal sealed class ModulusRing
	{
		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x10")]
		private Mono.Math.BigInteger mod;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x18")]
		private Mono.Math.BigInteger constant;

		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x4E0ADA0", Offset = "0x4E0ADA0", VA = "0x4E0ADA0")]
		public ModulusRing(Mono.Math.BigInteger modulus)
		{
		}

		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x4E0B1B0", Offset = "0x4E0B1B0", VA = "0x4E0B1B0")]
		public void BarrettReduction(Mono.Math.BigInteger x)
		{
		}

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x4E0BCB0", Offset = "0x4E0BCB0", VA = "0x4E0BCB0")]
		public Mono.Math.BigInteger Multiply(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x4E0BE40", Offset = "0x4E0BE40", VA = "0x4E0BE40")]
		public Mono.Math.BigInteger Difference(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x4E0AF00", Offset = "0x4E0AF00", VA = "0x4E0AF00")]
		public Mono.Math.BigInteger Pow(Mono.Math.BigInteger a, Mono.Math.BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x4E0C010", Offset = "0x4E0C010", VA = "0x4E0C010")]
		public Mono.Math.BigInteger Pow(uint b, Mono.Math.BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000052")]
	private sealed class Kernel
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x4E08810", Offset = "0x4E08810", VA = "0x4E08810")]
		public static Mono.Math.BigInteger AddSameSign(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x4E08B70", Offset = "0x4E08B70", VA = "0x4E08B70")]
		public static Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x4E0B9F0", Offset = "0x4E0B9F0", VA = "0x4E0B9F0")]
		public static void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x4E0BAF0", Offset = "0x4E0BAF0", VA = "0x4E0BAF0")]
		public static void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x4E08A50", Offset = "0x4E08A50", VA = "0x4E08A50")]
		public static Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4E0A480", Offset = "0x4E0A480", VA = "0x4E0A480")]
		public static uint SingleByteDivideInPlace(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x4E08D90", Offset = "0x4E08D90", VA = "0x4E08D90")]
		public static uint DwordMod(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x4E0C0E0", Offset = "0x4E0C0E0", VA = "0x4E0C0E0")]
		public static Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x4E08E00", Offset = "0x4E08E00", VA = "0x4E08E00")]
		public static Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x4E09750", Offset = "0x4E09750", VA = "0x4E09750")]
		public static Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4E09A00", Offset = "0x4E09A00", VA = "0x4E09A00")]
		public static Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x4E095F0", Offset = "0x4E095F0", VA = "0x4E095F0")]
		public static Mono.Math.BigInteger MultiplyByDword(Mono.Math.BigInteger n, uint f)
		{
			return null;
		}

		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x4E094D0", Offset = "0x4E094D0", VA = "0x4E094D0")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4E0B870", Offset = "0x4E0B870", VA = "0x4E0B870")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4E0C310", Offset = "0x4E0C310", VA = "0x4E0C310")]
		public static uint modInverse(Mono.Math.BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4E0A710", Offset = "0x4E0A710", VA = "0x4E0A710")]
		public static Mono.Math.BigInteger modInverse(Mono.Math.BigInteger bi, Mono.Math.BigInteger modulus)
		{
			return null;
		}
	}

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x10")]
	private uint length;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x18")]
	private uint[] data;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly uint[] smallPrimes;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x8")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000032")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4E09C10", Offset = "0x4E09C10", VA = "0x4E09C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4E08540", Offset = "0x4E08540", VA = "0x4E08540")]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4E085A0", Offset = "0x4E085A0", VA = "0x4E085A0")]
	public BigInteger(Mono.Math.BigInteger bi)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4E08670", Offset = "0x4E08670", VA = "0x4E08670")]
	public BigInteger(Mono.Math.BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4E01B20", Offset = "0x4E01B20", VA = "0x4E01B20")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4E08790", Offset = "0x4E08790", VA = "0x4E08790")]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4E00990", Offset = "0x4E00990", VA = "0x4E00990")]
	public static implicit operator Mono.Math.BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4E01000", Offset = "0x4E01000", VA = "0x4E01000")]
	public static implicit operator Mono.Math.BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4E01EF0", Offset = "0x4E01EF0", VA = "0x4E01EF0")]
	public static Mono.Math.BigInteger operator +(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4E01100", Offset = "0x4E01100", VA = "0x4E01100")]
	public static Mono.Math.BigInteger operator -(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4E00AB0", Offset = "0x4E00AB0", VA = "0x4E00AB0")]
	public static uint operator %(Mono.Math.BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4E01250", Offset = "0x4E01250", VA = "0x4E01250")]
	public static Mono.Math.BigInteger operator %(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4E066F0", Offset = "0x4E066F0", VA = "0x4E066F0")]
	public static Mono.Math.BigInteger operator /(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4E00BC0", Offset = "0x4E00BC0", VA = "0x4E00BC0")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4E065E0", Offset = "0x4E065E0", VA = "0x4E065E0")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi, int i)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4E09740", Offset = "0x4E09740", VA = "0x4E09740")]
	public static Mono.Math.BigInteger operator <<(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4E099F0", Offset = "0x4E099F0", VA = "0x4E099F0")]
	public static Mono.Math.BigInteger operator >>(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4E09CF0", Offset = "0x4E09CF0", VA = "0x4E09CF0")]
	public static Mono.Math.BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4E01E20", Offset = "0x4E01E20", VA = "0x4E01E20")]
	public static Mono.Math.BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4E09EC0", Offset = "0x4E09EC0", VA = "0x4E09EC0")]
	public void Randomize(RandomNumberGenerator rng)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4E06180", Offset = "0x4E06180", VA = "0x4E06180")]
	public void Randomize()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4E00F50", Offset = "0x4E00F50", VA = "0x4E00F50")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4E066C0", Offset = "0x4E066C0", VA = "0x4E066C0")]
	public bool TestBit(uint bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4E0A040", Offset = "0x4E0A040", VA = "0x4E0A040")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4E0A0C0", Offset = "0x4E0A0C0", VA = "0x4E0A0C0")]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4E0A100", Offset = "0x4E0A100", VA = "0x4E0A100")]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4E0A150", Offset = "0x4E0A150", VA = "0x4E0A150")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4E02640", Offset = "0x4E02640", VA = "0x4E02640")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4E061D0", Offset = "0x4E061D0", VA = "0x4E061D0")]
	public static bool operator ==(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4E06EC0", Offset = "0x4E06EC0", VA = "0x4E06EC0")]
	public static bool operator !=(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4E013E0", Offset = "0x4E013E0", VA = "0x4E013E0")]
	public static bool operator ==(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4E00B20", Offset = "0x4E00B20", VA = "0x4E00B20")]
	public static bool operator !=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4E01EE0", Offset = "0x4E01EE0", VA = "0x4E01EE0")]
	public static bool operator >(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4E00FF0", Offset = "0x4E00FF0", VA = "0x4E00FF0")]
	public static bool operator <(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4E06250", Offset = "0x4E06250", VA = "0x4E06250")]
	public static bool operator >=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4E06720", Offset = "0x4E06720", VA = "0x4E06720")]
	public static bool operator <=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4E0A1D0", Offset = "0x4E0A1D0", VA = "0x4E0A1D0")]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4E0A210", Offset = "0x4E0A210", VA = "0x4E0A210")]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4E08740", Offset = "0x4E08740", VA = "0x4E08740")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4E01FB0", Offset = "0x4E01FB0", VA = "0x4E01FB0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4E0A570", Offset = "0x4E0A570", VA = "0x4E0A570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4E0A5C0", Offset = "0x4E0A5C0", VA = "0x4E0A5C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4E0A600", Offset = "0x4E0A600", VA = "0x4E0A600", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4E01240", Offset = "0x4E01240", VA = "0x4E01240")]
	public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4E01E70", Offset = "0x4E01E70", VA = "0x4E01E70")]
	public Mono.Math.BigInteger ModPow(Mono.Math.BigInteger exp, Mono.Math.BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4E06320", Offset = "0x4E06320", VA = "0x4E06320")]
	public bool IsProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4E00A40", Offset = "0x4E00A40", VA = "0x4E00A40")]
	public static Mono.Math.BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4E0B0C0", Offset = "0x4E0B0C0", VA = "0x4E0B0C0")]
	public void Incr2()
	{
	}
}
