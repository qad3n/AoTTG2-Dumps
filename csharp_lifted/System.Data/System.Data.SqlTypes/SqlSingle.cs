// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlSingle
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
[Token(Token = "0x20000B7")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlSingle : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x4")]
	private float _value;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlSingle Null;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlSingle Zero;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlSingle MinValue;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlSingle MaxValue;

	[Token(Token = "0x1700019C")]
	public bool IsNull
	{
		[Token(Token = "0x6000AAD")]
		[Address(RVA = "0x5F154A0", Offset = "0x5F144A0", VA = "0x5F154A0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public float Value
	{
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x5F154B0", Offset = "0x5F144B0", VA = "0x5F154B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x5F1D1F0", Offset = "0x5F1C1F0", VA = "0x5F1D1F0")]
	private SqlSingle(bool fNull)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x5F1D200", Offset = "0x5F1C200", VA = "0x5F1D200")]
	public SqlSingle(float value)
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x5F1D270", Offset = "0x5F1C270", VA = "0x5F1D270")]
	public SqlSingle(double value)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x5F1D330", Offset = "0x5F1C330", VA = "0x5F1D330")]
	public static implicit operator SqlSingle(float x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x5F1D3A0", Offset = "0x5F1C3A0", VA = "0x5F1D3A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x5F1D410", Offset = "0x5F1C410", VA = "0x5F1D410")]
	public static SqlSingle operator -(SqlSingle x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x5F1D500", Offset = "0x5F1C500", VA = "0x5F1D500")]
	public static SqlSingle operator +(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x5F1D670", Offset = "0x5F1C670", VA = "0x5F1D670")]
	public static SqlSingle operator -(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x5F1D7E0", Offset = "0x5F1C7E0", VA = "0x5F1D7E0")]
	public static SqlSingle operator *(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x5F1D950", Offset = "0x5F1C950", VA = "0x5F1D950")]
	public static SqlSingle operator /(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x5F1DB10", Offset = "0x5F1CB10", VA = "0x5F1DB10")]
	public static implicit operator SqlSingle(SqlByte x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x5F1DC40", Offset = "0x5F1CC40", VA = "0x5F1DC40")]
	public static implicit operator SqlSingle(SqlInt16 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x5F1DD70", Offset = "0x5F1CD70", VA = "0x5F1DD70")]
	public static implicit operator SqlSingle(SqlInt32 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x5F1DEA0", Offset = "0x5F1CEA0", VA = "0x5F1DEA0")]
	public static implicit operator SqlSingle(SqlInt64 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x5F1DFD0", Offset = "0x5F1CFD0", VA = "0x5F1DFD0")]
	public static implicit operator SqlSingle(SqlMoney x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x5F1E150", Offset = "0x5F1D150", VA = "0x5F1E150")]
	public static implicit operator SqlSingle(SqlDecimal x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x5F15BC0", Offset = "0x5F14BC0", VA = "0x5F15BC0")]
	public static explicit operator SqlSingle(SqlDouble x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x5F1E2B0", Offset = "0x5F1D2B0", VA = "0x5F1E2B0")]
	public static SqlBoolean operator ==(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x5F1E3B0", Offset = "0x5F1D3B0", VA = "0x5F1E3B0")]
	public static SqlBoolean operator <(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x5F1E4A0", Offset = "0x5F1D4A0", VA = "0x5F1E4A0")]
	public static SqlBoolean operator >(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x5F1E590", Offset = "0x5F1D590", VA = "0x5F1E590")]
	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x5F1E5E0", Offset = "0x5F1D5E0", VA = "0x5F1E5E0")]
	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x5F1E630", Offset = "0x5F1D630", VA = "0x5F1E630")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x5F1E680", Offset = "0x5F1D680", VA = "0x5F1E680", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x5F1E770", Offset = "0x5F1D770", VA = "0x5F1E770")]
	public int CompareTo(SqlSingle value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x5F1E8E0", Offset = "0x5F1D8E0", VA = "0x5F1E8E0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x5F1EA10", Offset = "0x5F1DA10", VA = "0x5F1EA10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x5F1EAE0", Offset = "0x5F1DAE0", VA = "0x5F1EAE0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x5F1EAF0", Offset = "0x5F1DAF0", VA = "0x5F1EAF0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x5F1EC00", Offset = "0x5F1DC00", VA = "0x5F1EC00", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x5F1ED50", Offset = "0x5F1DD50", VA = "0x5F1ED50")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
