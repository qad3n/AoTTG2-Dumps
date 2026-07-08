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
		[Address(RVA = "0x3C3E570", Offset = "0x3C3E570", VA = "0x3C3E570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	protected virtual byte FrameCode
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x3C3F1A0", Offset = "0x3C3F1A0", VA = "0x3C3F1A0", Slot = "33")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3C3E550", Offset = "0x3C3E550", VA = "0x3C3E550", Slot = "31")]
	public virtual int GetPayloadFragmentSize(SendFrameParams par)
	{
		return default(int);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3C3E580", Offset = "0x3C3E580", VA = "0x3C3E580", Slot = "26")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3C3E5C0", Offset = "0x3C3E5C0", VA = "0x3C3E5C0", Slot = "27")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3C3E600", Offset = "0x3C3E600", VA = "0x3C3E600", Slot = "28")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3C3E640", Offset = "0x3C3E640", VA = "0x3C3E640", Slot = "29")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3C3E680", Offset = "0x3C3E680", VA = "0x3C3E680", Slot = "19")]
	public bool IsChannelJoined(int channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3C3E690", Offset = "0x3C3E690", VA = "0x3C3E690")]
	public LoadBalancingTransport([Optional] ILogger logger, ConnectionProtocol connectionProtocol = ConnectionProtocol.Udp, bool cppCompatibilityMode = false)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3C3E8E0", Offset = "0x3C3E8E0", VA = "0x3C3E8E0")]
	public new void Service()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3C3E910", Offset = "0x3C3E910", VA = "0x3C3E910", Slot = "32")]
	[Obsolete("Use LoadBalancingPeer::OpChangeGroups().")]
	public virtual bool ChangeAudioGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3C3E940", Offset = "0x3C3E940", VA = "0x3C3E940")]
	private RaiseEventOptions buildEvOptFromTargets(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3C3EB00", Offset = "0x3C3EB00", VA = "0x3C3EB00", Slot = "20")]
	public void SendVoiceInfo(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3C3EF90", Offset = "0x3C3EF90", VA = "0x3C3EF90", Slot = "21")]
	public void SendVoiceRemove(LocalVoice voice, int channelId, bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3C3F1B0", Offset = "0x3C3F1B0", VA = "0x3C3F1B0", Slot = "34")]
	protected virtual object buildFrameMessage(byte voiceId, byte evNumber, byte frNumber, ArraySegment<byte> data, FrameFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3C3F570", Offset = "0x3C3F570", VA = "0x3C3F570", Slot = "22")]
	public void SendFrame(ArraySegment<byte> data, FrameFlags flags, byte evNumber, byte frNumber, byte voiceId, int channelId, SendFrameParams par)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3C3F690", Offset = "0x3C3F690", VA = "0x3C3F690", Slot = "23")]
	public string ChannelIdStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3C3F6A0", Offset = "0x3C3F6A0", VA = "0x3C3F6A0", Slot = "24")]
	public string PlayerIdStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3C3F6B0", Offset = "0x3C3F6B0", VA = "0x3C3F6B0", Slot = "35")]
	protected virtual void onEventActionVoiceClient(EventData ev)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3C3FD20", Offset = "0x3C3FD20", VA = "0x3C3FD20")]
	private void onStateChangeVoiceClient(ClientState fromState, ClientState state)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3C3FD70", Offset = "0x3C3FD70", VA = "0x3C3FD70", Slot = "30")]
	public void Dispose()
	{
	}
}
