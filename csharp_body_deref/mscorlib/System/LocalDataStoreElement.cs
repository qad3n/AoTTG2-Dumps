// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017C")]
internal sealed class LocalDataStoreElement
{
	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x10")]
	private object m_value;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x18")]
	private long m_cookie;

	[Token(Token = "0x17000128")]
	public object Value
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public long Cookie
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x1B6B5B0", Offset = "0x1B69BB0", VA = "0x181B6B5B0")]
	public LocalDataStoreElement(long cookie)
	{
	}
}
