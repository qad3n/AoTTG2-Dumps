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
	[Address(RVA = "0x1C91740", Offset = "0x1C8FD40", VA = "0x181C91740", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x1C91450", Offset = "0x1C8FA50", VA = "0x181C91450", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x1C90DB0", Offset = "0x1C8F3B0", VA = "0x181C90DB0")]
	private static void CreateRow(JsonReader reader, DataTable dt, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x1C91230", Offset = "0x1C8F830", VA = "0x181C91230")]
	private static Type GetColumnDataType(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x1C90D30", Offset = "0x1C8F330", VA = "0x181C90D30", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DataTableConverter()
	{
	}
}
