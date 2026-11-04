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

[Token(Token = "0x2000344")]
[ComVisible(true)]
public sealed class CspKeyContainerInfo
{
	[Token(Token = "0x4000DE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CspParameters _params;

	[Token(Token = "0x4000DEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal bool _random;

	[Token(Token = "0x170002F0")]
	public bool Accessible
	{
		[Token(Token = "0x6001B68")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F1")]
	public CryptoKeySecurity CryptoKeySecurity
	{
		[Token(Token = "0x6001B69")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F2")]
	public bool Exportable
	{
		[Token(Token = "0x6001B6A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F3")]
	public bool HardwareDevice
	{
		[Token(Token = "0x6001B6B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F4")]
	public string KeyContainerName
	{
		[Token(Token = "0x6001B6C")]
		[Address(RVA = "0x19BCDB0", Offset = "0x19BB3B0", VA = "0x1819BCDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F5")]
	public KeyNumber KeyNumber
	{
		[Token(Token = "0x6001B6D")]
		[Address(RVA = "0x19BCDD0", Offset = "0x19BB3D0", VA = "0x1819BCDD0")]
		get
		{
			return default(KeyNumber);
		}
	}

	[Token(Token = "0x170002F6")]
	public bool MachineKeyStore
	{
		[Token(Token = "0x6001B6E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public bool Protected
	{
		[Token(Token = "0x6001B6F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F8")]
	public string ProviderName
	{
		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x19BCDF0", Offset = "0x19BB3F0", VA = "0x1819BCDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F9")]
	public int ProviderType
	{
		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x1976F50", Offset = "0x1975550", VA = "0x181976F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FA")]
	public bool RandomlyGenerated
	{
		[Token(Token = "0x6001B72")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FB")]
	public bool Removable
	{
		[Token(Token = "0x6001B73")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FC")]
	public string UniqueKeyContainerName
	{
		[Token(Token = "0x6001B74")]
		[Address(RVA = "0x19BCE10", Offset = "0x19BB410", VA = "0x1819BCE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x19BCD70", Offset = "0x19BB370", VA = "0x1819BCD70")]
	public CspKeyContainerInfo(CspParameters parameters)
	{
	}
}
