using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000152")]
internal sealed class LocalDataStoreElement
{
	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x10")]
	private object m_value;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x18")]
	private long m_cookie;

	[Token(Token = "0x17000127")]
	public object Value
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x4FFFDF0", Offset = "0x4FFFDF0", VA = "0x4FFFDF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x4FFFE00", Offset = "0x4FFFE00", VA = "0x4FFFE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public long Cookie
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x4FFFE10", Offset = "0x4FFFE10", VA = "0x4FFFE10")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x4FFFDD0", Offset = "0x4FFFDD0", VA = "0x4FFFDD0")]
	public LocalDataStoreElement(long cookie)
	{
	}
}
