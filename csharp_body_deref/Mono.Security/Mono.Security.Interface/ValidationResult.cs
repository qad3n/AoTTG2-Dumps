// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.ValidationResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3ABC120", Offset = "0x3ABC120", VA = "0x3ABC120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public bool UserDenied
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x3ABC130", Offset = "0x3ABC130", VA = "0x3ABC130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3ABC0E0", Offset = "0x3ABC0E0", VA = "0x3ABC0E0")]
	public ValidationResult(bool trusted, bool user_denied, int error_code, MonoSslPolicyErrors? policy_errors)
	{
	}
}
