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
		[Address(RVA = "0x3C55090", Offset = "0x3C55090", VA = "0x3C55090")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x3C55140", Offset = "0x3C55140", VA = "0x3C55140")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action RemoteVoiceRemoved
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x3C551F0", Offset = "0x3C551F0", VA = "0x3C551F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3C55280", Offset = "0x3C55280", VA = "0x3C55280")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3C55310", Offset = "0x3C55310", VA = "0x3C55310")]
	public RemoteVoiceLink(VoiceInfo info, int playerId, byte voiceId, int channelId, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3C55430", Offset = "0x3C55430", VA = "0x3C55430")]
	private void OnRemoteVoiceRemoveAction()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3C55450", Offset = "0x3C55450", VA = "0x3C55450")]
	private void OnDecodedFrameFloatAction(FrameOut<float> floats)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3C55470", Offset = "0x3C55470", VA = "0x3C55470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
