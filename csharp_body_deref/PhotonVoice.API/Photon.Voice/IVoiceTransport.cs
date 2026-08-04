// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IVoiceTransport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006F")]
public interface IVoiceTransport
{
	[Token(Token = "0x6000254")]
	bool IsChannelJoined(int channelId);

	[Token(Token = "0x6000255")]
	void SendVoiceInfo(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers);

	[Token(Token = "0x6000256")]
	void SendVoiceRemove(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers);

	[Token(Token = "0x6000257")]
	void SendFrame(ArraySegment<byte> data, FrameFlags flags, byte evNumber, byte frNumber, byte voiceId, int channelId, SendFrameParams par);

	[Token(Token = "0x6000258")]
	string ChannelIdStr(int channelId);

	[Token(Token = "0x6000259")]
	string PlayerIdStr(int playerId);

	[Token(Token = "0x600025A")]
	int GetPayloadFragmentSize(SendFrameParams par);
}
