// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.ExpandoObjectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B7")]
public class ExpandoObjectConverter : JsonConverter
{
	[Token(Token = "0x1700024D")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x1C94240", Offset = "0x1C92840", VA = "0x181C94240", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x1C94540", Offset = "0x1C92B40", VA = "0x181C94540")]
	private object ReadValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x1C94250", Offset = "0x1C92850", VA = "0x181C94250")]
	private object ReadList(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x1C94370", Offset = "0x1C92970", VA = "0x181C94370")]
	private object ReadObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x1C941D0", Offset = "0x1C927D0", VA = "0x181C941D0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ExpandoObjectConverter()
	{
	}
}
