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
		[Address(RVA = "0x4E392A0", Offset = "0x4E392A0", VA = "0x4E392A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x4E38F80", Offset = "0x4E38F80", VA = "0x4E38F80")]
	public SecureString()
	{
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x4E39160", Offset = "0x4E39160", VA = "0x4E39160")]
	[CLSCompliant(false)]
	public unsafe SecureString(char* value, int length)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x4E39300", Offset = "0x4E39300", VA = "0x4E39300", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001797")]
	[Address(RVA = "0x4E39290", Offset = "0x4E39290", VA = "0x4E39290")]
	private void Encrypt()
	{
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x4E39350", Offset = "0x4E39350", VA = "0x4E39350")]
	private void Decrypt()
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x4E38FE0", Offset = "0x4E38FE0", VA = "0x4E38FE0")]
	private void Alloc(int length, bool realloc)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x4E39360", Offset = "0x4E39360", VA = "0x4E39360")]
	internal byte[] GetBuffer()
	{
		return null;
	}
}
