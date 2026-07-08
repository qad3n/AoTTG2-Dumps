using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000029")]
public class ErrorCode
{
	[Token(Token = "0x40000EE")]
	public const int Ok = 0;

	[Token(Token = "0x40000EF")]
	public const int OperationNotAllowedInCurrentState = -3;

	[Token(Token = "0x40000F0")]
	[Obsolete("Use InvalidOperation.")]
	public const int InvalidOperationCode = -2;

	[Token(Token = "0x40000F1")]
	public const int InvalidOperation = -2;

	[Token(Token = "0x40000F2")]
	public const int InternalServerError = -1;

	[Token(Token = "0x40000F3")]
	public const int InvalidAuthentication = 32767;

	[Token(Token = "0x40000F4")]
	public const int GameIdAlreadyExists = 32766;

	[Token(Token = "0x40000F5")]
	public const int GameFull = 32765;

	[Token(Token = "0x40000F6")]
	public const int GameClosed = 32764;

	[Token(Token = "0x40000F7")]
	[Obsolete("No longer used, cause random matchmaking is no longer a process.")]
	public const int AlreadyMatched = 32763;

	[Token(Token = "0x40000F8")]
	public const int ServerFull = 32762;

	[Token(Token = "0x40000F9")]
	public const int UserBlocked = 32761;

	[Token(Token = "0x40000FA")]
	public const int NoRandomMatchFound = 32760;

	[Token(Token = "0x40000FB")]
	public const int GameDoesNotExist = 32758;

	[Token(Token = "0x40000FC")]
	public const int MaxCcuReached = 32757;

	[Token(Token = "0x40000FD")]
	public const int InvalidRegion = 32756;

	[Token(Token = "0x40000FE")]
	public const int CustomAuthenticationFailed = 32755;

	[Token(Token = "0x40000FF")]
	public const int AuthenticationTicketExpired = 32753;

	[Token(Token = "0x4000100")]
	public const int PluginReportedError = 32752;

	[Token(Token = "0x4000101")]
	public const int PluginMismatch = 32751;

	[Token(Token = "0x4000102")]
	public const int JoinFailedPeerAlreadyJoined = 32750;

	[Token(Token = "0x4000103")]
	public const int JoinFailedFoundInactiveJoiner = 32749;

	[Token(Token = "0x4000104")]
	public const int JoinFailedWithRejoinerNotFound = 32748;

	[Token(Token = "0x4000105")]
	public const int JoinFailedFoundExcludedUserId = 32747;

	[Token(Token = "0x4000106")]
	public const int JoinFailedFoundActiveJoiner = 32746;

	[Token(Token = "0x4000107")]
	public const int HttpLimitReached = 32745;

	[Token(Token = "0x4000108")]
	public const int ExternalHttpCallFailed = 32744;

	[Token(Token = "0x4000109")]
	public const int OperationLimitReached = 32743;

	[Token(Token = "0x400010A")]
	public const int SlotError = 32742;

	[Token(Token = "0x400010B")]
	public const int InvalidEncryptionParameters = 32741;

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3BD9550", Offset = "0x3BD9550", VA = "0x3BD9550")]
	public ErrorCode()
	{
	}
}
