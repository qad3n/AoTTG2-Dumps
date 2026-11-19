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

[Token(Token = "0x20002DF")]
[ComVisible(true)]
public sealed class CspParameters
{
	[Token(Token = "0x4000C61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int ProviderType;

	[Token(Token = "0x4000C62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string ProviderName;

	[Token(Token = "0x4000C63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string KeyContainerName;

	[Token(Token = "0x4000C64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public int KeyNumber;

	[Token(Token = "0x4000C65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_flags;

	[Token(Token = "0x4000C66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CryptoKeySecurity m_cryptoKeySecurity;

	[Token(Token = "0x4000C67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SecureString m_keyPassword;

	[Token(Token = "0x4000C68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr m_parentWindowHandle;

	[Token(Token = "0x170002A0")]
	public CspProviderFlags Flags
	{
		[Token(Token = "0x6001912")]
		[Address(RVA = "0x5337F20", Offset = "0x5336F20", VA = "0x5337F20")]
		get
		{
			return default(CspProviderFlags);
		}
		[Token(Token = "0x6001913")]
		[Address(RVA = "0x5337F30", Offset = "0x5336F30", VA = "0x5337F30")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001914")]
		[Address(RVA = "0x5338010", Offset = "0x5337010", VA = "0x5338010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001915")]
		[Address(RVA = "0x5338020", Offset = "0x5337020", VA = "0x5338020")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public SecureString KeyPassword
	{
		[Token(Token = "0x6001916")]
		[Address(RVA = "0x5338030", Offset = "0x5337030", VA = "0x5338030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001917")]
		[Address(RVA = "0x5338040", Offset = "0x5337040", VA = "0x5338040")]
		set
		{
		}
	}

	[Token(Token = "0x170002A3")]
	public IntPtr ParentWindowHandle
	{
		[Token(Token = "0x6001918")]
		[Address(RVA = "0x5338060", Offset = "0x5337060", VA = "0x5338060")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x6001919")]
		[Address(RVA = "0x5338070", Offset = "0x5337070", VA = "0x5338070")]
		set
		{
		}
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x5338090", Offset = "0x5337090", VA = "0x5338090")]
	public CspParameters()
	{
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x5338140", Offset = "0x5337140", VA = "0x5338140")]
	public CspParameters(int dwTypeIn)
	{
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x5338190", Offset = "0x5337190", VA = "0x5338190")]
	public CspParameters(int dwTypeIn, string strProviderNameIn)
	{
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x53380E0", Offset = "0x53370E0", VA = "0x53380E0")]
	public CspParameters(int dwTypeIn, string strProviderNameIn, string strContainerNameIn)
	{
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x5338240", Offset = "0x5337240", VA = "0x5338240")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, SecureString keyPassword)
	{
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x53382C0", Offset = "0x53372C0", VA = "0x53382C0")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, IntPtr parentWindowHandle)
	{
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x53381E0", Offset = "0x53371E0", VA = "0x53381E0")]
	internal CspParameters(int providerType, string providerName, string keyContainerName, CspProviderFlags flags)
	{
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x5338340", Offset = "0x5337340", VA = "0x5338340")]
	internal CspParameters(CspParameters parameters)
	{
	}
}
