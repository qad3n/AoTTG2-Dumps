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
		[Address(RVA = "0x42C9010", Offset = "0x42C9010", VA = "0x42C9010", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public string Value
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x42C9020", Offset = "0x42C9020", VA = "0x42C9020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x42DDD80", Offset = "0x42DDD80", VA = "0x42DDD80")]
	private SqlString(bool fNull)
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x42DDDC0", Offset = "0x42DDDC0", VA = "0x42DDDC0")]
	public SqlString(string data, int lcid, SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x42DDF00", Offset = "0x42DDF00", VA = "0x42DDF00")]
	public SqlString(string data)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x42DDFE0", Offset = "0x42DDFE0", VA = "0x42DDFE0")]
	private SqlString(int lcid, SqlCompareOptions compareOptions, string data, CompareInfo cmpInfo)
	{
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x42DE0A0", Offset = "0x42DE0A0", VA = "0x42DE0A0")]
	private void SetCompareInfo()
	{
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x42DE130", Offset = "0x42DE130", VA = "0x42DE130")]
	public static implicit operator SqlString(string x)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x42DE150", Offset = "0x42DE150", VA = "0x42DE150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x42DE1C0", Offset = "0x42DE1C0", VA = "0x42DE1C0")]
	public static SqlString operator +(SqlString x, SqlString y)
	{
		return default(SqlString);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x42DE320", Offset = "0x42DE320", VA = "0x42DE320")]
	private static int StringCompare(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x42DEAC0", Offset = "0x42DEAC0", VA = "0x42DEAC0")]
	private static SqlBoolean Compare(SqlString x, SqlString y, EComparison ecExpectedResult)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x42DEC50", Offset = "0x42DEC50", VA = "0x42DEC50")]
	public static SqlBoolean operator ==(SqlString x, SqlString y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x42DDE60", Offset = "0x42DDE60", VA = "0x42DDE60")]
	private static void ValidateSqlCompareOptions(SqlCompareOptions compareOptions)
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x42DEA00", Offset = "0x42DEA00", VA = "0x42DEA00")]
	public static CompareOptions CompareOptionsFromSqlCompareOptions(SqlCompareOptions compareOptions)
	{
		return default(CompareOptions);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x42DED80", Offset = "0x42DED80", VA = "0x42DED80")]
	private bool FBinarySort()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x42DE6C0", Offset = "0x42DE6C0", VA = "0x42DE6C0")]
	private static int CompareBinary(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x42DE8B0", Offset = "0x42DE8B0", VA = "0x42DE8B0")]
	private static int CompareBinary2(SqlString x, SqlString y)
	{
		return default(int);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x42DEDF0", Offset = "0x42DEDF0", VA = "0x42DEDF0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x42DEF00", Offset = "0x42DEF00", VA = "0x42DEF00")]
	public int CompareTo(SqlString value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x42DF030", Offset = "0x42DF030", VA = "0x42DF030", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x42DF300", Offset = "0x42DF300", VA = "0x42DF300", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x42DF680", Offset = "0x42DF680", VA = "0x42DF680", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x42DF690", Offset = "0x42DF690", VA = "0x42DF690", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x42DF780", Offset = "0x42DF780", VA = "0x42DF780", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x42DF890", Offset = "0x42DF890", VA = "0x42DF890")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
