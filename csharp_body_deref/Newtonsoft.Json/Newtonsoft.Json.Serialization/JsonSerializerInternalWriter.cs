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
	[Address(RVA = "0x1C69520", Offset = "0x1C67B20", VA = "0x181C69520")]
	public JsonSerializerInternalWriter(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x1C67A20", Offset = "0x1C66020", VA = "0x181C67A20")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x1C621B0", Offset = "0x1C607B0", VA = "0x181C621B0")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x1C620B0", Offset = "0x1C606B0", VA = "0x181C620B0")]
	private JsonContract? GetContractSafe(object? value)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x1C62130", Offset = "0x1C60730", VA = "0x181C62130")]
	private JsonContract GetContract(object value)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x1C66F70", Offset = "0x1C65570", VA = "0x181C66F70")]
	private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x1C672E0", Offset = "0x1C658E0", VA = "0x181C672E0")]
	private void SerializeValue(JsonWriter writer, object? value, JsonContract? valueContract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x1C62F50", Offset = "0x1C61550", VA = "0x181C62F50")]
	private bool? ResolveIsReference(JsonContract contract, JsonProperty? property, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x1C68050", Offset = "0x1C66650", VA = "0x181C68050")]
	private bool ShouldWriteReference(object? value, JsonProperty? property, JsonContract? valueContract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x1C67F90", Offset = "0x1C66590", VA = "0x181C67F90")]
	private bool ShouldWriteProperty(object? memberValue, JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x1C61CA0", Offset = "0x1C602A0", VA = "0x181C61CA0")]
	private bool CheckForCircularReference(JsonWriter writer, object? value, JsonProperty? property, JsonContract? contract, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x1C68C50", Offset = "0x1C67250", VA = "0x181C68C50")]
	private void WriteReference(JsonWriter writer, object value)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x1C627C0", Offset = "0x1C60DC0", VA = "0x181C627C0")]
	private string GetReference(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x1C68400", Offset = "0x1C66A00", VA = "0x181C68400")]
	internal static bool TryConvertToString(object value, Type type, [NotNullWhen(true)] out string? s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x1C67240", Offset = "0x1C65840", VA = "0x181C67240")]
	private void SerializeString(JsonWriter writer, object value, JsonStringContract contract)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x1C62DD0", Offset = "0x1C613D0", VA = "0x181C62DD0")]
	private void OnSerializing(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x1C62C50", Offset = "0x1C61250", VA = "0x181C62C50")]
	private void OnSerialized(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x1C663F0", Offset = "0x1C649F0", VA = "0x181C663F0")]
	private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x1C61430", Offset = "0x1C5FA30", VA = "0x181C61430")]
	private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, JsonProperty? member, JsonProperty property, [NotNullWhen(true)] out JsonContract? memberContract, out object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x1C686B0", Offset = "0x1C66CB0", VA = "0x181C686B0")]
	private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x1C629E0", Offset = "0x1C60FE0", VA = "0x181C629E0")]
	private bool HasCreatorParameter(JsonContainerContract? contract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x1C68AB0", Offset = "0x1C670B0", VA = "0x181C68AB0")]
	private void WriteReferenceIdProperty(JsonWriter writer, Type type, object value)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x1C69330", Offset = "0x1C67930", VA = "0x181C69330")]
	private void WriteTypeProperty(JsonWriter writer, Type type)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(TypeNameHandling value, TypeNameHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x1C62FE0", Offset = "0x1C615E0", VA = "0x181C62FE0")]
	private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x1C65810", Offset = "0x1C63E10", VA = "0x181C65810")]
	private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x1C661A0", Offset = "0x1C647A0", VA = "0x181C661A0")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x1C65DB0", Offset = "0x1C643B0", VA = "0x181C65DB0")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, int initialDepth, int[] indices)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x1C68E40", Offset = "0x1C67440", VA = "0x181C68E40")]
	private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x1C64EB0", Offset = "0x1C634B0", VA = "0x181C64EB0")]
	private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x1C63EC0", Offset = "0x1C624C0", VA = "0x181C63EC0")]
	private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x1C67EE0", Offset = "0x1C664E0", VA = "0x181C67EE0")]
	private bool ShouldWriteDynamicProperty(object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x1C68230", Offset = "0x1C66830", VA = "0x181C68230")]
	private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x1C63400", Offset = "0x1C61A00", VA = "0x181C63400")]
	private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x1C62280", Offset = "0x1C60880", VA = "0x181C62280")]
	private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x1C62960", Offset = "0x1C60F60", VA = "0x181C62960")]
	private void HandleError(JsonWriter writer, int initialDepth)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x1C67D20", Offset = "0x1C66320", VA = "0x181C67D20")]
	private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x1C62A90", Offset = "0x1C61090", VA = "0x181C62A90")]
	private bool IsSpecified(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}
}
