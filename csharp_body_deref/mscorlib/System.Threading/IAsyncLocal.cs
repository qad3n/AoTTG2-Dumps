// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.IAsyncLocal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001C8")]
internal interface IAsyncLocal
{
	[Token(Token = "0x600115B")]
	void OnValueChanged(object previousValue, object currentValue, bool contextChanged);
}
