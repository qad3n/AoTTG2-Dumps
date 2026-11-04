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
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
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
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
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
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
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
		[Address(RVA = "0xE5A340", Offset = "0xE58940", VA = "0x180E5A340")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x1D75780", Offset = "0x1D73D80", VA = "0x181D75780")]
	public SendFrameParams(bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable, bool encrypt)
	{
	}
}
