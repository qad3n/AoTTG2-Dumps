using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002E")]
public class OperationCode
{
	[Token(Token = "0x4000170")]
	[Obsolete("Exchanging encrpytion keys is done internally in the lib now. Don't expect this operation-result.")]
	public const byte ExchangeKeysForEncryption = 250;

	[Token(Token = "0x4000171")]
	[Obsolete]
	public const byte Join = byte.MaxValue;

	[Token(Token = "0x4000172")]
	public const byte AuthenticateOnce = 231;

	[Token(Token = "0x4000173")]
	public const byte Authenticate = 230;

	[Token(Token = "0x4000174")]
	public const byte JoinLobby = 229;

	[Token(Token = "0x4000175")]
	public const byte LeaveLobby = 228;

	[Token(Token = "0x4000176")]
	public const byte CreateGame = 227;

	[Token(Token = "0x4000177")]
	public const byte JoinGame = 226;

	[Token(Token = "0x4000178")]
	public const byte JoinRandomGame = 225;

	[Token(Token = "0x4000179")]
	public const byte Leave = 254;

	[Token(Token = "0x400017A")]
	public const byte RaiseEvent = 253;

	[Token(Token = "0x400017B")]
	public const byte SetProperties = 252;

	[Token(Token = "0x400017C")]
	public const byte GetProperties = 251;

	[Token(Token = "0x400017D")]
	public const byte ChangeGroups = 248;

	[Token(Token = "0x400017E")]
	public const byte FindFriends = 222;

	[Token(Token = "0x400017F")]
	public const byte GetLobbyStats = 221;

	[Token(Token = "0x4000180")]
	public const byte GetRegions = 220;

	[Token(Token = "0x4000181")]
	public const byte WebRpc = 219;

	[Token(Token = "0x4000182")]
	public const byte ServerSettings = 218;

	[Token(Token = "0x4000183")]
	public const byte GetGameList = 217;

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3BD95A0", Offset = "0x3BD95A0", VA = "0x3BD95A0")]
	public OperationCode()
	{
	}
}
