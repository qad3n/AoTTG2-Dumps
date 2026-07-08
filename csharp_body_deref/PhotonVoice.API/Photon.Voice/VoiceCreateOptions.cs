using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005D")]
public struct VoiceCreateOptions
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x0")]
	public IEncoder Encoder;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x8")]
	public byte InterestGroup;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x10")]
	public int[] TargetPlayers;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x18")]
	public bool DebugEchoMode;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x19")]
	public bool Reliable;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x1A")]
	public bool Encrypt;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x1B")]
	public bool Fragment;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x1C")]
	public int FEC;
}
