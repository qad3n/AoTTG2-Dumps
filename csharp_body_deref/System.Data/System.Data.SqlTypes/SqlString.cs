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
		[Address(RVA = "0x257C290", Offset = "0x257A890", VA = "0x18257C290", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019F")]
	public string Value
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x257C2A0", Offset = "0x257A8A0", VA = "0x18257C2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x257C250", Offset = "0x257A850", VA = "0x18257C250")]
	private SqlString(bool fNull)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x257BFC0", Offset = "0x257A5C0", VA = "0x18257BFC0")]
	public SqlString(string data, int lcid, SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x257C060", Offset = "0x257A660", VA = "0x18257C060")]
	public SqlString(string data)
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x257C1A0", Offset = "0x257A7A0", VA = "0x18257C1A0")]
	private SqlString(int lcid, SqlCompareOptions compareOptions, string data, CompareInfo cmpInfo)
	{
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x257B650", Offset = "0x2579C50", VA = "0x18257B650")]
	private void SetCompareInfo()
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x257C650", Offset = "0x257AC50", VA = "0x18257C650")]
	public static implicit operator SqlString(string x)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x257BCE0", Offset = "0x257A2E0", VA = "0x18257BCE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x257C330", Offset = "0x257A930", VA = "0x18257C330")]
	public static SqlString operator +(SqlString x, SqlString y)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x257B6F0", Offset = "0x2579CF0", VA = "0x18257B6F0")]
	private static int StringCompare(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x257AE90", Offset = "0x2579490", VA = "0x18257AE90")]
	private static SqlBoolean Compare(SqlString x, SqlString y, EComparison ecExpectedResult)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x257C4B0", Offset = "0x257AAB0", VA = "0x18257C4B0")]
	public static SqlBoolean operator ==(SqlString x, SqlString y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x257BD40", Offset = "0x257A340", VA = "0x18257BD40")]
	private static void ValidateSqlCompareOptions(SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x257AB50", Offset = "0x2579150", VA = "0x18257AB50")]
	public static CompareOptions CompareOptionsFromSqlCompareOptions(SqlCompareOptions compareOptions)
	{
		return default(CompareOptions);
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x257B350", Offset = "0x2579950", VA = "0x18257B350")]
	private bool FBinarySort()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x257A960", Offset = "0x2578F60", VA = "0x18257A960")]
	private static int CompareBinary(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x257A7F0", Offset = "0x2578DF0", VA = "0x18257A7F0")]
	private static int CompareBinary2(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x257AC10", Offset = "0x2579210", VA = "0x18257AC10", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x257AD50", Offset = "0x2579350", VA = "0x18257AD50")]
	public int CompareTo(SqlString value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x257B000", Offset = "0x2579600", VA = "0x18257B000", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x257B3B0", Offset = "0x25799B0", VA = "0x18257B3B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x257BB00", Offset = "0x257A100", VA = "0x18257BB00", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x257BC00", Offset = "0x257A200", VA = "0x18257BC00", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x257B5E0", Offset = "0x2579BE0", VA = "0x18257B5E0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
