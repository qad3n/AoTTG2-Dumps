// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.UnixDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E47300", Offset = "0x3E47300", VA = "0x3E47300")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x3E47310", Offset = "0x3E47310", VA = "0x3E47310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x3E47320", Offset = "0x3E47320", VA = "0x3E47320")]
	public UnixDateTimeConverter()
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x3E47340", Offset = "0x3E47340", VA = "0x3E47340")]
	public UnixDateTimeConverter(bool allowPreEpoch)
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x3E47360", Offset = "0x3E47360", VA = "0x3E47360", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x3E475A0", Offset = "0x3E475A0", VA = "0x3E475A0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}
}
