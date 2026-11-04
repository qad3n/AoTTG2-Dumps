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
		[Address(RVA = "0x155C6F0", Offset = "0x155ACF0", VA = "0x18155C6F0")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x600031D")]
		[Address(RVA = "0x1D70980", Offset = "0x1D6EF80", VA = "0x181D70980")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public int ChannelId
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public int PlayerId
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public byte VoiceId
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x1D70920", Offset = "0x1D6EF20", VA = "0x181D70920")]
	internal RemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo info)
	{
	}
}
