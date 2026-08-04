// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.IFileWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000366")]
internal interface IFileWatcher
{
	[Token(Token = "0x60016D1")]
	void StartDispatching(object fsw);

	[Token(Token = "0x60016D2")]
	void StopDispatching(object fsw);

	[Token(Token = "0x60016D3")]
	void Dispose(object fsw);
}
