// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Text;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B9")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlString : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x0")]
	private string m_value;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x8")]
	private CompareInfo m_cmpInfo;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x10")]
	private int m_lcid;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x14")]
	private SqlCompareOptions m_flag;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x18")]
	private bool m_fNotNull;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlString Null;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly UnicodeEncoding s_unicodeEncoding;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x28")]
	public static readonly int IgnoreCase;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x2C")]
	public static readonly int IgnoreWidth;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x30")]
	public static readonly int IgnoreNonSpace;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x34")]
	public static readonly int IgnoreKanaType;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x38")]
	public static readonly int BinarySort;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x3C")]
	public static readonly int BinarySort2;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x40")]
	private static readonly SqlCompareOptions s_iDefaultFlag;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x44")]
	private static readonly CompareOptions s_iValidCompareOptionMask;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly SqlCompareOptions s_iValidSqlCompareOptionMask;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly int s_lcidUSEnglish;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int s_lcidBinary;

	[Token(Token = "0x1700019E")]
	public bool IsNull
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x5F09B10", Offset = "0x5F08B10", VA = "0x5F09B10", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019F")]
	public string Value
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x5F09B20", Offset = "0x5F08B20", VA = "0x5F09B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x5F1EE40", Offset = "0x5F1DE40", VA = "0x5F1EE40")]
	private SqlString(bool fNull)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x5F1EE80", Offset = "0x5F1DE80", VA = "0x5F1EE80")]
	public SqlString(string data, int lcid, SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x5F1EFC0", Offset = "0x5F1DFC0", VA = "0x5F1EFC0")]
	public SqlString(string data)
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x5F1F0A0", Offset = "0x5F1E0A0", VA = "0x5F1F0A0")]
	private SqlString(int lcid, SqlCompareOptions compareOptions, string data, CompareInfo cmpInfo)
	{
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x5F1F160", Offset = "0x5F1E160", VA = "0x5F1F160")]
	private void SetCompareInfo()
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x5F1F1F0", Offset = "0x5F1E1F0", VA = "0x5F1F1F0")]
	public static implicit operator SqlString(string x)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x5F1F210", Offset = "0x5F1E210", VA = "0x5F1F210", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x5F1F280", Offset = "0x5F1E280", VA = "0x5F1F280")]
	public static SqlString operator +(SqlString x, SqlString y)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x5F1F3E0", Offset = "0x5F1E3E0", VA = "0x5F1F3E0")]
	private static int StringCompare(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x5F1FB80", Offset = "0x5F1EB80", VA = "0x5F1FB80")]
	private static SqlBoolean Compare(SqlString x, SqlString y, EComparison ecExpectedResult)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x5F1FCE0", Offset = "0x5F1ECE0", VA = "0x5F1FCE0")]
	public static SqlBoolean operator ==(SqlString x, SqlString y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x5F1EF20", Offset = "0x5F1DF20", VA = "0x5F1EF20")]
	private static void ValidateSqlCompareOptions(SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x5F1FAC0", Offset = "0x5F1EAC0", VA = "0x5F1FAC0")]
	public static CompareOptions CompareOptionsFromSqlCompareOptions(SqlCompareOptions compareOptions)
	{
		return default(CompareOptions);
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x5F1FD40", Offset = "0x5F1ED40", VA = "0x5F1FD40")]
	private bool FBinarySort()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x5F1F780", Offset = "0x5F1E780", VA = "0x5F1F780")]
	private static int CompareBinary(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x5F1F970", Offset = "0x5F1E970", VA = "0x5F1F970")]
	private static int CompareBinary2(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x5F1FDB0", Offset = "0x5F1EDB0", VA = "0x5F1FDB0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x5F1FEC0", Offset = "0x5F1EEC0", VA = "0x5F1FEC0")]
	public int CompareTo(SqlString value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x5F1FFB0", Offset = "0x5F1EFB0", VA = "0x5F1FFB0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x5F201B0", Offset = "0x5F1F1B0", VA = "0x5F201B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x5F204F0", Offset = "0x5F1F4F0", VA = "0x5F204F0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x5F20500", Offset = "0x5F1F500", VA = "0x5F20500", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x5F205F0", Offset = "0x5F1F5F0", VA = "0x5F205F0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x5F20700", Offset = "0x5F1F700", VA = "0x5F20700")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
