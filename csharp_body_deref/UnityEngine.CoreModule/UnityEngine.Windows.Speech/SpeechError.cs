// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.SpeechError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x2000205")]
public enum SpeechError
{
	[Token(Token = "0x40006DB")]
	NoError,
	[Token(Token = "0x40006DC")]
	TopicLanguageNotSupported,
	[Token(Token = "0x40006DD")]
	GrammarLanguageMismatch,
	[Token(Token = "0x40006DE")]
	GrammarCompilationFailure,
	[Token(Token = "0x40006DF")]
	AudioQualityFailure,
	[Token(Token = "0x40006E0")]
	PauseLimitExceeded,
	[Token(Token = "0x40006E1")]
	TimeoutExceeded,
	[Token(Token = "0x40006E2")]
	NetworkFailure,
	[Token(Token = "0x40006E3")]
	MicrophoneUnavailable,
	[Token(Token = "0x40006E4")]
	UnknownError
}
