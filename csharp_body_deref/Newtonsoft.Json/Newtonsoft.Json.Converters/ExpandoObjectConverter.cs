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
		[Address(RVA = "0x5635E80", Offset = "0x5634E80", VA = "0x5635E80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x5635820", Offset = "0x5634820", VA = "0x5635820", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x5635830", Offset = "0x5634830", VA = "0x5635830", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x5635840", Offset = "0x5634840", VA = "0x5635840")]
	private object ReadValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x5635C20", Offset = "0x5634C20", VA = "0x5635C20")]
	private object ReadList(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x56359A0", Offset = "0x56349A0", VA = "0x56359A0")]
	private object ReadObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x5635E10", Offset = "0x5634E10", VA = "0x5635E10", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x5635E90", Offset = "0x5634E90", VA = "0x5635E90")]
	public ExpandoObjectConverter()
	{
	}
}
