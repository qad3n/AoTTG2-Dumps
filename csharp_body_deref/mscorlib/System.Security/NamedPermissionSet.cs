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
[Token(Token = "0x20002AA")]
[ComVisible(true)]
public sealed class NamedPermissionSet : PermissionSet
{
	[Token(Token = "0x4000B79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x4000B7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string description;

	[Token(Token = "0x1700025D")]
	public string Name
	{
		[Token(Token = "0x60017C1")]
		[Address(RVA = "0x5327840", Offset = "0x5326840", VA = "0x5327840")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x5327780", Offset = "0x5326780", VA = "0x5327780")]
		set
		{
		}
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x53274E0", Offset = "0x53264E0", VA = "0x53274E0")]
	internal NamedPermissionSet()
	{
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x5327620", Offset = "0x5326620", VA = "0x5327620")]
	public NamedPermissionSet(string name, PermissionState state)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x5327830", Offset = "0x5326830", VA = "0x5327830")]
	public NamedPermissionSet(string name)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x5327850", Offset = "0x5326850", VA = "0x5327850", Slot = "13")]
	public override SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x5327D40", Offset = "0x5326D40", VA = "0x5327D40", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x5327F50", Offset = "0x5326F50", VA = "0x5327F50", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}
}
