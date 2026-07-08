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
	[Address(RVA = "0x3AF4D30", Offset = "0x3AF4D30", VA = "0x3AF4D30")]
	public JsonSerializerInternalWriter(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x3AF4DB0", Offset = "0x3AF4DB0", VA = "0x3AF4DB0")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x3AF5C90", Offset = "0x3AF5C90", VA = "0x3AF5C90")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x3AF50B0", Offset = "0x3AF50B0", VA = "0x3AF50B0")]
	private JsonContract? GetContractSafe(object? value)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x3AF5E00", Offset = "0x3AF5E00", VA = "0x3AF5E00")]
	private JsonContract GetContract(object value)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x3AF5ED0", Offset = "0x3AF5ED0", VA = "0x3AF5ED0")]
	private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x3AF5570", Offset = "0x3AF5570", VA = "0x3AF5570")]
	private void SerializeValue(JsonWriter writer, object? value, JsonContract? valueContract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x3AF9800", Offset = "0x3AF9800", VA = "0x3AF9800")]
	private bool? ResolveIsReference(JsonContract contract, JsonProperty? property, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x3AF50C0", Offset = "0x3AF50C0", VA = "0x3AF50C0")]
	private bool ShouldWriteReference(object? value, JsonProperty? property, JsonContract? valueContract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x3AF98C0", Offset = "0x3AF98C0", VA = "0x3AF98C0")]
	private bool ShouldWriteProperty(object? memberValue, JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x3AF99A0", Offset = "0x3AF99A0", VA = "0x3AF99A0")]
	private bool CheckForCircularReference(JsonWriter writer, object? value, JsonProperty? property, JsonContract? contract, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x3AF52E0", Offset = "0x3AF52E0", VA = "0x3AF52E0")]
	private void WriteReference(JsonWriter writer, object value)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x3AF9F40", Offset = "0x3AF9F40", VA = "0x3AF9F40")]
	private string GetReference(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x3AFA150", Offset = "0x3AFA150", VA = "0x3AFA150")]
	internal static bool TryConvertToString(object value, Type type, [NotNullWhen(true)] out string? s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x3AF7E40", Offset = "0x3AF7E40", VA = "0x3AF7E40")]
	private void SerializeString(JsonWriter writer, object value, JsonStringContract contract)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x3AFA440", Offset = "0x3AFA440", VA = "0x3AFA440")]
	private void OnSerializing(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x3AFA650", Offset = "0x3AFA650", VA = "0x3AFA650")]
	private void OnSerialized(JsonWriter writer, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x3AF6A10", Offset = "0x3AF6A10", VA = "0x3AF6A10")]
	private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x3AFAA10", Offset = "0x3AFAA10", VA = "0x3AFAA10")]
	private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, JsonProperty? member, JsonProperty property, [NotNullWhen(true)] out JsonContract? memberContract, out object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x3AFA860", Offset = "0x3AFA860", VA = "0x3AFA860")]
	private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x3AFB840", Offset = "0x3AFB840", VA = "0x3AFB840")]
	private bool HasCreatorParameter(JsonContainerContract? contract, JsonProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x3AFB8F0", Offset = "0x3AFB8F0", VA = "0x3AFB8F0")]
	private void WriteReferenceIdProperty(JsonWriter writer, Type type, object value)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x3AF6270", Offset = "0x3AF6270", VA = "0x3AF6270")]
	private void WriteTypeProperty(JsonWriter writer, Type type)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x3AF9990", Offset = "0x3AF9990", VA = "0x3AF9990")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x3AF98B0", Offset = "0x3AF98B0", VA = "0x3AF98B0")]
	private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x3AFBB40", Offset = "0x3AFBB40", VA = "0x3AFBB40")]
	private bool HasFlag(TypeNameHandling value, TypeNameHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x3AF64F0", Offset = "0x3AF64F0", VA = "0x3AF64F0")]
	private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x3AF73A0", Offset = "0x3AF73A0", VA = "0x3AF73A0")]
	private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x3AF7C00", Offset = "0x3AF7C00", VA = "0x3AF7C00")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x3AFBEF0", Offset = "0x3AFBEF0", VA = "0x3AFBEF0")]
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty? member, int initialDepth, int[] indices)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x3AFBB50", Offset = "0x3AFBB50", VA = "0x3AFBB50")]
	private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x3AF9280", Offset = "0x3AF9280", VA = "0x3AF9280")]
	private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x3AF88C0", Offset = "0x3AF88C0", VA = "0x3AF88C0")]
	private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x3AFC4B0", Offset = "0x3AFC4B0", VA = "0x3AFC4B0")]
	private bool ShouldWriteDynamicProperty(object? memberValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x3AF6040", Offset = "0x3AF6040", VA = "0x3AF6040")]
	private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x3AF7EC0", Offset = "0x3AF7EC0", VA = "0x3AF7EC0")]
	private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, JsonProperty? member, JsonContainerContract? collectionContract, JsonProperty? containerProperty)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x3AFAEC0", Offset = "0x3AFAEC0", VA = "0x3AFAEC0")]
	private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x3AF5C20", Offset = "0x3AF5C20", VA = "0x3AF5C20")]
	private void HandleError(JsonWriter writer, int initialDepth)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x3AFB3A0", Offset = "0x3AFB3A0", VA = "0x3AFB3A0")]
	private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x3AFB5F0", Offset = "0x3AFB5F0", VA = "0x3AFB5F0")]
	private bool IsSpecified(JsonWriter writer, JsonProperty property, object target)
	{
		return default(bool);
	}
}
