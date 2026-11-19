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
[Token(Token = "0x20002AB")]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
[ComVisible(true)]
public class PermissionSet : ISecurityEncodable, ICollection, IEnumerable, IDeserializationCallback
{
	[Token(Token = "0x4000B7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static object[] psUnrestricted;

	[Token(Token = "0x4000B7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private PermissionState state;

	[Token(Token = "0x4000B7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList list;

	[Token(Token = "0x4000B7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _declsec;

	[Token(Token = "0x4000B7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool[] _ignored;

	[Token(Token = "0x4000B80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object[] action;

	[Token(Token = "0x1700025E")]
	public virtual int Count
	{
		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x53287F0", Offset = "0x53277F0", VA = "0x53287F0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025F")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x60017D2")]
		[Address(RVA = "0x5328820", Offset = "0x5327820", VA = "0x5328820", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000260")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x5328850", Offset = "0x5327850", VA = "0x5328850", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x53275B0", Offset = "0x53265B0", VA = "0x53275B0")]
	internal PermissionSet()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x5327710", Offset = "0x5326710", VA = "0x5327710")]
	public PermissionSet(PermissionState state)
	{
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x53271B0", Offset = "0x53261B0", VA = "0x53271B0")]
	internal PermissionSet(IPermission perm)
	{
	}

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x5328000", Offset = "0x5327000", VA = "0x5328000", Slot = "11")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x5328160", Offset = "0x5327160", VA = "0x5328160", Slot = "12")]
	public void Demand()
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x5327250", Offset = "0x5326250", VA = "0x5327250")]
	internal void CasOnlyDemand(int skip)
	{
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x5328780", Offset = "0x5327780", VA = "0x5328780", Slot = "9")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60017CD")]
	[Address(RVA = "0x53283B0", Offset = "0x53273B0", VA = "0x53283B0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x5328770", Offset = "0x5327770", VA = "0x5328770")]
	public bool IsUnrestricted()
	{
		return default(bool);
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x53287B0", Offset = "0x53277B0", VA = "0x53287B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x53278E0", Offset = "0x53268E0", VA = "0x53278E0", Slot = "13")]
	public virtual SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x5328860", Offset = "0x5327860", VA = "0x5328860", Slot = "10")]
	[System.MonoTODO("may not be required")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x5327DB0", Offset = "0x5326DB0", VA = "0x5327DB0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x5327FC0", Offset = "0x5326FC0", VA = "0x5327FC0", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
