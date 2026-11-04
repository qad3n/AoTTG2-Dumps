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
		[Address(RVA = "0x1D84440", Offset = "0x1D82A40", VA = "0x181D84440", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x1D84250", Offset = "0x1D82850", VA = "0x181D84250")]
	public LoadBalancingTransport2([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x1D84230", Offset = "0x1D82830", VA = "0x181D84230", Slot = "31")]
	public override int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x1D842A0", Offset = "0x1D828A0", VA = "0x181D842A0", Slot = "34")]
	protected override object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x1D84450", Offset = "0x1D82A50", VA = "0x181D84450", Slot = "35")]
	protected override void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x1D844F0", Offset = "0x1D82AF0", VA = "0x181D844F0")]
	internal void onVoiceFrameEvent(object content0, int channelId, int playerId, int localPlayerId)
	{
	}
}
