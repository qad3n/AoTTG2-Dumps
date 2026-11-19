// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.DataTableConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Data;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AF")]
public class DataTableConverter : JsonConverter
{
	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x5631CA0", Offset = "0x5630CA0", VA = "0x5631CA0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x56324F0", Offset = "0x56314F0", VA = "0x56324F0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x56327B0", Offset = "0x56317B0", VA = "0x56327B0")]
	private static void CreateRow(JsonReader reader, DataTable dt, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x5632D90", Offset = "0x5631D90", VA = "0x5632D90")]
	private static Type GetColumnDataType(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x5632F50", Offset = "0x5631F50", VA = "0x5632F50", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x56318C0", Offset = "0x56308C0", VA = "0x56318C0")]
	public DataTableConverter()
	{
	}
}
