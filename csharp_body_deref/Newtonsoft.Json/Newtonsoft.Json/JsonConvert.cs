using System;
using System.Diagnostics;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Xml;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x200001A")]
public static class JsonConvert
{
	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string True;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string False;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string Null;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string Undefined;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string PositiveInfinity;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string NegativeInfinity;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string NaN;

	[Token(Token = "0x17000012")]
	public static Func<JsonSerializerSettings>? DefaultSettings
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x3A5FA10", Offset = "0x3A5FA10", VA = "0x3A5FA10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3A5FA80", Offset = "0x3A5FA80", VA = "0x3A5FA80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3A5FAF0", Offset = "0x3A5FAF0", VA = "0x3A5FAF0")]
	public static string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3A5FB40", Offset = "0x3A5FB40", VA = "0x3A5FB40")]
	public static string ToString(DateTime value, DateFormatHandling format, DateTimeZoneHandling timeZoneHandling)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3A5FDB0", Offset = "0x3A5FDB0", VA = "0x3A5FDB0")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3A5FE00", Offset = "0x3A5FE00", VA = "0x3A5FE00")]
	public static string ToString(DateTimeOffset value, DateFormatHandling format)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3A60080", Offset = "0x3A60080", VA = "0x3A60080")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3A600E0", Offset = "0x3A600E0", VA = "0x3A600E0")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3A60280", Offset = "0x3A60280", VA = "0x3A60280")]
	public static string ToString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3A602C0", Offset = "0x3A602C0", VA = "0x3A602C0")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3A60320", Offset = "0x3A60320", VA = "0x3A60320")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3A60380", Offset = "0x3A60380", VA = "0x3A60380")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3A603E0", Offset = "0x3A603E0", VA = "0x3A603E0")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3A60440", Offset = "0x3A60440", VA = "0x3A60440")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3A604A0", Offset = "0x3A604A0", VA = "0x3A604A0")]
	private static string ToStringInternal(BigInteger value)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3A60530", Offset = "0x3A60530", VA = "0x3A60530")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3A60590", Offset = "0x3A60590", VA = "0x3A60590")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3A607A0", Offset = "0x3A607A0", VA = "0x3A607A0")]
	internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3A60910", Offset = "0x3A60910", VA = "0x3A60910")]
	private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3A60A20", Offset = "0x3A60A20", VA = "0x3A60A20")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3A60B80", Offset = "0x3A60B80", VA = "0x3A60B80")]
	internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3A606F0", Offset = "0x3A606F0", VA = "0x3A606F0")]
	private static string EnsureDecimalPlace(double value, string text)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3A60CF0", Offset = "0x3A60CF0", VA = "0x3A60CF0")]
	private static string EnsureDecimalPlace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3A60D40", Offset = "0x3A60D40", VA = "0x3A60D40")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3A60DA0", Offset = "0x3A60DA0", VA = "0x3A60DA0")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3A60E00", Offset = "0x3A60E00", VA = "0x3A60E00")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3A60F10", Offset = "0x3A60F10", VA = "0x3A60F10")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3A60F70", Offset = "0x3A60F70", VA = "0x3A60F70")]
	internal static string ToString(Guid value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3A61040", Offset = "0x3A61040", VA = "0x3A61040")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3A610B0", Offset = "0x3A610B0", VA = "0x3A610B0")]
	internal static string ToString(TimeSpan value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3A611E0", Offset = "0x3A611E0", VA = "0x3A611E0")]
	public static string ToString(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3A61280", Offset = "0x3A61280", VA = "0x3A61280")]
	internal static string ToString(Uri value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3A60150", Offset = "0x3A60150", VA = "0x3A60150")]
	public static string ToString(string? value)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3A61190", Offset = "0x3A61190", VA = "0x3A61190")]
	public static string ToString(string? value, char delimiter)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3A61330", Offset = "0x3A61330", VA = "0x3A61330")]
	public static string ToString(string? value, char delimiter, StringEscapeHandling stringEscapeHandling)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3A613F0", Offset = "0x3A613F0", VA = "0x3A613F0")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3A61F40", Offset = "0x3A61F40", VA = "0x3A61F40")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3A62070", Offset = "0x3A62070", VA = "0x3A62070")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3A62220", Offset = "0x3A62220", VA = "0x3A62220")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3A62440", Offset = "0x3A62440", VA = "0x3A62440")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3A62620", Offset = "0x3A62620", VA = "0x3A62620")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3A61FF0", Offset = "0x3A61FF0", VA = "0x3A61FF0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3A621C0", Offset = "0x3A621C0", VA = "0x3A621C0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3A62580", Offset = "0x3A62580", VA = "0x3A62580")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3A62730", Offset = "0x3A62730", VA = "0x3A62730")]
	private static string SerializeObjectInternal(object? value, Type? type, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3A62A10", Offset = "0x3A62A10", VA = "0x3A62A10")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3A62CD0", Offset = "0x3A62CD0", VA = "0x3A62CD0")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, JsonSerializerSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3A62D30", Offset = "0x3A62D30", VA = "0x3A62D30")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, Type type)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[DebuggerStepThrough]
	public static T? DeserializeObject<T>(string value)
	{
		return (T?)null;
	}

	[Token(Token = "0x600006B")]
	[DebuggerStepThrough]
	public static T DeserializeAnonymousType<T>(string value, T anonymousTypeObject) where T : notnull
	{
		return (T)null;
	}

	[Token(Token = "0x600006C")]
	[DebuggerStepThrough]
	public static T DeserializeAnonymousType<T>(string value, T anonymousTypeObject, JsonSerializerSettings settings) where T : notnull
	{
		return (T)null;
	}

	[Token(Token = "0x600006D")]
	[DebuggerStepThrough]
	public static T DeserializeObject<T>(string value, params JsonConverter[] converters) where T : notnull
	{
		return (T)null;
	}

	[Token(Token = "0x600006E")]
	[DebuggerStepThrough]
	public static T? DeserializeObject<T>(string value, JsonSerializerSettings? settings)
	{
		return (T?)null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3A62D90", Offset = "0x3A62D90", VA = "0x3A62D90")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, Type type, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3A62A60", Offset = "0x3A62A60", VA = "0x3A62A60")]
	public static object? DeserializeObject(string value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3A63080", Offset = "0x3A63080", VA = "0x3A63080")]
	[DebuggerStepThrough]
	public static void PopulateObject(string value, object target)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3A630D0", Offset = "0x3A630D0", VA = "0x3A630D0")]
	public static void PopulateObject(string value, object target, JsonSerializerSettings? settings)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3A634D0", Offset = "0x3A634D0", VA = "0x3A634D0")]
	public static string SerializeXmlNode(XmlNode? node)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3A63530", Offset = "0x3A63530", VA = "0x3A63530")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3A63630", Offset = "0x3A63630", VA = "0x3A63630")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3A63730", Offset = "0x3A63730", VA = "0x3A63730")]
	public static XmlDocument DeserializeXmlNode(string value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3A63840", Offset = "0x3A63840", VA = "0x3A63840")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3A638F0", Offset = "0x3A638F0", VA = "0x3A638F0")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3A63950", Offset = "0x3A63950", VA = "0x3A63950")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3A63B00", Offset = "0x3A63B00", VA = "0x3A63B00")]
	public static string SerializeXNode(XObject? node)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3A63BB0", Offset = "0x3A63BB0", VA = "0x3A63BB0")]
	public static string SerializeXNode(XObject? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3A63C00", Offset = "0x3A63C00", VA = "0x3A63C00")]
	public static string SerializeXNode(XObject? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3A63D00", Offset = "0x3A63D00", VA = "0x3A63D00")]
	public static XDocument DeserializeXNode(string value)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3A63E10", Offset = "0x3A63E10", VA = "0x3A63E10")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3A63EC0", Offset = "0x3A63EC0", VA = "0x3A63EC0")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3A63F20", Offset = "0x3A63F20", VA = "0x3A63F20")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}
}
