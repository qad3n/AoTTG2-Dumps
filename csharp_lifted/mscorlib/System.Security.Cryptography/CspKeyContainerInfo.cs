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

[Token(Token = "0x200031D")]
[ComVisible(true)]
public sealed class CspKeyContainerInfo
{
	[Token(Token = "0x4000D49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CspParameters _params;

	[Token(Token = "0x4000D4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal bool _random;

	[Token(Token = "0x170002EF")]
	public bool Accessible
	{
		[Token(Token = "0x6001B45")]
		[Address(RVA = "0x53593D0", Offset = "0x53583D0", VA = "0x53593D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F0")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001B46")]
		[Address(RVA = "0x53593E0", Offset = "0x53583E0", VA = "0x53593E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F1")]
	public bool Exportable
	{
		[Token(Token = "0x6001B47")]
		[Address(RVA = "0x53593F0", Offset = "0x53583F0", VA = "0x53593F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public bool HardwareDevice
	{
		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x5359400", Offset = "0x5358400", VA = "0x5359400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F3")]
	public string KeyContainerName
	{
		[Token(Token = "0x6001B49")]
		[Address(RVA = "0x5359410", Offset = "0x5358410", VA = "0x5359410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F4")]
	public KeyNumber KeyNumber
	{
		[Token(Token = "0x6001B4A")]
		[Address(RVA = "0x5359430", Offset = "0x5358430", VA = "0x5359430")]
		get
		{
			return default(KeyNumber);
		}
	}

	[Token(Token = "0x170002F5")]
	public bool MachineKeyStore
	{
		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x5359450", Offset = "0x5358450", VA = "0x5359450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public bool Protected
	{
		[Token(Token = "0x6001B4C")]
		[Address(RVA = "0x5359460", Offset = "0x5358460", VA = "0x5359460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public string ProviderName
	{
		[Token(Token = "0x6001B4D")]
		[Address(RVA = "0x5359470", Offset = "0x5358470", VA = "0x5359470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F8")]
	public int ProviderType
	{
		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x5359490", Offset = "0x5358490", VA = "0x5359490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F9")]
	public bool RandomlyGenerated
	{
		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x53594B0", Offset = "0x53584B0", VA = "0x53594B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FA")]
	public bool Removable
	{
		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x53594C0", Offset = "0x53584C0", VA = "0x53594C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FB")]
	public string UniqueKeyContainerName
	{
		[Token(Token = "0x6001B51")]
		[Address(RVA = "0x53594D0", Offset = "0x53584D0", VA = "0x53594D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x534BAE0", Offset = "0x534AAE0", VA = "0x534BAE0")]
	public CspKeyContainerInfo(CspParameters parameters)
	{
	}
}
