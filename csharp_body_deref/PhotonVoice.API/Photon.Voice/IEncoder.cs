// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IEncoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007B")]
public interface IEncoder : IDisposable
{
	[Token(Token = "0x170000BC")]
	string Error
	{
		[Token(Token = "0x60002BC")]
		get;
	}

	[Token(Token = "0x170000BD")]
	Action<ArraySegment<byte>, FrameFlags> Output
	{
		[Token(Token = "0x60002BD")]
		set;
	}

	[Token(Token = "0x60002BE")]
	ArraySegment<byte> DequeueOutput(out FrameFlags flags);

	[Token(Token = "0x60002BF")]
	void EndOfStream();

	[Token(Token = "0x60002C0")]
	I GetPlatformAPI<I>() where I : class;
}
