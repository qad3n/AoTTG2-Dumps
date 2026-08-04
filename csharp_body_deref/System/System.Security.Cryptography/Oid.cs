// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Oid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E3")]
public sealed class Oid
{
	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x10")]
	private string _value;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x18")]
	private string _friendlyName;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x20")]
	private OidGroup _group;

	[Token(Token = "0x170000F2")]
	public string Value
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x492E780", Offset = "0x492E780", VA = "0x492E780")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x492E790", Offset = "0x492E790", VA = "0x492E790")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public string FriendlyName
	{
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x492E7A0", Offset = "0x492E7A0", VA = "0x492E7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x492E490", Offset = "0x492E490", VA = "0x492E490")]
	public Oid()
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x492E4A0", Offset = "0x492E4A0", VA = "0x492E4A0")]
	public Oid(string oid)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x492E520", Offset = "0x492E520", VA = "0x492E520")]
	public Oid(string value, string friendlyName)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x492E560", Offset = "0x492E560", VA = "0x492E560")]
	public Oid(Oid oid)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x492E5F0", Offset = "0x492E5F0", VA = "0x492E5F0")]
	public static Oid FromOidValue(string oidValue, OidGroup group)
	{
		return null;
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x492E730", Offset = "0x492E730", VA = "0x492E730")]
	private Oid(string value, string friendlyName, OidGroup group)
	{
	}
}
