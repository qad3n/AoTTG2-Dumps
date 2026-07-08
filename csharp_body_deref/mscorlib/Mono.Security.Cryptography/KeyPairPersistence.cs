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
		[Address(RVA = "0x4DFB220", Offset = "0x4DFB220", VA = "0x4DFB220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public string KeyValue
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x4DFC030", Offset = "0x4DFC030", VA = "0x4DFC030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x4DFC040", Offset = "0x4DFC040", VA = "0x4DFC040")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public CspParameters Parameters
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x4DFC070", Offset = "0x4DFC070", VA = "0x4DFC070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	private static string UserPath
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x4DFBAA0", Offset = "0x4DFBAA0", VA = "0x4DFBAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	private static string MachinePath
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x4DFB500", Offset = "0x4DFB500", VA = "0x4DFB500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	private bool CanChange
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4DFC060", Offset = "0x4DFC060", VA = "0x4DFC060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000020")]
	private bool UseDefaultKeyContainer
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x4DFCBF0", Offset = "0x4DFCBF0", VA = "0x4DFCBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	private bool UseMachineKeyStore
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4DFB4E0", Offset = "0x4DFB4E0", VA = "0x4DFB4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	private string ContainerName
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4DFB3B0", Offset = "0x4DFB3B0", VA = "0x4DFB3B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4DFB0E0", Offset = "0x4DFB0E0", VA = "0x4DFB0E0")]
	public KeyPairPersistence(CspParameters parameters)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4DFB0F0", Offset = "0x4DFB0F0", VA = "0x4DFB0F0")]
	public KeyPairPersistence(CspParameters parameters, string keyPair)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4DFC080", Offset = "0x4DFC080", VA = "0x4DFC080")]
	public bool Load()
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4DFC3C0", Offset = "0x4DFC3C0", VA = "0x4DFC3C0")]
	public void Save()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4DFC990", Offset = "0x4DFC990", VA = "0x4DFC990")]
	public void Remove()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4DFCB10", Offset = "0x4DFCB10", VA = "0x4DFCB10")]
	internal unsafe static extern bool _CanSecure(char* root);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4DFCB20", Offset = "0x4DFCB20", VA = "0x4DFCB20")]
	internal unsafe static extern bool _ProtectUser(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4DFCB30", Offset = "0x4DFCB30", VA = "0x4DFCB30")]
	internal unsafe static extern bool _ProtectMachine(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4DFCB40", Offset = "0x4DFCB40", VA = "0x4DFCB40")]
	internal unsafe static extern bool _IsUserProtected(char* path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4DFCB50", Offset = "0x4DFCB50", VA = "0x4DFCB50")]
	internal unsafe static extern bool _IsMachineProtected(char* path);

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4DFCB60", Offset = "0x4DFCB60", VA = "0x4DFCB60")]
	private static bool CanSecure(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4DFC8E0", Offset = "0x4DFC8E0", VA = "0x4DFC8E0")]
	private static bool ProtectUser(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4DFC830", Offset = "0x4DFC830", VA = "0x4DFC830")]
	private static bool ProtectMachine(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4DFC9B0", Offset = "0x4DFC9B0", VA = "0x4DFC9B0")]
	private static bool IsUserProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4DFCA60", Offset = "0x4DFCA60", VA = "0x4DFCA60")]
	private static bool IsMachineProtected(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4DFB190", Offset = "0x4DFB190", VA = "0x4DFB190")]
	private CspParameters Copy(CspParameters p)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4DFC240", Offset = "0x4DFC240", VA = "0x4DFC240")]
	private void FromXml(string xml)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4DFC640", Offset = "0x4DFC640", VA = "0x4DFC640")]
	private string ToXml()
	{
		return null;
	}
}
