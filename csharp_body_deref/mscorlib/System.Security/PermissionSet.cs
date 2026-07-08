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
		[Address(RVA = "0x4E38D70", Offset = "0x4E38D70", VA = "0x4E38D70", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x4E38DA0", Offset = "0x4E38DA0", VA = "0x4E38DA0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025F")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x4E38DD0", Offset = "0x4E38DD0", VA = "0x4E38DD0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x4E37A40", Offset = "0x4E37A40", VA = "0x4E37A40")]
	internal PermissionSet()
	{
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x4E37BA0", Offset = "0x4E37BA0", VA = "0x4E37BA0")]
	public PermissionSet(PermissionState state)
	{
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x4E37640", Offset = "0x4E37640", VA = "0x4E37640")]
	internal PermissionSet(IPermission perm)
	{
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x4E384F0", Offset = "0x4E384F0", VA = "0x4E384F0", Slot = "11")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x4E38650", Offset = "0x4E38650", VA = "0x4E38650", Slot = "12")]
	public void Demand()
	{
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x4E376E0", Offset = "0x4E376E0", VA = "0x4E376E0")]
	internal void CasOnlyDemand(int skip)
	{
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x4E38D00", Offset = "0x4E38D00", VA = "0x4E38D00", Slot = "9")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x4E388A0", Offset = "0x4E388A0", VA = "0x4E388A0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x4E38CF0", Offset = "0x4E38CF0", VA = "0x4E38CF0")]
	public bool IsUnrestricted()
	{
		return default(bool);
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x4E38D30", Offset = "0x4E38D30", VA = "0x4E38D30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x4E37D70", Offset = "0x4E37D70", VA = "0x4E37D70", Slot = "13")]
	public virtual SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x4E38DE0", Offset = "0x4E38DE0", VA = "0x4E38DE0", Slot = "10")]
	[System.MonoTODO("may not be required")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x4E382B0", Offset = "0x4E382B0", VA = "0x4E382B0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x4E384B0", Offset = "0x4E384B0", VA = "0x4E384B0", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
