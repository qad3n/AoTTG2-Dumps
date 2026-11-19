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
		[Address(RVA = "0x5731080", Offset = "0x5730080", VA = "0x5731080")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x5731120", Offset = "0x5730120", VA = "0x5731120")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action RemoteVoiceRemoved
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x57311C0", Offset = "0x57301C0", VA = "0x57311C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x5731250", Offset = "0x5730250", VA = "0x5731250")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x57312E0", Offset = "0x57302E0", VA = "0x57312E0")]
	public RemoteVoiceLink(VoiceInfo info, int playerId, byte voiceId, int channelId, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5731400", Offset = "0x5730400", VA = "0x5731400")]
	private void OnRemoteVoiceRemoveAction()
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5731420", Offset = "0x5730420", VA = "0x5731420")]
	private void OnDecodedFrameFloatAction(FrameOut<float> floats)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5731440", Offset = "0x5730440", VA = "0x5731440", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
