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
		[Address(RVA = "0x4E37CD0", Offset = "0x4E37CD0", VA = "0x4E37CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x4E37C10", Offset = "0x4E37C10", VA = "0x4E37C10")]
		set
		{
		}
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x4E37970", Offset = "0x4E37970", VA = "0x4E37970")]
	internal NamedPermissionSet()
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x4E37AB0", Offset = "0x4E37AB0", VA = "0x4E37AB0")]
	public NamedPermissionSet(string name, PermissionState state)
	{
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x4E37CC0", Offset = "0x4E37CC0", VA = "0x4E37CC0")]
	public NamedPermissionSet(string name)
	{
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x4E37CE0", Offset = "0x4E37CE0", VA = "0x4E37CE0", Slot = "13")]
	public override SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x4E38230", Offset = "0x4E38230", VA = "0x4E38230", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x4E38440", Offset = "0x4E38440", VA = "0x4E38440", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
