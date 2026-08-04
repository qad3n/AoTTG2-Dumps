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
[Token(Token = "0x20002A2")]
[ComVisible(true)]
public sealed class NamedPermissionSet : PermissionSet
{
	[Token(Token = "0x4000C09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x4000C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string description;

	[Token(Token = "0x1700025C")]
	public string Name
	{
		[Token(Token = "0x600177C")]
		[Address(RVA = "0x3B1D7F0", Offset = "0x3B1D7F0", VA = "0x3B1D7F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x3B1D730", Offset = "0x3B1D730", VA = "0x3B1D730")]
		set
		{
		}
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x3B1D490", Offset = "0x3B1D490", VA = "0x3B1D490")]
	internal NamedPermissionSet()
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x3B1D5D0", Offset = "0x3B1D5D0", VA = "0x3B1D5D0")]
	public NamedPermissionSet(string name, PermissionState state)
	{
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x3B1D7E0", Offset = "0x3B1D7E0", VA = "0x3B1D7E0")]
	public NamedPermissionSet(string name)
	{
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x3B1D800", Offset = "0x3B1D800", VA = "0x3B1D800", Slot = "13")]
	public override SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x3B1DD50", Offset = "0x3B1DD50", VA = "0x3B1DD50", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x3B1DF60", Offset = "0x3B1DF60", VA = "0x3B1DF60", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
