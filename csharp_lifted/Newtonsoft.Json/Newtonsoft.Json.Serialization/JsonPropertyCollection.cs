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
	[Address(RVA = "0x55C5410", Offset = "0x55C4410", VA = "0x55C5410")]
	public JsonPropertyCollection(Type type)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x55D34B0", Offset = "0x55D24B0", VA = "0x55D34B0", Slot = "39")]
	protected override string GetKeyForItem(JsonProperty item)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x55C55F0", Offset = "0x55C45F0", VA = "0x55C55F0")]
	public void AddProperty(JsonProperty property)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x55C58C0", Offset = "0x55C48C0", VA = "0x55C58C0")]
	public JsonProperty GetClosestMatchProperty(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x55D35B0", Offset = "0x55D25B0", VA = "0x55D35B0")]
	private bool TryGetProperty(string key, [NotNullWhen(true)] out JsonProperty? item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x55D34D0", Offset = "0x55D24D0", VA = "0x55D34D0")]
	public JsonProperty GetProperty(string propertyName, StringComparison comparisonType)
	{
		return null;
	}
}
