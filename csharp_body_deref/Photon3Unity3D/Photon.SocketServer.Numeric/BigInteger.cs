using System;
using Il2CppDummyDll;

namespace Photon.SocketServer.Numeric;

[Token(Token = "0x200005D")]
internal class BigInteger
{
	[Token(Token = "0x4000268")]
	private const int maxLength = 70;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int[] primesBelow2000;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x10")]
	private uint[] data;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x18")]
	public int dataLength;

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3BAF180", Offset = "0x3BAF180", VA = "0x3BAF180")]
	public BigInteger()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3BAF200", Offset = "0x3BAF200", VA = "0x3BAF200")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3BAF380", Offset = "0x3BAF380", VA = "0x3BAF380")]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3BAF4C0", Offset = "0x3BAF4C0", VA = "0x3BAF4C0")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3BAF590", Offset = "0x3BAF590", VA = "0x3BAF590")]
	public BigInteger(string value, int radix)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3BB0300", Offset = "0x3BB0300", VA = "0x3BB0300")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3BB0650", Offset = "0x3BB0650", VA = "0x3BB0650")]
	public BigInteger(byte[] inData, int inLen)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3BB09C0", Offset = "0x3BB09C0", VA = "0x3BB09C0")]
	public BigInteger(uint[] inData)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3BB0B50", Offset = "0x3BB0B50", VA = "0x3BB0B50")]
	public static implicit operator BigInteger(long value)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3BB0BA0", Offset = "0x3BB0BA0", VA = "0x3BB0BA0")]
	public static implicit operator BigInteger(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3BAFA00", Offset = "0x3BAFA00", VA = "0x3BAFA00")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3BB0BF0", Offset = "0x3BB0BF0", VA = "0x3BB0BF0")]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3BB00A0", Offset = "0x3BB00A0", VA = "0x3BB00A0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3BB0C40", Offset = "0x3BB0C40", VA = "0x3BB0C40")]
	public static BigInteger operator ++(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3BB0DB0", Offset = "0x3BB0DB0", VA = "0x3BB0DB0")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3BB1040", Offset = "0x3BB1040", VA = "0x3BB1040")]
	public static BigInteger operator --(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3BAFA50", Offset = "0x3BAFA50", VA = "0x3BAFA50")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3BB1410", Offset = "0x3BB1410", VA = "0x3BB1410")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3BB14A0", Offset = "0x3BB14A0", VA = "0x3BB14A0")]
	private static int shiftLeft(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3BB15C0", Offset = "0x3BB15C0", VA = "0x3BB15C0")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3BB16F0", Offset = "0x3BB16F0", VA = "0x3BB16F0")]
	private static int shiftRight(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3BB1830", Offset = "0x3BB1830", VA = "0x3BB1830")]
	public static BigInteger operator ~(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3BB11B0", Offset = "0x3BB11B0", VA = "0x3BB11B0")]
	public static BigInteger operator -(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3BB1960", Offset = "0x3BB1960", VA = "0x3BB1960")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3BB1980", Offset = "0x3BB1980", VA = "0x3BB1980")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3BB19A0", Offset = "0x3BB19A0", VA = "0x3BB19A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3BB1A70", Offset = "0x3BB1A70", VA = "0x3BB1A70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3BB1AB0", Offset = "0x3BB1AB0", VA = "0x3BB1AB0")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3BB1B70", Offset = "0x3BB1B70", VA = "0x3BB1B70")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3BB1C30", Offset = "0x3BB1C30", VA = "0x3BB1C30")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3BB1CE0", Offset = "0x3BB1CE0", VA = "0x3BB1CE0")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3BB1D90", Offset = "0x3BB1D90", VA = "0x3BB1D90")]
	private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3BB2540", Offset = "0x3BB2540", VA = "0x3BB2540")]
	private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3BB2870", Offset = "0x3BB2870", VA = "0x3BB2870")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3BB2B30", Offset = "0x3BB2B30", VA = "0x3BB2B30")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3BB2D80", Offset = "0x3BB2D80", VA = "0x3BB2D80")]
	public static BigInteger operator &(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3BB2F40", Offset = "0x3BB2F40", VA = "0x3BB2F40")]
	public static BigInteger operator |(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3BB3100", Offset = "0x3BB3100", VA = "0x3BB3100")]
	public static BigInteger operator ^(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3BB32C0", Offset = "0x3BB32C0", VA = "0x3BB32C0")]
	public BigInteger max(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3BB3340", Offset = "0x3BB3340", VA = "0x3BB3340")]
	public BigInteger min(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3BB33C0", Offset = "0x3BB33C0", VA = "0x3BB33C0")]
	public BigInteger abs()
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3BB3450", Offset = "0x3BB3450", VA = "0x3BB3450", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3BB3460", Offset = "0x3BB3460", VA = "0x3BB3460")]
	public string ToString(int radix)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3BB3890", Offset = "0x3BB3890", VA = "0x3BB3890")]
	public string ToHexString()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3BB3980", Offset = "0x3BB3980", VA = "0x3BB3980")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3BB3EC0", Offset = "0x3BB3EC0", VA = "0x3BB3EC0")]
	private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3BB46B0", Offset = "0x3BB46B0", VA = "0x3BB46B0")]
	public BigInteger gcd(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3BB4800", Offset = "0x3BB4800", VA = "0x3BB4800")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3BB48F0", Offset = "0x3BB48F0", VA = "0x3BB48F0")]
	public void genRandomBits(int bits, Random rand)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3BB3E20", Offset = "0x3BB3E20", VA = "0x3BB3E20")]
	public int bitCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3BB4A90", Offset = "0x3BB4A90", VA = "0x3BB4A90")]
	public bool FermatLittleTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3BB4D60", Offset = "0x3BB4D60", VA = "0x3BB4D60")]
	public bool RabinMillerTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3BB54F0", Offset = "0x3BB54F0", VA = "0x3BB54F0")]
	public bool SolovayStrassenTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3BB6290", Offset = "0x3BB6290", VA = "0x3BB6290")]
	public bool LucasStrongTest()
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3BB6340", Offset = "0x3BB6340", VA = "0x3BB6340")]
	private bool LucasStrongTestHelper(BigInteger thisVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3BB7CF0", Offset = "0x3BB7CF0", VA = "0x3BB7CF0")]
	public bool isProbablePrime(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3BB7F30", Offset = "0x3BB7F30", VA = "0x3BB7F30")]
	public bool isProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3BB7F10", Offset = "0x3BB7F10", VA = "0x3BB7F10")]
	public int IntValue()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3BB8760", Offset = "0x3BB8760", VA = "0x3BB8760")]
	public long LongValue()
	{
		return default(long);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3BB5900", Offset = "0x3BB5900", VA = "0x3BB5900")]
	public static int Jacobi(BigInteger a, BigInteger b)
	{
		return default(int);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3BB8840", Offset = "0x3BB8840", VA = "0x3BB8840")]
	public static BigInteger genPseudoPrime(int bits, int confidence, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3BB8940", Offset = "0x3BB8940", VA = "0x3BB8940")]
	public BigInteger genCoPrime(int bits, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3BB8A40", Offset = "0x3BB8A40", VA = "0x3BB8A40")]
	public BigInteger modInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3BB93D0", Offset = "0x3BB93D0", VA = "0x3BB93D0")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3BB9650", Offset = "0x3BB9650", VA = "0x3BB9650")]
	public void setBit(uint bitNum)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3BB9690", Offset = "0x3BB9690", VA = "0x3BB9690")]
	public void unsetBit(uint bitNum)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x3BB7110", Offset = "0x3BB7110", VA = "0x3BB7110")]
	public BigInteger sqrt()
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x3BB96F0", Offset = "0x3BB96F0", VA = "0x3BB96F0")]
	public static BigInteger[] LucasSequence(BigInteger P, BigInteger Q, BigInteger k, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x3BB72C0", Offset = "0x3BB72C0", VA = "0x3BB72C0")]
	private static BigInteger[] LucasSequenceHelper(BigInteger P, BigInteger Q, BigInteger k, BigInteger n, BigInteger constant, int s)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x3BB9FD0", Offset = "0x3BB9FD0", VA = "0x3BB9FD0")]
	public static void MulDivTest(int rounds)
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x3BBA660", Offset = "0x3BBA660", VA = "0x3BBA660")]
	public static void RSATest(int rounds)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x3BBABF0", Offset = "0x3BBABF0", VA = "0x3BBABF0")]
	public static void RSATest2(int rounds)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x3BBB290", Offset = "0x3BBB290", VA = "0x3BBB290")]
	public static void SqrtTest(int rounds)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3BBB660", Offset = "0x3BBB660", VA = "0x3BBB660")]
	public static void Main(string[] args)
	{
	}
}
