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
		[Address(RVA = "0x5F06B20", Offset = "0x5F05B20", VA = "0x5F06B20", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public bool Value
	{
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x5F064C0", Offset = "0x5F054C0", VA = "0x5F064C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public bool IsTrue
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x5F06B30", Offset = "0x5F05B30", VA = "0x5F06B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000179")]
	public bool IsFalse
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x5F06B40", Offset = "0x5F05B40", VA = "0x5F06B40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	public byte ByteValue
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x5F06CC0", Offset = "0x5F05CC0", VA = "0x5F06CC0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x5F05DD0", Offset = "0x5F04DD0", VA = "0x5F05DD0")]
	public SqlBoolean(bool value)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x5F06AB0", Offset = "0x5F05AB0", VA = "0x5F06AB0")]
	public SqlBoolean(int value)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x5F06B00", Offset = "0x5F05B00", VA = "0x5F06B00")]
	private SqlBoolean(int value, bool fNull)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x5F06B50", Offset = "0x5F05B50", VA = "0x5F06B50")]
	public static implicit operator SqlBoolean(bool x)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x5F062F0", Offset = "0x5F052F0", VA = "0x5F062F0")]
	public static bool operator true(SqlBoolean x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x5F06B60", Offset = "0x5F05B60", VA = "0x5F06B60")]
	public static SqlBoolean operator &(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x5F06C10", Offset = "0x5F05C10", VA = "0x5F06C10")]
	public static SqlBoolean operator |(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x5F06D60", Offset = "0x5F05D60", VA = "0x5F06D60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x5F06E90", Offset = "0x5F05E90", VA = "0x5F06E90")]
	public static SqlBoolean operator ==(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x5F06F40", Offset = "0x5F05F40", VA = "0x5F06F40")]
	public static SqlBoolean And(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x5F07030", Offset = "0x5F06030", VA = "0x5F07030")]
	public static SqlBoolean Or(SqlBoolean x, SqlBoolean y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x5F07120", Offset = "0x5F06120", VA = "0x5F07120", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x5F07210", Offset = "0x5F06210", VA = "0x5F07210")]
	public int CompareTo(SqlBoolean value)
	{
		return default(int);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x5F07340", Offset = "0x5F06340", VA = "0x5F07340", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x5F07490", Offset = "0x5F06490", VA = "0x5F07490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x5F07590", Offset = "0x5F06590", VA = "0x5F07590", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x5F075A0", Offset = "0x5F065A0", VA = "0x5F075A0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x5F076A0", Offset = "0x5F066A0", VA = "0x5F076A0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x5F077E0", Offset = "0x5F067E0", VA = "0x5F077E0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
