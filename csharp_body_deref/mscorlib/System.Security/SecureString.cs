// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecureString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x20002A4")]
[System.MonoTODO("work in progress - encryption is missing")]
public sealed class SecureString : IDisposable
{
	[Token(Token = "0x4000C11")]
	private const int BlockSize = 16;

	[Token(Token = "0x4000C12")]
	private const int MaxSize = 65536;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x10")]
	private int length;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x14")]
	private bool disposed;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x15")]
	private bool read_only;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x18")]
	private byte[] data;

	[Token(Token = "0x17000260")]
	public int Length
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x3B1EDC0", Offset = "0x3B1EDC0", VA = "0x3B1EDC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x3B1EAA0", Offset = "0x3B1EAA0", VA = "0x3B1EAA0")]
	public SecureString()
	{
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x3B1EC80", Offset = "0x3B1EC80", VA = "0x3B1EC80")]
	[CLSCompliant(false)]
	public unsafe SecureString(char* value, int length)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x3B1EE20", Offset = "0x3B1EE20", VA = "0x3B1EE20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001797")]
	[Address(RVA = "0x3B1EDB0", Offset = "0x3B1EDB0", VA = "0x3B1EDB0")]
	private void Encrypt()
	{
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x3B1EE70", Offset = "0x3B1EE70", VA = "0x3B1EE70")]
	private void Decrypt()
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x3B1EB00", Offset = "0x3B1EB00", VA = "0x3B1EB00")]
	private void Alloc(int length, bool realloc)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x3B1EE80", Offset = "0x3B1EE80", VA = "0x3B1EE80")]
	internal byte[] GetBuffer()
	{
		return null;
	}
}
