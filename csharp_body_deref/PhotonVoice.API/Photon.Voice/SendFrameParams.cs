// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.SendFrameParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006E")]
public readonly struct SendFrameParams
{
	[Token(Token = "0x1700009F")]
	public bool TargetMe
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x3F26EE0", Offset = "0x3F26EE0", VA = "0x3F26EE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x3F26EF0", Offset = "0x3F26EF0", VA = "0x3F26EF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public byte InterestGroup
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x3F26F00", Offset = "0x3F26F00", VA = "0x3F26F00")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x170000A2")]
	public bool Reliable
	{
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x3F26F10", Offset = "0x3F26F10", VA = "0x3F26F10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public bool Encrypt
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x3F26F20", Offset = "0x3F26F20", VA = "0x3F26F20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3F1F300", Offset = "0x3F1F300", VA = "0x3F1F300")]
	public SendFrameParams(bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable, bool encrypt)
	{
	}
}
