using System.Reflection;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x200009F")]
[XmlSchemaProvider("GetXsdType")]
[DefaultMember("Item")]
public struct SqlBinary : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x0")]
	private byte[] _value;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlBinary Null;

	[Token(Token = "0x17000171")]
	public bool IsNull
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x42C4D70", Offset = "0x42C4D70", VA = "0x42C4D70", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public byte[] Value
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x42C4D80", Offset = "0x42C4D80", VA = "0x42C4D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x42C4CE0", Offset = "0x42C4CE0", VA = "0x42C4CE0")]
	private SqlBinary(bool fNull)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x42C4CF0", Offset = "0x42C4CF0", VA = "0x42C4CF0")]
	public SqlBinary(byte[] value)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x42C4E60", Offset = "0x42C4E60", VA = "0x42C4E60")]
	public static implicit operator SqlBinary(byte[] x)
	{
		return default(SqlBinary);
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x42C4F00", Offset = "0x42C4F00", VA = "0x42C4F00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x42C5000", Offset = "0x42C5000", VA = "0x42C5000")]
	private static EComparison PerformCompareByte(byte[] x, byte[] y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x42C50D0", Offset = "0x42C50D0", VA = "0x42C50D0")]
	public static SqlBoolean operator ==(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x42C5200", Offset = "0x42C5200", VA = "0x42C5200")]
	public static SqlBoolean operator <(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x42C5320", Offset = "0x42C5320", VA = "0x42C5320")]
	public static SqlBoolean operator >(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x42C5440", Offset = "0x42C5440", VA = "0x42C5440", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x42C5530", Offset = "0x42C5530", VA = "0x42C5530")]
	public int CompareTo(SqlBinary value)
	{
		return default(int);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x42C5790", Offset = "0x42C5790", VA = "0x42C5790", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x42C5950", Offset = "0x42C5950", VA = "0x42C5950")]
	internal static int HashByteArray(byte[] rgbValue, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x42C59B0", Offset = "0x42C59B0", VA = "0x42C59B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x42C5AC0", Offset = "0x42C5AC0", VA = "0x42C5AC0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x42C5AD0", Offset = "0x42C5AD0", VA = "0x42C5AD0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x42C5CC0", Offset = "0x42C5CC0", VA = "0x42C5CC0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x42C5E00", Offset = "0x42C5E00", VA = "0x42C5E00")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
