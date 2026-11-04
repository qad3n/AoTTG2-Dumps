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
[Token(Token = "0x20000AA")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlBoolean : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x0")]
	private byte m_value;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlBoolean True;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x1")]
	public static readonly SqlBoolean False;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x2")]
	public static readonly SqlBoolean Null;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x3")]
	public static readonly SqlBoolean Zero;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlBoolean One;

	[Token(Token = "0x17000176")]
	public bool IsNull
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public bool Value
	{
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x254C2B0", Offset = "0x254A8B0", VA = "0x18254C2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public bool IsTrue
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x254C2A0", Offset = "0x254A8A0", VA = "0x18254C2A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000179")]
	public bool IsFalse
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x254C290", Offset = "0x254A890", VA = "0x18254C290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	public byte ByteValue
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x254C200", Offset = "0x254A800", VA = "0x18254C200")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x254C1F0", Offset = "0x254A7F0", VA = "0x18254C1F0")]
	public SqlBoolean(bool value)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x254C170", Offset = "0x254A770", VA = "0x18254C170")]
	public SqlBoolean(int value)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x254C1D0", Offset = "0x254A7D0", VA = "0x18254C1D0")]
	private SqlBoolean(int value, bool fNull)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x254C580", Offset = "0x254AB80", VA = "0x18254C580")]
	public static implicit operator SqlBoolean(bool x)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x254C590", Offset = "0x254AB90", VA = "0x18254C590")]
	public static bool operator true(SqlBoolean x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x254C310", Offset = "0x254A910", VA = "0x18254C310")]
	public static SqlBoolean operator &(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x254C3F0", Offset = "0x254A9F0", VA = "0x18254C3F0")]
	public static SqlBoolean operator |(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x254BF80", Offset = "0x254A580", VA = "0x18254BF80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x254C4D0", Offset = "0x254AAD0", VA = "0x18254C4D0")]
	public static SqlBoolean operator ==(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x254B650", Offset = "0x2549C50", VA = "0x18254B650")]
	public static SqlBoolean And(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x254BC50", Offset = "0x254A250", VA = "0x18254BC50")]
	public static SqlBoolean Or(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x254B880", Offset = "0x2549E80", VA = "0x18254B880", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x254B760", Offset = "0x2549D60", VA = "0x18254B760")]
	public int CompareTo(SqlBoolean value)
	{
		return default(int);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x254B990", Offset = "0x2549F90", VA = "0x18254B990", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x254BB00", Offset = "0x254A100", VA = "0x18254BB00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x254BD60", Offset = "0x254A360", VA = "0x18254BD60", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x254BE80", Offset = "0x254A480", VA = "0x18254BE80", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x254BBE0", Offset = "0x254A1E0", VA = "0x18254BBE0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
