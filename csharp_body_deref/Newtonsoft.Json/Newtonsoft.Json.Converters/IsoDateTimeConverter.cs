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
		[Address(RVA = "0x5635EA0", Offset = "0x5634EA0", VA = "0x5635EA0")]
		get
		{
			return default(DateTimeStyles);
		}
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x5635EB0", Offset = "0x5634EB0", VA = "0x5635EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public string? DateTimeFormat
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x5635EC0", Offset = "0x5634EC0", VA = "0x5635EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x5635EF0", Offset = "0x5634EF0", VA = "0x5635EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x5635F30", Offset = "0x5634F30", VA = "0x5635F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x5635F90", Offset = "0x5634F90", VA = "0x5635F90")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x5635FA0", Offset = "0x5634FA0", VA = "0x5635FA0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x5636300", Offset = "0x5635300", VA = "0x5636300", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x56368F0", Offset = "0x56358F0", VA = "0x56368F0")]
	public IsoDateTimeConverter()
	{
	}
}
