// ==================== AoTTG2 cross-reference ====================
// Type: Photon.SocketServer.Numeric.BigInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EA4AD0", Offset = "0x3EA4AD0", VA = "0x3EA4AD0")]
	public BigInteger()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3EA4B50", Offset = "0x3EA4B50", VA = "0x3EA4B50")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3EA4CD0", Offset = "0x3EA4CD0", VA = "0x3EA4CD0")]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3EA4E10", Offset = "0x3EA4E10", VA = "0x3EA4E10")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3EA4EE0", Offset = "0x3EA4EE0", VA = "0x3EA4EE0")]
	public BigInteger(string value, int radix)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3EA5C50", Offset = "0x3EA5C50", VA = "0x3EA5C50")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3EA5FA0", Offset = "0x3EA5FA0", VA = "0x3EA5FA0")]
	public BigInteger(byte[] inData, int inLen)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3EA6310", Offset = "0x3EA6310", VA = "0x3EA6310")]
	public BigInteger(uint[] inData)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3EA64A0", Offset = "0x3EA64A0", VA = "0x3EA64A0")]
	public static implicit operator BigInteger(long value)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3EA64F0", Offset = "0x3EA64F0", VA = "0x3EA64F0")]
	public static implicit operator BigInteger(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3EA5350", Offset = "0x3EA5350", VA = "0x3EA5350")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3EA6540", Offset = "0x3EA6540", VA = "0x3EA6540")]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3EA59F0", Offset = "0x3EA59F0", VA = "0x3EA59F0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3EA6590", Offset = "0x3EA6590", VA = "0x3EA6590")]
	public static BigInteger operator ++(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3EA6700", Offset = "0x3EA6700", VA = "0x3EA6700")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3EA6990", Offset = "0x3EA6990", VA = "0x3EA6990")]
	public static BigInteger operator --(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3EA53A0", Offset = "0x3EA53A0", VA = "0x3EA53A0")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3EA6D60", Offset = "0x3EA6D60", VA = "0x3EA6D60")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3EA6DF0", Offset = "0x3EA6DF0", VA = "0x3EA6DF0")]
	private static int shiftLeft(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3EA6F10", Offset = "0x3EA6F10", VA = "0x3EA6F10")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3EA7040", Offset = "0x3EA7040", VA = "0x3EA7040")]
	private static int shiftRight(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3EA7180", Offset = "0x3EA7180", VA = "0x3EA7180")]
	public static BigInteger operator ~(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3EA6B00", Offset = "0x3EA6B00", VA = "0x3EA6B00")]
	public static BigInteger operator -(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3EA72B0", Offset = "0x3EA72B0", VA = "0x3EA72B0")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3EA72D0", Offset = "0x3EA72D0", VA = "0x3EA72D0")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3EA72F0", Offset = "0x3EA72F0", VA = "0x3EA72F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3EA73C0", Offset = "0x3EA73C0", VA = "0x3EA73C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3EA7400", Offset = "0x3EA7400", VA = "0x3EA7400")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3EA74C0", Offset = "0x3EA74C0", VA = "0x3EA74C0")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3EA7580", Offset = "0x3EA7580", VA = "0x3EA7580")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3EA7630", Offset = "0x3EA7630", VA = "0x3EA7630")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3EA76E0", Offset = "0x3EA76E0", VA = "0x3EA76E0")]
	private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3EA7E90", Offset = "0x3EA7E90", VA = "0x3EA7E90")]
	private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3EA81C0", Offset = "0x3EA81C0", VA = "0x3EA81C0")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3EA8480", Offset = "0x3EA8480", VA = "0x3EA8480")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3EA86D0", Offset = "0x3EA86D0", VA = "0x3EA86D0")]
	public static BigInteger operator &(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3EA8890", Offset = "0x3EA8890", VA = "0x3EA8890")]
	public static BigInteger operator |(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3EA8A50", Offset = "0x3EA8A50", VA = "0x3EA8A50")]
	public static BigInteger operator ^(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3EA8C10", Offset = "0x3EA8C10", VA = "0x3EA8C10")]
	public BigInteger max(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3EA8C90", Offset = "0x3EA8C90", VA = "0x3EA8C90")]
	public BigInteger min(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3EA8D10", Offset = "0x3EA8D10", VA = "0x3EA8D10")]
	public BigInteger abs()
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3EA8DA0", Offset = "0x3EA8DA0", VA = "0x3EA8DA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3EA8DB0", Offset = "0x3EA8DB0", VA = "0x3EA8DB0")]
	public string ToString(int radix)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3EA91E0", Offset = "0x3EA91E0", VA = "0x3EA91E0")]
	public string ToHexString()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3EA92D0", Offset = "0x3EA92D0", VA = "0x3EA92D0")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3EA9810", Offset = "0x3EA9810", VA = "0x3EA9810")]
	private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3EAA000", Offset = "0x3EAA000", VA = "0x3EAA000")]
	public BigInteger gcd(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3EAA150", Offset = "0x3EAA150", VA = "0x3EAA150")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3EAA240", Offset = "0x3EAA240", VA = "0x3EAA240")]
	public void genRandomBits(int bits, Random rand)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3EA9770", Offset = "0x3EA9770", VA = "0x3EA9770")]
	public int bitCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3EAA3E0", Offset = "0x3EAA3E0", VA = "0x3EAA3E0")]
	public bool FermatLittleTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3EAA6B0", Offset = "0x3EAA6B0", VA = "0x3EAA6B0")]
	public bool RabinMillerTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3EAAE40", Offset = "0x3EAAE40", VA = "0x3EAAE40")]
	public bool SolovayStrassenTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3EABBE0", Offset = "0x3EABBE0", VA = "0x3EABBE0")]
	public bool LucasStrongTest()
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3EABC90", Offset = "0x3EABC90", VA = "0x3EABC90")]
	private bool LucasStrongTestHelper(BigInteger thisVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3EAD640", Offset = "0x3EAD640", VA = "0x3EAD640")]
	public bool isProbablePrime(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3EAD880", Offset = "0x3EAD880", VA = "0x3EAD880")]
	public bool isProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3EAD860", Offset = "0x3EAD860", VA = "0x3EAD860")]
	public int IntValue()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3EAE0B0", Offset = "0x3EAE0B0", VA = "0x3EAE0B0")]
	public long LongValue()
	{
		return default(long);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3EAB250", Offset = "0x3EAB250", VA = "0x3EAB250")]
	public static int Jacobi(BigInteger a, BigInteger b)
	{
		return default(int);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3EAE190", Offset = "0x3EAE190", VA = "0x3EAE190")]
	public static BigInteger genPseudoPrime(int bits, int confidence, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3EAE290", Offset = "0x3EAE290", VA = "0x3EAE290")]
	public BigInteger genCoPrime(int bits, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3EAE390", Offset = "0x3EAE390", VA = "0x3EAE390")]
	public BigInteger modInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3EAED20", Offset = "0x3EAED20", VA = "0x3EAED20")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3EAEFA0", Offset = "0x3EAEFA0", VA = "0x3EAEFA0")]
	public void setBit(uint bitNum)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3EAEFE0", Offset = "0x3EAEFE0", VA = "0x3EAEFE0")]
	public void unsetBit(uint bitNum)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x3EACA60", Offset = "0x3EACA60", VA = "0x3EACA60")]
	public BigInteger sqrt()
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x3EAF040", Offset = "0x3EAF040", VA = "0x3EAF040")]
	public static BigInteger[] LucasSequence(BigInteger P, BigInteger Q, BigInteger k, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x3EACC10", Offset = "0x3EACC10", VA = "0x3EACC10")]
	private static BigInteger[] LucasSequenceHelper(BigInteger P, BigInteger Q, BigInteger k, BigInteger n, BigInteger constant, int s)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x3EAF920", Offset = "0x3EAF920", VA = "0x3EAF920")]
	public static void MulDivTest(int rounds)
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x3EAFFB0", Offset = "0x3EAFFB0", VA = "0x3EAFFB0")]
	public static void RSATest(int rounds)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x3EB0540", Offset = "0x3EB0540", VA = "0x3EB0540")]
	public static void RSATest2(int rounds)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x3EB0BE0", Offset = "0x3EB0BE0", VA = "0x3EB0BE0")]
	public static void SqrtTest(int rounds)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3EB0FB0", Offset = "0x3EB0FB0", VA = "0x3EB0FB0")]
	public static void Main(string[] args)
	{
	}
}
