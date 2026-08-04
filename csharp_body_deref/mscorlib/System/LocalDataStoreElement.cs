// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CE5910", Offset = "0x3CE5910", VA = "0x3CE5910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x3CE5920", Offset = "0x3CE5920", VA = "0x3CE5920")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public long Cookie
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x3CE5930", Offset = "0x3CE5930", VA = "0x3CE5930")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x3CE58F0", Offset = "0x3CE58F0", VA = "0x3CE58F0")]
	public LocalDataStoreElement(long cookie)
	{
	}
}
