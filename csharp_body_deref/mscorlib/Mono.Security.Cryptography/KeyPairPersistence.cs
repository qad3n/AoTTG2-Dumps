// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.KeyPairPersistence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000062")]
internal class KeyPairPersistence
{
	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x0")]
	private static bool _userPathExists;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x8")]
	private static string _userPath;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x10")]
	private static bool _machinePathExists;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x18")]
	private static string _machinePath;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x10")]
	private CspParameters _params;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x18")]
	private string _keyvalue;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x20")]
	private string _filename;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x28")]
	private string _container;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x20")]
	private static object lockobj;

	[Token(Token = "0x1700001A")]
	public string Filename
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x19485C0", Offset = "0x1946BC0", VA = "0x1819485C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public string KeyValue
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x1949260", Offset = "0x1947860", VA = "0x181949260")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public CspParameters Parameters
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x1948CC0", Offset = "0x19472C0", VA = "0x181948CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	private static string UserPath
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x1948D10", Offset = "0x1947310", VA = "0x181948D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	private static string MachinePath
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x1948770", Offset = "0x1946D70", VA = "0x181948770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	private bool CanChange
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x152F2E0", Offset = "0x152D8E0", VA = "0x18152F2E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000020")]
	private bool UseDefaultKeyContainer
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x1948CD0", Offset = "0x19472D0", VA = "0x181948CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	private bool UseMachineKeyStore
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x1948CF0", Offset = "0x19472F0", VA = "0x181948CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	private string ContainerName
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x1948470", Offset = "0x1946A70", VA = "0x181948470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x19483D0", Offset = "0x19469D0", VA = "0x1819483D0")]
	public KeyPairPersistence(CspParameters parameters)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x1948320", Offset = "0x1946920", VA = "0x181948320")]
	public KeyPairPersistence(CspParameters parameters, string keyPair)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x19479D0", Offset = "0x1945FD0", VA = "0x1819479D0")]
	public bool Load()
	{
		return default(bool);
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x1947ED0", Offset = "0x19464D0", VA = "0x181947ED0")]
	public void Save()
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x1947EB0", Offset = "0x19464B0", VA = "0x181947EB0")]
	public void Remove()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal unsafe static extern bool _CanSecure(char* root);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal unsafe static extern bool _ProtectUser(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal unsafe static extern bool _ProtectMachine(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal unsafe static extern bool _IsUserProtected(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal unsafe static extern bool _IsMachineProtected(char* path);

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x19474B0", Offset = "0x1945AB0", VA = "0x1819474B0")]
	private static bool CanSecure(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x1947DA0", Offset = "0x19463A0", VA = "0x181947DA0")]
	private static bool ProtectUser(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x1947C90", Offset = "0x1946290", VA = "0x181947C90")]
	private static bool ProtectMachine(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x19478C0", Offset = "0x1945EC0", VA = "0x1819478C0")]
	private static bool IsUserProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x19477B0", Offset = "0x1945DB0", VA = "0x1819477B0")]
	private static bool IsMachineProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x1947550", Offset = "0x1945B50", VA = "0x181947550")]
	private CspParameters Copy(CspParameters p)
	{
		return null;
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x1947600", Offset = "0x1945C00", VA = "0x181947600")]
	private void FromXml(string xml)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x1948090", Offset = "0x1946690", VA = "0x181948090")]
	private string ToXml()
	{
		return null;
	}
}
