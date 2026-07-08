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
		[Address(RVA = "0x3C31590", Offset = "0x3C31590", VA = "0x3C31590")]
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
		[Address(RVA = "0x3C315A0", Offset = "0x3C315A0", VA = "0x3C315A0")]
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
		[Address(RVA = "0x3C315B0", Offset = "0x3C315B0", VA = "0x3C315B0")]
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
		[Address(RVA = "0x3C315C0", Offset = "0x3C315C0", VA = "0x3C315C0")]
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
		[Address(RVA = "0x3C315D0", Offset = "0x3C315D0", VA = "0x3C315D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3C299B0", Offset = "0x3C299B0", VA = "0x3C299B0")]
	public SendFrameParams(bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable, bool encrypt)
	{
	}
}
