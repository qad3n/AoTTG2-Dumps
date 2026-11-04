// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.PermissionSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Permissions;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002D2")]
[ComVisible(true)]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
public class PermissionSet : ISecurityEncodable, ICollection, IEnumerable, IDeserializationCallback
{
	[Token(Token = "0x4000C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static object[] psUnrestricted;

	[Token(Token = "0x4000C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private PermissionState state;

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList list;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _declsec;

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool[] _ignored;

	[Token(Token = "0x4000C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object[] action;

	[Token(Token = "0x1700025F")]
	public virtual int Count
	{
		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x19972D0", Offset = "0x19958D0", VA = "0x1819972D0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000260")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x1997300", Offset = "0x1995900", VA = "0x181997300", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000261")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x1997150", Offset = "0x1995750", VA = "0x181997150")]
	internal PermissionSet()
	{
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x19971C0", Offset = "0x19957C0", VA = "0x1819971C0")]
	public PermissionSet(PermissionState state)
	{
	}

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x19970B0", Offset = "0x19956B0", VA = "0x1819970B0")]
	internal PermissionSet(IPermission perm)
	{
	}

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x1996230", Offset = "0x1994830", VA = "0x181996230", Slot = "11")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x19963C0", Offset = "0x19949C0", VA = "0x1819963C0", Slot = "12")]
	public void Demand()
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x19961B0", Offset = "0x19947B0", VA = "0x1819961B0")]
	internal void CasOnlyDemand(int skip)
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x1996760", Offset = "0x1994D60", VA = "0x181996760", Slot = "9")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x19967E0", Offset = "0x1994DE0", VA = "0x1819967E0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0xC84280", Offset = "0xC82880", VA = "0x180C84280")]
	public bool IsUnrestricted()
	{
		return default(bool);
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x1996A50", Offset = "0x1995050", VA = "0x181996A50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x1996A90", Offset = "0x1995090", VA = "0x181996A90", Slot = "13")]
	public virtual SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	[System.MonoTODO("may not be required")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x19965A0", Offset = "0x1994BA0", VA = "0x1819965A0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x1996790", Offset = "0x1994D90", VA = "0x181996790", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
