// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000154")]
internal sealed class LocalDataStoreElement
{
	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x10")]
	private object m_value;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x18")]
	private long m_cookie;

	[Token(Token = "0x17000128")]
	public object Value
	{
		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x54EA100", Offset = "0x54E9100", VA = "0x54EA100")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x54EA110", Offset = "0x54E9110", VA = "0x54EA110")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public long Cookie
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x54EA120", Offset = "0x54E9120", VA = "0x54EA120")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x54EA0E0", Offset = "0x54E90E0", VA = "0x54EA0E0")]
	public LocalDataStoreElement(long cookie)
	{
	}
}
