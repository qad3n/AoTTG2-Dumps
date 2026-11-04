// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ErrorCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000F")]
public class ErrorCode
{
	[Token(Token = "0x4000093")]
	public const int Ok = 0;

	[Token(Token = "0x4000094")]
	public const int OperationNotAllowedInCurrentState = -3;

	[Token(Token = "0x4000095")]
	public const int InvalidOperationCode = -2;

	[Token(Token = "0x4000096")]
	public const int InternalServerError = -1;

	[Token(Token = "0x4000097")]
	public const int InvalidAuthentication = 32767;

	[Token(Token = "0x4000098")]
	public const int GameIdAlreadyExists = 32766;

	[Token(Token = "0x4000099")]
	public const int GameFull = 32765;

	[Token(Token = "0x400009A")]
	public const int GameClosed = 32764;

	[Token(Token = "0x400009B")]
	public const int ServerFull = 32762;

	[Token(Token = "0x400009C")]
	public const int UserBlocked = 32761;

	[Token(Token = "0x400009D")]
	public const int NoRandomMatchFound = 32760;

	[Token(Token = "0x400009E")]
	public const int GameDoesNotExist = 32758;

	[Token(Token = "0x400009F")]
	public const int MaxCcuReached = 32757;

	[Token(Token = "0x40000A0")]
	public const int InvalidRegion = 32756;

	[Token(Token = "0x40000A1")]
	public const int CustomAuthenticationFailed = 32755;

	[Token(Token = "0x40000A2")]
	public const int AuthenticationTicketExpired = 32753;

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ErrorCode()
	{
	}
}
