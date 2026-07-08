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
