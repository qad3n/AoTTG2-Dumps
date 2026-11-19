// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.SpeechError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x2000206")]
public enum SpeechError
{
	[Token(Token = "0x40006E0")]
	NoError,
	[Token(Token = "0x40006E1")]
	TopicLanguageNotSupported,
	[Token(Token = "0x40006E2")]
	GrammarLanguageMismatch,
	[Token(Token = "0x40006E3")]
	GrammarCompilationFailure,
	[Token(Token = "0x40006E4")]
	AudioQualityFailure,
	[Token(Token = "0x40006E5")]
	PauseLimitExceeded,
	[Token(Token = "0x40006E6")]
	TimeoutExceeded,
	[Token(Token = "0x40006E7")]
	NetworkFailure,
	[Token(Token = "0x40006E8")]
	MicrophoneUnavailable,
	[Token(Token = "0x40006E9")]
	UnknownError
}
