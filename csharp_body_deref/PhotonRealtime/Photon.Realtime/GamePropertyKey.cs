using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002B")]
public class GamePropertyKey
{
	[Token(Token = "0x400010F")]
	public const byte MaxPlayers = byte.MaxValue;

	[Token(Token = "0x4000110")]
	public const byte IsVisible = 254;

	[Token(Token = "0x4000111")]
	public const byte IsOpen = 253;

	[Token(Token = "0x4000112")]
	public const byte PlayerCount = 252;

	[Token(Token = "0x4000113")]
	public const byte Removed = 251;

	[Token(Token = "0x4000114")]
	public const byte PropsListedInLobby = 250;

	[Token(Token = "0x4000115")]
	public const byte CleanupCacheOnLeave = 249;

	[Token(Token = "0x4000116")]
	public const byte MasterClientId = 248;

	[Token(Token = "0x4000117")]
	public const byte ExpectedUsers = 247;

	[Token(Token = "0x4000118")]
	public const byte PlayerTtl = 246;

	[Token(Token = "0x4000119")]
	public const byte EmptyRoomTtl = 245;

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3BD9570", Offset = "0x3BD9570", VA = "0x3BD9570")]
	public GamePropertyKey()
	{
	}
}
