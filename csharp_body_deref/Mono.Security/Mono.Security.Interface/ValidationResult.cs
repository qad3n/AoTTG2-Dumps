using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000029")]
public class ValidationResult
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	private bool trusted;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x11")]
	private bool user_denied;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x14")]
	private int error_code;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x18")]
	private MonoSslPolicyErrors? policy_errors;

	[Token(Token = "0x1700005D")]
	public bool Trusted
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x3A4F460", Offset = "0x3A4F460", VA = "0x3A4F460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public bool UserDenied
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x3A4F470", Offset = "0x3A4F470", VA = "0x3A4F470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3A4F420", Offset = "0x3A4F420", VA = "0x3A4F420")]
	public ValidationResult(bool trusted, bool user_denied, int error_code, MonoSslPolicyErrors? policy_errors)
	{
	}
}
