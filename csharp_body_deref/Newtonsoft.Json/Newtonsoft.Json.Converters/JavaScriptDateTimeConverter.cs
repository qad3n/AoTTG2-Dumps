// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.JavaScriptDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B9")]
public class JavaScriptDateTimeConverter : DateTimeConverterBase
{
	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x1CA15F0", Offset = "0x1C9FBF0", VA = "0x181CA15F0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x1CA1240", Offset = "0x1C9F840", VA = "0x181CA1240", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public JavaScriptDateTimeConverter()
	{
	}
}
