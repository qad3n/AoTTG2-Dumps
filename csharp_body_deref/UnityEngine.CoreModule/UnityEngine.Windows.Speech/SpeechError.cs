// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.SpeechError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C6")]
public enum SpeechError
{
	[Token(Token = "0x4000644")]
	NoError,
	[Token(Token = "0x4000645")]
	TopicLanguageNotSupported,
	[Token(Token = "0x4000646")]
	GrammarLanguageMismatch,
	[Token(Token = "0x4000647")]
	GrammarCompilationFailure,
	[Token(Token = "0x4000648")]
	AudioQualityFailure,
	[Token(Token = "0x4000649")]
	PauseLimitExceeded,
	[Token(Token = "0x400064A")]
	TimeoutExceeded,
	[Token(Token = "0x400064B")]
	NetworkFailure,
	[Token(Token = "0x400064C")]
	MicrophoneUnavailable,
	[Token(Token = "0x400064D")]
	UnknownError
}
