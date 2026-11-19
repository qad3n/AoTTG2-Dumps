// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000153")]
internal sealed class LocalDataStoreHolder
{
	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStore m_Store;

	[Token(Token = "0x17000127")]
	public System.LocalDataStore Store
	{
		[Token(Token = "0x6000D81")]
		[Address(RVA = "0x54EA0D0", Offset = "0x54E90D0", VA = "0x54EA0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x54E9FE0", Offset = "0x54E8FE0", VA = "0x54E9FE0")]
	public LocalDataStoreHolder(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x54EA010", Offset = "0x54E9010", VA = "0x54EA010", Slot = "1")]
	~LocalDataStoreHolder()
	{
	}
}
