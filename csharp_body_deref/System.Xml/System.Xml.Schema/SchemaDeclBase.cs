using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001EC")]
internal abstract class SchemaDeclBase
{
	[Token(Token = "0x20001ED")]
	internal enum Use
	{
		[Token(Token = "0x400090A")]
		Default,
		[Token(Token = "0x400090B")]
		Required,
		[Token(Token = "0x400090C")]
		Implied,
		[Token(Token = "0x400090D")]
		Fixed,
		[Token(Token = "0x400090E")]
		RequiredFixed
	}

	[Token(Token = "0x40008FE")]
	[FieldOffset(Offset = "0x10")]
	protected XmlQualifiedName name;

	[Token(Token = "0x40008FF")]
	[FieldOffset(Offset = "0x18")]
	protected string prefix;

	[Token(Token = "0x4000900")]
	[FieldOffset(Offset = "0x20")]
	protected bool isDeclaredInExternal;

	[Token(Token = "0x4000901")]
	[FieldOffset(Offset = "0x24")]
	protected Use presence;

	[Token(Token = "0x4000902")]
	[FieldOffset(Offset = "0x28")]
	protected XmlSchemaType schemaType;

	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x30")]
	protected XmlSchemaDatatype datatype;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x38")]
	protected string defaultValueRaw;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0x40")]
	protected object defaultValueTyped;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0x48")]
	protected long maxLength;

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x50")]
	protected long minLength;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x58")]
	protected List<string> values;

	[Token(Token = "0x17000523")]
	internal XmlQualifiedName Name
	{
		[Token(Token = "0x600135F")]
		[Address(RVA = "0x43AB670", Offset = "0x43AB670", VA = "0x43AB670")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x43AB680", Offset = "0x43AB680", VA = "0x43AB680")]
		set
		{
		}
	}

	[Token(Token = "0x17000524")]
	internal string Prefix
	{
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x43AB690", Offset = "0x43AB690", VA = "0x43AB690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x43AB6C0", Offset = "0x43AB6C0", VA = "0x43AB6C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000525")]
	internal bool IsDeclaredInExternal
	{
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x43AB6D0", Offset = "0x43AB6D0", VA = "0x43AB6D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x43AB6E0", Offset = "0x43AB6E0", VA = "0x43AB6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000526")]
	internal Use Presence
	{
		[Token(Token = "0x6001365")]
		[Address(RVA = "0x43AB6F0", Offset = "0x43AB6F0", VA = "0x43AB6F0")]
		get
		{
			return default(Use);
		}
		[Token(Token = "0x6001366")]
		[Address(RVA = "0x43AB700", Offset = "0x43AB700", VA = "0x43AB700")]
		set
		{
		}
	}

	[Token(Token = "0x17000527")]
	internal long MaxLength
	{
		[Token(Token = "0x6001367")]
		[Address(RVA = "0x43AB710", Offset = "0x43AB710", VA = "0x43AB710")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x43AB720", Offset = "0x43AB720", VA = "0x43AB720")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	internal long MinLength
	{
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x43AB730", Offset = "0x43AB730", VA = "0x43AB730")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x43AB740", Offset = "0x43AB740", VA = "0x43AB740")]
		set
		{
		}
	}

	[Token(Token = "0x17000529")]
	internal XmlSchemaType SchemaType
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x43AB750", Offset = "0x43AB750", VA = "0x43AB750")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x43AB760", Offset = "0x43AB760", VA = "0x43AB760")]
		set
		{
		}
	}

	[Token(Token = "0x1700052A")]
	internal XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x43AB770", Offset = "0x43AB770", VA = "0x43AB770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x43AB780", Offset = "0x43AB780", VA = "0x43AB780")]
		set
		{
		}
	}

	[Token(Token = "0x1700052B")]
	internal List<string> Values
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x43AB880", Offset = "0x43AB880", VA = "0x43AB880")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x43AB890", Offset = "0x43AB890", VA = "0x43AB890")]
		set
		{
		}
	}

	[Token(Token = "0x1700052C")]
	internal string DefaultValueRaw
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x43AB8A0", Offset = "0x43AB8A0", VA = "0x43AB8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x43AB8D0", Offset = "0x43AB8D0", VA = "0x43AB8D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	internal object DefaultValueTyped
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x43AB8E0", Offset = "0x43AB8E0", VA = "0x43AB8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001375")]
		[Address(RVA = "0x43AB8F0", Offset = "0x43AB8F0", VA = "0x43AB8F0")]
		set
		{
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x43AB550", Offset = "0x43AB550", VA = "0x43AB550")]
	protected SchemaDeclBase(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x43AB600", Offset = "0x43AB600", VA = "0x43AB600")]
	protected SchemaDeclBase()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x43AB790", Offset = "0x43AB790", VA = "0x43AB790")]
	internal void AddValue(string value)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x43AB900", Offset = "0x43AB900", VA = "0x43AB900")]
	internal bool CheckEnumeration(object pVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x43AB9B0", Offset = "0x43AB9B0", VA = "0x43AB9B0")]
	internal bool CheckValue(object pVal)
	{
		return default(bool);
	}
}
