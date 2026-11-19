// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.DictationCompletionCause
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x2000207")]
public enum DictationCompletionCause
{
	[Token(Token = "0x40006EB")]
	Complete,
	[Token(Token = "0x40006EC")]
	AudioQualityFailure,
	[Token(Token = "0x40006ED")]
	Canceled,
	[Token(Token = "0x40006EE")]
	TimeoutExceeded,
	[Token(Token = "0x40006EF")]
	PauseLimitExceeded,
	[Token(Token = "0x40006F0")]
	NetworkFailure,
	[Token(Token = "0x40006F1")]
	MicrophoneUnavailable,
	[Token(Token = "0x40006F2")]
	UnknownError
}
