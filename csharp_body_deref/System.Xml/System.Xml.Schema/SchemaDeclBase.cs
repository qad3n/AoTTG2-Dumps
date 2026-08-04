// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaDeclBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x46E8DD0", Offset = "0x46E8DD0", VA = "0x46E8DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x46E8DE0", Offset = "0x46E8DE0", VA = "0x46E8DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000524")]
	internal string Prefix
	{
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x46E8DF0", Offset = "0x46E8DF0", VA = "0x46E8DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x46E8E20", Offset = "0x46E8E20", VA = "0x46E8E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000525")]
	internal bool IsDeclaredInExternal
	{
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x46E8E30", Offset = "0x46E8E30", VA = "0x46E8E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x46E8E40", Offset = "0x46E8E40", VA = "0x46E8E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000526")]
	internal Use Presence
	{
		[Token(Token = "0x6001365")]
		[Address(RVA = "0x46E8E50", Offset = "0x46E8E50", VA = "0x46E8E50")]
		get
		{
			return default(Use);
		}
		[Token(Token = "0x6001366")]
		[Address(RVA = "0x46E8E60", Offset = "0x46E8E60", VA = "0x46E8E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000527")]
	internal long MaxLength
	{
		[Token(Token = "0x6001367")]
		[Address(RVA = "0x46E8E70", Offset = "0x46E8E70", VA = "0x46E8E70")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x46E8E80", Offset = "0x46E8E80", VA = "0x46E8E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	internal long MinLength
	{
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x46E8E90", Offset = "0x46E8E90", VA = "0x46E8E90")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x46E8EA0", Offset = "0x46E8EA0", VA = "0x46E8EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000529")]
	internal XmlSchemaType SchemaType
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x46E8EB0", Offset = "0x46E8EB0", VA = "0x46E8EB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x46E8EC0", Offset = "0x46E8EC0", VA = "0x46E8EC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052A")]
	internal XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x46E8ED0", Offset = "0x46E8ED0", VA = "0x46E8ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x46E8EE0", Offset = "0x46E8EE0", VA = "0x46E8EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052B")]
	internal List<string> Values
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x46E8FE0", Offset = "0x46E8FE0", VA = "0x46E8FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x46E8FF0", Offset = "0x46E8FF0", VA = "0x46E8FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052C")]
	internal string DefaultValueRaw
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x46E9000", Offset = "0x46E9000", VA = "0x46E9000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x46E9030", Offset = "0x46E9030", VA = "0x46E9030")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	internal object DefaultValueTyped
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x46E9040", Offset = "0x46E9040", VA = "0x46E9040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001375")]
		[Address(RVA = "0x46E9050", Offset = "0x46E9050", VA = "0x46E9050")]
		set
		{
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x46E8CB0", Offset = "0x46E8CB0", VA = "0x46E8CB0")]
	protected SchemaDeclBase(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x46E8D60", Offset = "0x46E8D60", VA = "0x46E8D60")]
	protected SchemaDeclBase()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x46E8EF0", Offset = "0x46E8EF0", VA = "0x46E8EF0")]
	internal void AddValue(string value)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x46E9060", Offset = "0x46E9060", VA = "0x46E9060")]
	internal bool CheckEnumeration(object pVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x46E9110", Offset = "0x46E9110", VA = "0x46E9110")]
	internal bool CheckValue(object pVal)
	{
		return default(bool);
	}
}
