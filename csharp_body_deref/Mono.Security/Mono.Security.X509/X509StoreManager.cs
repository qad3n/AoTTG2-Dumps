// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509StoreManager
// Update status: CHANGED in this game update
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
	private static string _newUserPath;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	private static string _newLocalMachinePath;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x20")]
	private static X509Stores _userStore;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x28")]
	private static X509Stores _machineStore;

	[Token(Token = "0x17000044")]
	internal static string CurrentUserPath
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x1929AB0", Offset = "0x19280B0", VA = "0x181929AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000045")]
	internal static string LocalMachinePath
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x1929DB0", Offset = "0x19283B0", VA = "0x181929DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000046")]
	internal static string NewCurrentUserPath
	{
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x192A0D0", Offset = "0x19286D0", VA = "0x18192A0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal static string NewLocalMachinePath
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x192A200", Offset = "0x1928800", VA = "0x18192A200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public static X509Stores CurrentUser
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x1929BD0", Offset = "0x19281D0", VA = "0x181929BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public static X509Stores LocalMachine
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x1929EE0", Offset = "0x19284E0", VA = "0x181929EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public static X509CertificateCollection TrustedRootCertificates
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x192A330", Offset = "0x1928930", VA = "0x18192A330")]
		get
		{
			return null;
		}
	}
}
