// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.RegexConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Newtonsoft.Json.Bson;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BB")]
public class RegexConverter : JsonConverter
{
	[Token(Token = "0x400080C")]
	private const string PatternName = "Pattern";

	[Token(Token = "0x400080D")]
	private const string OptionsName = "Options";

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x3E45D30", Offset = "0x3E45D30", VA = "0x3E45D30", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x3E46120", Offset = "0x3E46120", VA = "0x3E46120")]
	private bool HasFlag(RegexOptions options, RegexOptions flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x3E45E40", Offset = "0x3E45E40", VA = "0x3E45E40")]
	private void WriteBson(BsonWriter writer, Regex regex)
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x3E45F70", Offset = "0x3E45F70", VA = "0x3E45F70")]
	private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x3E46130", Offset = "0x3E46130", VA = "0x3E46130", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x3E46530", Offset = "0x3E46530", VA = "0x3E46530")]
	private object ReadRegexString(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x3E461D0", Offset = "0x3E461D0", VA = "0x3E461D0")]
	private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x3E46670", Offset = "0x3E46670", VA = "0x3E46670", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x3E466D0", Offset = "0x3E466D0", VA = "0x3E466D0")]
	private bool IsRegex(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x3E46740", Offset = "0x3E46740", VA = "0x3E46740")]
	public RegexConverter()
	{
	}
}
