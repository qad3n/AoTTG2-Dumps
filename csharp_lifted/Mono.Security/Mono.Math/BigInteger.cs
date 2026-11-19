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
		[Address(RVA = "0x52D49C0", Offset = "0x52D39C0", VA = "0x52D49C0")]
		public ModulusRing(BigInteger modulus)
		{
		}

		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x52D4DA0", Offset = "0x52D3DA0", VA = "0x52D4DA0")]
		public void BarrettReduction(BigInteger x)
		{
		}

		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x52D5730", Offset = "0x52D4730", VA = "0x52D5730")]
		public BigInteger Multiply(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x52D58D0", Offset = "0x52D48D0", VA = "0x52D58D0")]
		public BigInteger Difference(BigInteger a, BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x52D4B20", Offset = "0x52D3B20", VA = "0x52D4B20")]
		public BigInteger Pow(BigInteger a, BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x52D5AA0", Offset = "0x52D4AA0", VA = "0x52D5AA0")]
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
		[Address(RVA = "0x52D2650", Offset = "0x52D1650", VA = "0x52D2650")]
		public static BigInteger AddSameSign(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x52D29D0", Offset = "0x52D19D0", VA = "0x52D29D0")]
		public static BigInteger Subtract(BigInteger big, BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x52D5420", Offset = "0x52D4420", VA = "0x52D5420")]
		public static void MinusEq(BigInteger big, BigInteger small)
		{
		}

		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x52D5540", Offset = "0x52D4540", VA = "0x52D5540")]
		public static void PlusEq(BigInteger bi1, BigInteger bi2)
		{
		}

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x52D28C0", Offset = "0x52D18C0", VA = "0x52D28C0")]
		public static Sign Compare(BigInteger bi1, BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x52D4080", Offset = "0x52D3080", VA = "0x52D4080")]
		public static uint SingleByteDivideInPlace(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x52D2C00", Offset = "0x52D1C00", VA = "0x52D2C00")]
		public static uint DwordMod(BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x52D5B70", Offset = "0x52D4B70", VA = "0x52D5B70")]
		public static BigInteger[] DwordDivMod(BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x52D2C80", Offset = "0x52D1C80", VA = "0x52D2C80")]
		public static BigInteger[] multiByteDivide(BigInteger bi1, BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x52D3480", Offset = "0x52D2480", VA = "0x52D3480")]
		public static BigInteger LeftShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x52D3720", Offset = "0x52D2720", VA = "0x52D3720")]
		public static BigInteger RightShift(BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x52D3390", Offset = "0x52D2390", VA = "0x52D3390")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x52D5330", Offset = "0x52D4330", VA = "0x52D5330")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x52D5DC0", Offset = "0x52D4DC0", VA = "0x52D5DC0")]
		public static uint modInverse(BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x52D42E0", Offset = "0x52D32E0", VA = "0x52D42E0")]
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
		[Address(RVA = "0x52D3910", Offset = "0x52D2910", VA = "0x52D3910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x52D2300", Offset = "0x52D1300", VA = "0x52D2300")]
	[CLSCompliant(false)]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x52D2360", Offset = "0x52D1360", VA = "0x52D2360")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x52D2430", Offset = "0x52D1430", VA = "0x52D2430")]
	[CLSCompliant(false)]
	public BigInteger(BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x52CDC70", Offset = "0x52CCC70", VA = "0x52CDC70")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x52D2550", Offset = "0x52D1550", VA = "0x52D2550")]
	[CLSCompliant(false)]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x52CCB40", Offset = "0x52CBB40", VA = "0x52CCB40")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x52CD130", Offset = "0x52CC130", VA = "0x52CD130")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x52CDFB0", Offset = "0x52CCFB0", VA = "0x52CDFB0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x52CD230", Offset = "0x52CC230", VA = "0x52CD230")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x52CCC60", Offset = "0x52CBC60", VA = "0x52CCC60")]
	[CLSCompliant(false)]
	public static uint operator %(BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x52CD380", Offset = "0x52CC380", VA = "0x52CD380")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x52D3360", Offset = "0x52D2360", VA = "0x52D3360")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x52CCD80", Offset = "0x52CBD80", VA = "0x52CCD80")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x52D3470", Offset = "0x52D2470", VA = "0x52D3470")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x52D3710", Offset = "0x52D2710", VA = "0x52D3710")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x52D39F0", Offset = "0x52D29F0", VA = "0x52D39F0")]
	public static BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x52CDEE0", Offset = "0x52CCEE0", VA = "0x52CDEE0")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x52CD080", Offset = "0x52CC080", VA = "0x52CD080")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x52D3BC0", Offset = "0x52D2BC0", VA = "0x52D3BC0")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x52D3C40", Offset = "0x52D2C40", VA = "0x52D3C40")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x52D3C80", Offset = "0x52D2C80", VA = "0x52D3C80")]
	[CLSCompliant(false)]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x52D3CE0", Offset = "0x52D2CE0", VA = "0x52D3CE0")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x52CE6E0", Offset = "0x52CD6E0", VA = "0x52CE6E0")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x52D25D0", Offset = "0x52D15D0", VA = "0x52D25D0")]
	[CLSCompliant(false)]
	public static bool operator ==(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x52D3D60", Offset = "0x52D2D60", VA = "0x52D3D60")]
	[CLSCompliant(false)]
	public static bool operator !=(BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x52CD510", Offset = "0x52CC510", VA = "0x52CD510")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x52CCCE0", Offset = "0x52CBCE0", VA = "0x52CCCE0")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x52CDFA0", Offset = "0x52CCFA0", VA = "0x52CDFA0")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x52CD120", Offset = "0x52CC120", VA = "0x52CD120")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x52D3DE0", Offset = "0x52D2DE0", VA = "0x52D3DE0")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x52D3DF0", Offset = "0x52D2DF0", VA = "0x52D3DF0")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x52D3E00", Offset = "0x52D2E00", VA = "0x52D3E00")]
	[CLSCompliant(false)]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x52D3E40", Offset = "0x52D2E40", VA = "0x52D3E40")]
	[CLSCompliant(false)]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x52D2500", Offset = "0x52D1500", VA = "0x52D2500")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x52CE060", Offset = "0x52CD060", VA = "0x52CE060")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x52D4150", Offset = "0x52D3150", VA = "0x52D4150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x52D4190", Offset = "0x52D3190", VA = "0x52D4190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x52D41D0", Offset = "0x52D31D0", VA = "0x52D41D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x52CD370", Offset = "0x52CC370", VA = "0x52CD370")]
	public BigInteger ModInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x52CDF30", Offset = "0x52CCF30", VA = "0x52CDF30")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x52CCBF0", Offset = "0x52CBBF0", VA = "0x52CCBF0")]
	public static BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x52D4CA0", Offset = "0x52D3CA0", VA = "0x52D4CA0")]
	public void Incr2()
	{
	}
}
