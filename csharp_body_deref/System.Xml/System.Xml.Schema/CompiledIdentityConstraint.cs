using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000168")]
internal class CompiledIdentityConstraint
{
	[Token(Token = "0x2000169")]
	public enum ConstraintRole
	{
		[Token(Token = "0x4000752")]
		Unique,
		[Token(Token = "0x4000753")]
		Key,
		[Token(Token = "0x4000754")]
		Keyref
	}

	[Token(Token = "0x400074B")]
	[FieldOffset(Offset = "0x10")]
	internal XmlQualifiedName name;

	[Token(Token = "0x400074C")]
	[FieldOffset(Offset = "0x18")]
	private ConstraintRole role;

	[Token(Token = "0x400074D")]
	[FieldOffset(Offset = "0x20")]
	private Asttree selector;

	[Token(Token = "0x400074E")]
	[FieldOffset(Offset = "0x28")]
	private Asttree[] fields;

	[Token(Token = "0x400074F")]
	[FieldOffset(Offset = "0x30")]
	internal XmlQualifiedName refer;

	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0x0")]
	public static readonly CompiledIdentityConstraint Empty;

	[Token(Token = "0x17000405")]
	public ConstraintRole Role
	{
		[Token(Token = "0x6000F97")]
		[Address(RVA = "0x45057D0", Offset = "0x45057D0", VA = "0x45057D0")]
		get
		{
			return default(ConstraintRole);
		}
	}

	[Token(Token = "0x17000406")]
	public Asttree Selector
	{
		[Token(Token = "0x6000F98")]
		[Address(RVA = "0x45057E0", Offset = "0x45057E0", VA = "0x45057E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000407")]
	public Asttree[] Fields
	{
		[Token(Token = "0x6000F99")]
		[Address(RVA = "0x45057F0", Offset = "0x45057F0", VA = "0x45057F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4505800", Offset = "0x4505800", VA = "0x4505800")]
	private CompiledIdentityConstraint()
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4505890", Offset = "0x4505890", VA = "0x4505890")]
	public CompiledIdentityConstraint(XmlSchemaIdentityConstraint constraint, XmlNamespaceManager nsmgr)
	{
	}
}
