// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CspKeyContainerInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B4FE00", Offset = "0x3B4FE00", VA = "0x3B4FE00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EF")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001B01")]
		[Address(RVA = "0x3B4FE10", Offset = "0x3B4FE10", VA = "0x3B4FE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F0")]
	public bool Exportable
	{
		[Token(Token = "0x6001B02")]
		[Address(RVA = "0x3B4FE20", Offset = "0x3B4FE20", VA = "0x3B4FE20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F1")]
	public bool HardwareDevice
	{
		[Token(Token = "0x6001B03")]
		[Address(RVA = "0x3B4FE30", Offset = "0x3B4FE30", VA = "0x3B4FE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public string KeyContainerName
	{
		[Token(Token = "0x6001B04")]
		[Address(RVA = "0x3B4FE40", Offset = "0x3B4FE40", VA = "0x3B4FE40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F3")]
	public KeyNumber KeyNumber
	{
		[Token(Token = "0x6001B05")]
		[Address(RVA = "0x3B4FE60", Offset = "0x3B4FE60", VA = "0x3B4FE60")]
		get
		{
			return default(KeyNumber);
		}
	}

	[Token(Token = "0x170002F4")]
	public bool MachineKeyStore
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x3B4FE80", Offset = "0x3B4FE80", VA = "0x3B4FE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public bool Protected
	{
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x3B4FE90", Offset = "0x3B4FE90", VA = "0x3B4FE90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public string ProviderName
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x3B4FEA0", Offset = "0x3B4FEA0", VA = "0x3B4FEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F7")]
	public int ProviderType
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x3B4FEC0", Offset = "0x3B4FEC0", VA = "0x3B4FEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F8")]
	public bool RandomlyGenerated
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x3B4FEE0", Offset = "0x3B4FEE0", VA = "0x3B4FEE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F9")]
	public bool Removable
	{
		[Token(Token = "0x6001B0B")]
		[Address(RVA = "0x3B4FEF0", Offset = "0x3B4FEF0", VA = "0x3B4FEF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FA")]
	public string UniqueKeyContainerName
	{
		[Token(Token = "0x6001B0C")]
		[Address(RVA = "0x3B4FF00", Offset = "0x3B4FF00", VA = "0x3B4FF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x3B421F0", Offset = "0x3B421F0", VA = "0x3B421F0")]
	public CspKeyContainerInfo(CspParameters parameters)
	{
	}
}
