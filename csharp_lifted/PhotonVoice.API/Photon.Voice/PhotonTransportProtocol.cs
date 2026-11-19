// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.PhotonTransportProtocol
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/PhotonTransport.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200009B")]
internal class PhotonTransportProtocol
{
	[Token(Token = "0x200009C")]
	private enum EventSubcode : byte
	{
		[Token(Token = "0x400028D")]
		VoiceInfo = 1,
		[Token(Token = "0x400028E")]
		VoiceRemove,
		[Token(Token = "0x400028F")]
		Frame
	}

	[Token(Token = "0x200009D")]
	private enum EventParam : byte
	{
		[Token(Token = "0x4000291")]
		VoiceId = 1,
		[Token(Token = "0x4000292")]
		SamplingRate,
		[Token(Token = "0x4000293")]
		Channels,
		[Token(Token = "0x4000294")]
		FrameDurationUs,
		[Token(Token = "0x4000295")]
		Bitrate,
		[Token(Token = "0x4000296")]
		Width,
		[Token(Token = "0x4000297")]
		Height,
		[Token(Token = "0x4000298")]
		FPS,
		[Token(Token = "0x4000299")]
		KeyFrameInt,
		[Token(Token = "0x400029A")]
		UserData,
		[Token(Token = "0x400029B")]
		EventNumber,
		[Token(Token = "0x400029C")]
		Codec
	}

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x10")]
	private VoiceClient voiceClient;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x18")]
	private ILogger logger;

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x571F0B0", Offset = "0x571E0B0", VA = "0x571F0B0")]
	public PhotonTransportProtocol(VoiceClient voiceClient, ILogger logger)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x571F0F0", Offset = "0x571E0F0", VA = "0x571F0F0")]
	internal object[] buildVoicesInfo(LocalVoice v)
	{
		return null;
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x571F510", Offset = "0x571E510", VA = "0x571F510")]
	internal object[] buildVoiceRemoveMessage(LocalVoice v)
	{
		return null;
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x571F6B0", Offset = "0x571E6B0", VA = "0x571F6B0")]
	internal object[] buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x571FA50", Offset = "0x571EA50", VA = "0x571FA50")]
	internal void onVoiceEvent(object content0, int channelId, int playerId, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x571FFB0", Offset = "0x571EFB0", VA = "0x571FFB0")]
	private void onVoiceInfo(int channelId, int playerId, object payload)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x57201E0", Offset = "0x571F1E0", VA = "0x57201E0")]
	private void onVoiceRemove(int channelId, int playerId, object payload)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x5720270", Offset = "0x571F270", VA = "0x5720270")]
	private VoiceInfo createVoiceInfoFromEventPayload(Dictionary<byte, object> h)
	{
		return default(VoiceInfo);
	}
}
