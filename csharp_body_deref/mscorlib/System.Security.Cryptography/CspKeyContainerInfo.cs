using System.Runtime.InteropServices;
using System.Security.AccessControl;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000315")]
[ComVisible(true)]
public sealed class CspKeyContainerInfo
{
	[Token(Token = "0x4000DDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CspParameters _params;

	[Token(Token = "0x4000DDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal bool _random;

	[Token(Token = "0x170002EE")]
	public bool Accessible
	{
		[Token(Token = "0x6001B00")]
		[Address(RVA = "0x4E6A2E0", Offset = "0x4E6A2E0", VA = "0x4E6A2E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EF")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001B01")]
		[Address(RVA = "0x4E6A2F0", Offset = "0x4E6A2F0", VA = "0x4E6A2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F0")]
	public bool Exportable
	{
		[Token(Token = "0x6001B02")]
		[Address(RVA = "0x4E6A300", Offset = "0x4E6A300", VA = "0x4E6A300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F1")]
	public bool HardwareDevice
	{
		[Token(Token = "0x6001B03")]
		[Address(RVA = "0x4E6A310", Offset = "0x4E6A310", VA = "0x4E6A310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public string KeyContainerName
	{
		[Token(Token = "0x6001B04")]
		[Address(RVA = "0x4E6A320", Offset = "0x4E6A320", VA = "0x4E6A320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F3")]
	public KeyNumber KeyNumber
	{
		[Token(Token = "0x6001B05")]
		[Address(RVA = "0x4E6A340", Offset = "0x4E6A340", VA = "0x4E6A340")]
		get
		{
			return default(KeyNumber);
		}
	}

	[Token(Token = "0x170002F4")]
	public bool MachineKeyStore
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x4E6A360", Offset = "0x4E6A360", VA = "0x4E6A360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public bool Protected
	{
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x4E6A370", Offset = "0x4E6A370", VA = "0x4E6A370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public string ProviderName
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x4E6A380", Offset = "0x4E6A380", VA = "0x4E6A380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F7")]
	public int ProviderType
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x4E6A3A0", Offset = "0x4E6A3A0", VA = "0x4E6A3A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F8")]
	public bool RandomlyGenerated
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x4E6A3C0", Offset = "0x4E6A3C0", VA = "0x4E6A3C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F9")]
	public bool Removable
	{
		[Token(Token = "0x6001B0B")]
		[Address(RVA = "0x4E6A3D0", Offset = "0x4E6A3D0", VA = "0x4E6A3D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FA")]
	public string UniqueKeyContainerName
	{
		[Token(Token = "0x6001B0C")]
		[Address(RVA = "0x4E6A3E0", Offset = "0x4E6A3E0", VA = "0x4E6A3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x4E5C6D0", Offset = "0x4E5C6D0", VA = "0x4E5C6D0")]
	public CspKeyContainerInfo(CspParameters parameters)
	{
	}
}
