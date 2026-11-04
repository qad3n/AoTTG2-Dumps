// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlDateTime
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
[Token(Token = "0x20000AF")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDateTime : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x4")]
	private int m_day;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x8")]
	private int m_time;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x0")]
	private static readonly double s_SQLTicksPerMillisecond;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int SQLTicksPerSecond;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0xC")]
	public static readonly int SQLTicksPerMinute;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int SQLTicksPerHour;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_SQLTicksPerDay;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_ticksPerSecond;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly DateTime s_SQLBaseDate;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x28")]
	private static readonly long s_SQLBaseDateTicks;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int s_minYear;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int s_maxYear;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int s_minDay;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int s_maxDay;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int s_minTime;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int s_maxTime;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int s_dayBase;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int[] s_daysToMonth365;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x58")]
	private static readonly int[] s_daysToMonth366;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x60")]
	private static readonly DateTime s_minDateTime;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x68")]
	private static readonly DateTime s_maxDateTime;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x70")]
	private static readonly TimeSpan s_minTimeSpan;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x78")]
	private static readonly TimeSpan s_maxTimeSpan;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string s_ISO8601_DateTimeFormat;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x88")]
	private static readonly string[] s_dateTimeFormats;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x90")]
	public static readonly SqlDateTime MinValue;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x9C")]
	public static readonly SqlDateTime MaxValue;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0xA8")]
	public static readonly SqlDateTime Null;

	[Token(Token = "0x17000187")]
	public bool IsNull
	{
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000188")]
	public DateTime Value
	{
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x2564A10", Offset = "0x2563010", VA = "0x182564A10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000189")]
	public int DayTicks
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x2564950", Offset = "0x2562F50", VA = "0x182564950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	public int TimeTicks
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x25649B0", Offset = "0x2562FB0", VA = "0x1825649B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x2564810", Offset = "0x2562E10", VA = "0x182564810")]
	private SqlDateTime(bool fNull)
	{
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x25647A0", Offset = "0x2562DA0", VA = "0x1825647A0")]
	public SqlDateTime(DateTime value)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x2564820", Offset = "0x2562E20", VA = "0x182564820")]
	public SqlDateTime(int dayTicks, int timeTicks)
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x2564100", Offset = "0x2562700", VA = "0x182564100")]
	private static TimeSpan ToTimeSpan(SqlDateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x2563F40", Offset = "0x2562540", VA = "0x182563F40")]
	private static DateTime ToDateTime(SqlDateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x2563620", Offset = "0x2561C20", VA = "0x182563620")]
	private static SqlDateTime FromTimeSpan(TimeSpan value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x25634F0", Offset = "0x2561AF0", VA = "0x1825634F0")]
	private static SqlDateTime FromDateTime(DateTime value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x2564C90", Offset = "0x2563290", VA = "0x182564C90")]
	public static implicit operator SqlDateTime(DateTime value)
	{
		return default(SqlDateTime);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x2564030", Offset = "0x2562630", VA = "0x182564030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x2564AC0", Offset = "0x25630C0", VA = "0x182564AC0")]
	public static SqlBoolean operator ==(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x2564D10", Offset = "0x2563310", VA = "0x182564D10")]
	public static SqlBoolean operator <(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x2564BA0", Offset = "0x25631A0", VA = "0x182564BA0")]
	public static SqlBoolean operator >(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x2563A80", Offset = "0x2562080", VA = "0x182563A80")]
	public static SqlBoolean LessThan(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x2563950", Offset = "0x2561F50", VA = "0x182563950")]
	public static SqlBoolean GreaterThan(SqlDateTime x, SqlDateTime y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x2563000", Offset = "0x2561600", VA = "0x182563000", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x2563130", Offset = "0x2561730", VA = "0x182563130")]
	public int CompareTo(SqlDateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x25632E0", Offset = "0x25618E0", VA = "0x1825632E0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x2563830", Offset = "0x2561E30", VA = "0x182563830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x2563BB0", Offset = "0x25621B0", VA = "0x182563BB0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x2563DE0", Offset = "0x25623E0", VA = "0x182563DE0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x25638E0", Offset = "0x2561EE0", VA = "0x1825638E0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
