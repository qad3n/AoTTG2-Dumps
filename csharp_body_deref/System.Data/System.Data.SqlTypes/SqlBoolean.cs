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
		[Address(RVA = "0x42C5F40", Offset = "0x42C5F40", VA = "0x42C5F40", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000174")]
	public bool Value
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x42C5900", Offset = "0x42C5900", VA = "0x42C5900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public bool IsTrue
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x42C5F50", Offset = "0x42C5F50", VA = "0x42C5F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	public bool IsFalse
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x42C5F60", Offset = "0x42C5F60", VA = "0x42C5F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public byte ByteValue
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x42C60E0", Offset = "0x42C60E0", VA = "0x42C60E0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x42C51F0", Offset = "0x42C51F0", VA = "0x42C51F0")]
	public SqlBoolean(bool value)
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x42C5ED0", Offset = "0x42C5ED0", VA = "0x42C5ED0")]
	public SqlBoolean(int value)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x42C5F20", Offset = "0x42C5F20", VA = "0x42C5F20")]
	private SqlBoolean(int value, bool fNull)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x42C5F70", Offset = "0x42C5F70", VA = "0x42C5F70")]
	public static implicit operator SqlBoolean(bool x)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x42C5730", Offset = "0x42C5730", VA = "0x42C5730")]
	public static bool operator true(SqlBoolean x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x42C5F80", Offset = "0x42C5F80", VA = "0x42C5F80")]
	public static SqlBoolean operator &(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x42C6030", Offset = "0x42C6030", VA = "0x42C6030")]
	public static SqlBoolean operator |(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x42C6180", Offset = "0x42C6180", VA = "0x42C6180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x42C6290", Offset = "0x42C6290", VA = "0x42C6290")]
	public static SqlBoolean operator ==(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x42C6340", Offset = "0x42C6340", VA = "0x42C6340")]
	public static SqlBoolean And(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x42C6450", Offset = "0x42C6450", VA = "0x42C6450")]
	public static SqlBoolean Or(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x42C6560", Offset = "0x42C6560", VA = "0x42C6560", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x42C6650", Offset = "0x42C6650", VA = "0x42C6650")]
	public int CompareTo(SqlBoolean value)
	{
		return default(int);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x42C6760", Offset = "0x42C6760", VA = "0x42C6760", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x42C68C0", Offset = "0x42C68C0", VA = "0x42C68C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x42C69B0", Offset = "0x42C69B0", VA = "0x42C69B0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x42C69C0", Offset = "0x42C69C0", VA = "0x42C69C0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x42C6AC0", Offset = "0x42C6AC0", VA = "0x42C6AC0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x42C6C00", Offset = "0x42C6C00", VA = "0x42C6C00")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
