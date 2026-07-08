using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C4")]
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
