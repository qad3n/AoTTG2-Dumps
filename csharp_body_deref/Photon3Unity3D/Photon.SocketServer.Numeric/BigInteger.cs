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
	[Address(RVA = "0x1D041B0", Offset = "0x1D027B0", VA = "0x181D041B0")]
	public BigInteger()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x1D03EB0", Offset = "0x1D024B0", VA = "0x181D03EB0")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x1D04080", Offset = "0x1D02680", VA = "0x181D04080")]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x1D04220", Offset = "0x1D02820", VA = "0x181D04220")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x1D03450", Offset = "0x1D01A50", VA = "0x181D03450")]
	public BigInteger(string value, int radix)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x1D03810", Offset = "0x1D01E10", VA = "0x181D03810")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x1D03C00", Offset = "0x1D02200", VA = "0x181D03C00")]
	public BigInteger(byte[] inData, int inLen)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x1D03AB0", Offset = "0x1D020B0", VA = "0x181D03AB0")]
	public BigInteger(uint[] inData)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x1D07110", Offset = "0x1D05710", VA = "0x181D07110")]
	public static implicit operator BigInteger(long value)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x1D07230", Offset = "0x1D05830", VA = "0x181D07230")]
	public static implicit operator BigInteger(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x1D07170", Offset = "0x1D05770", VA = "0x181D07170")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x1D071D0", Offset = "0x1D057D0", VA = "0x181D071D0")]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x1D064C0", Offset = "0x1D04AC0", VA = "0x181D064C0")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x1D07290", Offset = "0x1D05890", VA = "0x181D07290")]
	public static BigInteger operator ++(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x1D08170", Offset = "0x1D06770", VA = "0x181D08170")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x1D06940", Offset = "0x1D04F40", VA = "0x181D06940")]
	public static BigInteger operator --(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x1D07A90", Offset = "0x1D06090", VA = "0x181D07A90")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x1D07440", Offset = "0x1D05A40", VA = "0x181D07440")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x1D08610", Offset = "0x1D06C10", VA = "0x181D08610")]
	private static int shiftLeft(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x1D08030", Offset = "0x1D06630", VA = "0x181D08030")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x1D086D0", Offset = "0x1D06CD0", VA = "0x181D086D0")]
	private static int shiftRight(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x1D07F60", Offset = "0x1D06560", VA = "0x181D07F60")]
	public static BigInteger operator ~(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x1D083A0", Offset = "0x1D069A0", VA = "0x181D083A0")]
	public static BigInteger operator -(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x1D06DD0", Offset = "0x1D053D0", VA = "0x181D06DD0")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x1D07410", Offset = "0x1D05A10", VA = "0x181D07410")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x1CFE880", Offset = "0x1CFCE80", VA = "0x181CFE880", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x1CFEE50", Offset = "0x1CFD450", VA = "0x181CFEE50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x1D06FE0", Offset = "0x1D055E0", VA = "0x181D06FE0")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x1D07690", Offset = "0x1D05C90", VA = "0x181D07690")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x1D06F30", Offset = "0x1D05530", VA = "0x181D06F30")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x1D074E0", Offset = "0x1D05AE0", VA = "0x181D074E0")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x1D05E00", Offset = "0x1D04400", VA = "0x181D05E00")]
	private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x1D08800", Offset = "0x1D06E00", VA = "0x181D08800")]
	private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x1D06AE0", Offset = "0x1D050E0", VA = "0x181D06AE0")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x1D077B0", Offset = "0x1D05DB0", VA = "0x181D077B0")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x1D066E0", Offset = "0x1D04CE0", VA = "0x181D066E0")]
	public static BigInteger operator &(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x1D06810", Offset = "0x1D04E10", VA = "0x181D06810")]
	public static BigInteger operator |(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x1D06E00", Offset = "0x1D05400", VA = "0x181D06E00")]
	public static BigInteger operator ^(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x1D04F60", Offset = "0x1D03560", VA = "0x181D04F60")]
	public BigInteger max(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x1D050F0", Offset = "0x1D036F0", VA = "0x181D050F0")]
	public BigInteger min(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x1D042F0", Offset = "0x1D028F0", VA = "0x181D042F0")]
	public BigInteger abs()
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x1D033B0", Offset = "0x1D019B0", VA = "0x181D033B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x1D03060", Offset = "0x1D01660", VA = "0x181D03060")]
	public string ToString(int radix)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x1D02F90", Offset = "0x1D01590", VA = "0x181D02F90")]
	public string ToHexString()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x1D00F90", Offset = "0x1CFF590", VA = "0x181D00F90")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x1CFE1D0", Offset = "0x1CFC7D0", VA = "0x181CFE1D0")]
	private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x1D04410", Offset = "0x1D02A10", VA = "0x181D04410")]
	public BigInteger gcd(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x1CFEC20", Offset = "0x1CFD220", VA = "0x181CFEC20")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x1D046A0", Offset = "0x1D02CA0", VA = "0x181D046A0")]
	public void genRandomBits(int bits, Random rand)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x1D04390", Offset = "0x1D02990", VA = "0x181D04390")]
	public int bitCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x1CFE970", Offset = "0x1CFCF70", VA = "0x181CFE970")]
	public bool FermatLittleTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x1D02550", Offset = "0x1D00B50", VA = "0x181D02550")]
	public bool RabinMillerTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x1D02950", Offset = "0x1D00F50", VA = "0x181D02950")]
	public bool SolovayStrassenTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x1D009C0", Offset = "0x1CFEFC0", VA = "0x181D009C0")]
	public bool LucasStrongTest()
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x1D00090", Offset = "0x1CFE690", VA = "0x181D00090")]
	private bool LucasStrongTestHelper(BigInteger thisVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x1D048A0", Offset = "0x1D02EA0", VA = "0x181D048A0")]
	public bool isProbablePrime(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x1D04AE0", Offset = "0x1D030E0", VA = "0x181D04AE0")]
	public bool isProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x1CFEE90", Offset = "0x1CFD490", VA = "0x181CFEE90")]
	public int IntValue()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x1CFF320", Offset = "0x1CFD920", VA = "0x181CFF320")]
	public long LongValue()
	{
		return default(long);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x1CFEEC0", Offset = "0x1CFD4C0", VA = "0x181CFEEC0")]
	public static int Jacobi(BigInteger a, BigInteger b)
	{
		return default(int);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x1D04600", Offset = "0x1D02C00", VA = "0x181D04600")]
	public static BigInteger genPseudoPrime(int bits, int confidence, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x1D04550", Offset = "0x1D02B50", VA = "0x181D04550")]
	public BigInteger genCoPrime(int bits, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x1D05280", Offset = "0x1D03880", VA = "0x181D05280")]
	public BigInteger modInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x1CFECC0", Offset = "0x1CFD2C0", VA = "0x181CFECC0")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x1D085B0", Offset = "0x1D06BB0", VA = "0x181D085B0")]
	public void setBit(uint bitNum)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x1D08C60", Offset = "0x1D07260", VA = "0x181D08C60")]
	public void unsetBit(uint bitNum)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x1D08B40", Offset = "0x1D07140", VA = "0x181D08B40")]
	public BigInteger sqrt()
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x1CFFCE0", Offset = "0x1CFE2E0", VA = "0x181CFFCE0")]
	public static BigInteger[] LucasSequence(BigInteger P, BigInteger Q, BigInteger k, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x1CFF3B0", Offset = "0x1CFD9B0", VA = "0x181CFF3B0")]
	private static BigInteger[] LucasSequenceHelper(BigInteger P, BigInteger Q, BigInteger k, BigInteger n, BigInteger constant, int s)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x1D01390", Offset = "0x1CFF990", VA = "0x181D01390")]
	public static void MulDivTest(int rounds)
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x1D02000", Offset = "0x1D00600", VA = "0x181D02000")]
	public static void RSATest(int rounds)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x1D01950", Offset = "0x1CFFF50", VA = "0x181D01950")]
	public static void RSATest2(int rounds)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x1D02CE0", Offset = "0x1D012E0", VA = "0x181D02CE0")]
	public static void SqrtTest(int rounds)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x1D00AB0", Offset = "0x1CFF0B0", VA = "0x181D00AB0")]
	public static void Main(string[] args)
	{
	}
}
