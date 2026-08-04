// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.CompiledIdentityConstraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4842F30", Offset = "0x4842F30", VA = "0x4842F30")]
		get
		{
			return default(ConstraintRole);
		}
	}

	[Token(Token = "0x17000406")]
	public Asttree Selector
	{
		[Token(Token = "0x6000F98")]
		[Address(RVA = "0x4842F40", Offset = "0x4842F40", VA = "0x4842F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000407")]
	public Asttree[] Fields
	{
		[Token(Token = "0x6000F99")]
		[Address(RVA = "0x4842F50", Offset = "0x4842F50", VA = "0x4842F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4842F60", Offset = "0x4842F60", VA = "0x4842F60")]
	private CompiledIdentityConstraint()
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4842FF0", Offset = "0x4842FF0", VA = "0x4842FF0")]
	public CompiledIdentityConstraint(XmlSchemaIdentityConstraint constraint, XmlNamespaceManager nsmgr)
	{
	}
}
