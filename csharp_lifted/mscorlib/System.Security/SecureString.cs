// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecureString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x20002AC")]
[System.MonoTODO("work in progress - encryption is missing")]
public sealed class SecureString : IDisposable
{
	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x10")]
	private int length;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x14")]
	private bool disposed;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x18")]
	private byte[] data;

	[Token(Token = "0x17000261")]
	public int Length
	{
		[Token(Token = "0x60017DA")]
		[Address(RVA = "0x5328D10", Offset = "0x5327D10", VA = "0x5328D10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x5328A00", Offset = "0x5327A00", VA = "0x5328A00")]
	public SecureString()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x5328BE0", Offset = "0x5327BE0", VA = "0x5328BE0")]
	[CLSCompliant(false)]
	public unsafe SecureString(char* value, int length)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x5328D70", Offset = "0x5327D70", VA = "0x5328D70", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x5328D00", Offset = "0x5327D00", VA = "0x5328D00")]
	private void Encrypt()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x5328DC0", Offset = "0x5327DC0", VA = "0x5328DC0")]
	private void Decrypt()
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x5328A60", Offset = "0x5327A60", VA = "0x5328A60")]
	private void Alloc(int length, bool realloc)
	{
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x5328DD0", Offset = "0x5327DD0", VA = "0x5328DD0")]
	internal byte[] GetBuffer()
	{
		return null;
	}
}
