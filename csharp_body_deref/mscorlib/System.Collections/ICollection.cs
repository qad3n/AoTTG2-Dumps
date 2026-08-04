// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ICollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005F8")]
public interface ICollection : IEnumerable
{
	[Token(Token = "0x1700071F")]
	int Count
	{
		[Token(Token = "0x6002EB3")]
		get;
	}

	[Token(Token = "0x17000720")]
	object SyncRoot
	{
		[Token(Token = "0x6002EB4")]
		get;
	}

	[Token(Token = "0x17000721")]
	bool IsSynchronized
	{
		[Token(Token = "0x6002EB5")]
		get;
	}

	[Token(Token = "0x6002EB2")]
	void CopyTo(Array array, int index);
}
