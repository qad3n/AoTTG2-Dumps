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

[Token(Token = "0x200000E")]
public class RemoteVoiceLink
{
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x10")]
	public readonly VoiceInfo VoiceInfo;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x40")]
	public readonly int PlayerId;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x44")]
	public readonly byte VoiceId;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x48")]
	public readonly int ChannelId;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x60")]
	private string cached;

	[Token(Token = "0x14000001")]
	public event Action<FrameOut<float>> FloatFrameDecoded
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x3F47640", Offset = "0x3F47640", VA = "0x3F47640")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x3F476F0", Offset = "0x3F476F0", VA = "0x3F476F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action RemoteVoiceRemoved
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x3F477A0", Offset = "0x3F477A0", VA = "0x3F477A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3F47830", Offset = "0x3F47830", VA = "0x3F47830")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3F478C0", Offset = "0x3F478C0", VA = "0x3F478C0")]
	public RemoteVoiceLink(VoiceInfo info, int playerId, byte voiceId, int channelId, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3F479E0", Offset = "0x3F479E0", VA = "0x3F479E0")]
	private void OnRemoteVoiceRemoveAction()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3F47A00", Offset = "0x3F47A00", VA = "0x3F47A00")]
	private void OnDecodedFrameFloatAction(FrameOut<float> floats)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3F47A20", Offset = "0x3F47A20", VA = "0x3F47A20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
