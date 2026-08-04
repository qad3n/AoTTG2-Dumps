// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlBoolean
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A0")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlBoolean : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x0")]
	private byte m_value;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlBoolean True;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x1")]
	public static readonly SqlBoolean False;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x2")]
	public static readonly SqlBoolean Null;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x3")]
	public static readonly SqlBoolean Zero;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlBoolean One;

	[Token(Token = "0x17000173")]
	public bool IsNull
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x46036A0", Offset = "0x46036A0", VA = "0x46036A0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000174")]
	public bool Value
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x4603060", Offset = "0x4603060", VA = "0x4603060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public bool IsTrue
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x46036B0", Offset = "0x46036B0", VA = "0x46036B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	public bool IsFalse
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x46036C0", Offset = "0x46036C0", VA = "0x46036C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public byte ByteValue
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x4603840", Offset = "0x4603840", VA = "0x4603840")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4602950", Offset = "0x4602950", VA = "0x4602950")]
	public SqlBoolean(bool value)
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x4603630", Offset = "0x4603630", VA = "0x4603630")]
	public SqlBoolean(int value)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4603680", Offset = "0x4603680", VA = "0x4603680")]
	private SqlBoolean(int value, bool fNull)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x46036D0", Offset = "0x46036D0", VA = "0x46036D0")]
	public static implicit operator SqlBoolean(bool x)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4602E90", Offset = "0x4602E90", VA = "0x4602E90")]
	public static bool operator true(SqlBoolean x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x46036E0", Offset = "0x46036E0", VA = "0x46036E0")]
	public static SqlBoolean operator &(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4603790", Offset = "0x4603790", VA = "0x4603790")]
	public static SqlBoolean operator |(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x46038E0", Offset = "0x46038E0", VA = "0x46038E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x46039F0", Offset = "0x46039F0", VA = "0x46039F0")]
	public static SqlBoolean operator ==(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x4603AA0", Offset = "0x4603AA0", VA = "0x4603AA0")]
	public static SqlBoolean And(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x4603BB0", Offset = "0x4603BB0", VA = "0x4603BB0")]
	public static SqlBoolean Or(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x4603CC0", Offset = "0x4603CC0", VA = "0x4603CC0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x4603DB0", Offset = "0x4603DB0", VA = "0x4603DB0")]
	public int CompareTo(SqlBoolean value)
	{
		return default(int);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x4603EC0", Offset = "0x4603EC0", VA = "0x4603EC0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x4604020", Offset = "0x4604020", VA = "0x4604020", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x4604110", Offset = "0x4604110", VA = "0x4604110", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x4604120", Offset = "0x4604120", VA = "0x4604120", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x4604220", Offset = "0x4604220", VA = "0x4604220", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x4604360", Offset = "0x4604360", VA = "0x4604360")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
