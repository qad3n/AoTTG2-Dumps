// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Dynamic;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200012C")]
internal class JsonSerializerInternalWriter : JsonSerializerInternalBase
{
	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x38")]
	private Type? _rootType;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x40")]
	private int _rootLevel;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<object> _serializeStack;

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x55E1FE0", Offset = "0x55E0FE0", VA = "0x55E1FE0")]
	public JsonSerializerInternalWriter(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x55E2060", Offset = "0x55E1060", VA = "0x55E2060")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x55E2EC0", Offset = "0x55E1EC0", VA = "0x55E2EC0")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x55E22E0", Offset = "0x55E12E0", VA = "0x55E22E0")]
	private JsonContract? GetContractSafe(object? value)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x55E3030", Offset = "0x55E2030", VA = "0x55E3030")]
	private JsonContract GetContract(object value)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x55E3100", Offset = "0x55E2100", VA = "0x55E3100")]
	private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x55E2790", Offset = "0x55E1790", VA = "0x55E2790")]
	private void SerializeValue(JsonWriter writer, object? value, JsonContract? valueContract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x55E6440", Offset = "0x55E5440", VA = "0x55E6440")]
	private bool? ResolveIsReference(JsonContract contract, JsonProperty? property, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x55E22F0", Offset = "0x55E12F0", VA = "0x55E22F0")]
	private bool ShouldWriteReference(object? value, JsonProperty? property, JsonContract? valueContract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x55E6510", Offset = "0x55E5510", VA = "0x55E6510")]
	private bool ShouldWriteProperty(object? memberValue, JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x55E65E0", Offset = "0x55E55E0", VA = "0x55E65E0")]
	private bool CheckForCircularReference(JsonWriter writer, object? value, JsonProperty? property, JsonContract? contract, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x55E2500", Offset = "0x55E1500", VA = "0x55E2500")]
	private void WriteReference(JsonWriter writer, object value)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x55E6A00", Offset = "0x55E5A00", VA = "0x55E6A00")]
	private string GetReference(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x55E6BF0", Offset = "0x55E5BF0", VA = "0x55E6BF0")]
	internal static bool TryConvertToString(object value, Type type, [NotNullWhen(true)] out string? s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x55E4D40", Offset = "0x55E3D40", VA = "0x55E4D40")]
	private void SerializeString(JsonWriter writer, object value, JsonStringContract contract)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x55E6EC0", Offset = "0x55E5EC0", VA = "0x55E6EC0")]
	private void OnSerializing(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x55E70D0", Offset = "0x55E60D0", VA = "0x55E70D0")]
	private void OnSerialized(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x55E3BF0", Offset = "0x55E2BF0", VA = "0x55E3BF0")]
	private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x55E7490", Offset = "0x55E6490", VA = "0x55E7490")]
	private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, JsonProperty? member, JsonProperty property, [NotNullWhen(true)] out JsonContract? memberContract, out object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x55E72E0", Offset = "0x55E62E0", VA = "0x55E72E0")]
	private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x55E82C0", Offset = "0x55E72C0", VA = "0x55E82C0")]
	private bool HasCreatorParameter(JsonContainerContract? contract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x55E8370", Offset = "0x55E7370", VA = "0x55E8370")]
	private void WriteReferenceIdProperty(JsonWriter writer, Type type, object value)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x55E3450", Offset = "0x55E2450", VA = "0x55E3450")]
	private void WriteTypeProperty(JsonWriter writer, Type type)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x55E65D0", Offset = "0x55E55D0", VA = "0x55E65D0")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x55E6500", Offset = "0x55E5500", VA = "0x55E6500")]
	private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x55E85C0", Offset = "0x55E75C0", VA = "0x55E85C0")]
	private bool HasFlag(TypeNameHandling value, TypeNameHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x55E36D0", Offset = "0x55E26D0", VA = "0x55E36D0")]
	private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x55E43B0", Offset = "0x55E33B0", VA = "0x55E43B0")]
	private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x55E4AF0", Offset = "0x55E3AF0", VA = "0x55E4AF0")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x55E8920", Offset = "0x55E7920", VA = "0x55E8920")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, int initialDepth, int[] indices)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x55E85D0", Offset = "0x55E75D0", VA = "0x55E85D0")]
	private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x55E5F20", Offset = "0x55E4F20", VA = "0x55E5F20")]
	private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x55E56F0", Offset = "0x55E46F0", VA = "0x55E56F0")]
	private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x55E8E20", Offset = "0x55E7E20", VA = "0x55E8E20")]
	private bool ShouldWriteDynamicProperty(object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x55E3270", Offset = "0x55E2270", VA = "0x55E3270")]
	private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x55E4DC0", Offset = "0x55E3DC0", VA = "0x55E4DC0")]
	private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x55E7930", Offset = "0x55E6930", VA = "0x55E7930")]
	private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x55E2E50", Offset = "0x55E1E50", VA = "0x55E2E50")]
	private void HandleError(JsonWriter writer, int initialDepth)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x55E7E20", Offset = "0x55E6E20", VA = "0x55E7E20")]
	private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x55E8070", Offset = "0x55E7070", VA = "0x55E8070")]
	private bool IsSpecified(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}
}
