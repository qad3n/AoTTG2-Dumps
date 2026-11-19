// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Oid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E4")]
public sealed class Oid
{
	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x10")]
	private string _value;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x18")]
	private string _friendlyName;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x20")]
	private OidGroup _group;

	[Token(Token = "0x170000FC")]
	public string Value
	{
		[Token(Token = "0x600055A")]
		[Address(RVA = "0x620A290", Offset = "0x6209290", VA = "0x620A290")]
		get
		{
			return null;
		}
		[Token(Token = "0x600055B")]
		[Address(RVA = "0x620A2A0", Offset = "0x62092A0", VA = "0x620A2A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public string FriendlyName
	{
		[Token(Token = "0x600055C")]
		[Address(RVA = "0x620A2B0", Offset = "0x62092B0", VA = "0x620A2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x6209FA0", Offset = "0x6208FA0", VA = "0x6209FA0")]
	public Oid()
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x6209FB0", Offset = "0x6208FB0", VA = "0x6209FB0")]
	public Oid(string oid)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x620A030", Offset = "0x6209030", VA = "0x620A030")]
	public Oid(string value, string friendlyName)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x620A070", Offset = "0x6209070", VA = "0x620A070")]
	public Oid(Oid oid)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x620A100", Offset = "0x6209100", VA = "0x620A100")]
	public static Oid FromOidValue(string oidValue, OidGroup group)
	{
		return null;
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x620A240", Offset = "0x6209240", VA = "0x620A240")]
	private Oid(string value, string friendlyName, OidGroup group)
	{
	}
}
