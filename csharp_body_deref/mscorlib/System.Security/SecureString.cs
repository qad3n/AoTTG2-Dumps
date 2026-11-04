// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecureString
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x20002D3")]
[System.MonoTODO("work in progress - encryption is missing")]
public sealed class SecureString : IDisposable
{
	[Token(Token = "0x4000C21")]
	[FieldOffset(Offset = "0x10")]
	private int length;

	[Token(Token = "0x4000C22")]
	[FieldOffset(Offset = "0x14")]
	private bool disposed;

	[Token(Token = "0x4000C23")]
	[FieldOffset(Offset = "0x18")]
	private byte[] data;

	[Token(Token = "0x17000262")]
	public int Length
	{
		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x19989E0", Offset = "0x1996FE0", VA = "0x1819989E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x1998980", Offset = "0x1996F80", VA = "0x181998980")]
	public SecureString()
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x1998810", Offset = "0x1996E10", VA = "0x181998810")]
	[CLSCompliant(false)]
	public unsafe SecureString(char* value, int length)
	{
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x1998700", Offset = "0x1996D00", VA = "0x181998700", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x7C0280", Offset = "0x7BE880", VA = "0x1807C0280")]
	private void Encrypt()
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x7C0280", Offset = "0x7BE880", VA = "0x1807C0280")]
	private void Decrypt()
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x1998560", Offset = "0x1996B60", VA = "0x181998560")]
	private void Alloc(int length, bool realloc)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x1998760", Offset = "0x1996D60", VA = "0x181998760")]
	internal byte[] GetBuffer()
	{
		return null;
	}
}
