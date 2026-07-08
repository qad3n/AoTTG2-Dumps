using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000091")]
public class RemoteVoiceInfo
{
	[Token(Token = "0x170000DC")]
	public VoiceInfo Info
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x3C3AD40", Offset = "0x3C3AD40", VA = "0x3C3AD40")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x3C3AD60", Offset = "0x3C3AD60", VA = "0x3C3AD60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public int ChannelId
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x3C3AD90", Offset = "0x3C3AD90", VA = "0x3C3AD90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x3C3ADA0", Offset = "0x3C3ADA0", VA = "0x3C3ADA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public int PlayerId
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x3C3ADB0", Offset = "0x3C3ADB0", VA = "0x3C3ADB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x3C3ADC0", Offset = "0x3C3ADC0", VA = "0x3C3ADC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public byte VoiceId
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x3C3ADD0", Offset = "0x3C3ADD0", VA = "0x3C3ADD0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000325")]
		[Address(RVA = "0x3C3ADE0", Offset = "0x3C3ADE0", VA = "0x3C3ADE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3C39690", Offset = "0x3C39690", VA = "0x3C39690")]
	internal RemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo info)
	{
	}
}
