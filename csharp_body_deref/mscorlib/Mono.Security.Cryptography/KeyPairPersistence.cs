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

[Token(Token = "0x2000044")]
internal class KeyPairPersistence
{
	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x0")]
	private static bool _userPathExists;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x8")]
	private static string _userPath;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x10")]
	private static bool _machinePathExists;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x18")]
	private static string _machinePath;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x10")]
	private CspParameters _params;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x18")]
	private string _keyvalue;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x20")]
	private string _filename;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x28")]
	private string _container;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x20")]
	private static object lockobj;

	[Token(Token = "0x1700001A")]
	public string Filename
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x52EB600", Offset = "0x52EA600", VA = "0x52EB600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public string KeyValue
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x52EC3C0", Offset = "0x52EB3C0", VA = "0x52EC3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x52EC3D0", Offset = "0x52EB3D0", VA = "0x52EC3D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public CspParameters Parameters
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x52EC400", Offset = "0x52EB400", VA = "0x52EC400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	private static string UserPath
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x52EBE50", Offset = "0x52EAE50", VA = "0x52EBE50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	private static string MachinePath
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x52EB8E0", Offset = "0x52EA8E0", VA = "0x52EB8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	private bool CanChange
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x52EC3F0", Offset = "0x52EB3F0", VA = "0x52EC3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000020")]
	private bool UseDefaultKeyContainer
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x52ECED0", Offset = "0x52EBED0", VA = "0x52ECED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	private bool UseMachineKeyStore
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x52EB8C0", Offset = "0x52EA8C0", VA = "0x52EB8C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	private string ContainerName
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x52EB790", Offset = "0x52EA790", VA = "0x52EB790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x52EB4C0", Offset = "0x52EA4C0", VA = "0x52EB4C0")]
	public KeyPairPersistence(CspParameters parameters)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x52EB4D0", Offset = "0x52EA4D0", VA = "0x52EB4D0")]
	public KeyPairPersistence(CspParameters parameters, string keyPair)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x52EC410", Offset = "0x52EB410", VA = "0x52EC410")]
	public bool Load()
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x52EC700", Offset = "0x52EB700", VA = "0x52EC700")]
	public void Save()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x52ECC50", Offset = "0x52EBC50", VA = "0x52ECC50")]
	public void Remove()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x52ECDD0", Offset = "0x52EBDD0", VA = "0x52ECDD0")]
	internal unsafe static extern bool _CanSecure(char* root);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x52ECDE0", Offset = "0x52EBDE0", VA = "0x52ECDE0")]
	internal unsafe static extern bool _ProtectUser(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x52ECDF0", Offset = "0x52EBDF0", VA = "0x52ECDF0")]
	internal unsafe static extern bool _ProtectMachine(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x52ECE00", Offset = "0x52EBE00", VA = "0x52ECE00")]
	internal unsafe static extern bool _IsUserProtected(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x52ECE10", Offset = "0x52EBE10", VA = "0x52ECE10")]
	internal unsafe static extern bool _IsMachineProtected(char* path);

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x52ECE20", Offset = "0x52EBE20", VA = "0x52ECE20")]
	private static bool CanSecure(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x52ECBA0", Offset = "0x52EBBA0", VA = "0x52ECBA0")]
	private static bool ProtectUser(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x52ECAF0", Offset = "0x52EBAF0", VA = "0x52ECAF0")]
	private static bool ProtectMachine(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x52ECC70", Offset = "0x52EBC70", VA = "0x52ECC70")]
	private static bool IsUserProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x52ECD20", Offset = "0x52EBD20", VA = "0x52ECD20")]
	private static bool IsMachineProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x52EB570", Offset = "0x52EA570", VA = "0x52EB570")]
	private CspParameters Copy(CspParameters p)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x52EC580", Offset = "0x52EB580", VA = "0x52EC580")]
	private void FromXml(string xml)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x52EC900", Offset = "0x52EB900", VA = "0x52EC900")]
	private string ToXml()
	{
		return null;
	}
}
