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
	[Address(RVA = "0x5637A00", Offset = "0x5636A00", VA = "0x5637A00", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x5637DF0", Offset = "0x5636DF0", VA = "0x5637DF0")]
	private bool HasFlag(RegexOptions options, RegexOptions flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x5637B10", Offset = "0x5636B10", VA = "0x5637B10")]
	private void WriteBson(BsonWriter writer, Regex regex)
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x5637C40", Offset = "0x5636C40", VA = "0x5637C40")]
	private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x5637E00", Offset = "0x5636E00", VA = "0x5637E00", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x5638140", Offset = "0x5637140", VA = "0x5638140")]
	private object ReadRegexString(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x5637EA0", Offset = "0x5636EA0", VA = "0x5637EA0")]
	private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x5638280", Offset = "0x5637280", VA = "0x5638280", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x56382F0", Offset = "0x56372F0", VA = "0x56382F0")]
	private bool IsRegex(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x5638360", Offset = "0x5637360", VA = "0x5638360")]
	public RegexConverter()
	{
	}
}
