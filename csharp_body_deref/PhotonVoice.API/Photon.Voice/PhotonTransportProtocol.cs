using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200009D")]
internal class PhotonTransportProtocol
{
	[Token(Token = "0x200009E")]
	private enum EventSubcode : byte
	{
		[Token(Token = "0x4000292")]
		VoiceInfo = 1,
		[Token(Token = "0x4000293")]
		VoiceRemove,
		[Token(Token = "0x4000294")]
		Frame
	}

	[Token(Token = "0x200009F")]
	private enum EventParam : byte
	{
		[Token(Token = "0x4000296")]
		VoiceId = 1,
		[Token(Token = "0x4000297")]
		SamplingRate,
		[Token(Token = "0x4000298")]
		Channels,
		[Token(Token = "0x4000299")]
		FrameDurationUs,
		[Token(Token = "0x400029A")]
		Bitrate,
		[Token(Token = "0x400029B")]
		Width,
		[Token(Token = "0x400029C")]
		Height,
		[Token(Token = "0x400029D")]
		FPS,
		[Token(Token = "0x400029E")]
		KeyFrameInt,
		[Token(Token = "0x400029F")]
		UserData,
		[Token(Token = "0x40002A0")]
		EventNumber,
		[Token(Token = "0x40002A1")]
		Codec
	}

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x10")]
	private VoiceClient voiceClient;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x18")]
	private ILogger logger;

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3C3E8A0", Offset = "0x3C3E8A0", VA = "0x3C3E8A0")]
	public PhotonTransportProtocol(VoiceClient voiceClient, ILogger logger)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3C3EB80", Offset = "0x3C3EB80", VA = "0x3C3EB80")]
	internal object[] buildVoicesInfo(LocalVoice v)
	{
		return null;
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3C3F010", Offset = "0x3C3F010", VA = "0x3C3F010")]
	internal object[] buildVoiceRemoveMessage(LocalVoice v)
	{
		return null;
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3C3F1E0", Offset = "0x3C3F1E0", VA = "0x3C3F1E0")]
	internal object[] buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x3C3F7E0", Offset = "0x3C3F7E0", VA = "0x3C3F7E0")]
	internal void onVoiceEvent(object content0, int channelId, int playerId, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x3C40400", Offset = "0x3C40400", VA = "0x3C40400")]
	private void onVoiceInfo(int channelId, int playerId, object payload)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3C40660", Offset = "0x3C40660", VA = "0x3C40660")]
	private void onVoiceRemove(int channelId, int playerId, object payload)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3C406F0", Offset = "0x3C406F0", VA = "0x3C406F0")]
	private VoiceInfo createVoiceInfoFromEventPayload(Dictionary<byte, object> h)
	{
		return default(VoiceInfo);
	}
}
