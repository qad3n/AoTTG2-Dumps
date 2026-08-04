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
[Token(Token = "0x20000AF")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlString : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x0")]
	private string m_value;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x8")]
	private CompareInfo m_cmpInfo;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x10")]
	private int m_lcid;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x14")]
	private SqlCompareOptions m_flag;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x18")]
	private bool m_fNotNull;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlString Null;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly UnicodeEncoding s_unicodeEncoding;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x28")]
	public static readonly int IgnoreCase;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x2C")]
	public static readonly int IgnoreWidth;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x30")]
	public static readonly int IgnoreNonSpace;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x34")]
	public static readonly int IgnoreKanaType;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x38")]
	public static readonly int BinarySort;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x3C")]
	public static readonly int BinarySort2;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x40")]
	private static readonly SqlCompareOptions s_iDefaultFlag;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x44")]
	private static readonly CompareOptions s_iValidCompareOptionMask;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly SqlCompareOptions s_iValidSqlCompareOptionMask;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly int s_lcidUSEnglish;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int s_lcidBinary;

	[Token(Token = "0x1700019B")]
	public bool IsNull
	{
		[Token(Token = "0x6000AB1")]
		[Address(RVA = "0x4606770", Offset = "0x4606770", VA = "0x4606770", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public string Value
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x4606780", Offset = "0x4606780", VA = "0x4606780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x461B4E0", Offset = "0x461B4E0", VA = "0x461B4E0")]
	private SqlString(bool fNull)
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x461B520", Offset = "0x461B520", VA = "0x461B520")]
	public SqlString(string data, int lcid, SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x461B660", Offset = "0x461B660", VA = "0x461B660")]
	public SqlString(string data)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x461B740", Offset = "0x461B740", VA = "0x461B740")]
	private SqlString(int lcid, SqlCompareOptions compareOptions, string data, CompareInfo cmpInfo)
	{
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x461B800", Offset = "0x461B800", VA = "0x461B800")]
	private void SetCompareInfo()
	{
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x461B890", Offset = "0x461B890", VA = "0x461B890")]
	public static implicit operator SqlString(string x)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x461B8B0", Offset = "0x461B8B0", VA = "0x461B8B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x461B920", Offset = "0x461B920", VA = "0x461B920")]
	public static SqlString operator +(SqlString x, SqlString y)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x461BA80", Offset = "0x461BA80", VA = "0x461BA80")]
	private static int StringCompare(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x461C220", Offset = "0x461C220", VA = "0x461C220")]
	private static SqlBoolean Compare(SqlString x, SqlString y, EComparison ecExpectedResult)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x461C3B0", Offset = "0x461C3B0", VA = "0x461C3B0")]
	public static SqlBoolean operator ==(SqlString x, SqlString y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x461B5C0", Offset = "0x461B5C0", VA = "0x461B5C0")]
	private static void ValidateSqlCompareOptions(SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x461C160", Offset = "0x461C160", VA = "0x461C160")]
	public static CompareOptions CompareOptionsFromSqlCompareOptions(SqlCompareOptions compareOptions)
	{
		return default(CompareOptions);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x461C4E0", Offset = "0x461C4E0", VA = "0x461C4E0")]
	private bool FBinarySort()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x461BE20", Offset = "0x461BE20", VA = "0x461BE20")]
	private static int CompareBinary(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x461C010", Offset = "0x461C010", VA = "0x461C010")]
	private static int CompareBinary2(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x461C550", Offset = "0x461C550", VA = "0x461C550", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x461C660", Offset = "0x461C660", VA = "0x461C660")]
	public int CompareTo(SqlString value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x461C790", Offset = "0x461C790", VA = "0x461C790", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x461CA60", Offset = "0x461CA60", VA = "0x461CA60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x461CDE0", Offset = "0x461CDE0", VA = "0x461CDE0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x461CDF0", Offset = "0x461CDF0", VA = "0x461CDF0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x461CEE0", Offset = "0x461CEE0", VA = "0x461CEE0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x461CFF0", Offset = "0x461CFF0", VA = "0x461CFF0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
