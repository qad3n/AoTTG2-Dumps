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

[Token(Token = "0x200006C")]
public readonly struct SendFrameParams
{
	[Token(Token = "0x1700009F")]
	public bool TargetMe
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x5711880", Offset = "0x5710880", VA = "0x5711880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x5711890", Offset = "0x5710890", VA = "0x5711890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public byte InterestGroup
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x57118A0", Offset = "0x57108A0", VA = "0x57118A0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x170000A2")]
	public bool Reliable
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x57118B0", Offset = "0x57108B0", VA = "0x57118B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public bool Encrypt
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x57118C0", Offset = "0x57108C0", VA = "0x57118C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5709E80", Offset = "0x5708E80", VA = "0x5709E80")]
	public SendFrameParams(bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable, bool encrypt)
	{
	}
}
