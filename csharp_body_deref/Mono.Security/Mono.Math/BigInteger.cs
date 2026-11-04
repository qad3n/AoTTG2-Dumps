using System;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Math;

[Token(Token = "0x2000055")]
public class BigInteger
{
	[Token(Token = "0x2000056")]
	public enum Sign
	{
		[Token(Token = "0x400024C")]
		Negative = -1,
		[Token(Token = "0x400024D")]
		Zero,
		[Token(Token = "0x400024E")]
		Positive
	}

	[Token(Token = "0x2000057")]
	public sealed class ModulusRing
	{
		[Token(Token = "0x400024F")]
		[FieldOffset(Offset = "0x10")]
		private BigInteger mod;

		[Token(Token = "0x4000250")]
		[FieldOffset(Offset = "0x18")]
		private BigInteger constant;

		[Token(Token = "0x600020F")]
		[Address(RVA = "0x1936FB0", Offset = "0x19355B0", VA = "0x181936FB0")]
		public ModulusRing(BigInteger modulus)
		{
		}

		[Token(Token = "0x6000210")]
		[Address(RVA = "0x1936470", Offset = "0x1934A70", VA = "0x181936470")]
		public void BarrettReduction(BigInteger x)
		{
		}

		[Token(Token = "0x6000211")]
		[Address(RVA = "0x1936AF0", Offset = "0x19350F0", VA = "0x181936AF0")]
		public BigInteger Multiply(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x6000212")]
		[Address(RVA = "0x19368E0", Offset = "0x1934EE0", VA = "0x1819368E0")]
		public BigInteger Difference(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x6000213")]
		[Address(RVA = "0x1936E30", Offset = "0x1935430", VA = "0x181936E30")]
		public BigInteger Pow(BigInteger a, BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x1936DC0", Offset = "0x19353C0", VA = "0x181936DC0")]
		[CLSCompliant(false)]
		public BigInteger Pow(uint b, BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000058")]
	private sealed class Kernel
	{
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x1931E30", Offset = "0x1930430", VA = "0x181931E30")]
		public static BigInteger AddSameSign(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x6000216")]
		[Address(RVA = "0x1932F60", Offset = "0x1931560", VA = "0x181932F60")]
		public static BigInteger Subtract(BigInteger big, BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x6000217")]
		[Address(RVA = "0x1932730", Offset = "0x1930D30", VA = "0x181932730")]
		public static void MinusEq(BigInteger big, BigInteger small)
		{
		}

		[Token(Token = "0x6000218")]
		[Address(RVA = "0x1932AB0", Offset = "0x19310B0", VA = "0x181932AB0")]
		public static void PlusEq(BigInteger bi1, BigInteger bi2)
		{
		}

		[Token(Token = "0x6000219")]
		[Address(RVA = "0x1932070", Offset = "0x1930670", VA = "0x181932070")]
		public static Sign Compare(BigInteger bi1, BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x1932EB0", Offset = "0x19314B0", VA = "0x181932EB0")]
		public static uint SingleByteDivideInPlace(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x600021B")]
		[Address(RVA = "0x1930B80", Offset = "0x192F180", VA = "0x181930B80")]
		public static uint DwordMod(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x600021C")]
		[Address(RVA = "0x19321C0", Offset = "0x19307C0", VA = "0x1819321C0")]
		public static BigInteger[] DwordDivMod(BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x600021D")]
		[Address(RVA = "0x1933BD0", Offset = "0x19321D0", VA = "0x181933BD0")]
		public static BigInteger[] multiByteDivide(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x600021E")]
		[Address(RVA = "0x1932430", Offset = "0x1930A30", VA = "0x181932430")]
		public static BigInteger LeftShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x600021F")]
		[Address(RVA = "0x1932C60", Offset = "0x1931260", VA = "0x181932C60")]
		public static BigInteger RightShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x6000220")]
		[Address(RVA = "0x1932980", Offset = "0x1930F80", VA = "0x181932980")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x6000221")]
		[Address(RVA = "0x1932850", Offset = "0x1930E50", VA = "0x181932850")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x6000222")]
		[Address(RVA = "0x1933160", Offset = "0x1931760", VA = "0x181933160")]
		public static uint modInverse(BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x6000223")]
		[Address(RVA = "0x1933280", Offset = "0x1931880", VA = "0x181933280")]
		public static BigInteger modInverse(BigInteger bi, BigInteger modulus)
		{
			return null;
		}
	}

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x10")]
	private uint length;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x18")]
	private uint[] data;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly uint[] smallPrimes;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x8")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000088")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x1930470", Offset = "0x192EA70", VA = "0x181930470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x1930000", Offset = "0x192E600", VA = "0x181930000")]
	[CLSCompliant(false)]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x192FF10", Offset = "0x192E510", VA = "0x18192FF10")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x19303A0", Offset = "0x192E9A0", VA = "0x1819303A0")]
	[CLSCompliant(false)]
	public BigInteger(BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x1930070", Offset = "0x192E670", VA = "0x181930070")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x1930310", Offset = "0x192E910", VA = "0x181930310")]
	[CLSCompliant(false)]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x19308B0", Offset = "0x192EEB0", VA = "0x1819308B0")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x1930910", Offset = "0x192EF10", VA = "0x181930910")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x1930550", Offset = "0x192EB50", VA = "0x181930550")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x1930F00", Offset = "0x192F500", VA = "0x181930F00")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x1930B80", Offset = "0x192F180", VA = "0x181930B80")]
	[CLSCompliant(false)]
	public static uint operator %(BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x1930B50", Offset = "0x192F150", VA = "0x181930B50")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x19306F0", Offset = "0x192ECF0", VA = "0x1819306F0")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x1930BE0", Offset = "0x192F1E0", VA = "0x181930BE0")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x1930B00", Offset = "0x192F100", VA = "0x181930B00")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x1930EF0", Offset = "0x192F4F0", VA = "0x181930EF0")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x192F190", Offset = "0x192D790", VA = "0x18192F190")]
	public static BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x192F360", Offset = "0x192D960", VA = "0x18192F360")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x192EEC0", Offset = "0x192D4C0", VA = "0x18192EEC0")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x192F990", Offset = "0x192DF90", VA = "0x18192F990")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x192F8E0", Offset = "0x192DEE0", VA = "0x18192F8E0")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x192F930", Offset = "0x192DF30", VA = "0x18192F930")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x192F710", Offset = "0x192DD10", VA = "0x18192F710")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x192F470", Offset = "0x192DA70", VA = "0x18192F470")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x1930720", Offset = "0x192ED20", VA = "0x181930720")]
	[CLSCompliant(false)]
	public static bool operator ==(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x1930A70", Offset = "0x192F070", VA = "0x181930A70")]
	[CLSCompliant(false)]
	public static bool operator !=(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x19307B0", Offset = "0x192EDB0", VA = "0x1819307B0")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x19309B0", Offset = "0x192EFB0", VA = "0x1819309B0")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1930890", Offset = "0x192EE90", VA = "0x181930890")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1930B30", Offset = "0x192F130", VA = "0x181930B30")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1930870", Offset = "0x192EE70", VA = "0x181930870")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1930B10", Offset = "0x192F110", VA = "0x181930B10")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x192FDE0", Offset = "0x192E3E0", VA = "0x18192FDE0")]
	[CLSCompliant(false)]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x192FA30", Offset = "0x192E030", VA = "0x18192FA30")]
	[CLSCompliant(false)]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x192F880", Offset = "0x192DE80", VA = "0x18192F880")]
	private void Normalize()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x192EF70", Offset = "0x192D570", VA = "0x18192EF70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x192F610", Offset = "0x192DC10", VA = "0x18192F610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x192FE30", Offset = "0x192E430", VA = "0x18192FE30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x192EFC0", Offset = "0x192D5C0", VA = "0x18192EFC0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x192F800", Offset = "0x192DE00", VA = "0x18192F800")]
	public BigInteger ModInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x192F810", Offset = "0x192DE10", VA = "0x18192F810")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x192F120", Offset = "0x192D720", VA = "0x18192F120")]
	public static BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x192F660", Offset = "0x192DC60", VA = "0x18192F660")]
	public void Incr2()
	{
	}
}
