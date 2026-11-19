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

[Token(Token = "0x200009A")]
public class LoadBalancingTransport2 : LoadBalancingTransport
{
	[Token(Token = "0x4000289")]
	private const int MAX_DATA_OFFSET = 5;

	[Token(Token = "0x170000EE")]
	protected override byte FrameCode
	{
		[Token(Token = "0x6000361")]
		[Address(RVA = "0x571EAB0", Offset = "0x571DAB0", VA = "0x571EAB0", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x571EA50", Offset = "0x571DA50", VA = "0x571EA50")]
	public LoadBalancingTransport2([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x571EA90", Offset = "0x571DA90", VA = "0x571EA90", Slot = "31")]
	public override int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x571EAC0", Offset = "0x571DAC0", VA = "0x571EAC0", Slot = "34")]
	protected override object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x571EC70", Offset = "0x571DC70", VA = "0x571EC70", Slot = "35")]
	protected override void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x571ECE0", Offset = "0x571DCE0", VA = "0x571ECE0")]
	internal void onVoiceFrameEvent(object content0, int channelId, int playerId, int localPlayerId)
	{
	}
}
