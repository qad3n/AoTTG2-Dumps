// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.IAsyncOnAudioFilterReadHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A2")]
public interface IAsyncOnAudioFilterReadHandler
{
	[Token(Token = "0x6000AB7")]
	UniTask<(float[], int)> OnAudioFilterReadAsync();
}
