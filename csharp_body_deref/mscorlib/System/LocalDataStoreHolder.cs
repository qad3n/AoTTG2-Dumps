// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017B")]
internal sealed class LocalDataStoreHolder
{
	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStore m_Store;

	[Token(Token = "0x17000127")]
	public System.LocalDataStore Store
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public LocalDataStoreHolder(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x1B6B5E0", Offset = "0x1B69BE0", VA = "0x181B6B5E0", Slot = "1")]
	~LocalDataStoreHolder()
	{
	}
}
