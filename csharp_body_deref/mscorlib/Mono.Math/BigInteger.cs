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
		[Address(RVA = "0x3AF08C0", Offset = "0x3AF08C0", VA = "0x3AF08C0")]
		public ModulusRing(Mono.Math.BigInteger modulus)
		{
		}

		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x3AF0CD0", Offset = "0x3AF0CD0", VA = "0x3AF0CD0")]
		public void BarrettReduction(Mono.Math.BigInteger x)
		{
		}

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x3AF17D0", Offset = "0x3AF17D0", VA = "0x3AF17D0")]
		public Mono.Math.BigInteger Multiply(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3AF1960", Offset = "0x3AF1960", VA = "0x3AF1960")]
		public Mono.Math.BigInteger Difference(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x3AF0A20", Offset = "0x3AF0A20", VA = "0x3AF0A20")]
		public Mono.Math.BigInteger Pow(Mono.Math.BigInteger a, Mono.Math.BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x3AF1B30", Offset = "0x3AF1B30", VA = "0x3AF1B30")]
		public Mono.Math.BigInteger Pow(uint b, Mono.Math.BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000052")]
	private sealed class Kernel
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3AEE330", Offset = "0x3AEE330", VA = "0x3AEE330")]
		public static Mono.Math.BigInteger AddSameSign(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3AEE690", Offset = "0x3AEE690", VA = "0x3AEE690")]
		public static Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3AF1510", Offset = "0x3AF1510", VA = "0x3AF1510")]
		public static void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3AF1610", Offset = "0x3AF1610", VA = "0x3AF1610")]
		public static void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x3AEE570", Offset = "0x3AEE570", VA = "0x3AEE570")]
		public static Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x3AEFFA0", Offset = "0x3AEFFA0", VA = "0x3AEFFA0")]
		public static uint SingleByteDivideInPlace(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3AEE8B0", Offset = "0x3AEE8B0", VA = "0x3AEE8B0")]
		public static uint DwordMod(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x3AF1C00", Offset = "0x3AF1C00", VA = "0x3AF1C00")]
		public static Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x3AEE920", Offset = "0x3AEE920", VA = "0x3AEE920")]
		public static Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x3AEF270", Offset = "0x3AEF270", VA = "0x3AEF270")]
		public static Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x3AEF520", Offset = "0x3AEF520", VA = "0x3AEF520")]
		public static Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x3AEF110", Offset = "0x3AEF110", VA = "0x3AEF110")]
		public static Mono.Math.BigInteger MultiplyByDword(Mono.Math.BigInteger n, uint f)
		{
			return null;
		}

		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x3AEEFF0", Offset = "0x3AEEFF0", VA = "0x3AEEFF0")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x3AF1390", Offset = "0x3AF1390", VA = "0x3AF1390")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x3AF1E30", Offset = "0x3AF1E30", VA = "0x3AF1E30")]
		public static uint modInverse(Mono.Math.BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x3AF0230", Offset = "0x3AF0230", VA = "0x3AF0230")]
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
		[Address(RVA = "0x3AEF730", Offset = "0x3AEF730", VA = "0x3AEF730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3AEE060", Offset = "0x3AEE060", VA = "0x3AEE060")]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3AEE0C0", Offset = "0x3AEE0C0", VA = "0x3AEE0C0")]
	public BigInteger(Mono.Math.BigInteger bi)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3AEE190", Offset = "0x3AEE190", VA = "0x3AEE190")]
	public BigInteger(Mono.Math.BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3AE7640", Offset = "0x3AE7640", VA = "0x3AE7640")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3AEE2B0", Offset = "0x3AEE2B0", VA = "0x3AEE2B0")]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3AE64B0", Offset = "0x3AE64B0", VA = "0x3AE64B0")]
	public static implicit operator Mono.Math.BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3AE6B20", Offset = "0x3AE6B20", VA = "0x3AE6B20")]
	public static implicit operator Mono.Math.BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3AE7A10", Offset = "0x3AE7A10", VA = "0x3AE7A10")]
	public static Mono.Math.BigInteger operator +(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3AE6C20", Offset = "0x3AE6C20", VA = "0x3AE6C20")]
	public static Mono.Math.BigInteger operator -(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3AE65D0", Offset = "0x3AE65D0", VA = "0x3AE65D0")]
	public static uint operator %(Mono.Math.BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3AE6D70", Offset = "0x3AE6D70", VA = "0x3AE6D70")]
	public static Mono.Math.BigInteger operator %(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3AEC210", Offset = "0x3AEC210", VA = "0x3AEC210")]
	public static Mono.Math.BigInteger operator /(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3AE66E0", Offset = "0x3AE66E0", VA = "0x3AE66E0")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3AEC100", Offset = "0x3AEC100", VA = "0x3AEC100")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi, int i)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3AEF260", Offset = "0x3AEF260", VA = "0x3AEF260")]
	public static Mono.Math.BigInteger operator <<(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3AEF510", Offset = "0x3AEF510", VA = "0x3AEF510")]
	public static Mono.Math.BigInteger operator >>(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3AEF810", Offset = "0x3AEF810", VA = "0x3AEF810")]
	public static Mono.Math.BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3AE7940", Offset = "0x3AE7940", VA = "0x3AE7940")]
	public static Mono.Math.BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3AEF9E0", Offset = "0x3AEF9E0", VA = "0x3AEF9E0")]
	public void Randomize(RandomNumberGenerator rng)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3AEBCA0", Offset = "0x3AEBCA0", VA = "0x3AEBCA0")]
	public void Randomize()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3AE6A70", Offset = "0x3AE6A70", VA = "0x3AE6A70")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3AEC1E0", Offset = "0x3AEC1E0", VA = "0x3AEC1E0")]
	public bool TestBit(uint bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3AEFB60", Offset = "0x3AEFB60", VA = "0x3AEFB60")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3AEFBE0", Offset = "0x3AEFBE0", VA = "0x3AEFBE0")]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3AEFC20", Offset = "0x3AEFC20", VA = "0x3AEFC20")]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3AEFC70", Offset = "0x3AEFC70", VA = "0x3AEFC70")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3AE8160", Offset = "0x3AE8160", VA = "0x3AE8160")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3AEBCF0", Offset = "0x3AEBCF0", VA = "0x3AEBCF0")]
	public static bool operator ==(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3AEC9E0", Offset = "0x3AEC9E0", VA = "0x3AEC9E0")]
	public static bool operator !=(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x3AE6F00", Offset = "0x3AE6F00", VA = "0x3AE6F00")]
	public static bool operator ==(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x3AE6640", Offset = "0x3AE6640", VA = "0x3AE6640")]
	public static bool operator !=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3AE7A00", Offset = "0x3AE7A00", VA = "0x3AE7A00")]
	public static bool operator >(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x3AE6B10", Offset = "0x3AE6B10", VA = "0x3AE6B10")]
	public static bool operator <(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x3AEBD70", Offset = "0x3AEBD70", VA = "0x3AEBD70")]
	public static bool operator >=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x3AEC240", Offset = "0x3AEC240", VA = "0x3AEC240")]
	public static bool operator <=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3AEFCF0", Offset = "0x3AEFCF0", VA = "0x3AEFCF0")]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3AEFD30", Offset = "0x3AEFD30", VA = "0x3AEFD30")]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3AEE260", Offset = "0x3AEE260", VA = "0x3AEE260")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x3AE7AD0", Offset = "0x3AE7AD0", VA = "0x3AE7AD0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x3AF0090", Offset = "0x3AF0090", VA = "0x3AF0090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x3AF00E0", Offset = "0x3AF00E0", VA = "0x3AF00E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x3AF0120", Offset = "0x3AF0120", VA = "0x3AF0120", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3AE6D60", Offset = "0x3AE6D60", VA = "0x3AE6D60")]
	public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3AE7990", Offset = "0x3AE7990", VA = "0x3AE7990")]
	public Mono.Math.BigInteger ModPow(Mono.Math.BigInteger exp, Mono.Math.BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3AEBE40", Offset = "0x3AEBE40", VA = "0x3AEBE40")]
	public bool IsProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3AE6560", Offset = "0x3AE6560", VA = "0x3AE6560")]
	public static Mono.Math.BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3AF0BE0", Offset = "0x3AF0BE0", VA = "0x3AF0BE0")]
	public void Incr2()
	{
	}
}
