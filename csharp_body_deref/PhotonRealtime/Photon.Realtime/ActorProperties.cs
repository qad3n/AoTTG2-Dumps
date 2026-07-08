using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002A")]
public class ActorProperties
{
	[Token(Token = "0x400010C")]
	public const byte PlayerName = byte.MaxValue;

	[Token(Token = "0x400010D")]
	public const byte IsInactive = 254;

	[Token(Token = "0x400010E")]
	public const byte UserId = 253;

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3BD9560", Offset = "0x3BD9560", VA = "0x3BD9560")]
	public ActorProperties()
	{
	}
}
