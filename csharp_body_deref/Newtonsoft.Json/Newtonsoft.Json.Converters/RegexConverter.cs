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
	[Address(RVA = "0x3B503E0", Offset = "0x3B503E0", VA = "0x3B503E0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x3B507D0", Offset = "0x3B507D0", VA = "0x3B507D0")]
	private bool HasFlag(RegexOptions options, RegexOptions flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x3B504F0", Offset = "0x3B504F0", VA = "0x3B504F0")]
	private void WriteBson(BsonWriter writer, Regex regex)
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x3B50620", Offset = "0x3B50620", VA = "0x3B50620")]
	private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x3B507E0", Offset = "0x3B507E0", VA = "0x3B507E0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x3B50BE0", Offset = "0x3B50BE0", VA = "0x3B50BE0")]
	private object ReadRegexString(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x3B50880", Offset = "0x3B50880", VA = "0x3B50880")]
	private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x3B50D20", Offset = "0x3B50D20", VA = "0x3B50D20", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x3B50D80", Offset = "0x3B50D80", VA = "0x3B50D80")]
	private bool IsRegex(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x3B50DF0", Offset = "0x3B50DF0", VA = "0x3B50DF0")]
	public RegexConverter()
	{
	}
}
