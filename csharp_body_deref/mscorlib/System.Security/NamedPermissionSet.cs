// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.NamedPermissionSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Security.Permissions;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002D1")]
[ComVisible(true)]
public sealed class NamedPermissionSet : PermissionSet
{
	[Token(Token = "0x4000C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x4000C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string description;

	[Token(Token = "0x1700025E")]
	public string Name
	{
		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E5")]
		[Address(RVA = "0x19929C0", Offset = "0x1990FC0", VA = "0x1819929C0")]
		set
		{
		}
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x1992750", Offset = "0x1990D50", VA = "0x181992750")]
	internal NamedPermissionSet()
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x19927F0", Offset = "0x1990DF0", VA = "0x1819927F0")]
	public NamedPermissionSet(string name, PermissionState state)
	{
	}

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x1992740", Offset = "0x1990D40", VA = "0x181992740")]
	public NamedPermissionSet(string name)
	{
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x19926A0", Offset = "0x1990CA0", VA = "0x1819926A0", Slot = "13")]
	public override SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x1992420", Offset = "0x1990A20", VA = "0x181992420", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x1992620", Offset = "0x1990C20", VA = "0x181992620", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
