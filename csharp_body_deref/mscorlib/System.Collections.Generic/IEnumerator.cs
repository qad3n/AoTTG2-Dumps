// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x20005FB")]
public interface IEnumerator<out T> : IDisposable, IEnumerator
{
	[Token(Token = "0x170007AD")]
	new T Current
	{
		[Token(Token = "0x6002EF2")]
		get;
	}
}
