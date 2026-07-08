using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A5")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDateTime : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x4")]
	private int m_day;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x8")]
	private int m_time;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x0")]
	private static readonly double s_SQLTicksPerMillisecond;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int SQLTicksPerSecond;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0xC")]
	public static readonly int SQLTicksPerMinute;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int SQLTicksPerHour;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_SQLTicksPerDay;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_ticksPerSecond;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly DateTime s_SQLBaseDate;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly long s_SQLBaseDateTicks;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int s_minYear;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int s_maxYear;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int s_minDay;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int s_maxDay;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int s_minTime;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int s_maxTime;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int s_dayBase;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int[] s_daysToMonth365;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x58")]
	private static readonly int[] s_daysToMonth366;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x60")]
	private static readonly DateTime s_minDateTime;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x68")]
	private static readonly DateTime s_maxDateTime;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x70")]
	private static readonly TimeSpan s_minTimeSpan;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x78")]
	private static readonly TimeSpan s_maxTimeSpan;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string s_ISO8601_DateTimeFormat;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x88")]
	private static readonly string[] s_dateTimeFormats;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x90")]
	public static readonly SqlDateTime MinValue;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x9C")]
	public static readonly SqlDateTime MaxValue;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0xA8")]
	public static readonly SqlDateTime Null;

	[Token(Token = "0x17000184")]
	public bool IsNull
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x42C9B70", Offset = "0x42C9B70", VA = "0x42C9B70", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	public DateTime Value
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x42C9F30", Offset = "0x42C9F30", VA = "0x42C9F30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000186")]
	public int DayTicks
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x42C9FC0", Offset = "0x42C9FC0", VA = "0x42C9FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000187")]
	public int TimeTicks
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x42CA010", Offset = "0x42CA010", VA = "0x42CA010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x42C98D0", Offset = "0x42C98D0", VA = "0x42C98D0")]
	private SqlDateTime(bool fNull)
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x42C98E0", Offset = "0x42C98E0", VA = "0x42C98E0")]
	public SqlDateTime(DateTime value)
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x42C9A30", Offset = "0x42C9A30", VA = "0x42C9A30")]
	public SqlDateTime(int dayTicks, int timeTicks)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x42C9B80", Offset = "0x42C9B80", VA = "0x42C9B80")]
	private static TimeSpan ToTimeSpan(SqlDateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x42C9C00", Offset = "0x42C9C00", VA = "0x42C9C00")]
	private static DateTime ToDateTime(SqlDateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x42C9D40", Offset = "0x42C9D40", VA = "0x42C9D40")]
	private static SqlDateTime FromTimeSpan(TimeSpan value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x42C9940", Offset = "0x42C9940", VA = "0x42C9940")]
	private static SqlDateTime FromDateTime(DateTime value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x42CA060", Offset = "0x42CA060", VA = "0x42CA060")]
	public static implicit operator SqlDateTime(DateTime value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x42CA0C0", Offset = "0x42CA0C0", VA = "0x42CA0C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x42CA180", Offset = "0x42CA180", VA = "0x42CA180")]
	public static SqlBoolean operator ==(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x42CA280", Offset = "0x42CA280", VA = "0x42CA280")]
	public static SqlBoolean operator <(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x42CA390", Offset = "0x42CA390", VA = "0x42CA390")]
	public static SqlBoolean operator >(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x42CA4A0", Offset = "0x42CA4A0", VA = "0x42CA4A0")]
	public static SqlBoolean LessThan(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x42CA500", Offset = "0x42CA500", VA = "0x42CA500")]
	public static SqlBoolean GreaterThan(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x42CA560", Offset = "0x42CA560", VA = "0x42CA560", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x42CA650", Offset = "0x42CA650", VA = "0x42CA650")]
	public int CompareTo(SqlDateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x42CA7C0", Offset = "0x42CA7C0", VA = "0x42CA7C0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x42CA910", Offset = "0x42CA910", VA = "0x42CA910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x42CA9C0", Offset = "0x42CA9C0", VA = "0x42CA9C0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x42CA9D0", Offset = "0x42CA9D0", VA = "0x42CA9D0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x42CABE0", Offset = "0x42CABE0", VA = "0x42CABE0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x42CAD60", Offset = "0x42CAD60", VA = "0x42CAD60")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
