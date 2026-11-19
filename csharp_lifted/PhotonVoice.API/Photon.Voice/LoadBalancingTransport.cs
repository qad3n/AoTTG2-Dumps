// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.LoadBalancingTransport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/LoadBalancingTransport.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Voice;

[Token(Token = "0x2000099")]
public class LoadBalancingTransport : LoadBalancingClient, IVoiceTransport, ILogger, IDisposable
{
	[Token(Token = "0x4000285")]
	internal const int REMOTE_VOICE_CHANNEL = 0;

	[Token(Token = "0x4000286")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	protected VoiceClient voiceClient;

	[Token(Token = "0x4000287")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private PhotonTransportProtocol protocol;

	[Token(Token = "0x4000288")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	protected readonly bool cppCompatibilityMode;

	[Token(Token = "0x170000EC")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x571E100", Offset = "0x571D100", VA = "0x571E100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	protected virtual byte FrameCode
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x571E720", Offset = "0x571D720", VA = "0x571E720", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x571E0E0", Offset = "0x571D0E0", VA = "0x571E0E0", Slot = "31")]
	public virtual int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x571E110", Offset = "0x571D110", VA = "0x571E110", Slot = "26")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x571E150", Offset = "0x571D150", VA = "0x571E150", Slot = "27")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x571E190", Offset = "0x571D190", VA = "0x571E190", Slot = "28")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x571E1D0", Offset = "0x571D1D0", VA = "0x571E1D0", Slot = "29")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x571E210", Offset = "0x571D210", VA = "0x571E210", Slot = "19")]
	public bool IsChannelJoined(int channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x571E220", Offset = "0x571D220", VA = "0x571E220")]
	public LoadBalancingTransport([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x571E400", Offset = "0x571D400", VA = "0x571E400")]
	public new void Service()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x571E430", Offset = "0x571D430", VA = "0x571E430", Slot = "32")]
	[Obsolete("Use LoadBalancingPeer::OpChangeGroups().")]
	public virtual bool ChangeAudioGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x571E460", Offset = "0x571D460", VA = "0x571E460")]
	private RaiseEventOptions buildEvOptFromTargets(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x571E620", Offset = "0x571D620", VA = "0x571E620", Slot = "20")]
	public void SendVoiceInfo(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x571E6A0", Offset = "0x571D6A0", VA = "0x571E6A0", Slot = "21")]
	public void SendVoiceRemove(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x571E730", Offset = "0x571D730", VA = "0x571E730", Slot = "34")]
	protected virtual object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x571E760", Offset = "0x571D760", VA = "0x571E760", Slot = "22")]
	public void SendFrame(ArraySegment<byte> data, FrameFlags flags, byte evNumber, byte frNumber, byte voiceId, int channelId, SendFrameParams par)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x571E880", Offset = "0x571D880", VA = "0x571E880", Slot = "23")]
	public string ChannelIdStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x571E890", Offset = "0x571D890", VA = "0x571E890", Slot = "24")]
	public string PlayerIdStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x571E8A0", Offset = "0x571D8A0", VA = "0x571E8A0", Slot = "35")]
	protected virtual void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x571E9E0", Offset = "0x571D9E0", VA = "0x571E9E0")]
	private void onStateChangeVoiceClient(ClientState fromState, ClientState state)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x571EA30", Offset = "0x571DA30", VA = "0x571EA30", Slot = "30")]
	public void Dispose()
	{
	}
}
