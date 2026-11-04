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
		[Address(RVA = "0x1D6BB50", Offset = "0x1D6A150", VA = "0x181D6BB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	protected virtual byte FrameCode
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x1D6BB40", Offset = "0x1D6A140", VA = "0x181D6BB40", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x1D6B320", Offset = "0x1D69920", VA = "0x181D6B320", Slot = "31")]
	public virtual int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x1D6B390", Offset = "0x1D69990", VA = "0x181D6B390", Slot = "26")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x1D6B410", Offset = "0x1D69A10", VA = "0x181D6B410", Slot = "27")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x1D6B3D0", Offset = "0x1D699D0", VA = "0x181D6B3D0", Slot = "28")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x1D6B350", Offset = "0x1D69950", VA = "0x181D6B350", Slot = "29")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x1D6B340", Offset = "0x1D69940", VA = "0x181D6B340", Slot = "19")]
	public bool IsChannelJoined(int channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x1D6B730", Offset = "0x1D69D30", VA = "0x181D6B730")]
	public LoadBalancingTransport([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x1D6B700", Offset = "0x1D69D00", VA = "0x181D6B700")]
	public new void Service()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x1D6B2C0", Offset = "0x1D698C0", VA = "0x181D6B2C0", Slot = "32")]
	[Obsolete("Use LoadBalancingPeer::OpChangeGroups().")]
	public virtual bool ChangeAudioGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x1D6B910", Offset = "0x1D69F10", VA = "0x181D6B910")]
	private RaiseEventOptions buildEvOptFromTargets(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x1D6B5A0", Offset = "0x1D69BA0", VA = "0x181D6B5A0", Slot = "20")]
	public void SendVoiceInfo(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x1D6B650", Offset = "0x1D69C50", VA = "0x181D6B650", Slot = "21")]
	public void SendVoiceRemove(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x1D6BAF0", Offset = "0x1D6A0F0", VA = "0x181D6BAF0", Slot = "34")]
	protected virtual object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x1D6B450", Offset = "0x1D69A50", VA = "0x181D6B450", Slot = "22")]
	public void SendFrame(ArraySegment<byte> data, FrameFlags flags, byte evNumber, byte frNumber, byte voiceId, int channelId, SendFrameParams par)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "23")]
	public string ChannelIdStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "24")]
	public string PlayerIdStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x1D6BB60", Offset = "0x1D6A160", VA = "0x181D6BB60", Slot = "35")]
	protected virtual void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x1D6BCA0", Offset = "0x1D6A2A0", VA = "0x181D6BCA0")]
	private void onStateChangeVoiceClient(ClientState fromState, ClientState state)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x1D6B2F0", Offset = "0x1D698F0", VA = "0x181D6B2F0", Slot = "30")]
	public void Dispose()
	{
	}
}
