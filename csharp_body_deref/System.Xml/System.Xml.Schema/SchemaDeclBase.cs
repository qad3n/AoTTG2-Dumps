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
		[Address(RVA = "0x5FF5270", Offset = "0x5FF4270", VA = "0x5FF5270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x5FF5280", Offset = "0x5FF4280", VA = "0x5FF5280")]
		set
		{
		}
	}

	[Token(Token = "0x17000524")]
	internal string Prefix
	{
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x5FF5290", Offset = "0x5FF4290", VA = "0x5FF5290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x5FF52C0", Offset = "0x5FF42C0", VA = "0x5FF52C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000525")]
	internal bool IsDeclaredInExternal
	{
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x5FF52D0", Offset = "0x5FF42D0", VA = "0x5FF52D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x5FF52E0", Offset = "0x5FF42E0", VA = "0x5FF52E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000526")]
	internal Use Presence
	{
		[Token(Token = "0x6001365")]
		[Address(RVA = "0x5FF52F0", Offset = "0x5FF42F0", VA = "0x5FF52F0")]
		get
		{
			return default(Use);
		}
		[Token(Token = "0x6001366")]
		[Address(RVA = "0x5FF5300", Offset = "0x5FF4300", VA = "0x5FF5300")]
		set
		{
		}
	}

	[Token(Token = "0x17000527")]
	internal long MaxLength
	{
		[Token(Token = "0x6001367")]
		[Address(RVA = "0x5FF5310", Offset = "0x5FF4310", VA = "0x5FF5310")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x5FF5320", Offset = "0x5FF4320", VA = "0x5FF5320")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	internal long MinLength
	{
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x5FF5330", Offset = "0x5FF4330", VA = "0x5FF5330")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x5FF5340", Offset = "0x5FF4340", VA = "0x5FF5340")]
		set
		{
		}
	}

	[Token(Token = "0x17000529")]
	internal XmlSchemaType SchemaType
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x5FF5350", Offset = "0x5FF4350", VA = "0x5FF5350")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x5FF5360", Offset = "0x5FF4360", VA = "0x5FF5360")]
		set
		{
		}
	}

	[Token(Token = "0x1700052A")]
	internal XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x5FF5370", Offset = "0x5FF4370", VA = "0x5FF5370")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x5FF5380", Offset = "0x5FF4380", VA = "0x5FF5380")]
		set
		{
		}
	}

	[Token(Token = "0x1700052B")]
	internal List<string> Values
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x5FF5480", Offset = "0x5FF4480", VA = "0x5FF5480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x5FF5490", Offset = "0x5FF4490", VA = "0x5FF5490")]
		set
		{
		}
	}

	[Token(Token = "0x1700052C")]
	internal string DefaultValueRaw
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x5FF54A0", Offset = "0x5FF44A0", VA = "0x5FF54A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x5FF54D0", Offset = "0x5FF44D0", VA = "0x5FF54D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	internal object DefaultValueTyped
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x5FF54E0", Offset = "0x5FF44E0", VA = "0x5FF54E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001375")]
		[Address(RVA = "0x5FF54F0", Offset = "0x5FF44F0", VA = "0x5FF54F0")]
		set
		{
		}
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x5FF5150", Offset = "0x5FF4150", VA = "0x5FF5150")]
	protected SchemaDeclBase(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x5FF5200", Offset = "0x5FF4200", VA = "0x5FF5200")]
	protected SchemaDeclBase()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x5FF5390", Offset = "0x5FF4390", VA = "0x5FF5390")]
	internal void AddValue(string value)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x5FF5500", Offset = "0x5FF4500", VA = "0x5FF5500")]
	internal bool CheckEnumeration(object pVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x5FF55B0", Offset = "0x5FF45B0", VA = "0x5FF55B0")]
	internal bool CheckValue(object pVal)
	{
		return default(bool);
	}
}
