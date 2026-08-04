// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonConvert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D55360", Offset = "0x3D55360", VA = "0x3D55360")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3D553D0", Offset = "0x3D553D0", VA = "0x3D553D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3D55440", Offset = "0x3D55440", VA = "0x3D55440")]
	public static string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3D55490", Offset = "0x3D55490", VA = "0x3D55490")]
	public static string ToString(DateTime value, DateFormatHandling format, DateTimeZoneHandling timeZoneHandling)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3D55700", Offset = "0x3D55700", VA = "0x3D55700")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3D55750", Offset = "0x3D55750", VA = "0x3D55750")]
	public static string ToString(DateTimeOffset value, DateFormatHandling format)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3D559D0", Offset = "0x3D559D0", VA = "0x3D559D0")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3D55A30", Offset = "0x3D55A30", VA = "0x3D55A30")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3D55BD0", Offset = "0x3D55BD0", VA = "0x3D55BD0")]
	public static string ToString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3D55C10", Offset = "0x3D55C10", VA = "0x3D55C10")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3D55C70", Offset = "0x3D55C70", VA = "0x3D55C70")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3D55CD0", Offset = "0x3D55CD0", VA = "0x3D55CD0")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3D55D30", Offset = "0x3D55D30", VA = "0x3D55D30")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3D55D90", Offset = "0x3D55D90", VA = "0x3D55D90")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3D55DF0", Offset = "0x3D55DF0", VA = "0x3D55DF0")]
	private static string ToStringInternal(BigInteger value)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3D55E80", Offset = "0x3D55E80", VA = "0x3D55E80")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3D55EE0", Offset = "0x3D55EE0", VA = "0x3D55EE0")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3D560F0", Offset = "0x3D560F0", VA = "0x3D560F0")]
	internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3D56260", Offset = "0x3D56260", VA = "0x3D56260")]
	private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3D56370", Offset = "0x3D56370", VA = "0x3D56370")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3D564D0", Offset = "0x3D564D0", VA = "0x3D564D0")]
	internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3D56040", Offset = "0x3D56040", VA = "0x3D56040")]
	private static string EnsureDecimalPlace(double value, string text)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3D56640", Offset = "0x3D56640", VA = "0x3D56640")]
	private static string EnsureDecimalPlace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3D56690", Offset = "0x3D56690", VA = "0x3D56690")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3D566F0", Offset = "0x3D566F0", VA = "0x3D566F0")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3D56750", Offset = "0x3D56750", VA = "0x3D56750")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3D56860", Offset = "0x3D56860", VA = "0x3D56860")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3D568C0", Offset = "0x3D568C0", VA = "0x3D568C0")]
	internal static string ToString(Guid value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3D56990", Offset = "0x3D56990", VA = "0x3D56990")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3D56A00", Offset = "0x3D56A00", VA = "0x3D56A00")]
	internal static string ToString(TimeSpan value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3D56B30", Offset = "0x3D56B30", VA = "0x3D56B30")]
	public static string ToString(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3D56BD0", Offset = "0x3D56BD0", VA = "0x3D56BD0")]
	internal static string ToString(Uri value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3D55AA0", Offset = "0x3D55AA0", VA = "0x3D55AA0")]
	public static string ToString(string? value)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3D56AE0", Offset = "0x3D56AE0", VA = "0x3D56AE0")]
	public static string ToString(string? value, char delimiter)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3D56C80", Offset = "0x3D56C80", VA = "0x3D56C80")]
	public static string ToString(string? value, char delimiter, StringEscapeHandling stringEscapeHandling)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3D56D40", Offset = "0x3D56D40", VA = "0x3D56D40")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3D57890", Offset = "0x3D57890", VA = "0x3D57890")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3D579C0", Offset = "0x3D579C0", VA = "0x3D579C0")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3D57B70", Offset = "0x3D57B70", VA = "0x3D57B70")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3D57D90", Offset = "0x3D57D90", VA = "0x3D57D90")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3D57F70", Offset = "0x3D57F70", VA = "0x3D57F70")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3D57940", Offset = "0x3D57940", VA = "0x3D57940")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3D57B10", Offset = "0x3D57B10", VA = "0x3D57B10")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3D57ED0", Offset = "0x3D57ED0", VA = "0x3D57ED0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3D58080", Offset = "0x3D58080", VA = "0x3D58080")]
	private static string SerializeObjectInternal(object? value, Type? type, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3D58360", Offset = "0x3D58360", VA = "0x3D58360")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3D58620", Offset = "0x3D58620", VA = "0x3D58620")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, JsonSerializerSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3D58680", Offset = "0x3D58680", VA = "0x3D58680")]
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
	[Address(RVA = "0x3D586E0", Offset = "0x3D586E0", VA = "0x3D586E0")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, Type type, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3D583B0", Offset = "0x3D583B0", VA = "0x3D583B0")]
	public static object? DeserializeObject(string value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3D589D0", Offset = "0x3D589D0", VA = "0x3D589D0")]
	[DebuggerStepThrough]
	public static void PopulateObject(string value, object target)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3D58A20", Offset = "0x3D58A20", VA = "0x3D58A20")]
	public static void PopulateObject(string value, object target, JsonSerializerSettings? settings)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3D58E20", Offset = "0x3D58E20", VA = "0x3D58E20")]
	public static string SerializeXmlNode(XmlNode? node)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3D58E80", Offset = "0x3D58E80", VA = "0x3D58E80")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3D58F80", Offset = "0x3D58F80", VA = "0x3D58F80")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3D59080", Offset = "0x3D59080", VA = "0x3D59080")]
	public static XmlDocument DeserializeXmlNode(string value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3D59190", Offset = "0x3D59190", VA = "0x3D59190")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3D59240", Offset = "0x3D59240", VA = "0x3D59240")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3D592A0", Offset = "0x3D592A0", VA = "0x3D592A0")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3D59450", Offset = "0x3D59450", VA = "0x3D59450")]
	public static string SerializeXNode(XObject? node)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3D59500", Offset = "0x3D59500", VA = "0x3D59500")]
	public static string SerializeXNode(XObject? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3D59550", Offset = "0x3D59550", VA = "0x3D59550")]
	public static string SerializeXNode(XObject? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3D59650", Offset = "0x3D59650", VA = "0x3D59650")]
	public static XDocument DeserializeXNode(string value)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3D59760", Offset = "0x3D59760", VA = "0x3D59760")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3D59810", Offset = "0x3D59810", VA = "0x3D59810")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3D59870", Offset = "0x3D59870", VA = "0x3D59870")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}
}
