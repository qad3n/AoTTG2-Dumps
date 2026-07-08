using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000021")]
public enum Result
{
	[Token(Token = "0x4000019")]
	Ok,
	[Token(Token = "0x400001A")]
	ServiceUnavailable,
	[Token(Token = "0x400001B")]
	InvalidVersion,
	[Token(Token = "0x400001C")]
	LockFailed,
	[Token(Token = "0x400001D")]
	InternalError,
	[Token(Token = "0x400001E")]
	InvalidPayload,
	[Token(Token = "0x400001F")]
	InvalidCommand,
	[Token(Token = "0x4000020")]
	InvalidPermissions,
	[Token(Token = "0x4000021")]
	NotFetched,
	[Token(Token = "0x4000022")]
	NotFound,
	[Token(Token = "0x4000023")]
	Conflict,
	[Token(Token = "0x4000024")]
	InvalidSecret,
	[Token(Token = "0x4000025")]
	InvalidJoinSecret,
	[Token(Token = "0x4000026")]
	NoEligibleActivity,
	[Token(Token = "0x4000027")]
	InvalidInvite,
	[Token(Token = "0x4000028")]
	NotAuthenticated,
	[Token(Token = "0x4000029")]
	InvalidAccessToken,
	[Token(Token = "0x400002A")]
	ApplicationMismatch,
	[Token(Token = "0x400002B")]
	InvalidDataUrl,
	[Token(Token = "0x400002C")]
	InvalidBase64,
	[Token(Token = "0x400002D")]
	NotFiltered,
	[Token(Token = "0x400002E")]
	LobbyFull,
	[Token(Token = "0x400002F")]
	InvalidLobbySecret,
	[Token(Token = "0x4000030")]
	InvalidFilename,
	[Token(Token = "0x4000031")]
	InvalidFileSize,
	[Token(Token = "0x4000032")]
	InvalidEntitlement,
	[Token(Token = "0x4000033")]
	NotInstalled,
	[Token(Token = "0x4000034")]
	NotRunning,
	[Token(Token = "0x4000035")]
	InsufficientBuffer,
	[Token(Token = "0x4000036")]
	PurchaseCanceled,
	[Token(Token = "0x4000037")]
	InvalidGuild,
	[Token(Token = "0x4000038")]
	InvalidEvent,
	[Token(Token = "0x4000039")]
	InvalidChannel,
	[Token(Token = "0x400003A")]
	InvalidOrigin,
	[Token(Token = "0x400003B")]
	RateLimited,
	[Token(Token = "0x400003C")]
	OAuth2Error,
	[Token(Token = "0x400003D")]
	SelectChannelTimeout,
	[Token(Token = "0x400003E")]
	GetGuildTimeout,
	[Token(Token = "0x400003F")]
	SelectVoiceForceRequired,
	[Token(Token = "0x4000040")]
	CaptureShortcutAlreadyListening,
	[Token(Token = "0x4000041")]
	UnauthorizedForAchievement,
	[Token(Token = "0x4000042")]
	InvalidGiftCode,
	[Token(Token = "0x4000043")]
	PurchaseError,
	[Token(Token = "0x4000044")]
	TransactionAborted,
	[Token(Token = "0x4000045")]
	DrawingInitFailed
}
