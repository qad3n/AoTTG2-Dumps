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
[Token(Token = "0x20000A9")]
[DefaultMember("Item")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlBinary : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x0")]
	private byte[] _value;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlBinary Null;

	[Token(Token = "0x17000174")]
	public bool IsNull
	{
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x5F05950", Offset = "0x5F04950", VA = "0x5F05950", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public byte[] Value
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x5F05960", Offset = "0x5F04960", VA = "0x5F05960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x5F058C0", Offset = "0x5F048C0", VA = "0x5F058C0")]
	private SqlBinary(bool fNull)
	{
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x5F058D0", Offset = "0x5F048D0", VA = "0x5F058D0")]
	public SqlBinary(byte[] value)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x5F05A40", Offset = "0x5F04A40", VA = "0x5F05A40")]
	public static implicit operator SqlBinary(byte[] x)
	{
		return default(SqlBinary);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x5F05AD0", Offset = "0x5F04AD0", VA = "0x5F05AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x5F05BF0", Offset = "0x5F04BF0", VA = "0x5F05BF0")]
	private static EComparison PerformCompareByte(byte[] x, byte[] y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x5F05CD0", Offset = "0x5F04CD0", VA = "0x5F05CD0")]
	public static SqlBoolean operator ==(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x5F05DE0", Offset = "0x5F04DE0", VA = "0x5F05DE0")]
	public static SqlBoolean operator <(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x5F05EF0", Offset = "0x5F04EF0", VA = "0x5F05EF0")]
	public static SqlBoolean operator >(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x5F05FF0", Offset = "0x5F04FF0", VA = "0x5F05FF0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x5F060E0", Offset = "0x5F050E0", VA = "0x5F060E0")]
	public int CompareTo(SqlBinary value)
	{
		return default(int);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x5F06350", Offset = "0x5F05350", VA = "0x5F06350", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x5F06510", Offset = "0x5F05510", VA = "0x5F06510")]
	internal static int HashByteArray(byte[] rgbValue, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x5F06570", Offset = "0x5F05570", VA = "0x5F06570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x5F066C0", Offset = "0x5F056C0", VA = "0x5F066C0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x5F066D0", Offset = "0x5F056D0", VA = "0x5F066D0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x5F068A0", Offset = "0x5F058A0", VA = "0x5F068A0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x5F069E0", Offset = "0x5F059E0", VA = "0x5F069E0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
