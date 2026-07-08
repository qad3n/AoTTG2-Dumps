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
		[Address(RVA = "0x4609680", Offset = "0x4609680", VA = "0x4609680")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4609690", Offset = "0x4609690", VA = "0x4609690")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public string FriendlyName
	{
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x46096A0", Offset = "0x46096A0", VA = "0x46096A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4609390", Offset = "0x4609390", VA = "0x4609390")]
	public Oid()
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x46093A0", Offset = "0x46093A0", VA = "0x46093A0")]
	public Oid(string oid)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4609420", Offset = "0x4609420", VA = "0x4609420")]
	public Oid(string value, string friendlyName)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4609460", Offset = "0x4609460", VA = "0x4609460")]
	public Oid(Oid oid)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x46094F0", Offset = "0x46094F0", VA = "0x46094F0")]
	public static Oid FromOidValue(string oidValue, OidGroup group)
	{
		return null;
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4609630", Offset = "0x4609630", VA = "0x4609630")]
	private Oid(string value, string friendlyName, OidGroup group)
	{
	}
}
