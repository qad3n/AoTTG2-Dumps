// ==================== AoTTG2 cross-reference ====================
// Type: System.Numerics.NumericsHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Numerics;

[Token(Token = "0x200000B")]
internal static class NumericsHelpers
{
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x25CB180", Offset = "0x25C9780", VA = "0x1825CB180")]
	public static void GetDoubleParts(double dbl, out int sign, out int exp, out ulong man, out bool fFinite)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x25CB000", Offset = "0x25C9600", VA = "0x1825CB000")]
	public static double GetDoubleFromParts(int sign, int exp, ulong man)
	{
		return default(double);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x25CAF70", Offset = "0x25C9570", VA = "0x1825CAF70")]
	public static void DangerousMakeTwosComplement(uint[] d)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x25CB210", Offset = "0x25C9810", VA = "0x1825CB210")]
	public static ulong MakeUlong(uint uHi, uint uLo)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x25CAE90", Offset = "0x25C9490", VA = "0x1825CAE90")]
	public static uint Abs(int a)
	{
		return default(uint);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x25CAF60", Offset = "0x25C9560", VA = "0x1825CAF60")]
	public static uint CombineHash(uint u1, uint u2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x25CAF60", Offset = "0x25C9560", VA = "0x1825CAF60")]
	public static int CombineHash(int n1, int n2)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x25BB5F0", Offset = "0x25B9BF0", VA = "0x1825BB5F0")]
	public static int CbitHighZero(uint u)
	{
		return default(int);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x25CAEA0", Offset = "0x25C94A0", VA = "0x1825CAEA0")]
	public static int CbitHighZero(ulong uu)
	{
		return default(int);
	}
}
