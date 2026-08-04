// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509StoreManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000019")]
public sealed class X509StoreManager
{
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x0")]
	private static string _userPath;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x8")]
	private static string _localMachinePath;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x10")]
	private static X509Stores _userStore;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	private static X509Stores _machineStore;

	[Token(Token = "0x17000044")]
	internal static string CurrentUserPath
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x3AB64E0", Offset = "0x3AB64E0", VA = "0x3AB64E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000045")]
	internal static string LocalMachinePath
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3AB6600", Offset = "0x3AB6600", VA = "0x3AB6600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000046")]
	public static X509Stores CurrentUser
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x3AB6710", Offset = "0x3AB6710", VA = "0x3AB6710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	public static X509Stores LocalMachine
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x3AB6800", Offset = "0x3AB6800", VA = "0x3AB6800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public static X509CertificateCollection TrustedRootCertificates
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x3AB3770", Offset = "0x3AB3770", VA = "0x3AB3770")]
		get
		{
			return null;
		}
	}
}
