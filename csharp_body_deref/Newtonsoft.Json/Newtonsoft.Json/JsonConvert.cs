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
		[Address(RVA = "0x1BCCE80", Offset = "0x1BCB480", VA = "0x181BCCE80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x1BCCED0", Offset = "0x1BCB4D0", VA = "0x181BCCED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x1BCC940", Offset = "0x1BCAF40", VA = "0x181BCC940")]
	public static string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x1BCC130", Offset = "0x1BCA730", VA = "0x181BCC130")]
	public static string ToString(DateTime value, DateFormatHandling format, DateTimeZoneHandling timeZoneHandling)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x1BCC9A0", Offset = "0x1BCAFA0", VA = "0x181BCC9A0")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x1BCBD50", Offset = "0x1BCA350", VA = "0x181BCBD50")]
	public static string ToString(DateTimeOffset value, DateFormatHandling format)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x1BCC0A0", Offset = "0x1BCA6A0", VA = "0x181BCC0A0")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1BCA920", Offset = "0x1BC8F20", VA = "0x181BCA920")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1BCCC30", Offset = "0x1BCB230", VA = "0x181BCCC30")]
	public static string ToString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1BCA990", Offset = "0x1BC8F90", VA = "0x181BCA990")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1BCC300", Offset = "0x1BCA900", VA = "0x181BCC300")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1BCC360", Offset = "0x1BCA960", VA = "0x181BCC360")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x1BCC3C0", Offset = "0x1BCA9C0", VA = "0x181BCC3C0")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1BCC820", Offset = "0x1BCAE20", VA = "0x181BCC820")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1BCA630", Offset = "0x1BC8C30", VA = "0x181BCA630")]
	private static string ToStringInternal(BigInteger value)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1BCA8C0", Offset = "0x1BC8EC0", VA = "0x181BCA8C0")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1BCBFE0", Offset = "0x1BCA5E0", VA = "0x181BCBFE0")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1BCC6D0", Offset = "0x1BCACD0", VA = "0x181BCC6D0")]
	internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1BC9300", Offset = "0x1BC7900", VA = "0x181BC9300")]
	private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1BCC880", Offset = "0x1BCAE80", VA = "0x181BCC880")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1BCCAC0", Offset = "0x1BCB0C0", VA = "0x181BCCAC0")]
	internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1BC91D0", Offset = "0x1BC77D0", VA = "0x181BC91D0")]
	private static string EnsureDecimalPlace(double value, string text)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1BC92A0", Offset = "0x1BC78A0", VA = "0x181BC92A0")]
	private static string EnsureDecimalPlace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1BCBCF0", Offset = "0x1BCA2F0", VA = "0x181BCBCF0")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x1BCC7C0", Offset = "0x1BCADC0", VA = "0x181BCC7C0")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x1BCA6C0", Offset = "0x1BC8CC0", VA = "0x181BCA6C0")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x1BCA7C0", Offset = "0x1BC8DC0", VA = "0x181BCA7C0")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1BCCA00", Offset = "0x1BCB000", VA = "0x181BCCA00")]
	internal static string ToString(Guid value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x1BCC5A0", Offset = "0x1BCABA0", VA = "0x181BCC5A0")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x1BCCBA0", Offset = "0x1BCB1A0", VA = "0x181BCCBA0")]
	internal static string ToString(TimeSpan value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x1BCC420", Offset = "0x1BCAA20", VA = "0x181BCC420")]
	public static string ToString(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x1BCBC70", Offset = "0x1BCA270", VA = "0x181BCBC70")]
	internal static string ToString(Uri value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x1BCBF20", Offset = "0x1BCA520", VA = "0x181BCBF20")]
	public static string ToString(string? value)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1BCBB70", Offset = "0x1BCA170", VA = "0x181BCBB70")]
	public static string ToString(string? value, char delimiter)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x1BCBA90", Offset = "0x1BCA090", VA = "0x181BCBA90")]
	public static string ToString(string? value, char delimiter, StringEscapeHandling stringEscapeHandling)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1BCA9F0", Offset = "0x1BC8FF0", VA = "0x181BCA9F0")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x1BC9A50", Offset = "0x1BC8050", VA = "0x181BC9A50")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x1BC9AF0", Offset = "0x1BC80F0", VA = "0x181BC9AF0")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1BC9940", Offset = "0x1BC7F40", VA = "0x181BC9940")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1BC9CC0", Offset = "0x1BC82C0", VA = "0x181BC9CC0")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1BC9EB0", Offset = "0x1BC84B0", VA = "0x181BC9EB0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x1BC98C0", Offset = "0x1BC7EC0", VA = "0x181BC98C0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x1BC9BF0", Offset = "0x1BC81F0", VA = "0x181BC9BF0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1BC9E00", Offset = "0x1BC8400", VA = "0x181BC9E00")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1BC96C0", Offset = "0x1BC7CC0", VA = "0x181BC96C0")]
	private static string SerializeObjectInternal(object? value, Type? type, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x1BC8860", Offset = "0x1BC6E60", VA = "0x181BC8860")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x1BC8640", Offset = "0x1BC6C40", VA = "0x181BC8640")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, JsonSerializerSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x1BC88B0", Offset = "0x1BC6EB0", VA = "0x181BC88B0")]
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
	[Address(RVA = "0x1BC8570", Offset = "0x1BC6B70", VA = "0x181BC8570")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, Type type, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1BC86A0", Offset = "0x1BC6CA0", VA = "0x181BC86A0")]
	public static object? DeserializeObject(string value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x1BC9660", Offset = "0x1BC7C60", VA = "0x181BC9660")]
	[DebuggerStepThrough]
	public static void PopulateObject(string value, object target)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x1BC9450", Offset = "0x1BC7A50", VA = "0x181BC9450")]
	public static void PopulateObject(string value, object target, JsonSerializerSettings? settings)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x1BCA310", Offset = "0x1BC8910", VA = "0x181BCA310")]
	public static string SerializeXmlNode(XmlNode? node)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x1BCA540", Offset = "0x1BC8B40", VA = "0x181BCA540")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1BCA440", Offset = "0x1BC8A40", VA = "0x181BCA440")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1BC90F0", Offset = "0x1BC76F0", VA = "0x181BC90F0")]
	public static XmlDocument DeserializeXmlNode(string value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x1BC9170", Offset = "0x1BC7770", VA = "0x181BC9170")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1BC8D70", Offset = "0x1BC7370", VA = "0x181BC8D70")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x1BC8F40", Offset = "0x1BC7540", VA = "0x181BC8F40")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x1BC9F70", Offset = "0x1BC8570", VA = "0x181BC9F70")]
	public static string SerializeXNode(XObject? node)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x1BCA1D0", Offset = "0x1BC87D0", VA = "0x181BCA1D0")]
	public static string SerializeXNode(XObject? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x1BCA0D0", Offset = "0x1BC86D0", VA = "0x181BCA0D0")]
	public static string SerializeXNode(XObject? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x1BC8CF0", Offset = "0x1BC72F0", VA = "0x181BC8CF0")]
	public static XDocument DeserializeXNode(string value)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x1BC8AE0", Offset = "0x1BC70E0", VA = "0x181BC8AE0")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x1BC8910", Offset = "0x1BC6F10", VA = "0x181BC8910")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x1BC8B40", Offset = "0x1BC7140", VA = "0x181BC8B40")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}
}
