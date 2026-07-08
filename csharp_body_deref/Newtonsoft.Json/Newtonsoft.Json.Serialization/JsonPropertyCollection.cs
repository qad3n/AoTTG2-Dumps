using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000124")]
public class JsonPropertyCollection : KeyedCollection<string, JsonProperty>
{
	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x30")]
	private readonly Type _type;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<JsonProperty> _list;

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x3AD71E0", Offset = "0x3AD71E0", VA = "0x3AD71E0")]
	public JsonPropertyCollection(Type type)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x3AE5500", Offset = "0x3AE5500", VA = "0x3AE5500", Slot = "39")]
	protected override string GetKeyForItem(JsonProperty item)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x3AD73C0", Offset = "0x3AD73C0", VA = "0x3AD73C0")]
	public void AddProperty(JsonProperty property)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x3AD7690", Offset = "0x3AD7690", VA = "0x3AD7690")]
	public JsonProperty GetClosestMatchProperty(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x3AE5600", Offset = "0x3AE5600", VA = "0x3AE5600")]
	private bool TryGetProperty(string key, [NotNullWhen(true)] out JsonProperty? item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x3AE5520", Offset = "0x3AE5520", VA = "0x3AE5520")]
	public JsonProperty GetProperty(string propertyName, StringComparison comparisonType)
	{
		return null;
	}
}
