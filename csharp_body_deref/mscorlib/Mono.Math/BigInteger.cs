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

		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x52FB400", Offset = "0x52FA400", VA = "0x52FB400")]
		public ModulusRing(Mono.Math.BigInteger modulus)
		{
		}

		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x52FB820", Offset = "0x52FA820", VA = "0x52FB820")]
		public void BarrettReduction(Mono.Math.BigInteger x)
		{
		}

		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x52FC1B0", Offset = "0x52FB1B0", VA = "0x52FC1B0")]
		public Mono.Math.BigInteger Multiply(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x52FC350", Offset = "0x52FB350", VA = "0x52FC350")]
		public Mono.Math.BigInteger Difference(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
		{
			return null;
		}

		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x52FB560", Offset = "0x52FA560", VA = "0x52FB560")]
		public Mono.Math.BigInteger Pow(Mono.Math.BigInteger a, Mono.Math.BigInteger k)
		{
			return null;
		}

		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x52FC520", Offset = "0x52FB520", VA = "0x52FC520")]
		public Mono.Math.BigInteger Pow(uint b, Mono.Math.BigInteger exp)
		{
			return null;
		}
	}

	[Token(Token = "0x2000052")]
	private sealed class Kernel
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x52F8DF0", Offset = "0x52F7DF0", VA = "0x52F8DF0")]
		public static Mono.Math.BigInteger AddSameSign(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x52F9170", Offset = "0x52F8170", VA = "0x52F9170")]
		public static Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
			return null;
		}

		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x52FBEA0", Offset = "0x52FAEA0", VA = "0x52FBEA0")]
		public static void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
		{
		}

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x52FBFC0", Offset = "0x52FAFC0", VA = "0x52FBFC0")]
		public static void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
		}

		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x52F9060", Offset = "0x52F8060", VA = "0x52F9060")]
		public static Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return default(Sign);
		}

		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x52FAA90", Offset = "0x52F9A90", VA = "0x52FAA90")]
		public static uint SingleByteDivideInPlace(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x52F93A0", Offset = "0x52F83A0", VA = "0x52F93A0")]
		public static uint DwordMod(Mono.Math.BigInteger n, uint d)
		{
			return default(uint);
		}

		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x52FC5F0", Offset = "0x52FB5F0", VA = "0x52FC5F0")]
		public static Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, uint d)
		{
			return null;
		}

		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x52F9420", Offset = "0x52F8420", VA = "0x52F9420")]
		public static Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
		{
			return null;
		}

		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x52F9D40", Offset = "0x52F8D40", VA = "0x52F9D40")]
		public static Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x52F9FE0", Offset = "0x52F8FE0", VA = "0x52F9FE0")]
		public static Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, int n)
		{
			return null;
		}

		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x52F9BE0", Offset = "0x52F8BE0", VA = "0x52F9BE0")]
		public static Mono.Math.BigInteger MultiplyByDword(Mono.Math.BigInteger n, uint f)
		{
			return null;
		}

		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x52F9B00", Offset = "0x52F8B00", VA = "0x52F9B00")]
		public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset)
		{
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x52FBDB0", Offset = "0x52FADB0", VA = "0x52FBDB0")]
		public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod)
		{
		}

		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x52FC840", Offset = "0x52FB840", VA = "0x52FC840")]
		public static uint modInverse(Mono.Math.BigInteger bi, uint modulus)
		{
			return default(uint);
		}

		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x52FAD20", Offset = "0x52F9D20", VA = "0x52FAD20")]
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
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x52FA1D0", Offset = "0x52F91D0", VA = "0x52FA1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x52F8B20", Offset = "0x52F7B20", VA = "0x52F8B20")]
	public BigInteger(Sign sign, uint len)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x52F8B80", Offset = "0x52F7B80", VA = "0x52F8B80")]
	public BigInteger(Mono.Math.BigInteger bi)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x52F8C50", Offset = "0x52F7C50", VA = "0x52F8C50")]
	public BigInteger(Mono.Math.BigInteger bi, uint len)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x52F1ED0", Offset = "0x52F0ED0", VA = "0x52F1ED0")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x52F8D70", Offset = "0x52F7D70", VA = "0x52F8D70")]
	public BigInteger(uint ui)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x52F0DA0", Offset = "0x52EFDA0", VA = "0x52F0DA0")]
	public static implicit operator Mono.Math.BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x52F1390", Offset = "0x52F0390", VA = "0x52F1390")]
	public static implicit operator Mono.Math.BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x52F2210", Offset = "0x52F1210", VA = "0x52F2210")]
	public static Mono.Math.BigInteger operator +(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x52F1490", Offset = "0x52F0490", VA = "0x52F1490")]
	public static Mono.Math.BigInteger operator -(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x52F0EC0", Offset = "0x52EFEC0", VA = "0x52F0EC0")]
	public static uint operator %(Mono.Math.BigInteger bi, uint ui)
	{
		return default(uint);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x52F15E0", Offset = "0x52F05E0", VA = "0x52F15E0")]
	public static Mono.Math.BigInteger operator %(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x52F6FD0", Offset = "0x52F5FD0", VA = "0x52F6FD0")]
	public static Mono.Math.BigInteger operator /(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x52F0FE0", Offset = "0x52EFFE0", VA = "0x52F0FE0")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x52F6EC0", Offset = "0x52F5EC0", VA = "0x52F6EC0")]
	public static Mono.Math.BigInteger operator *(Mono.Math.BigInteger bi, int i)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x52F9D30", Offset = "0x52F8D30", VA = "0x52F9D30")]
	public static Mono.Math.BigInteger operator <<(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x52F9FD0", Offset = "0x52F8FD0", VA = "0x52F9FD0")]
	public static Mono.Math.BigInteger operator >>(Mono.Math.BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x52FA2B0", Offset = "0x52F92B0", VA = "0x52FA2B0")]
	public static Mono.Math.BigInteger GenerateRandom(int bits, RandomNumberGenerator rng)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x52F2140", Offset = "0x52F1140", VA = "0x52F2140")]
	public static Mono.Math.BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x52FA480", Offset = "0x52F9480", VA = "0x52FA480")]
	public void Randomize(RandomNumberGenerator rng)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x52F69F0", Offset = "0x52F59F0", VA = "0x52F69F0")]
	public void Randomize()
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x52F12E0", Offset = "0x52F02E0", VA = "0x52F12E0")]
	public int BitCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x52F6FA0", Offset = "0x52F5FA0", VA = "0x52F6FA0")]
	public bool TestBit(uint bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x52FA600", Offset = "0x52F9600", VA = "0x52FA600")]
	public bool TestBit(int bitNum)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x52FA680", Offset = "0x52F9680", VA = "0x52FA680")]
	public void SetBit(uint bitNum)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x52FA6C0", Offset = "0x52F96C0", VA = "0x52FA6C0")]
	public void SetBit(uint bitNum, bool value)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x52FA720", Offset = "0x52F9720", VA = "0x52FA720")]
	public int LowestSetBit()
	{
		return default(int);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x52F2940", Offset = "0x52F1940", VA = "0x52F2940")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x52F6A40", Offset = "0x52F5A40", VA = "0x52F6A40")]
	public static bool operator ==(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x52F7780", Offset = "0x52F6780", VA = "0x52F7780")]
	public static bool operator !=(Mono.Math.BigInteger bi1, uint ui)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x52F1770", Offset = "0x52F0770", VA = "0x52F1770")]
	public static bool operator ==(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x52F0F40", Offset = "0x52EFF40", VA = "0x52F0F40")]
	public static bool operator !=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x52F2200", Offset = "0x52F1200", VA = "0x52F2200")]
	public static bool operator >(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x52F1380", Offset = "0x52F0380", VA = "0x52F1380")]
	public static bool operator <(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x52F6AC0", Offset = "0x52F5AC0", VA = "0x52F6AC0")]
	public static bool operator >=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x52F7000", Offset = "0x52F6000", VA = "0x52F7000")]
	public static bool operator <=(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x52FA7A0", Offset = "0x52F97A0", VA = "0x52FA7A0")]
	public string ToString(uint radix)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x52FA7E0", Offset = "0x52F97E0", VA = "0x52FA7E0")]
	public string ToString(uint radix, string characterSet)
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x52F8D20", Offset = "0x52F7D20", VA = "0x52F8D20")]
	private void Normalize()
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x52F22C0", Offset = "0x52F12C0", VA = "0x52F22C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x52FAB90", Offset = "0x52F9B90", VA = "0x52FAB90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x52FABD0", Offset = "0x52F9BD0", VA = "0x52FABD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x52FAC10", Offset = "0x52F9C10", VA = "0x52FAC10", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x52F15D0", Offset = "0x52F05D0", VA = "0x52F15D0")]
	public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x52F2190", Offset = "0x52F1190", VA = "0x52F2190")]
	public Mono.Math.BigInteger ModPow(Mono.Math.BigInteger exp, Mono.Math.BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x52F6B70", Offset = "0x52F5B70", VA = "0x52F6B70")]
	public bool IsProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x52F0E50", Offset = "0x52EFE50", VA = "0x52F0E50")]
	public static Mono.Math.BigInteger GeneratePseudoPrime(int bits)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x52FB720", Offset = "0x52FA720", VA = "0x52FB720")]
	public void Incr2()
	{
	}
}
