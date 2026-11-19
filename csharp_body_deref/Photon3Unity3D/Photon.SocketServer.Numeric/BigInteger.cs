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
	[Address(RVA = "0x56920D0", Offset = "0x56910D0", VA = "0x56920D0")]
	public BigInteger()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x5692150", Offset = "0x5691150", VA = "0x5692150")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x56922F0", Offset = "0x56912F0", VA = "0x56922F0")]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x5692430", Offset = "0x5691430", VA = "0x5692430")]
	public BigInteger(BigInteger bi)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x5692500", Offset = "0x5691500", VA = "0x5692500")]
	public BigInteger(string value, int radix)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x56931D0", Offset = "0x56921D0", VA = "0x56931D0")]
	public BigInteger(byte[] inData)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x5693470", Offset = "0x5692470", VA = "0x5693470")]
	public BigInteger(byte[] inData, int inLen)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x5693780", Offset = "0x5692780", VA = "0x5693780")]
	public BigInteger(uint[] inData)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x5693900", Offset = "0x5692900", VA = "0x5693900")]
	public static implicit operator BigInteger(long value)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x5693950", Offset = "0x5692950", VA = "0x5693950")]
	public static implicit operator BigInteger(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x5692970", Offset = "0x5691970", VA = "0x5692970")]
	public static implicit operator BigInteger(int value)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x56939A0", Offset = "0x56929A0", VA = "0x56939A0")]
	public static implicit operator BigInteger(uint value)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x5692F80", Offset = "0x5691F80", VA = "0x5692F80")]
	public static BigInteger operator +(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x56939F0", Offset = "0x56929F0", VA = "0x56939F0")]
	public static BigInteger operator ++(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x5693B40", Offset = "0x5692B40", VA = "0x5693B40")]
	public static BigInteger operator -(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x5693E60", Offset = "0x5692E60", VA = "0x5693E60")]
	public static BigInteger operator --(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x56929C0", Offset = "0x56919C0", VA = "0x56929C0")]
	public static BigInteger operator *(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5694220", Offset = "0x5693220", VA = "0x5694220")]
	public static BigInteger operator <<(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x56942B0", Offset = "0x56932B0", VA = "0x56942B0")]
	private static int shiftLeft(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x56943B0", Offset = "0x56933B0", VA = "0x56943B0")]
	public static BigInteger operator >>(BigInteger bi1, int shiftVal)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x56944E0", Offset = "0x56934E0", VA = "0x56944E0")]
	private static int shiftRight(uint[] buffer, int shiftVal)
	{
		return default(int);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x5694620", Offset = "0x5693620", VA = "0x5694620")]
	public static BigInteger operator ~(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x5693FA0", Offset = "0x5692FA0", VA = "0x5693FA0")]
	public static BigInteger operator -(BigInteger bi1)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x5694770", Offset = "0x5693770", VA = "0x5694770")]
	public static bool operator ==(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x5694790", Offset = "0x5693790", VA = "0x5694790")]
	public static bool operator !=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x56947B0", Offset = "0x56937B0", VA = "0x56947B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x56948D0", Offset = "0x56938D0", VA = "0x56948D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x5694910", Offset = "0x5693910", VA = "0x5694910")]
	public static bool operator >(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x56949D0", Offset = "0x56939D0", VA = "0x56949D0")]
	public static bool operator <(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x5694A90", Offset = "0x5693A90", VA = "0x5694A90")]
	public static bool operator >=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x5694B40", Offset = "0x5693B40", VA = "0x5694B40")]
	public static bool operator <=(BigInteger bi1, BigInteger bi2)
	{
		return default(bool);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x5694BF0", Offset = "0x5693BF0", VA = "0x5694BF0")]
	private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x5695520", Offset = "0x5694520", VA = "0x5695520")]
	private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5695910", Offset = "0x5694910", VA = "0x5695910")]
	public static BigInteger operator /(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x5695BD0", Offset = "0x5694BD0", VA = "0x5695BD0")]
	public static BigInteger operator %(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x5695E00", Offset = "0x5694E00", VA = "0x5695E00")]
	public static BigInteger operator &(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x5695FD0", Offset = "0x5694FD0", VA = "0x5695FD0")]
	public static BigInteger operator |(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x56961A0", Offset = "0x56951A0", VA = "0x56961A0")]
	public static BigInteger operator ^(BigInteger bi1, BigInteger bi2)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5696370", Offset = "0x5695370", VA = "0x5696370")]
	public BigInteger max(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x56963F0", Offset = "0x56953F0", VA = "0x56963F0")]
	public BigInteger min(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x5696470", Offset = "0x5695470", VA = "0x5696470")]
	public BigInteger abs()
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x5696500", Offset = "0x5695500", VA = "0x5696500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x5696510", Offset = "0x5695510", VA = "0x5696510")]
	public string ToString(int radix)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x56969B0", Offset = "0x56959B0", VA = "0x56969B0")]
	public string ToHexString()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5696AA0", Offset = "0x5695AA0", VA = "0x5696AA0")]
	public BigInteger ModPow(BigInteger exp, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x5696FA0", Offset = "0x5695FA0", VA = "0x5696FA0")]
	private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5697720", Offset = "0x5696720", VA = "0x5697720")]
	public BigInteger gcd(BigInteger bi)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5697860", Offset = "0x5696860", VA = "0x5697860")]
	public static BigInteger GenerateRandom(int bits)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5697940", Offset = "0x5696940", VA = "0x5697940")]
	public void genRandomBits(int bits, Random rand)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x5696F00", Offset = "0x5695F00", VA = "0x5696F00")]
	public int bitCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x5697B70", Offset = "0x5696B70", VA = "0x5697B70")]
	public bool FermatLittleTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x5697E50", Offset = "0x5696E50", VA = "0x5697E50")]
	public bool RabinMillerTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x5698550", Offset = "0x5697550", VA = "0x5698550")]
	public bool SolovayStrassenTest(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x56990F0", Offset = "0x56980F0", VA = "0x56990F0")]
	public bool LucasStrongTest()
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x56991B0", Offset = "0x56981B0", VA = "0x56991B0")]
	private bool LucasStrongTestHelper(BigInteger thisVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x569AC60", Offset = "0x5699C60", VA = "0x569AC60")]
	public bool isProbablePrime(int confidence)
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x569AEA0", Offset = "0x5699EA0", VA = "0x569AEA0")]
	public bool isProbablePrime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x569AE80", Offset = "0x5699E80", VA = "0x569AE80")]
	public int IntValue()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x569B530", Offset = "0x569A530", VA = "0x569B530")]
	public long LongValue()
	{
		return default(long);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x5698970", Offset = "0x5697970", VA = "0x5698970")]
	public static int Jacobi(BigInteger a, BigInteger b)
	{
		return default(int);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x569B610", Offset = "0x569A610", VA = "0x569B610")]
	public static BigInteger genPseudoPrime(int bits, int confidence, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x569B710", Offset = "0x569A710", VA = "0x569B710")]
	public BigInteger genCoPrime(int bits, Random rand)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x569B810", Offset = "0x569A810", VA = "0x569B810")]
	public BigInteger modInverse(BigInteger modulus)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x569C1D0", Offset = "0x569B1D0", VA = "0x569C1D0")]
	public byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x569C4D0", Offset = "0x569B4D0", VA = "0x569C4D0")]
	public void setBit(uint bitNum)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x569C510", Offset = "0x569B510", VA = "0x569C510")]
	public void unsetBit(uint bitNum)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x5699E10", Offset = "0x5698E10", VA = "0x5699E10")]
	public BigInteger sqrt()
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x569C570", Offset = "0x569B570", VA = "0x569C570")]
	public static BigInteger[] LucasSequence(BigInteger P, BigInteger Q, BigInteger k, BigInteger n)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x569A080", Offset = "0x5699080", VA = "0x569A080")]
	private static BigInteger[] LucasSequenceHelper(BigInteger P, BigInteger Q, BigInteger k, BigInteger n, BigInteger constant, int s)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x569CBA0", Offset = "0x569BBA0", VA = "0x569CBA0")]
	public static void MulDivTest(int rounds)
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x569D1E0", Offset = "0x569C1E0", VA = "0x569D1E0")]
	public static void RSATest(int rounds)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x569D770", Offset = "0x569C770", VA = "0x569D770")]
	public static void RSATest2(int rounds)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x569DE90", Offset = "0x569CE90", VA = "0x569DE90")]
	public static void SqrtTest(int rounds)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x569E260", Offset = "0x569D260", VA = "0x569E260")]
	public static void Main(string[] args)
	{
	}
}
