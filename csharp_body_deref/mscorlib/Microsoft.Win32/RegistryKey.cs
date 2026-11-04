// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.RegistryKey
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Text;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Microsoft.Win32;

[Token(Token = "0x2000078")]
public sealed class RegistryKey : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x2000079")]
	[Flags]
	private enum StateFlags
	{
		[Token(Token = "0x400022E")]
		Dirty = 1,
		[Token(Token = "0x400022F")]
		SystemKey = 2,
		[Token(Token = "0x4000230")]
		WriteAccess = 4,
		[Token(Token = "0x4000231")]
		PerfData = 8
	}

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly IntPtr HKEY_CLASSES_ROOT;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly IntPtr HKEY_CURRENT_USER;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly IntPtr HKEY_LOCAL_MACHINE;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly IntPtr HKEY_USERS;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly IntPtr HKEY_PERFORMANCE_DATA;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly IntPtr HKEY_CURRENT_CONFIG;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly IntPtr HKEY_DYN_DATA;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string[] s_hkeyNames;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x18")]
	private SafeRegistryHandle _hkey;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x20")]
	private string _keyName;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x28")]
	private bool _remoteKey;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x2C")]
	private StateFlags _state;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x30")]
	private RegistryKeyPermissionCheck _checkMode;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x34")]
	private RegistryView _regView;

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x1964F80", Offset = "0x1963580", VA = "0x181964F80")]
	private void ClosePerfDataKey()
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x1966790", Offset = "0x1964D90", VA = "0x181966790")]
	private static RegistryKey OpenBaseKeyCore(RegistryHive hKeyHive, RegistryView view)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x19663C0", Offset = "0x19649C0", VA = "0x1819663C0")]
	private RegistryKey InternalOpenSubKeyCore(string name, bool writable, bool throwOnPermissionFailure)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x19665B0", Offset = "0x1964BB0", VA = "0x1819665B0")]
	private int InternalSubKeyCountCore()
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x19657C0", Offset = "0x1963DC0", VA = "0x1819657C0")]
	private string[] InternalGetSubKeyNamesCore(int subkeys)
	{
		return null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x1965A40", Offset = "0x1964040", VA = "0x181965A40")]
	private object InternalGetValueCore(string name, object defaultValue, bool doNotExpand)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x19670C0", Offset = "0x19656C0", VA = "0x1819670C0")]
	private void Win32Error(int errorCode, string str)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x1965490", Offset = "0x1963A90", VA = "0x181965490")]
	private static int GetRegistryKeyAccess(bool isWritable)
	{
		return default(int);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x1967550", Offset = "0x1965B50", VA = "0x181967550")]
	private RegistryKey(SafeRegistryHandle hkey, bool writable, bool systemkey, bool remoteKey, bool isPerfData, RegistryView view)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x1964FE0", Offset = "0x19635E0", VA = "0x181964FE0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x19668D0", Offset = "0x1964ED0", VA = "0x1819668D0")]
	public static RegistryKey OpenBaseKey(RegistryHive hKey, RegistryView view)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x1966AC0", Offset = "0x19650C0", VA = "0x181966AC0")]
	public RegistryKey OpenSubKey(string name, bool writable)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x1966650", Offset = "0x1964C50", VA = "0x181966650")]
	private int InternalSubKeyCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x19654B0", Offset = "0x1963AB0", VA = "0x1819654B0")]
	public string[] GetSubKeyNames()
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x19654B0", Offset = "0x1963AB0", VA = "0x1819654B0")]
	private string[] InternalGetSubKeyNames()
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x19656A0", Offset = "0x1963CA0", VA = "0x1819656A0")]
	public object GetValue(string name, object defaultValue, RegistryValueOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x1966330", Offset = "0x1964930", VA = "0x181966330")]
	private object InternalGetValue(string name, object defaultValue, bool doNotExpand, bool checkSecurity)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x1966B90", Offset = "0x1965190", VA = "0x181966B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x1965160", Offset = "0x1963760", VA = "0x181965160")]
	private static string FixupName(string name)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x1965360", Offset = "0x1963960", VA = "0x181965360")]
	private static void FixupPath(StringBuilder path)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x1965100", Offset = "0x1963700", VA = "0x181965100")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x1965640", Offset = "0x1963C40", VA = "0x181965640")]
	private RegistryKeyPermissionCheck GetSubKeyPermissionCheck(bool subkeyWritable)
	{
		return default(RegistryKeyPermissionCheck);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x1966C00", Offset = "0x1965200", VA = "0x181966C00")]
	private static void ValidateKeyName(string name)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x1967060", Offset = "0x1965660", VA = "0x181967060")]
	private static void ValidateKeyView(RegistryView view)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x1966770", Offset = "0x1964D70", VA = "0x181966770")]
	private bool IsSystemKey()
	{
		return default(bool);
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x1966750", Offset = "0x1964D50", VA = "0x181966750")]
	private bool IsPerfDataKey()
	{
		return default(bool);
	}
}
