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

[Token(Token = "0x2000091")]
public class RemoteVoiceInfo
{
	[Token(Token = "0x170000DC")]
	public VoiceInfo Info
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x3F30690", Offset = "0x3F30690", VA = "0x3F30690")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x3F306B0", Offset = "0x3F306B0", VA = "0x3F306B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public int ChannelId
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x3F306E0", Offset = "0x3F306E0", VA = "0x3F306E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x3F306F0", Offset = "0x3F306F0", VA = "0x3F306F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public int PlayerId
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x3F30700", Offset = "0x3F30700", VA = "0x3F30700")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x3F30710", Offset = "0x3F30710", VA = "0x3F30710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public byte VoiceId
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x3F30720", Offset = "0x3F30720", VA = "0x3F30720")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000325")]
		[Address(RVA = "0x3F30730", Offset = "0x3F30730", VA = "0x3F30730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3F2EFE0", Offset = "0x3F2EFE0", VA = "0x3F2EFE0")]
	internal RemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo info)
	{
	}
}
