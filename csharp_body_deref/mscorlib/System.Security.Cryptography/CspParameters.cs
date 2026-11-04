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

[Token(Token = "0x2000306")]
[ComVisible(true)]
public sealed class CspParameters
{
	[Token(Token = "0x4000D01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int ProviderType;

	[Token(Token = "0x4000D02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string ProviderName;

	[Token(Token = "0x4000D03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string KeyContainerName;

	[Token(Token = "0x4000D04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public int KeyNumber;

	[Token(Token = "0x4000D05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_flags;

	[Token(Token = "0x4000D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CryptoKeySecurity m_cryptoKeySecurity;

	[Token(Token = "0x4000D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SecureString m_keyPassword;

	[Token(Token = "0x4000D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr m_parentWindowHandle;

	[Token(Token = "0x170002A1")]
	public CspProviderFlags Flags
	{
		[Token(Token = "0x6001935")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(CspProviderFlags);
		}
		[Token(Token = "0x6001936")]
		[Address(RVA = "0x19A3AF0", Offset = "0x19A20F0", VA = "0x1819A3AF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001937")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001938")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x170002A3")]
	public SecureString KeyPassword
	{
		[Token(Token = "0x6001939")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600193A")]
		[Address(RVA = "0x19A3BD0", Offset = "0x19A21D0", VA = "0x1819A3BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A4")]
	public IntPtr ParentWindowHandle
	{
		[Token(Token = "0x600193B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x600193C")]
		[Address(RVA = "0x19A3C00", Offset = "0x19A2200", VA = "0x1819A3C00")]
		set
		{
		}
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x19A37C0", Offset = "0x19A1DC0", VA = "0x1819A37C0")]
	public CspParameters()
	{
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x19A3760", Offset = "0x19A1D60", VA = "0x1819A3760")]
	public CspParameters(int dwTypeIn)
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x19A3880", Offset = "0x19A1E80", VA = "0x1819A3880")]
	public CspParameters(int dwTypeIn, string strProviderNameIn)
	{
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x19A3A10", Offset = "0x19A2010", VA = "0x1819A3A10")]
	public CspParameters(int dwTypeIn, string strProviderNameIn, string strContainerNameIn)
	{
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x19A3A70", Offset = "0x19A2070", VA = "0x1819A3A70")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, SecureString keyPassword)
	{
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x19A38F0", Offset = "0x19A1EF0", VA = "0x1819A38F0")]
	public CspParameters(int providerType, string providerName, string keyContainerName, CryptoKeySecurity cryptoKeySecurity, IntPtr parentWindowHandle)
	{
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x19A3820", Offset = "0x19A1E20", VA = "0x1819A3820")]
	internal CspParameters(int providerType, string providerName, string keyContainerName, CspProviderFlags flags)
	{
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x19A3970", Offset = "0x19A1F70", VA = "0x1819A3970")]
	internal CspParameters(CspParameters parameters)
	{
	}
}
