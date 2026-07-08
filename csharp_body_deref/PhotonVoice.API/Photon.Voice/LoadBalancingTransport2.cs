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
		[Address(RVA = "0x3C3FDF0", Offset = "0x3C3FDF0", VA = "0x3C3FDF0", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3C3FD90", Offset = "0x3C3FD90", VA = "0x3C3FD90")]
	public LoadBalancingTransport2([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3C3FDD0", Offset = "0x3C3FDD0", VA = "0x3C3FDD0", Slot = "31")]
	public override int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3C3FE00", Offset = "0x3C3FE00", VA = "0x3C3FE00", Slot = "34")]
	protected override object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3C3FFA0", Offset = "0x3C3FFA0", VA = "0x3C3FFA0", Slot = "35")]
	protected override void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3C40010", Offset = "0x3C40010", VA = "0x3C40010")]
	internal void onVoiceFrameEvent(object content0, int channelId, int playerId, int localPlayerId)
	{
	}
}
