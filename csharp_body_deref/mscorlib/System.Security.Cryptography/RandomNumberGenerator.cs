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

[Token(Token = "0x20002EE")]
[ComVisible(true)]
public abstract class RandomNumberGenerator : IDisposable
{
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x3B35E40", Offset = "0x3B35E40", VA = "0x3B35E40")]
	protected RandomNumberGenerator()
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x3B35E50", Offset = "0x3B35E50", VA = "0x3B35E50")]
	public static RandomNumberGenerator Create()
	{
		return null;
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x3B35E90", Offset = "0x3B35E90", VA = "0x3B35E90")]
	public static RandomNumberGenerator Create(string rngName)
	{
		return null;
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x3B35F20", Offset = "0x3B35F20", VA = "0x3B35F20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x3B35F90", Offset = "0x3B35F90", VA = "0x3B35F90", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600197F")]
	public abstract void GetBytes(byte[] data);

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x3B35FA0", Offset = "0x3B35FA0", VA = "0x3B35FA0", Slot = "7")]
	public virtual void GetBytes(byte[] data, int offset, int count)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x3B36160", Offset = "0x3B36160", VA = "0x3B36160", Slot = "8")]
	public virtual void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x3B361A0", Offset = "0x3B361A0", VA = "0x3B361A0")]
	public static void Fill(Span<byte> data)
	{
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x3B36210", Offset = "0x3B36210", VA = "0x3B36210")]
	internal static void FillSpan(Span<byte> data)
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x3B36280", Offset = "0x3B36280", VA = "0x3B36280", Slot = "9")]
	public virtual void GetBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x3B36530", Offset = "0x3B36530", VA = "0x3B36530", Slot = "10")]
	public virtual void GetNonZeroBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x3B367E0", Offset = "0x3B367E0", VA = "0x3B367E0")]
	public static int GetInt32(int fromInclusive, int toExclusive)
	{
		return default(int);
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x3B36990", Offset = "0x3B36990", VA = "0x3B36990")]
	public static int GetInt32(int toExclusive)
	{
		return default(int);
	}
}
