// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Oid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000123")]
public sealed class Oid
{
	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x10")]
	private string _value;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x18")]
	private string _friendlyName;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x20")]
	private OidGroup _group;

	[Token(Token = "0x1700012B")]
	public string Value
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000712")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public string FriendlyName
	{
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x287EE80", Offset = "0x287D480", VA = "0x18287EE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Oid()
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x287EDF0", Offset = "0x287D3F0", VA = "0x18287EDF0")]
	public Oid(string oid)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public Oid(string value, string friendlyName)
	{
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x287ED50", Offset = "0x287D350", VA = "0x18287ED50")]
	public Oid(Oid oid)
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x287EBE0", Offset = "0x287D1E0", VA = "0x18287EBE0")]
	public static Oid FromOidValue(string oidValue, OidGroup group)
	{
		return null;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x1A48980", Offset = "0x1A46F80", VA = "0x181A48980")]
	private Oid(string value, string friendlyName, OidGroup group)
	{
	}
}
