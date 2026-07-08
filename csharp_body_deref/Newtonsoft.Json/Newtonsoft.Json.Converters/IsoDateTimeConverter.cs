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
		[Address(RVA = "0x3B4E750", Offset = "0x3B4E750", VA = "0x3B4E750")]
		get
		{
			return default(DateTimeStyles);
		}
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x3B4E760", Offset = "0x3B4E760", VA = "0x3B4E760")]
		set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public string? DateTimeFormat
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x3B4E770", Offset = "0x3B4E770", VA = "0x3B4E770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x3B4E7A0", Offset = "0x3B4E7A0", VA = "0x3B4E7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x3B4E7E0", Offset = "0x3B4E7E0", VA = "0x3B4E7E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x3B4E840", Offset = "0x3B4E840", VA = "0x3B4E840")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x3B4E850", Offset = "0x3B4E850", VA = "0x3B4E850", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x3B4EBB0", Offset = "0x3B4EBB0", VA = "0x3B4EBB0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x3B4F1C0", Offset = "0x3B4F1C0", VA = "0x3B4F1C0")]
	public IsoDateTimeConverter()
	{
	}
}
