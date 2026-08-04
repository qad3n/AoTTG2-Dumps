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
[Token(Token = "0x20002A3")]
[ComVisible(true)]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
public class PermissionSet : ISecurityEncodable, ICollection, IEnumerable, IDeserializationCallback
{
	[Token(Token = "0x4000C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static object[] psUnrestricted;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private PermissionState state;

	[Token(Token = "0x4000C0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList list;

	[Token(Token = "0x4000C0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _declsec;

	[Token(Token = "0x4000C0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool[] _ignored;

	[Token(Token = "0x4000C10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object[] action;

	[Token(Token = "0x1700025D")]
	public virtual int Count
	{
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x3B1E890", Offset = "0x3B1E890", VA = "0x3B1E890", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x3B1E8C0", Offset = "0x3B1E8C0", VA = "0x3B1E8C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025F")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x3B1E8F0", Offset = "0x3B1E8F0", VA = "0x3B1E8F0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x3B1D560", Offset = "0x3B1D560", VA = "0x3B1D560")]
	internal PermissionSet()
	{
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x3B1D6C0", Offset = "0x3B1D6C0", VA = "0x3B1D6C0")]
	public PermissionSet(PermissionState state)
	{
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x3B1D160", Offset = "0x3B1D160", VA = "0x3B1D160")]
	internal PermissionSet(IPermission perm)
	{
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x3B1E010", Offset = "0x3B1E010", VA = "0x3B1E010", Slot = "11")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x3B1E170", Offset = "0x3B1E170", VA = "0x3B1E170", Slot = "12")]
	public void Demand()
	{
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x3B1D200", Offset = "0x3B1D200", VA = "0x3B1D200")]
	internal void CasOnlyDemand(int skip)
	{
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x3B1E820", Offset = "0x3B1E820", VA = "0x3B1E820", Slot = "9")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x3B1E3C0", Offset = "0x3B1E3C0", VA = "0x3B1E3C0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x3B1E810", Offset = "0x3B1E810", VA = "0x3B1E810")]
	public bool IsUnrestricted()
	{
		return default(bool);
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x3B1E850", Offset = "0x3B1E850", VA = "0x3B1E850", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x3B1D890", Offset = "0x3B1D890", VA = "0x3B1D890", Slot = "13")]
	public virtual SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x3B1E900", Offset = "0x3B1E900", VA = "0x3B1E900", Slot = "10")]
	[System.MonoTODO("may not be required")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x3B1DDD0", Offset = "0x3B1DDD0", VA = "0x3B1DDD0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x3B1DFD0", Offset = "0x3B1DFD0", VA = "0x3B1DFD0", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
