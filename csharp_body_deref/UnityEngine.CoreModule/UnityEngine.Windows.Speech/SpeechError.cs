using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C3")]
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
