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
		[Address(RVA = "0x4E48370", Offset = "0x4E48370", VA = "0x4E48370")]
		get
		{
			return default(CspProviderFlags);
		}
		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x4E48380", Offset = "0x4E48380", VA = "0x4E48380")]
		set
		{
		}
	}

	[Token(Token = "0x170002A0")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x4E48460", Offset = "0x4E48460", VA = "0x4E48460")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018D0")]
		[Address(RVA = "0x4E48470", Offset = "0x4E48470", VA = "0x4E48470")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public SecureString KeyPassword
	{
		[Token(Token = "0x60018D1")]
		[Address(RVA = "0x4E48480", Offset = "0x4E48480", VA = "0x4E48480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018D2")]
		[Address(RVA = "0x4E48490", Offset = "0x4E48490", VA = "0x4E48490")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public IntPtr ParentWindowHandle
	{
		[Token(Token = "0x60018D3")]
		[Address(RVA = "0x4E484B0", Offset = "0x4E484B0", VA = "0x4E484B0")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60018D4")]
		[Address(RVA = "0x4E484C0", Offset = "0x4E484C0", VA = "0x4E484C0")]
		set
		{
		}
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x4E484E0", Offset = "0x4E484E0", VA = "0x4E484E0")]
	public CspParameters()
	{
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x4E48590", Offset = "0x4E48590", VA = "0x4E48590")]
	public CspParameters(int dwTypeIn)
	{
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x4E485E0", Offset = "0x4E485E0", VA = "0x4E485E0")]
	public CspParameters(int dwTypeIn, string strProviderNameIn)
	{
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x4E48530", Offset = "0x4E48530", VA = "0x4E48530")]
	public CspParameters(int dwTypeIn, string strProviderNameIn, string strContainerNameIn)
	{
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x4E48690", Offset = "0x4E48690", VA = "0x4E48690")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, SecureString keyPassword)
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x4E48710", Offset = "0x4E48710", VA = "0x4E48710")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, IntPtr parentWindowHandle)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x4E48630", Offset = "0x4E48630", VA = "0x4E48630")]
	internal CspParameters(int providerType, string providerName, string keyContainerName, CspProviderFlags flags)
	{
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x4E48790", Offset = "0x4E48790", VA = "0x4E48790")]
	internal CspParameters(CspParameters parameters)
	{
	}
}
