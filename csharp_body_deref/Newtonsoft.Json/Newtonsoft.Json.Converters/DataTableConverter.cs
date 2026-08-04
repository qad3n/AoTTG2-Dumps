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
	[Address(RVA = "0x3E3FD50", Offset = "0x3E3FD50", VA = "0x3E3FD50", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x3E406E0", Offset = "0x3E406E0", VA = "0x3E406E0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x3E409B0", Offset = "0x3E409B0", VA = "0x3E409B0")]
	private static void CreateRow(JsonReader reader, DataTable dt, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x3E40F60", Offset = "0x3E40F60", VA = "0x3E40F60")]
	private static Type GetColumnDataType(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x3E41120", Offset = "0x3E41120", VA = "0x3E41120", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x3E3F960", Offset = "0x3E3F960", VA = "0x3E3F960")]
	public DataTableConverter()
	{
	}
}
