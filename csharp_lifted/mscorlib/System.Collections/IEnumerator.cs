// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005AC")]
public interface IEnumerator
{
	[Token(Token = "0x170006B8")]
	object Current
	{
		[Token(Token = "0x6002BB5")]
		get;
	}

	[Token(Token = "0x6002BB4")]
	bool MoveNext();

	[Token(Token = "0x6002BB6")]
	void Reset();
}
