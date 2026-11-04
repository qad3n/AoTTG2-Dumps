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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x1CAF940", Offset = "0x1CADF40", VA = "0x181CAF940")]
	public UnixDateTimeConverter()
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x1CAF960", Offset = "0x1CADF60", VA = "0x181CAF960")]
	public UnixDateTimeConverter(bool allowPreEpoch)
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x1CAF5E0", Offset = "0x1CADBE0", VA = "0x181CAF5E0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x1CAF110", Offset = "0x1CAD710", VA = "0x181CAF110", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}
}
