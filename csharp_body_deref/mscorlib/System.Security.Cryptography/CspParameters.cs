// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CspParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Security.AccessControl;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D7")]
[ComVisible(true)]
public sealed class CspParameters
{
	[Token(Token = "0x4000CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int ProviderType;

	[Token(Token = "0x4000CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string ProviderName;

	[Token(Token = "0x4000CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string KeyContainerName;

	[Token(Token = "0x4000CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public int KeyNumber;

	[Token(Token = "0x4000CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_flags;

	[Token(Token = "0x4000CF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CryptoKeySecurity m_cryptoKeySecurity;

	[Token(Token = "0x4000CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SecureString m_keyPassword;

	[Token(Token = "0x4000CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr m_parentWindowHandle;

	[Token(Token = "0x1700029F")]
	public CspProviderFlags Flags
	{
		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x3B2DE90", Offset = "0x3B2DE90", VA = "0x3B2DE90")]
		get
		{
			return default(CspProviderFlags);
		}
		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x3B2DEA0", Offset = "0x3B2DEA0", VA = "0x3B2DEA0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A0")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x3B2DF80", Offset = "0x3B2DF80", VA = "0x3B2DF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018D0")]
		[Address(RVA = "0x3B2DF90", Offset = "0x3B2DF90", VA = "0x3B2DF90")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public SecureString KeyPassword
	{
		[Token(Token = "0x60018D1")]
		[Address(RVA = "0x3B2DFA0", Offset = "0x3B2DFA0", VA = "0x3B2DFA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018D2")]
		[Address(RVA = "0x3B2DFB0", Offset = "0x3B2DFB0", VA = "0x3B2DFB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public IntPtr ParentWindowHandle
	{
		[Token(Token = "0x60018D3")]
		[Address(RVA = "0x3B2DFD0", Offset = "0x3B2DFD0", VA = "0x3B2DFD0")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60018D4")]
		[Address(RVA = "0x3B2DFE0", Offset = "0x3B2DFE0", VA = "0x3B2DFE0")]
		set
		{
		}
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x3B2E000", Offset = "0x3B2E000", VA = "0x3B2E000")]
	public CspParameters()
	{
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x3B2E0B0", Offset = "0x3B2E0B0", VA = "0x3B2E0B0")]
	public CspParameters(int dwTypeIn)
	{
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x3B2E100", Offset = "0x3B2E100", VA = "0x3B2E100")]
	public CspParameters(int dwTypeIn, string strProviderNameIn)
	{
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x3B2E050", Offset = "0x3B2E050", VA = "0x3B2E050")]
	public CspParameters(int dwTypeIn, string strProviderNameIn, string strContainerNameIn)
	{
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x3B2E1B0", Offset = "0x3B2E1B0", VA = "0x3B2E1B0")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, SecureString keyPassword)
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x3B2E230", Offset = "0x3B2E230", VA = "0x3B2E230")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, IntPtr parentWindowHandle)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x3B2E150", Offset = "0x3B2E150", VA = "0x3B2E150")]
	internal CspParameters(int providerType, string providerName, string keyContainerName, CspProviderFlags flags)
	{
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x3B2E2B0", Offset = "0x3B2E2B0", VA = "0x3B2E2B0")]
	internal CspParameters(CspParameters parameters)
	{
	}
}
