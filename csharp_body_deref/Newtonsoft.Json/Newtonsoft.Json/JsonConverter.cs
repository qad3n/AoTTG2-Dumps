// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x200001B")]
public abstract class JsonConverter
{
	[Token(Token = "0x17000013")]
	public virtual bool CanRead
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x3D59B80", Offset = "0x3D59B80", VA = "0x3D59B80", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public virtual bool CanWrite
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x3D59B90", Offset = "0x3D59B90", VA = "0x3D59B90", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000082")]
	public abstract void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer);

	[Token(Token = "0x6000083")]
	public abstract object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer);

	[Token(Token = "0x6000084")]
	public abstract bool CanConvert(Type objectType);

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3D59BA0", Offset = "0x3D59BA0", VA = "0x3D59BA0")]
	protected JsonConverter()
	{
	}
}
[Token(Token = "0x200001C")]
public abstract class JsonConverter<T> : JsonConverter where T : notnull
{
	[Token(Token = "0x6000088")]
	public sealed override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000089")]
	public abstract void WriteJson(JsonWriter writer, T? value, JsonSerializer serializer);

	[Token(Token = "0x600008A")]
	public sealed override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x600008B")]
	public abstract T ReadJson(JsonReader reader, Type objectType, T? existingValue, bool hasExistingValue, JsonSerializer serializer);

	[Token(Token = "0x600008C")]
	public sealed override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	protected JsonConverter()
	{
	}
}
