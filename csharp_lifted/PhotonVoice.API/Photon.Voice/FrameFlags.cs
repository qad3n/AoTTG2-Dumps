// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.FrameFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000078")]
public enum FrameFlags : byte
{
	[Token(Token = "0x40001EF")]
	Config = 1,
	[Token(Token = "0x40001F0")]
	KeyFrame = 2,
	[Token(Token = "0x40001F1")]
	PartialFrame = 4,
	[Token(Token = "0x40001F2")]
	EndOfStream = 8,
	[Token(Token = "0x40001F3")]
	FragNotBeg = 16,
	[Token(Token = "0x40001F4")]
	FragNotEnd = 32,
	[Token(Token = "0x40001F5")]
	FEC = 64,
	[Token(Token = "0x40001F6")]
	MaskFrag = 48
}
