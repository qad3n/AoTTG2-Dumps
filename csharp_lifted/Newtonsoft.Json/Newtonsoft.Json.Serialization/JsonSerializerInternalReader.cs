// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x55E1EA0", Offset = "0x55E0EA0", VA = "0x55E1EA0")]
		public CreatorPropertyContext(string name)
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x55D3DE0", Offset = "0x55D2DE0", VA = "0x55D3DE0")]
	public JsonSerializerInternalReader(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x55D3DF0", Offset = "0x55D2DF0", VA = "0x55D3DF0")]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x55D6910", Offset = "0x55D5910", VA = "0x55D6910")]
	private JsonContract? GetContractSafe(Type? type)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x55D6970", Offset = "0x55D5970", VA = "0x55D6970")]
	private JsonContract GetContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x55D6A20", Offset = "0x55D5A20", VA = "0x55D6A20")]
	public object? Deserialize(JsonReader reader, Type? objectType, bool checkAdditionalContent)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x55D7840", Offset = "0x55D6840", VA = "0x55D7840")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x55D78C0", Offset = "0x55D68C0", VA = "0x55D78C0")]
	private JToken? CreateJToken(JsonReader reader, JsonContract? contract)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x55D7CE0", Offset = "0x55D6CE0", VA = "0x55D7CE0")]
	private JToken CreateJObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x55D72D0", Offset = "0x55D62D0", VA = "0x55D72D0")]
	private object? CreateValueInternal(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x55D9970", Offset = "0x55D8970", VA = "0x55D9970")]
	private static bool CoerceEmptyStringToNull(Type? objectType, JsonContract? contract, string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x55D9A60", Offset = "0x55D8A60", VA = "0x55D9A60")]
	internal string GetExpectedDescription(JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x55D6DB0", Offset = "0x55D5DB0", VA = "0x55D6DB0")]
	private JsonConverter? GetConverter(JsonContract? contract, JsonConverter? memberConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x55D8150", Offset = "0x55D7150", VA = "0x55D8150")]
	private object? CreateObject(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x55D9B10", Offset = "0x55D8B10", VA = "0x55D9B10")]
	private bool ReadMetadataPropertiesToken(JTokenReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x55DA290", Offset = "0x55D9290", VA = "0x55DA290")]
	private bool ReadMetadataProperties(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x55DC0A0", Offset = "0x55DB0A0", VA = "0x55DC0A0")]
	private void ResolveTypeName(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, string qualifiedTypeName)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x55DC6E0", Offset = "0x55DB6E0", VA = "0x55DC6E0")]
	private JsonArrayContract EnsureArrayContract(JsonReader reader, Type objectType, JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x55D8C10", Offset = "0x55D7C10", VA = "0x55D8C10")]
	private object? CreateList(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, object? existingValue, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x55DA940", Offset = "0x55D9940", VA = "0x55DA940")]
	private bool HasNoDefinedType(JsonContract? contract)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x55D9410", Offset = "0x55D8410", VA = "0x55D9410")]
	private object? EnsureType(JsonReader reader, object? value, CultureInfo culture, JsonContract? contract, Type? targetType)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x55DD380", Offset = "0x55DC380", VA = "0x55DD380")]
	private bool SetPropertyValue(JsonProperty property, JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x55DD8B0", Offset = "0x55DC8B0", VA = "0x55DD8B0")]
	private bool CalculatePropertyDetails(JsonProperty property, ref JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target, out bool useExistingValue, out object? currentValue, out JsonContract? propertyContract, out bool gottenCurrentValue, out bool ignoredValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x55DE140", Offset = "0x55DD140", VA = "0x55DE140")]
	private void AddReference(JsonReader reader, string id, object value)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x55DE130", Offset = "0x55DD130", VA = "0x55DE130")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x55DDFD0", Offset = "0x55DCFD0", VA = "0x55DDFD0")]
	private bool ShouldSetPropertyValue(JsonProperty property, JsonObjectContract? contract, object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x55DC840", Offset = "0x55DB840", VA = "0x55DC840")]
	private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x55DAD20", Offset = "0x55D9D20", VA = "0x55DAD20")]
	private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x55DE520", Offset = "0x55DD520", VA = "0x55DE520")]
	private void OnDeserializing(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x55DE760", Offset = "0x55DD760", VA = "0x55DE760")]
	private void OnDeserialized(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x55D49F0", Offset = "0x55D39F0", VA = "0x55D49F0")]
	private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x55DCB90", Offset = "0x55DBB90", VA = "0x55DCB90")]
	private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x55DE9A0", Offset = "0x55DD9A0", VA = "0x55DE9A0")]
	private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, object? currentObject, string message)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x55D4350", Offset = "0x55D3350", VA = "0x55D4350")]
	private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x55DB8E0", Offset = "0x55DA8E0", VA = "0x55DB8E0")]
	private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x55D1DE0", Offset = "0x55D0DE0", VA = "0x55D1DE0")]
	internal object CreateISerializableItem(JToken token, Type type, JsonISerializableContract contract, JsonProperty? member)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x55DB020", Offset = "0x55DA020", VA = "0x55DB020")]
	private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x55DEB30", Offset = "0x55DDB30", VA = "0x55DEB30")]
	private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, JsonProperty? containerProperty, ObjectConstructor<object> creator, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x55D6E20", Offset = "0x55D5E20", VA = "0x55D6E20")]
	private object DeserializeConvertable(JsonConverter converter, JsonReader reader, Type objectType, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x55E0A60", Offset = "0x55DFA60", VA = "0x55E0A60")]
	private List<CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, JsonProperty? containerProperty, JsonReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x55DAA10", Offset = "0x55D9A10", VA = "0x55DAA10")]
	public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, JsonProperty? containerMember, JsonProperty? containerProperty, string? id, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x55D56C0", Offset = "0x55D46C0", VA = "0x55D56C0")]
	private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x55E1B60", Offset = "0x55E0B60", VA = "0x55E1B60")]
	private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x55D8050", Offset = "0x55D7050", VA = "0x55D8050")]
	private bool CheckPropertyName(JsonReader reader, string memberName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x55E1980", Offset = "0x55E0980", VA = "0x55E1980")]
	private void SetExtensionData(JsonObjectContract contract, JsonProperty? member, JsonReader reader, string memberName, object o)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x55E18E0", Offset = "0x55E08E0", VA = "0x55E18E0")]
	private object ReadExtensionDataValue(JsonObjectContract contract, JsonProperty? member, JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x55E1470", Offset = "0x55E0470", VA = "0x55E1470")]
	private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, PropertyPresence presence, bool setDefaultValue)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x55E1DB0", Offset = "0x55E0DB0", VA = "0x55E1DB0")]
	private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence>? requiredProperties)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x55D7780", Offset = "0x55D6780", VA = "0x55D7780")]
	private void HandleError(JsonReader reader, bool readPastError, int initialDepth)
	{
	}
}
