// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Math.BigInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Math;

[Token(Token = "0x200006D")]
internal class BigInteger
{
	[Token(Token = "0x200006E")]
	public enum Sign
	{
		[Token(Token = "0x4000204")]
		Negative = -1,
		[Token(Token = "0x4000205")]
		Zero,
		[Token(Token = "0x4000206")]
		Positive
	}

	[Token(Token = "0x200006F")]
	internal sealed class ModulusRing
	{
		[Token(Token = "0x4000207")]
		[FieldOffset(Offset = "0x10")]
		private Mono.Math.BigInteger mod;

		[Token(Token = "0x4000208")]
		[FieldOffset(Offset = "0x18")]
		private Mono.Math.BigInteger constant;

		[Token(Token = "0x6000200")]
		[Address(RVA = "0x195F720", Offset = "0x195DD20", VA = "0x18195F720")]
		public ModulusRing(Mono.Math.BigInteger modulus)
		{
		}

		[Token(Token = "0x6000201")]
		[Address(RVA = "0x195EBE0", Offset = "0x195D1E0", VA = "0x18195EBE0")]
		public void BarrettReduction(Mono.Math.BigInteger x)
		{
		}

		[Token(Token = "0x6000202")]
		[Address(RVA = "0x195F260", Offset = "0x195D860", VA = "0x18195F260")]
		public Mono.Math.BigInteger Multiply(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x6000203")]
		[Address(RVA = "0x195F050", Offset = "0x195D650", VA = "0x18195F050")]
		public Mono.Math.BigInteger Difference(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x6000204")]
		[Address(RVA = "0x195F530", Offset = "0x195DB30", VA = "0x18195F530")]
		public Mono.Math.BigInteger Pow(Mono.Math.BigInteger a, Mono.Math.BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x6000205")]
		[Address(RVA = "0x195F6B0", Offset = "0x195DCB0", VA = "0x18195F6B0")]
		public Mono.Math.BigInteger Pow(uint b, Mono.Math.BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000070")]
	private sealed class Kernel
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x195BF70", Offset = "0x195A570", VA = "0x18195BF70")]
		public static Mono.Math.BigInteger AddSameSign(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x6000207")]
		[Address(RVA = "0x195CAF0", Offset = "0x195B0F0", VA = "0x18195CAF0")]
		public static Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x6000208")]
		[Address(RVA = "0x1932730", Offset = "0x1930D30", VA = "0x181932730")]
		public static void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
		}

		[Token(Token = "0x6000209")]
		[Address(RVA = "0x1932AB0", Offset = "0x19310B0", VA = "0x181932AB0")]
		public static void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
		}

		[Token(Token = "0x600020A")]
		[Address(RVA = "0x1932070", Offset = "0x1930670", VA = "0x181932070")]
		public static Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x600020B")]
		[Address(RVA = "0x1932EB0", Offset = "0x19314B0", VA = "0x181932EB0")]
		public static uint SingleByteDivideInPlace(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x600020C")]
		[Address(RVA = "0x1930B80", Offset = "0x192F180", VA = "0x181930B80")]
		public static uint DwordMod(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x600020D")]
		[Address(RVA = "0x195C1B0", Offset = "0x195A7B0", VA = "0x18195C1B0")]
		public static Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x600020E")]
		[Address(RVA = "0x195D760", Offset = "0x195BD60", VA = "0x18195D760")]
		public static Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x600020F")]
		[Address(RVA = "0x195C420", Offset = "0x195AA20", VA = "0x18195C420")]
		public static Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x6000210")]
		[Address(RVA = "0x195C8A0", Offset = "0x195AEA0", VA = "0x18195C8A0")]
		public static Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x6000211")]
		[Address(RVA = "0x195C720", Offset = "0x195AD20", VA = "0x18195C720")]
		public static Mono.Math.BigInteger MultiplyByDword(Mono.Math.BigInteger n, uint f)
		{
			return null;
		}

		[Token(Token = "0x6000212")]
		[Address(RVA = "0x1932980", Offset = "0x1930F80", VA = "0x181932980")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x6000213")]
		[Address(RVA = "0x1932850", Offset = "0x1930E50", VA = "0x181932850")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x195D640", Offset = "0x195BC40", VA = "0x18195D640")]
		public static uint modInverse(Mono.Math.BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x6000215")]
		[Address(RVA = "0x195CCF0", Offset = "0x195B2F0", VA = "0x18195CCF0")]
		public static Mono.Math.BigInteger modInverse(Mono.Math.BigInteger bi, Mono.Math.BigInteger modulus)
		{
			return null;
		}
	}

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x10")]
	private uint length;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x18")]
	private uint[] data;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly uint[] smallPrimes;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x8")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000032")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x1958710", Offset = "0x1956D10", VA = "0x181958710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x1958310", Offset = "0x1956910", VA = "0x181958310")]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x1958380", Offset = "0x1956980", VA = "0x181958380")]
	public BigInteger(Mono.Math.BigInteger bi)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x1958240", Offset = "0x1956840", VA = "0x181958240")]
	public BigInteger(Mono.Math.BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x1958470", Offset = "0x1956A70", VA = "0x181958470")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x19581B0", Offset = "0x19567B0", VA = "0x1819581B0")]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x1958B20", Offset = "0x1957120", VA = "0x181958B20")]
	public static implicit operator Mono.Math.BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x1958A80", Offset = "0x1957080", VA = "0x181958A80")]
	public static implicit operator Mono.Math.BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x19587F0", Offset = "0x1956DF0", VA = "0x1819587F0")]
	public static Mono.Math.BigInteger operator +(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x1959230", Offset = "0x1957830", VA = "0x181959230")]
	public static Mono.Math.BigInteger operator -(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x1930B80", Offset = "0x192F180", VA = "0x181930B80")]
	public static uint operator %(Mono.Math.BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x1958C50", Offset = "0x1957250", VA = "0x181958C50")]
	public static Mono.Math.BigInteger operator %(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x1958990", Offset = "0x1956F90", VA = "0x181958990")]
	public static Mono.Math.BigInteger operator /(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x1958F10", Offset = "0x1957510", VA = "0x181958F10")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x1958C80", Offset = "0x1957280", VA = "0x181958C80")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi, int i)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x1958C40", Offset = "0x1957240", VA = "0x181958C40")]
	public static Mono.Math.BigInteger operator <<(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x1959220", Offset = "0x1957820", VA = "0x181959220")]
	public static Mono.Math.BigInteger operator >>(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x1957150", Offset = "0x1955750", VA = "0x181957150")]
	public static Mono.Math.BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x19570F0", Offset = "0x19556F0", VA = "0x1819570F0")]
	public static Mono.Math.BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x1957940", Offset = "0x1955F40", VA = "0x181957940")]
	public void Randomize(RandomNumberGenerator rng)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x1957B60", Offset = "0x1956160", VA = "0x181957B60")]
	public void Randomize()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x192EEC0", Offset = "0x192D4C0", VA = "0x18192EEC0")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x1957BC0", Offset = "0x19561C0", VA = "0x181957BC0")]
	public bool TestBit(uint bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x1957C00", Offset = "0x1956200", VA = "0x181957C00")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x192F8E0", Offset = "0x192DEE0", VA = "0x18192F8E0")]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x192F930", Offset = "0x192DF30", VA = "0x18192F930")]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x19577D0", Offset = "0x1955DD0", VA = "0x1819577D0")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x1957320", Offset = "0x1955920", VA = "0x181957320")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x1930720", Offset = "0x192ED20", VA = "0x181930720")]
	public static bool operator ==(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x1930A70", Offset = "0x192F070", VA = "0x181930A70")]
	public static bool operator !=(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x19589C0", Offset = "0x1956FC0", VA = "0x1819589C0")]
	public static bool operator ==(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x1958B80", Offset = "0x1957180", VA = "0x181958B80")]
	public static bool operator !=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x1930890", Offset = "0x192EE90", VA = "0x181930890")]
	public static bool operator >(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x1930B30", Offset = "0x192F130", VA = "0x181930B30")]
	public static bool operator <(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x1930870", Offset = "0x192EE70", VA = "0x181930870")]
	public static bool operator >=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x1930B10", Offset = "0x192F110", VA = "0x181930B10")]
	public static bool operator <=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x1957CA0", Offset = "0x19562A0", VA = "0x181957CA0")]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x1957D40", Offset = "0x1956340", VA = "0x181957D40")]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x192F880", Offset = "0x192DE80", VA = "0x18192F880")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x192EF70", Offset = "0x192D570", VA = "0x18192EF70")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x192F610", Offset = "0x192DC10", VA = "0x18192F610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1957CF0", Offset = "0x19562F0", VA = "0x181957CF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x1956F20", Offset = "0x1955520", VA = "0x181956F20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x19578C0", Offset = "0x1955EC0", VA = "0x1819578C0")]
	public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x19578D0", Offset = "0x1955ED0", VA = "0x1819578D0")]
	public Mono.Math.BigInteger ModPow(Mono.Math.BigInteger exp, Mono.Math.BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x19574C0", Offset = "0x1955AC0", VA = "0x1819574C0")]
	public bool IsProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x1957080", Offset = "0x1955680", VA = "0x181957080")]
	public static Mono.Math.BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x192F660", Offset = "0x192DC60", VA = "0x18192F660")]
	public void Incr2()
	{
	}
}
