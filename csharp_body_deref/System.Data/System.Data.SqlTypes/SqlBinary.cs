// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlBinary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x46024D0", Offset = "0x46024D0", VA = "0x46024D0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public byte[] Value
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x46024E0", Offset = "0x46024E0", VA = "0x46024E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x4602440", Offset = "0x4602440", VA = "0x4602440")]
	private SqlBinary(bool fNull)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x4602450", Offset = "0x4602450", VA = "0x4602450")]
	public SqlBinary(byte[] value)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x46025C0", Offset = "0x46025C0", VA = "0x46025C0")]
	public static implicit operator SqlBinary(byte[] x)
	{
		return default(SqlBinary);
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x4602660", Offset = "0x4602660", VA = "0x4602660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x4602760", Offset = "0x4602760", VA = "0x4602760")]
	private static EComparison PerformCompareByte(byte[] x, byte[] y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x4602830", Offset = "0x4602830", VA = "0x4602830")]
	public static SqlBoolean operator ==(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4602960", Offset = "0x4602960", VA = "0x4602960")]
	public static SqlBoolean operator <(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x4602A80", Offset = "0x4602A80", VA = "0x4602A80")]
	public static SqlBoolean operator >(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x4602BA0", Offset = "0x4602BA0", VA = "0x4602BA0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4602C90", Offset = "0x4602C90", VA = "0x4602C90")]
	public int CompareTo(SqlBinary value)
	{
		return default(int);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x4602EF0", Offset = "0x4602EF0", VA = "0x4602EF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x46030B0", Offset = "0x46030B0", VA = "0x46030B0")]
	internal static int HashByteArray(byte[] rgbValue, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4603110", Offset = "0x4603110", VA = "0x4603110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4603220", Offset = "0x4603220", VA = "0x4603220", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4603230", Offset = "0x4603230", VA = "0x4603230", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x4603420", Offset = "0x4603420", VA = "0x4603420", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4603560", Offset = "0x4603560", VA = "0x4603560")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
