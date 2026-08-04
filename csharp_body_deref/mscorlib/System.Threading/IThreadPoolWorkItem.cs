// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.IThreadPoolWorkItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000207")]
internal interface IThreadPoolWorkItem
{
	[Token(Token = "0x60012CC")]
	void ExecuteWorkItem();

	[Token(Token = "0x60012CD")]
	void MarkAborted(ThreadAbortException tae);
}
