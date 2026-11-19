// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005A7")]
public interface ICollection : IEnumerable
{
	[Token(Token = "0x170006AD")]
	int Count
	{
		[Token(Token = "0x6002BA1")]
		get;
	}

	[Token(Token = "0x170006AE")]
	object SyncRoot
	{
		[Token(Token = "0x6002BA2")]
		get;
	}

	[Token(Token = "0x170006AF")]
	bool IsSynchronized
	{
		[Token(Token = "0x6002BA3")]
		get;
	}

	[Token(Token = "0x6002BA0")]
	void CopyTo(Array array, int index);
}
