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
		[Address(RVA = "0x3A5C900", Offset = "0x3A5C900", VA = "0x3A5C900")]
		public ModulusRing(BigInteger modulus)
		{
		}

		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3A5CCD0", Offset = "0x3A5CCD0", VA = "0x3A5CCD0")]
		public void BarrettReduction(BigInteger x)
		{
		}

		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x3A5D7D0", Offset = "0x3A5D7D0", VA = "0x3A5D7D0")]
		public BigInteger Multiply(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x3A5D960", Offset = "0x3A5D960", VA = "0x3A5D960")]
		public BigInteger Difference(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x3A5CA60", Offset = "0x3A5CA60", VA = "0x3A5CA60")]
		public BigInteger Pow(BigInteger a, BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x3A5DB30", Offset = "0x3A5DB30", VA = "0x3A5DB30")]
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
		[Address(RVA = "0x3A5A5B0", Offset = "0x3A5A5B0", VA = "0x3A5A5B0")]
		public static BigInteger AddSameSign(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x3A5A910", Offset = "0x3A5A910", VA = "0x3A5A910")]
		public static BigInteger Subtract(BigInteger big, BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x3A5D510", Offset = "0x3A5D510", VA = "0x3A5D510")]
		public static void MinusEq(BigInteger big, BigInteger small)
		{
		}

		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x3A5D610", Offset = "0x3A5D610", VA = "0x3A5D610")]
		public static void PlusEq(BigInteger bi1, BigInteger bi2)
		{
		}

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x3A5A7F0", Offset = "0x3A5A7F0", VA = "0x3A5A7F0")]
		public static Sign Compare(BigInteger bi1, BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3A5C010", Offset = "0x3A5C010", VA = "0x3A5C010")]
		public static uint SingleByteDivideInPlace(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x3A5AB30", Offset = "0x3A5AB30", VA = "0x3A5AB30")]
		public static uint DwordMod(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x3A5DC00", Offset = "0x3A5DC00", VA = "0x3A5DC00")]
		public static BigInteger[] DwordDivMod(BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3A5ABA0", Offset = "0x3A5ABA0", VA = "0x3A5ABA0")]
		public static BigInteger[] multiByteDivide(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3A5B3D0", Offset = "0x3A5B3D0", VA = "0x3A5B3D0")]
		public static BigInteger LeftShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3A5B680", Offset = "0x3A5B680", VA = "0x3A5B680")]
		public static BigInteger RightShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3A5B2A0", Offset = "0x3A5B2A0", VA = "0x3A5B2A0")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x3A5D390", Offset = "0x3A5D390", VA = "0x3A5D390")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x3A5DE30", Offset = "0x3A5DE30", VA = "0x3A5DE30")]
		public static uint modInverse(BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3A5C270", Offset = "0x3A5C270", VA = "0x3A5C270")]
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
		[Address(RVA = "0x3A5B890", Offset = "0x3A5B890", VA = "0x3A5B890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3A5A260", Offset = "0x3A5A260", VA = "0x3A5A260")]
	[CLSCompliant(false)]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3A5A2C0", Offset = "0x3A5A2C0", VA = "0x3A5A2C0")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3A5A390", Offset = "0x3A5A390", VA = "0x3A5A390")]
	[CLSCompliant(false)]
	public BigInteger(BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3A55320", Offset = "0x3A55320", VA = "0x3A55320")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3A5A4B0", Offset = "0x3A5A4B0", VA = "0x3A5A4B0")]
	[CLSCompliant(false)]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3A54190", Offset = "0x3A54190", VA = "0x3A54190")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3A54800", Offset = "0x3A54800", VA = "0x3A54800")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3A556F0", Offset = "0x3A556F0", VA = "0x3A556F0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3A54900", Offset = "0x3A54900", VA = "0x3A54900")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3A542B0", Offset = "0x3A542B0", VA = "0x3A542B0")]
	[CLSCompliant(false)]
	public static uint operator %(BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3A54A50", Offset = "0x3A54A50", VA = "0x3A54A50")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3A5B270", Offset = "0x3A5B270", VA = "0x3A5B270")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3A543C0", Offset = "0x3A543C0", VA = "0x3A543C0")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3A5B3C0", Offset = "0x3A5B3C0", VA = "0x3A5B3C0")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3A5B670", Offset = "0x3A5B670", VA = "0x3A5B670")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3A5B970", Offset = "0x3A5B970", VA = "0x3A5B970")]
	public static BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3A55620", Offset = "0x3A55620", VA = "0x3A55620")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3A54750", Offset = "0x3A54750", VA = "0x3A54750")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3A5BB40", Offset = "0x3A5BB40", VA = "0x3A5BB40")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3A5BBC0", Offset = "0x3A5BBC0", VA = "0x3A5BBC0")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3A5BC00", Offset = "0x3A5BC00", VA = "0x3A5BC00")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3A5BC50", Offset = "0x3A5BC50", VA = "0x3A5BC50")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3A55E40", Offset = "0x3A55E40", VA = "0x3A55E40")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3A5A530", Offset = "0x3A5A530", VA = "0x3A5A530")]
	[CLSCompliant(false)]
	public static bool operator ==(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3A5BCD0", Offset = "0x3A5BCD0", VA = "0x3A5BCD0")]
	[CLSCompliant(false)]
	public static bool operator !=(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3A54BE0", Offset = "0x3A54BE0", VA = "0x3A54BE0")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3A54320", Offset = "0x3A54320", VA = "0x3A54320")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3A556E0", Offset = "0x3A556E0", VA = "0x3A556E0")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3A547F0", Offset = "0x3A547F0", VA = "0x3A547F0")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3A5BD50", Offset = "0x3A5BD50", VA = "0x3A5BD50")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3A5BD60", Offset = "0x3A5BD60", VA = "0x3A5BD60")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3A5BD70", Offset = "0x3A5BD70", VA = "0x3A5BD70")]
	[CLSCompliant(false)]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x3A5BDB0", Offset = "0x3A5BDB0", VA = "0x3A5BDB0")]
	[CLSCompliant(false)]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x3A5A460", Offset = "0x3A5A460", VA = "0x3A5A460")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3A557B0", Offset = "0x3A557B0", VA = "0x3A557B0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x3A5C0D0", Offset = "0x3A5C0D0", VA = "0x3A5C0D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x3A5C120", Offset = "0x3A5C120", VA = "0x3A5C120", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x3A5C160", Offset = "0x3A5C160", VA = "0x3A5C160", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3A54A40", Offset = "0x3A54A40", VA = "0x3A54A40")]
	public BigInteger ModInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3A55670", Offset = "0x3A55670", VA = "0x3A55670")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3A54240", Offset = "0x3A54240", VA = "0x3A54240")]
	public static BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x3A5CBE0", Offset = "0x3A5CBE0", VA = "0x3A5CBE0")]
	public void Incr2()
	{
	}
}
