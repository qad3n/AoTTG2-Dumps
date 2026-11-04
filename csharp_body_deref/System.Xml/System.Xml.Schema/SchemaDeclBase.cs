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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001360")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000524")]
	internal string Prefix
	{
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x264C990", Offset = "0x264AF90", VA = "0x18264C990")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001362")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000525")]
	internal bool IsDeclaredInExternal
	{
		[Token(Token = "0x6001363")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000526")]
	internal Use Presence
	{
		[Token(Token = "0x6001365")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(Use);
		}
		[Token(Token = "0x6001366")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000527")]
	internal long MaxLength
	{
		[Token(Token = "0x6001367")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x1C613B0", Offset = "0x1C5F9B0", VA = "0x181C613B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	internal long MinLength
	{
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x264C9B0", Offset = "0x264AFB0", VA = "0x18264C9B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000529")]
	internal XmlSchemaType SchemaType
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052A")]
	internal XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700052B")]
	internal List<string> Values
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001371")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x1700052C")]
	internal string DefaultValueRaw
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x264C970", Offset = "0x264AF70", VA = "0x18264C970")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	internal object DefaultValueTyped
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001375")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x264C840", Offset = "0x264AE40", VA = "0x18264C840")]
	protected SchemaDeclBase(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x264C900", Offset = "0x264AF00", VA = "0x18264C900")]
	protected SchemaDeclBase()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x264C630", Offset = "0x264AC30", VA = "0x18264C630")]
	internal void AddValue(string value)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x264C730", Offset = "0x264AD30", VA = "0x18264C730")]
	internal bool CheckEnumeration(object pVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x264C7F0", Offset = "0x264ADF0", VA = "0x18264C7F0")]
	internal bool CheckValue(object pVal)
	{
		return default(bool);
	}
}
