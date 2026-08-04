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
	[Address(RVA = "0x3DCCB30", Offset = "0x3DCCB30", VA = "0x3DCCB30")]
	public JsonPropertyCollection(Type type)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x3DDAE50", Offset = "0x3DDAE50", VA = "0x3DDAE50", Slot = "39")]
	protected override string GetKeyForItem(JsonProperty item)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x3DCCD10", Offset = "0x3DCCD10", VA = "0x3DCCD10")]
	public void AddProperty(JsonProperty property)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x3DCCFE0", Offset = "0x3DCCFE0", VA = "0x3DCCFE0")]
	public JsonProperty GetClosestMatchProperty(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x3DDAF50", Offset = "0x3DDAF50", VA = "0x3DDAF50")]
	private bool TryGetProperty(string key, [NotNullWhen(true)] out JsonProperty? item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x3DDAE70", Offset = "0x3DDAE70", VA = "0x3DDAE70")]
	public JsonProperty GetProperty(string propertyName, StringComparison comparisonType)
	{
		return null;
	}
}
