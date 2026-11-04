// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonPropertyCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1C43E90", Offset = "0x1C42490", VA = "0x181C43E90")]
	public JsonPropertyCollection(Type type)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x1C43BB0", Offset = "0x1C421B0", VA = "0x181C43BB0", Slot = "39")]
	protected override string GetKeyForItem(JsonProperty item)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x1C43880", Offset = "0x1C41E80", VA = "0x181C43880")]
	public void AddProperty(JsonProperty property)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x1C43B60", Offset = "0x1C42160", VA = "0x181C43B60")]
	public JsonProperty GetClosestMatchProperty(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x1C43D90", Offset = "0x1C42390", VA = "0x181C43D90")]
	private bool TryGetProperty(string key, [NotNullWhen(true)] out JsonProperty? item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x1C43BD0", Offset = "0x1C421D0", VA = "0x181C43BD0")]
	public JsonProperty GetProperty(string propertyName, StringComparison comparisonType)
	{
		return null;
	}
}
