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
	[Address(RVA = "0x3DEA680", Offset = "0x3DEA680", VA = "0x3DEA680")]
	public JsonSerializerInternalWriter(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x3DEA700", Offset = "0x3DEA700", VA = "0x3DEA700")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x3DEB5E0", Offset = "0x3DEB5E0", VA = "0x3DEB5E0")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x3DEAA00", Offset = "0x3DEAA00", VA = "0x3DEAA00")]
	private JsonContract? GetContractSafe(object? value)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x3DEB750", Offset = "0x3DEB750", VA = "0x3DEB750")]
	private JsonContract GetContract(object value)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x3DEB820", Offset = "0x3DEB820", VA = "0x3DEB820")]
	private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x3DEAEC0", Offset = "0x3DEAEC0", VA = "0x3DEAEC0")]
	private void SerializeValue(JsonWriter writer, object? value, JsonContract? valueContract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x3DEF150", Offset = "0x3DEF150", VA = "0x3DEF150")]
	private bool? ResolveIsReference(JsonContract contract, JsonProperty? property, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x3DEAA10", Offset = "0x3DEAA10", VA = "0x3DEAA10")]
	private bool ShouldWriteReference(object? value, JsonProperty? property, JsonContract? valueContract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x3DEF210", Offset = "0x3DEF210", VA = "0x3DEF210")]
	private bool ShouldWriteProperty(object? memberValue, JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x3DEF2F0", Offset = "0x3DEF2F0", VA = "0x3DEF2F0")]
	private bool CheckForCircularReference(JsonWriter writer, object? value, JsonProperty? property, JsonContract? contract, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x3DEAC30", Offset = "0x3DEAC30", VA = "0x3DEAC30")]
	private void WriteReference(JsonWriter writer, object value)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x3DEF890", Offset = "0x3DEF890", VA = "0x3DEF890")]
	private string GetReference(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x3DEFAA0", Offset = "0x3DEFAA0", VA = "0x3DEFAA0")]
	internal static bool TryConvertToString(object value, Type type, [NotNullWhen(true)] out string? s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x3DED790", Offset = "0x3DED790", VA = "0x3DED790")]
	private void SerializeString(JsonWriter writer, object value, JsonStringContract contract)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x3DEFD90", Offset = "0x3DEFD90", VA = "0x3DEFD90")]
	private void OnSerializing(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x3DEFFA0", Offset = "0x3DEFFA0", VA = "0x3DEFFA0")]
	private void OnSerialized(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x3DEC360", Offset = "0x3DEC360", VA = "0x3DEC360")]
	private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x3DF0360", Offset = "0x3DF0360", VA = "0x3DF0360")]
	private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, JsonProperty? member, JsonProperty property, [NotNullWhen(true)] out JsonContract? memberContract, out object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x3DF01B0", Offset = "0x3DF01B0", VA = "0x3DF01B0")]
	private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x3DF1190", Offset = "0x3DF1190", VA = "0x3DF1190")]
	private bool HasCreatorParameter(JsonContainerContract? contract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x3DF1240", Offset = "0x3DF1240", VA = "0x3DF1240")]
	private void WriteReferenceIdProperty(JsonWriter writer, Type type, object value)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x3DEBBC0", Offset = "0x3DEBBC0", VA = "0x3DEBBC0")]
	private void WriteTypeProperty(JsonWriter writer, Type type)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x3DEF2E0", Offset = "0x3DEF2E0", VA = "0x3DEF2E0")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x3DEF200", Offset = "0x3DEF200", VA = "0x3DEF200")]
	private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x3DF1490", Offset = "0x3DF1490", VA = "0x3DF1490")]
	private bool HasFlag(TypeNameHandling value, TypeNameHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x3DEBE40", Offset = "0x3DEBE40", VA = "0x3DEBE40")]
	private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x3DECCF0", Offset = "0x3DECCF0", VA = "0x3DECCF0")]
	private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x3DED550", Offset = "0x3DED550", VA = "0x3DED550")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x3DF1840", Offset = "0x3DF1840", VA = "0x3DF1840")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, int initialDepth, int[] indices)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x3DF14A0", Offset = "0x3DF14A0", VA = "0x3DF14A0")]
	private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x3DEEBD0", Offset = "0x3DEEBD0", VA = "0x3DEEBD0")]
	private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x3DEE210", Offset = "0x3DEE210", VA = "0x3DEE210")]
	private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x3DF1E00", Offset = "0x3DF1E00", VA = "0x3DF1E00")]
	private bool ShouldWriteDynamicProperty(object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x3DEB990", Offset = "0x3DEB990", VA = "0x3DEB990")]
	private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x3DED810", Offset = "0x3DED810", VA = "0x3DED810")]
	private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x3DF0810", Offset = "0x3DF0810", VA = "0x3DF0810")]
	private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x3DEB570", Offset = "0x3DEB570", VA = "0x3DEB570")]
	private void HandleError(JsonWriter writer, int initialDepth)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x3DF0CF0", Offset = "0x3DF0CF0", VA = "0x3DF0CF0")]
	private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x3DF0F40", Offset = "0x3DF0F40", VA = "0x3DF0F40")]
	private bool IsSpecified(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}
}
