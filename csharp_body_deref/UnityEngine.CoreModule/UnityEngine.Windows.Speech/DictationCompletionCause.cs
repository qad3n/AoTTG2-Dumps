// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.DictationCompletionCause
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C7")]
public enum DictationCompletionCause
{
	[Token(Token = "0x400064F")]
	Complete,
	[Token(Token = "0x4000650")]
	AudioQualityFailure,
	[Token(Token = "0x4000651")]
	Canceled,
	[Token(Token = "0x4000652")]
	TimeoutExceeded,
	[Token(Token = "0x4000653")]
	PauseLimitExceeded,
	[Token(Token = "0x4000654")]
	NetworkFailure,
	[Token(Token = "0x4000655")]
	MicrophoneUnavailable,
	[Token(Token = "0x4000656")]
	UnknownError
}
