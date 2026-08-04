// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.IsoDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Globalization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B8")]
public class IsoDateTimeConverter : DateTimeConverterBase
{
	[Token(Token = "0x4000805")]
	private const string DefaultDateTimeFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.FFFFFFFK";

	[Token(Token = "0x4000806")]
	[FieldOffset(Offset = "0x10")]
	private DateTimeStyles _dateTimeStyles;

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x18")]
	private string? _dateTimeFormat;

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x20")]
	private CultureInfo? _culture;

	[Token(Token = "0x1700024E")]
	public DateTimeStyles DateTimeStyles
	{
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x3E440A0", Offset = "0x3E440A0", VA = "0x3E440A0")]
		get
		{
			return default(DateTimeStyles);
		}
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x3E440B0", Offset = "0x3E440B0", VA = "0x3E440B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public string? DateTimeFormat
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x3E440C0", Offset = "0x3E440C0", VA = "0x3E440C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x3E440F0", Offset = "0x3E440F0", VA = "0x3E440F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x3E44130", Offset = "0x3E44130", VA = "0x3E44130")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x3E44190", Offset = "0x3E44190", VA = "0x3E44190")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x3E441A0", Offset = "0x3E441A0", VA = "0x3E441A0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x3E44500", Offset = "0x3E44500", VA = "0x3E44500", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x3E44B10", Offset = "0x3E44B10", VA = "0x3E44B10")]
	public IsoDateTimeConverter()
	{
	}
}
