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

[Token(Token = "0x20002F6")]
[ComVisible(true)]
public abstract class RandomNumberGenerator : IDisposable
{
	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x533FA70", Offset = "0x533EA70", VA = "0x533FA70")]
	protected RandomNumberGenerator()
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x533FA80", Offset = "0x533EA80", VA = "0x533FA80")]
	public static RandomNumberGenerator Create()
	{
		return null;
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x533FAC0", Offset = "0x533EAC0", VA = "0x533FAC0")]
	public static RandomNumberGenerator Create(string rngName)
	{
		return null;
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x533FB50", Offset = "0x533EB50", VA = "0x533FB50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x533FBC0", Offset = "0x533EBC0", VA = "0x533FBC0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019C4")]
	public abstract void GetBytes(byte[] data);

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x533FBD0", Offset = "0x533EBD0", VA = "0x533FBD0", Slot = "7")]
	public virtual void GetBytes(byte[] data, int offset, int count)
	{
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x533FD90", Offset = "0x533ED90", VA = "0x533FD90", Slot = "8")]
	public virtual void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x533FDD0", Offset = "0x533EDD0", VA = "0x533FDD0")]
	public static void Fill(Span<byte> data)
	{
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x533FE40", Offset = "0x533EE40", VA = "0x533FE40")]
	internal static void FillSpan(Span<byte> data)
	{
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x533FEB0", Offset = "0x533EEB0", VA = "0x533FEB0", Slot = "9")]
	public virtual void GetBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x5340150", Offset = "0x533F150", VA = "0x5340150", Slot = "10")]
	public virtual void GetNonZeroBytes(Span<byte> data)
	{
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x53403F0", Offset = "0x533F3F0", VA = "0x53403F0")]
	public static int GetInt32(int fromInclusive, int toExclusive)
	{
		return default(int);
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x53405A0", Offset = "0x533F5A0", VA = "0x53405A0")]
	public static int GetInt32(int toExclusive)
	{
		return default(int);
	}
}
