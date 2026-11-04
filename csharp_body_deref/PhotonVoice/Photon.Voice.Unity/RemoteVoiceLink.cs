// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.RemoteVoiceLink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/RemoteVoiceLink.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x200000C")]
public class RemoteVoiceLink
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x10")]
	public readonly VoiceInfo VoiceInfo;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x40")]
	public readonly int PlayerId;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x44")]
	public readonly byte VoiceId;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x48")]
	public readonly int ChannelId;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private Action<FrameOut<float>> m_FloatFrameDecoded;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private Action m_RemoteVoiceRemoved;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x60")]
	private string cached;

	[Token(Token = "0x14000001")]
	public event Action<FrameOut<float>> FloatFrameDecoded
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x1D91A20", Offset = "0x1D90020", VA = "0x181D91A20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x1D91B70", Offset = "0x1D90170", VA = "0x181D91B70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action RemoteVoiceRemoved
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x1D91AD0", Offset = "0x1D900D0", VA = "0x181D91AD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x1D91C20", Offset = "0x1D90220", VA = "0x181D91C20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1D91910", Offset = "0x1D8FF10", VA = "0x181D91910")]
	public RemoteVoiceLink(VoiceInfo info, int playerId, byte voiceId, int channelId, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1D91680", Offset = "0x1D8FC80", VA = "0x181D91680")]
	private void OnRemoteVoiceRemoveAction()
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x1D91660", Offset = "0x1D8FC60", VA = "0x181D91660")]
	private void OnDecodedFrameFloatAction(FrameOut<float> floats)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1D916A0", Offset = "0x1D8FCA0", VA = "0x181D916A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
