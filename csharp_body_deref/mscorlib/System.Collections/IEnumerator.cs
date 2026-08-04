// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FD")]
public interface IEnumerator
{
	[Token(Token = "0x1700072A")]
	object Current
	{
		[Token(Token = "0x6002EC7")]
		get;
	}

	[Token(Token = "0x6002EC6")]
	bool MoveNext();

	[Token(Token = "0x6002EC8")]
	void Reset();
}
