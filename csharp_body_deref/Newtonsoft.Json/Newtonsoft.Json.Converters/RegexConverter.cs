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
	[Address(RVA = "0x1CA3260", Offset = "0x1CA1860", VA = "0x181CA3260", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(RegexOptions options, RegexOptions flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x1CA2F70", Offset = "0x1CA1570", VA = "0x181CA2F70")]
	private void WriteBson(BsonWriter writer, Regex regex)
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x1CA30A0", Offset = "0x1CA16A0", VA = "0x181CA30A0")]
	private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x1CA2950", Offset = "0x1CA0F50", VA = "0x181CA2950", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x1CA2E10", Offset = "0x1CA1410", VA = "0x181CA2E10")]
	private object ReadRegexString(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x1CA2B40", Offset = "0x1CA1140", VA = "0x181CA2B40")]
	private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x1CA2850", Offset = "0x1CA0E50", VA = "0x181CA2850", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x1CA28E0", Offset = "0x1CA0EE0", VA = "0x181CA28E0")]
	private bool IsRegex(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RegexConverter()
	{
	}
}
