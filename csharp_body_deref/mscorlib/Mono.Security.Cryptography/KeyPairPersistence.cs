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
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3AE0D40", Offset = "0x3AE0D40", VA = "0x3AE0D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public string KeyValue
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3AE1B50", Offset = "0x3AE1B50", VA = "0x3AE1B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3AE1B60", Offset = "0x3AE1B60", VA = "0x3AE1B60")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public CspParameters Parameters
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3AE1B90", Offset = "0x3AE1B90", VA = "0x3AE1B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	private static string UserPath
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x3AE15C0", Offset = "0x3AE15C0", VA = "0x3AE15C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	private static string MachinePath
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x3AE1020", Offset = "0x3AE1020", VA = "0x3AE1020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	private bool CanChange
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x3AE1B80", Offset = "0x3AE1B80", VA = "0x3AE1B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000020")]
	private bool UseDefaultKeyContainer
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3AE2710", Offset = "0x3AE2710", VA = "0x3AE2710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	private bool UseMachineKeyStore
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x3AE1000", Offset = "0x3AE1000", VA = "0x3AE1000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	private string ContainerName
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3AE0ED0", Offset = "0x3AE0ED0", VA = "0x3AE0ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x3AE0C00", Offset = "0x3AE0C00", VA = "0x3AE0C00")]
	public KeyPairPersistence(CspParameters parameters)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x3AE0C10", Offset = "0x3AE0C10", VA = "0x3AE0C10")]
	public KeyPairPersistence(CspParameters parameters, string keyPair)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x3AE1BA0", Offset = "0x3AE1BA0", VA = "0x3AE1BA0")]
	public bool Load()
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x3AE1EE0", Offset = "0x3AE1EE0", VA = "0x3AE1EE0")]
	public void Save()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x3AE24B0", Offset = "0x3AE24B0", VA = "0x3AE24B0")]
	public void Remove()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3AE2630", Offset = "0x3AE2630", VA = "0x3AE2630")]
	internal unsafe static extern bool _CanSecure(char* root);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3AE2640", Offset = "0x3AE2640", VA = "0x3AE2640")]
	internal unsafe static extern bool _ProtectUser(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3AE2650", Offset = "0x3AE2650", VA = "0x3AE2650")]
	internal unsafe static extern bool _ProtectMachine(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3AE2660", Offset = "0x3AE2660", VA = "0x3AE2660")]
	internal unsafe static extern bool _IsUserProtected(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3AE2670", Offset = "0x3AE2670", VA = "0x3AE2670")]
	internal unsafe static extern bool _IsMachineProtected(char* path);

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3AE2680", Offset = "0x3AE2680", VA = "0x3AE2680")]
	private static bool CanSecure(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3AE2400", Offset = "0x3AE2400", VA = "0x3AE2400")]
	private static bool ProtectUser(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3AE2350", Offset = "0x3AE2350", VA = "0x3AE2350")]
	private static bool ProtectMachine(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3AE24D0", Offset = "0x3AE24D0", VA = "0x3AE24D0")]
	private static bool IsUserProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3AE2580", Offset = "0x3AE2580", VA = "0x3AE2580")]
	private static bool IsMachineProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3AE0CB0", Offset = "0x3AE0CB0", VA = "0x3AE0CB0")]
	private CspParameters Copy(CspParameters p)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3AE1D60", Offset = "0x3AE1D60", VA = "0x3AE1D60")]
	private void FromXml(string xml)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3AE2160", Offset = "0x3AE2160", VA = "0x3AE2160")]
	private string ToXml()
	{
		return null;
	}
}
