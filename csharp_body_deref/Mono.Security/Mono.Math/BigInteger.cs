using System;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Math;

[Token(Token = "0x2000042")]
public class BigInteger
{
	[Token(Token = "0x2000043")]
	public enum Sign
	{
		[Token(Token = "0x4000242")]
		Negative = -1,
		[Token(Token = "0x4000243")]
		Zero,
		[Token(Token = "0x4000244")]
		Positive
	}

	[Token(Token = "0x2000044")]
	public sealed class ModulusRing
	{
		[Token(Token = "0x4000245")]
		[FieldOffset(Offset = "0x10")]
		private BigInteger mod;

		[Token(Token = "0x4000246")]
		[FieldOffset(Offset = "0x18")]
		private BigInteger constant;

		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3AC95C0", Offset = "0x3AC95C0", VA = "0x3AC95C0")]
		public ModulusRing(BigInteger modulus)
		{
		}

		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3AC9990", Offset = "0x3AC9990", VA = "0x3AC9990")]
		public void BarrettReduction(BigInteger x)
		{
		}

		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x3ACA490", Offset = "0x3ACA490", VA = "0x3ACA490")]
		public BigInteger Multiply(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x3ACA620", Offset = "0x3ACA620", VA = "0x3ACA620")]
		public BigInteger Difference(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x3AC9720", Offset = "0x3AC9720", VA = "0x3AC9720")]
		public BigInteger Pow(BigInteger a, BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x3ACA7F0", Offset = "0x3ACA7F0", VA = "0x3ACA7F0")]
		[CLSCompliant(false)]
		public BigInteger Pow(uint b, BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000045")]
	private sealed class Kernel
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x3AC7270", Offset = "0x3AC7270", VA = "0x3AC7270")]
		public static BigInteger AddSameSign(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x3AC75D0", Offset = "0x3AC75D0", VA = "0x3AC75D0")]
		public static BigInteger Subtract(BigInteger big, BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x3ACA1D0", Offset = "0x3ACA1D0", VA = "0x3ACA1D0")]
		public static void MinusEq(BigInteger big, BigInteger small)
		{
		}

		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x3ACA2D0", Offset = "0x3ACA2D0", VA = "0x3ACA2D0")]
		public static void PlusEq(BigInteger bi1, BigInteger bi2)
		{
		}

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x3AC74B0", Offset = "0x3AC74B0", VA = "0x3AC74B0")]
		public static Sign Compare(BigInteger bi1, BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3AC8CD0", Offset = "0x3AC8CD0", VA = "0x3AC8CD0")]
		public static uint SingleByteDivideInPlace(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x3AC77F0", Offset = "0x3AC77F0", VA = "0x3AC77F0")]
		public static uint DwordMod(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x3ACA8C0", Offset = "0x3ACA8C0", VA = "0x3ACA8C0")]
		public static BigInteger[] DwordDivMod(BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3AC7860", Offset = "0x3AC7860", VA = "0x3AC7860")]
		public static BigInteger[] multiByteDivide(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3AC8090", Offset = "0x3AC8090", VA = "0x3AC8090")]
		public static BigInteger LeftShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3AC8340", Offset = "0x3AC8340", VA = "0x3AC8340")]
		public static BigInteger RightShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3AC7F60", Offset = "0x3AC7F60", VA = "0x3AC7F60")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x3ACA050", Offset = "0x3ACA050", VA = "0x3ACA050")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x3ACAAF0", Offset = "0x3ACAAF0", VA = "0x3ACAAF0")]
		public static uint modInverse(BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3AC8F30", Offset = "0x3AC8F30", VA = "0x3AC8F30")]
		public static BigInteger modInverse(BigInteger bi, BigInteger modulus)
		{
			return null;
		}
	}

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x10")]
	private uint length;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x18")]
	private uint[] data;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly uint[] smallPrimes;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x8")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000085")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3AC8550", Offset = "0x3AC8550", VA = "0x3AC8550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3AC6F20", Offset = "0x3AC6F20", VA = "0x3AC6F20")]
	[CLSCompliant(false)]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3AC6F80", Offset = "0x3AC6F80", VA = "0x3AC6F80")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3AC7050", Offset = "0x3AC7050", VA = "0x3AC7050")]
	[CLSCompliant(false)]
	public BigInteger(BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3AC1FE0", Offset = "0x3AC1FE0", VA = "0x3AC1FE0")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3AC7170", Offset = "0x3AC7170", VA = "0x3AC7170")]
	[CLSCompliant(false)]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3AC0E50", Offset = "0x3AC0E50", VA = "0x3AC0E50")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3AC14C0", Offset = "0x3AC14C0", VA = "0x3AC14C0")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3AC23B0", Offset = "0x3AC23B0", VA = "0x3AC23B0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3AC15C0", Offset = "0x3AC15C0", VA = "0x3AC15C0")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3AC0F70", Offset = "0x3AC0F70", VA = "0x3AC0F70")]
	[CLSCompliant(false)]
	public static uint operator %(BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3AC1710", Offset = "0x3AC1710", VA = "0x3AC1710")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3AC7F30", Offset = "0x3AC7F30", VA = "0x3AC7F30")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3AC1080", Offset = "0x3AC1080", VA = "0x3AC1080")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3AC8080", Offset = "0x3AC8080", VA = "0x3AC8080")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3AC8330", Offset = "0x3AC8330", VA = "0x3AC8330")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3AC8630", Offset = "0x3AC8630", VA = "0x3AC8630")]
	public static BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3AC22E0", Offset = "0x3AC22E0", VA = "0x3AC22E0")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3AC1410", Offset = "0x3AC1410", VA = "0x3AC1410")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3AC8800", Offset = "0x3AC8800", VA = "0x3AC8800")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3AC8880", Offset = "0x3AC8880", VA = "0x3AC8880")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3AC88C0", Offset = "0x3AC88C0", VA = "0x3AC88C0")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3AC8910", Offset = "0x3AC8910", VA = "0x3AC8910")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3AC2B00", Offset = "0x3AC2B00", VA = "0x3AC2B00")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3AC71F0", Offset = "0x3AC71F0", VA = "0x3AC71F0")]
	[CLSCompliant(false)]
	public static bool operator ==(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3AC8990", Offset = "0x3AC8990", VA = "0x3AC8990")]
	[CLSCompliant(false)]
	public static bool operator !=(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3AC18A0", Offset = "0x3AC18A0", VA = "0x3AC18A0")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3AC0FE0", Offset = "0x3AC0FE0", VA = "0x3AC0FE0")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3AC23A0", Offset = "0x3AC23A0", VA = "0x3AC23A0")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3AC14B0", Offset = "0x3AC14B0", VA = "0x3AC14B0")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3AC8A10", Offset = "0x3AC8A10", VA = "0x3AC8A10")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3AC8A20", Offset = "0x3AC8A20", VA = "0x3AC8A20")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3AC8A30", Offset = "0x3AC8A30", VA = "0x3AC8A30")]
	[CLSCompliant(false)]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x3AC8A70", Offset = "0x3AC8A70", VA = "0x3AC8A70")]
	[CLSCompliant(false)]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x3AC7120", Offset = "0x3AC7120", VA = "0x3AC7120")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3AC2470", Offset = "0x3AC2470", VA = "0x3AC2470")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x3AC8D90", Offset = "0x3AC8D90", VA = "0x3AC8D90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x3AC8DE0", Offset = "0x3AC8DE0", VA = "0x3AC8DE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x3AC8E20", Offset = "0x3AC8E20", VA = "0x3AC8E20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3AC1700", Offset = "0x3AC1700", VA = "0x3AC1700")]
	public BigInteger ModInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3AC2330", Offset = "0x3AC2330", VA = "0x3AC2330")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3AC0F00", Offset = "0x3AC0F00", VA = "0x3AC0F00")]
	public static BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x3AC98A0", Offset = "0x3AC98A0", VA = "0x3AC98A0")]
	public void Incr2()
	{
	}
}
