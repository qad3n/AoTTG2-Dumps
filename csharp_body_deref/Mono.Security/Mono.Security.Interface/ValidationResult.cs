// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.ValidationResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200003B")]
public class ValidationResult
{
	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x10")]
	private bool trusted;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x11")]
	private bool user_denied;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x14")]
	private int error_code;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x18")]
	private MonoSslPolicyErrors? policy_errors;

	[Token(Token = "0x17000060")]
	public bool Trusted
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000061")]
	public bool UserDenied
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x193F2B0", Offset = "0x193D8B0", VA = "0x18193F2B0")]
	public ValidationResult(bool trusted, bool user_denied, int error_code, MonoSslPolicyErrors? policy_errors)
	{
	}
}
