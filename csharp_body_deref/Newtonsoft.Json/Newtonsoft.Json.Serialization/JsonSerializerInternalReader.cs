using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;
using Newtonsoft.Json.Linq;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000127")]
internal class JsonSerializerInternalReader : JsonSerializerInternalBase
{
	[Token(Token = "0x2000128")]
	internal enum PropertyPresence
	{
		[Token(Token = "0x4000590")]
		None,
		[Token(Token = "0x4000591")]
		Null,
		[Token(Token = "0x4000592")]
		Value
	}

	[Token(Token = "0x2000129")]
	internal class CreatorPropertyContext
	{
		[Token(Token = "0x4000593")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Name;

		[Token(Token = "0x4000594")]
		[FieldOffset(Offset = "0x18")]
		public JsonProperty? Property;

		[Token(Token = "0x4000595")]
		[FieldOffset(Offset = "0x20")]
		public JsonProperty? ConstructorProperty;

		[Token(Token = "0x4000596")]
		[FieldOffset(Offset = "0x28")]
		public PropertyPresence? Presence;

		[Token(Token = "0x4000597")]
		[FieldOffset(Offset = "0x30")]
		public object? Value;

		[Token(Token = "0x4000598")]
		[FieldOffset(Offset = "0x38")]
		public bool Used;

		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x3AF4BF0", Offset = "0x3AF4BF0", VA = "0x3AF4BF0")]
		public CreatorPropertyContext(string name)
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x3AE5E30", Offset = "0x3AE5E30", VA = "0x3AE5E30")]
	public JsonSerializerInternalReader(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x3AE5E40", Offset = "0x3AE5E40", VA = "0x3AE5E40")]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x3AE8670", Offset = "0x3AE8670", VA = "0x3AE8670")]
	private JsonContract? GetContractSafe(Type? type)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x3AE86C0", Offset = "0x3AE86C0", VA = "0x3AE86C0")]
	private JsonContract GetContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x3AE8770", Offset = "0x3AE8770", VA = "0x3AE8770")]
	public object? Deserialize(JsonReader reader, Type? objectType, bool checkAdditionalContent)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x3AE96E0", Offset = "0x3AE96E0", VA = "0x3AE96E0")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x3AE9760", Offset = "0x3AE9760", VA = "0x3AE9760")]
	private JToken? CreateJToken(JsonReader reader, JsonContract? contract)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x3AE9BA0", Offset = "0x3AE9BA0", VA = "0x3AE9BA0")]
	private JToken CreateJObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x3AE9130", Offset = "0x3AE9130", VA = "0x3AE9130")]
	private object? CreateValueInternal(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x3AEBCD0", Offset = "0x3AEBCD0", VA = "0x3AEBCD0")]
	private static bool CoerceEmptyStringToNull(Type? objectType, JsonContract? contract, string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x3AEBDC0", Offset = "0x3AEBDC0", VA = "0x3AEBDC0")]
	internal string GetExpectedDescription(JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x3AE8C10", Offset = "0x3AE8C10", VA = "0x3AE8C10")]
	private JsonConverter? GetConverter(JsonContract? contract, JsonConverter? memberConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x3AEA080", Offset = "0x3AEA080", VA = "0x3AEA080")]
	private object? CreateObject(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x3AEBE70", Offset = "0x3AEBE70", VA = "0x3AEBE70")]
	private bool ReadMetadataPropertiesToken(JTokenReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x3AEC600", Offset = "0x3AEC600", VA = "0x3AEC600")]
	private bool ReadMetadataProperties(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x3AEE520", Offset = "0x3AEE520", VA = "0x3AEE520")]
	private void ResolveTypeName(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, string qualifiedTypeName)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x3AEEB70", Offset = "0x3AEEB70", VA = "0x3AEEB70")]
	private JsonArrayContract EnsureArrayContract(JsonReader reader, Type objectType, JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x3AEADC0", Offset = "0x3AEADC0", VA = "0x3AEADC0")]
	private object? CreateList(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, object? existingValue, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x3AECD60", Offset = "0x3AECD60", VA = "0x3AECD60")]
	private bool HasNoDefinedType(JsonContract? contract)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x3AEB640", Offset = "0x3AEB640", VA = "0x3AEB640")]
	private object? EnsureType(JsonReader reader, object? value, CultureInfo culture, JsonContract? contract, Type? targetType)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x3AEF870", Offset = "0x3AEF870", VA = "0x3AEF870")]
	private bool SetPropertyValue(JsonProperty property, JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x3AEFDA0", Offset = "0x3AEFDA0", VA = "0x3AEFDA0")]
	private bool CalculatePropertyDetails(JsonProperty property, ref JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target, out bool useExistingValue, out object? currentValue, out JsonContract? propertyContract, out bool gottenCurrentValue, out bool ignoredValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x3AF06A0", Offset = "0x3AF06A0", VA = "0x3AF06A0")]
	private void AddReference(JsonReader reader, string id, object value)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x3AF0690", Offset = "0x3AF0690", VA = "0x3AF0690")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x3AF0530", Offset = "0x3AF0530", VA = "0x3AF0530")]
	private bool ShouldSetPropertyValue(JsonProperty property, JsonObjectContract? contract, object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x3AEECD0", Offset = "0x3AEECD0", VA = "0x3AEECD0")]
	private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x3AED150", Offset = "0x3AED150", VA = "0x3AED150")]
	private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x3AF0AF0", Offset = "0x3AF0AF0", VA = "0x3AF0AF0")]
	private void OnDeserializing(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x3AF0D30", Offset = "0x3AF0D30", VA = "0x3AF0D30")]
	private void OnDeserialized(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x3AE6AB0", Offset = "0x3AE6AB0", VA = "0x3AE6AB0")]
	private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x3AEF020", Offset = "0x3AEF020", VA = "0x3AEF020")]
	private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x3AF0F70", Offset = "0x3AF0F70", VA = "0x3AF0F70")]
	private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, object? currentObject, string message)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x3AE63C0", Offset = "0x3AE63C0", VA = "0x3AE63C0")]
	private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x3AEDD50", Offset = "0x3AEDD50", VA = "0x3AEDD50")]
	private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x3AE3DC0", Offset = "0x3AE3DC0", VA = "0x3AE3DC0")]
	internal object CreateISerializableItem(JToken token, Type type, JsonISerializableContract contract, JsonProperty? member)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x3AED450", Offset = "0x3AED450", VA = "0x3AED450")]
	private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x3AF1110", Offset = "0x3AF1110", VA = "0x3AF1110")]
	private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, JsonProperty? containerProperty, ObjectConstructor<object> creator, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x3AE8C80", Offset = "0x3AE8C80", VA = "0x3AE8C80")]
	private object DeserializeConvertable(JsonConverter converter, JsonReader reader, Type objectType, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x3AF3680", Offset = "0x3AF3680", VA = "0x3AF3680")]
	private List<CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, JsonProperty? containerProperty, JsonReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x3AECE30", Offset = "0x3AECE30", VA = "0x3AECE30")]
	public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, JsonProperty? containerMember, JsonProperty? containerProperty, string? id, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x3AE77A0", Offset = "0x3AE77A0", VA = "0x3AE77A0")]
	private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x3AF48A0", Offset = "0x3AF48A0", VA = "0x3AF48A0")]
	private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x3AE9F80", Offset = "0x3AE9F80", VA = "0x3AE9F80")]
	private bool CheckPropertyName(JsonReader reader, string memberName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x3AF46B0", Offset = "0x3AF46B0", VA = "0x3AF46B0")]
	private void SetExtensionData(JsonObjectContract contract, JsonProperty? member, JsonReader reader, string memberName, object o)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x3AF4610", Offset = "0x3AF4610", VA = "0x3AF4610")]
	private object ReadExtensionDataValue(JsonObjectContract contract, JsonProperty? member, JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x3AF4020", Offset = "0x3AF4020", VA = "0x3AF4020")]
	private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, PropertyPresence presence, bool setDefaultValue)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x3AF4AF0", Offset = "0x3AF4AF0", VA = "0x3AF4AF0")]
	private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence>? requiredProperties)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x3AE9620", Offset = "0x3AE9620", VA = "0x3AE9620")]
	private void HandleError(JsonReader reader, bool readPastError, int initialDepth)
	{
	}
}
