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
		[Address(RVA = "0x5556820", Offset = "0x5555820", VA = "0x5556820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x5556890", Offset = "0x5555890", VA = "0x5556890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5556900", Offset = "0x5555900", VA = "0x5556900")]
	public static string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5556950", Offset = "0x5555950", VA = "0x5556950")]
	public static string ToString(DateTime value, DateFormatHandling format, DateTimeZoneHandling timeZoneHandling)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5556B90", Offset = "0x5555B90", VA = "0x5556B90")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x5556BE0", Offset = "0x5555BE0", VA = "0x5556BE0")]
	public static string ToString(DateTimeOffset value, DateFormatHandling format)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x5556E10", Offset = "0x5555E10", VA = "0x5556E10")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x5556E90", Offset = "0x5555E90", VA = "0x5556E90")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5557040", Offset = "0x5556040", VA = "0x5557040")]
	public static string ToString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5557080", Offset = "0x5556080", VA = "0x5557080")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x55570E0", Offset = "0x55560E0", VA = "0x55570E0")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5557140", Offset = "0x5556140", VA = "0x5557140")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x55571A0", Offset = "0x55561A0", VA = "0x55571A0")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5557200", Offset = "0x5556200", VA = "0x5557200")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5557260", Offset = "0x5556260", VA = "0x5557260")]
	private static string ToStringInternal(BigInteger value)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x55572F0", Offset = "0x55562F0", VA = "0x55572F0")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5557350", Offset = "0x5556350", VA = "0x5557350")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5557560", Offset = "0x5556560", VA = "0x5557560")]
	internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x55576D0", Offset = "0x55566D0", VA = "0x55576D0")]
	private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x55577E0", Offset = "0x55567E0", VA = "0x55577E0")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x5557940", Offset = "0x5556940", VA = "0x5557940")]
	internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable)
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x55574B0", Offset = "0x55564B0", VA = "0x55574B0")]
	private static string EnsureDecimalPlace(double value, string text)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5557AB0", Offset = "0x5556AB0", VA = "0x5557AB0")]
	private static string EnsureDecimalPlace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5557B00", Offset = "0x5556B00", VA = "0x5557B00")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5557B60", Offset = "0x5556B60", VA = "0x5557B60")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5557BC0", Offset = "0x5556BC0", VA = "0x5557BC0")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5557CD0", Offset = "0x5556CD0", VA = "0x5557CD0")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5557D30", Offset = "0x5556D30", VA = "0x5557D30")]
	internal static string ToString(Guid value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5557E00", Offset = "0x5556E00", VA = "0x5557E00")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5557E70", Offset = "0x5556E70", VA = "0x5557E70")]
	internal static string ToString(TimeSpan value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5557FA0", Offset = "0x5556FA0", VA = "0x5557FA0")]
	public static string ToString(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x5558050", Offset = "0x5557050", VA = "0x5558050")]
	internal static string ToString(Uri value, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5556F10", Offset = "0x5555F10", VA = "0x5556F10")]
	public static string ToString(string? value)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x5557F50", Offset = "0x5556F50", VA = "0x5557F50")]
	public static string ToString(string? value, char delimiter)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x5558100", Offset = "0x5557100", VA = "0x5558100")]
	public static string ToString(string? value, char delimiter, StringEscapeHandling stringEscapeHandling)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x55581C0", Offset = "0x55571C0", VA = "0x55581C0")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x5558D20", Offset = "0x5557D20", VA = "0x5558D20")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5558E50", Offset = "0x5557E50", VA = "0x5558E50")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x5559000", Offset = "0x5558000", VA = "0x5559000")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x5559210", Offset = "0x5558210", VA = "0x5559210")]
	[DebuggerStepThrough]
	public static string SerializeObject(object? value, Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x55593F0", Offset = "0x55583F0", VA = "0x55593F0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x5558DD0", Offset = "0x5557DD0", VA = "0x5558DD0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x5558FA0", Offset = "0x5557FA0", VA = "0x5558FA0")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x5559350", Offset = "0x5558350", VA = "0x5559350")]
	[DebuggerStepThrough]
	public static string? SerializeObject(object? value, Type? type, Formatting formatting, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x5559500", Offset = "0x5558500", VA = "0x5559500")]
	private static string SerializeObjectInternal(object? value, Type? type, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x5559760", Offset = "0x5558760", VA = "0x5559760")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x55599D0", Offset = "0x55589D0", VA = "0x55599D0")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, JsonSerializerSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5559A30", Offset = "0x5558A30", VA = "0x5559A30")]
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
	[Address(RVA = "0x5559A90", Offset = "0x5558A90", VA = "0x5559A90")]
	[DebuggerStepThrough]
	public static object DeserializeObject(string value, Type type, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x55597B0", Offset = "0x55587B0", VA = "0x55597B0")]
	public static object? DeserializeObject(string value, Type? type, JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5559D80", Offset = "0x5558D80", VA = "0x5559D80")]
	[DebuggerStepThrough]
	public static void PopulateObject(string value, object target)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5559DE0", Offset = "0x5558DE0", VA = "0x5559DE0")]
	public static void PopulateObject(string value, object target, JsonSerializerSettings? settings)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x555A110", Offset = "0x5559110", VA = "0x555A110")]
	public static string SerializeXmlNode(XmlNode? node)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x555A180", Offset = "0x5559180", VA = "0x555A180")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x555A280", Offset = "0x5559280", VA = "0x555A280")]
	public static string SerializeXmlNode(XmlNode? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x555A380", Offset = "0x5559380", VA = "0x555A380")]
	public static XmlDocument DeserializeXmlNode(string value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x555A490", Offset = "0x5559490", VA = "0x555A490")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x555A540", Offset = "0x5559540", VA = "0x555A540")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x555A5A0", Offset = "0x55595A0", VA = "0x555A5A0")]
	public static XmlDocument? DeserializeXmlNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x555A750", Offset = "0x5559750", VA = "0x555A750")]
	public static string SerializeXNode(XObject? node)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x555A800", Offset = "0x5559800", VA = "0x555A800")]
	public static string SerializeXNode(XObject? node, Formatting formatting)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x555A850", Offset = "0x5559850", VA = "0x555A850")]
	public static string SerializeXNode(XObject? node, Formatting formatting, bool omitRootObject)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x555A950", Offset = "0x5559950", VA = "0x555A950")]
	public static XDocument DeserializeXNode(string value)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x555AA60", Offset = "0x5559A60", VA = "0x555AA60")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x555AB10", Offset = "0x5559B10", VA = "0x555AB10")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x555AB70", Offset = "0x5559B70", VA = "0x555AB70")]
	public static XDocument? DeserializeXNode(string value, string? deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters)
	{
		return null;
	}
}
