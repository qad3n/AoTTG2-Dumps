using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BD")]
public class UnixDateTimeConverter : DateTimeConverterBase
{
	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DateTime UnixEpoch;

	[Token(Token = "0x17000254")]
	public bool AllowPreEpoch
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x3B519B0", Offset = "0x3B519B0", VA = "0x3B519B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x3B519C0", Offset = "0x3B519C0", VA = "0x3B519C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x3B519D0", Offset = "0x3B519D0", VA = "0x3B519D0")]
	public UnixDateTimeConverter()
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x3B519F0", Offset = "0x3B519F0", VA = "0x3B519F0")]
	public UnixDateTimeConverter(bool allowPreEpoch)
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x3B51A10", Offset = "0x3B51A10", VA = "0x3B51A10", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x3B51C50", Offset = "0x3B51C50", VA = "0x3B51C50", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}
}
