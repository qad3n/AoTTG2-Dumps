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
		[Address(RVA = "0x3A49820", Offset = "0x3A49820", VA = "0x3A49820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000045")]
	internal static string LocalMachinePath
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3A49940", Offset = "0x3A49940", VA = "0x3A49940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000046")]
	public static X509Stores CurrentUser
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x3A49A50", Offset = "0x3A49A50", VA = "0x3A49A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	public static X509Stores LocalMachine
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x3A49B40", Offset = "0x3A49B40", VA = "0x3A49B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public static X509CertificateCollection TrustedRootCertificates
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x3A46AB0", Offset = "0x3A46AB0", VA = "0x3A46AB0")]
		get
		{
			return null;
		}
	}
}
