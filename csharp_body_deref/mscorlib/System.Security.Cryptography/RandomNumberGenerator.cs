using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002EE")]
[ComVisible(true)]
public abstract class RandomNumberGenerator : IDisposable
{
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x4E50320", Offset = "0x4E50320", VA = "0x4E50320")]
	protected RandomNumberGenerator()
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x4E50330", Offset = "0x4E50330", VA = "0x4E50330")]
	public static RandomNumberGenerator Create()
	{
		return null;
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x4E50370", Offset = "0x4E50370", VA = "0x4E50370")]
	public static RandomNumberGenerator Create(string rngName)
	{
		return null;
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x4E50400", Offset = "0x4E50400", VA = "0x4E50400", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x4E50470", Offset = "0x4E50470", VA = "0x4E50470", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600197F")]
	public abstract void GetBytes(byte[] data);

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x4E50480", Offset = "0x4E50480", VA = "0x4E50480", Slot = "7")]
	public virtual void GetBytes(byte[] data, int offset, int count)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x4E50640", Offset = "0x4E50640", VA = "0x4E50640", Slot = "8")]
	public virtual void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x4E50680", Offset = "0x4E50680", VA = "0x4E50680")]
	public static void Fill(Span<byte> data)
	{
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x4E506F0", Offset = "0x4E506F0", VA = "0x4E506F0")]
	internal static void FillSpan(Span<byte> data)
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x4E50760", Offset = "0x4E50760", VA = "0x4E50760", Slot = "9")]
	public virtual void GetBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x4E50A10", Offset = "0x4E50A10", VA = "0x4E50A10", Slot = "10")]
	public virtual void GetNonZeroBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x4E50CC0", Offset = "0x4E50CC0", VA = "0x4E50CC0")]
	public static int GetInt32(int fromInclusive, int toExclusive)
	{
		return default(int);
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x4E50E70", Offset = "0x4E50E70", VA = "0x4E50E70")]
	public static int GetInt32(int toExclusive)
	{
		return default(int);
	}
}
