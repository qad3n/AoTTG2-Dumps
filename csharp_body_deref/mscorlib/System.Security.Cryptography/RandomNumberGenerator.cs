// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RandomNumberGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031D")]
[ComVisible(true)]
public abstract class RandomNumberGenerator : IDisposable
{
	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected RandomNumberGenerator()
	{
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x19B1840", Offset = "0x19AFE40", VA = "0x1819B1840")]
	public static RandomNumberGenerator Create()
	{
		return null;
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x19B1890", Offset = "0x19AFE90", VA = "0x1819B1890")]
	public static RandomNumberGenerator Create(string rngName)
	{
		return null;
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x19B1930", Offset = "0x19AFF30", VA = "0x1819B1930", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019E7")]
	public abstract void GetBytes(byte[] data);

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x19B1A50", Offset = "0x19B0050", VA = "0x1819B1A50", Slot = "7")]
	public virtual void GetBytes(byte[] data, int offset, int count)
	{
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x19B2220", Offset = "0x19B0820", VA = "0x1819B2220", Slot = "8")]
	public virtual void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x19B19F0", Offset = "0x19AFFF0", VA = "0x1819B19F0")]
	public static void Fill(Span<byte> data)
	{
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x19B1990", Offset = "0x19AFF90", VA = "0x1819B1990")]
	internal static void FillSpan(Span<byte> data)
	{
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x19B1C70", Offset = "0x19B0270", VA = "0x1819B1C70", Slot = "9")]
	public virtual void GetBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x19B2080", Offset = "0x19B0680", VA = "0x1819B2080", Slot = "10")]
	public virtual void GetNonZeroBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x19B1EC0", Offset = "0x19B04C0", VA = "0x1819B1EC0")]
	public static int GetInt32(int fromInclusive, int toExclusive)
	{
		return default(int);
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x19B1E30", Offset = "0x19B0430", VA = "0x1819B1E30")]
	public static int GetInt32(int toExclusive)
	{
		return default(int);
	}
}
