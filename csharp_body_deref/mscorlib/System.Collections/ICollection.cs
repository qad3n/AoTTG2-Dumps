// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005CC")]
public interface ICollection : IEnumerable
{
	[Token(Token = "0x170006AC")]
	int Count
	{
		[Token(Token = "0x6002BC2")]
		get;
	}

	[Token(Token = "0x170006AD")]
	object SyncRoot
	{
		[Token(Token = "0x6002BC3")]
		get;
	}

	[Token(Token = "0x170006AE")]
	bool IsSynchronized
	{
		[Token(Token = "0x6002BC4")]
		get;
	}

	[Token(Token = "0x6002BC1")]
	void CopyTo(Array array, int index);
}
