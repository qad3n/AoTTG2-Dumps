// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.LoadBalancingTransport2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/LoadBalancingTransport2.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200009C")]
public class LoadBalancingTransport2 : LoadBalancingTransport
{
	[Token(Token = "0x400028E")]
	private const int MAX_DATA_OFFSET = 5;

	[Token(Token = "0x170000EE")]
	protected override byte FrameCode
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x3F35740", Offset = "0x3F35740", VA = "0x3F35740", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3F356E0", Offset = "0x3F356E0", VA = "0x3F356E0")]
	public LoadBalancingTransport2([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3F35720", Offset = "0x3F35720", VA = "0x3F35720", Slot = "31")]
	public override int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3F35750", Offset = "0x3F35750", VA = "0x3F35750", Slot = "34")]
	protected override object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3F358F0", Offset = "0x3F358F0", VA = "0x3F358F0", Slot = "35")]
	protected override void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3F35960", Offset = "0x3F35960", VA = "0x3F35960")]
	internal void onVoiceFrameEvent(object content0, int channelId, int playerId, int localPlayerId)
	{
	}
}
