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

[Token(Token = "0x200009B")]
public class LoadBalancingTransport : LoadBalancingClient, IVoiceTransport, ILogger, IDisposable
{
	[Token(Token = "0x400028A")]
	internal const int REMOTE_VOICE_CHANNEL = 0;

	[Token(Token = "0x400028B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	protected VoiceClient voiceClient;

	[Token(Token = "0x400028C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private PhotonTransportProtocol protocol;

	[Token(Token = "0x400028D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	protected readonly bool cppCompatibilityMode;

	[Token(Token = "0x170000EC")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x3F33EC0", Offset = "0x3F33EC0", VA = "0x3F33EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	protected virtual byte FrameCode
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x3F34AF0", Offset = "0x3F34AF0", VA = "0x3F34AF0", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3F33EA0", Offset = "0x3F33EA0", VA = "0x3F33EA0", Slot = "31")]
	public virtual int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3F33ED0", Offset = "0x3F33ED0", VA = "0x3F33ED0", Slot = "26")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3F33F10", Offset = "0x3F33F10", VA = "0x3F33F10", Slot = "27")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3F33F50", Offset = "0x3F33F50", VA = "0x3F33F50", Slot = "28")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3F33F90", Offset = "0x3F33F90", VA = "0x3F33F90", Slot = "29")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3F33FD0", Offset = "0x3F33FD0", VA = "0x3F33FD0", Slot = "19")]
	public bool IsChannelJoined(int channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3F33FE0", Offset = "0x3F33FE0", VA = "0x3F33FE0")]
	public LoadBalancingTransport([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3F34230", Offset = "0x3F34230", VA = "0x3F34230")]
	public new void Service()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3F34260", Offset = "0x3F34260", VA = "0x3F34260", Slot = "32")]
	[Obsolete("Use LoadBalancingPeer::OpChangeGroups().")]
	public virtual bool ChangeAudioGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3F34290", Offset = "0x3F34290", VA = "0x3F34290")]
	private RaiseEventOptions buildEvOptFromTargets(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3F34450", Offset = "0x3F34450", VA = "0x3F34450", Slot = "20")]
	public void SendVoiceInfo(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3F348E0", Offset = "0x3F348E0", VA = "0x3F348E0", Slot = "21")]
	public void SendVoiceRemove(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3F34B00", Offset = "0x3F34B00", VA = "0x3F34B00", Slot = "34")]
	protected virtual object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3F34EC0", Offset = "0x3F34EC0", VA = "0x3F34EC0", Slot = "22")]
	public void SendFrame(ArraySegment<byte> data, FrameFlags flags, byte evNumber, byte frNumber, byte voiceId, int channelId, SendFrameParams par)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3F34FE0", Offset = "0x3F34FE0", VA = "0x3F34FE0", Slot = "23")]
	public string ChannelIdStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3F34FF0", Offset = "0x3F34FF0", VA = "0x3F34FF0", Slot = "24")]
	public string PlayerIdStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3F35000", Offset = "0x3F35000", VA = "0x3F35000", Slot = "35")]
	protected virtual void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3F35670", Offset = "0x3F35670", VA = "0x3F35670")]
	private void onStateChangeVoiceClient(ClientState fromState, ClientState state)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3F356C0", Offset = "0x3F356C0", VA = "0x3F356C0", Slot = "30")]
	public void Dispose()
	{
	}
}
