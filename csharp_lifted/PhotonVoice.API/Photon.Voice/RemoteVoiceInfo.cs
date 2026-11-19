// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.RemoteVoiceInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008F")]
public class RemoteVoiceInfo
{
	[Token(Token = "0x170000DC")]
	public VoiceInfo Info
	{
		[Token(Token = "0x600031C")]
		[Address(RVA = "0x571A950", Offset = "0x5719950", VA = "0x571A950")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x600031D")]
		[Address(RVA = "0x571A970", Offset = "0x5719970", VA = "0x571A970")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public int ChannelId
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x571A9A0", Offset = "0x57199A0", VA = "0x571A9A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x571A9B0", Offset = "0x57199B0", VA = "0x571A9B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public int PlayerId
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x571A9C0", Offset = "0x57199C0", VA = "0x571A9C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x571A9D0", Offset = "0x57199D0", VA = "0x571A9D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public byte VoiceId
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x571A9E0", Offset = "0x57199E0", VA = "0x571A9E0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x571A9F0", Offset = "0x57199F0", VA = "0x571A9F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x5719370", Offset = "0x5718370", VA = "0x5719370")]
	internal RemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo info)
	{
	}
}
