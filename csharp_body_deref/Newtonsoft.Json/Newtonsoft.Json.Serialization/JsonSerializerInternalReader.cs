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
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public CreatorPropertyContext(string name)
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x1C44B20", Offset = "0x1C43120", VA = "0x181C44B20")]
	public JsonSerializerInternalReader(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x1C4EE60", Offset = "0x1C4D460", VA = "0x181C4EE60")]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x1C4BEB0", Offset = "0x1C4A4B0", VA = "0x181C4BEB0")]
	private JsonContract? GetContractSafe(Type? type)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x1C4BF50", Offset = "0x1C4A550", VA = "0x181C4BF50")]
	private JsonContract GetContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x1C4AFE0", Offset = "0x1C495E0", VA = "0x181C4AFE0")]
	public object? Deserialize(JsonReader reader, Type? objectType, bool checkAdditionalContent)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x1C4C180", Offset = "0x1C4A780", VA = "0x181C4C180")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x1C46E60", Offset = "0x1C45460", VA = "0x181C46E60")]
	private JToken? CreateJToken(JsonReader reader, JsonContract? contract)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x1C46B60", Offset = "0x1C45160", VA = "0x181C46B60")]
	private JToken CreateJObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x1C4A7B0", Offset = "0x1C48DB0", VA = "0x181C4A7B0")]
	private object? CreateValueInternal(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x1C45860", Offset = "0x1C43E60", VA = "0x181C45860")]
	private static bool CoerceEmptyStringToNull(Type? objectType, JsonContract? contract, string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x1C4C080", Offset = "0x1C4A680", VA = "0x181C4C080")]
	internal string GetExpectedDescription(JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x1C4BFB0", Offset = "0x1C4A5B0", VA = "0x181C4BFB0")]
	private JsonConverter? GetConverter(JsonContract? contract, JsonConverter? memberConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x1C49A00", Offset = "0x1C48000", VA = "0x181C49A00")]
	private object? CreateObject(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x1C4F4F0", Offset = "0x1C4DAF0", VA = "0x181C4F4F0")]
	private bool ReadMetadataPropertiesToken(JTokenReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x1C4FBD0", Offset = "0x1C4E1D0", VA = "0x181C4FBD0")]
	private bool ReadMetadataProperties(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x1C50C40", Offset = "0x1C4F240", VA = "0x181C50C40")]
	private void ResolveTypeName(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, string qualifiedTypeName)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x1C4B7D0", Offset = "0x1C49DD0", VA = "0x181C4B7D0")]
	private JsonArrayContract EnsureArrayContract(JsonReader reader, Type objectType, JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x1C47220", Offset = "0x1C45820", VA = "0x181C47220")]
	private object? CreateList(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, object? existingValue, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x1C4C280", Offset = "0x1C4A880", VA = "0x181C4C280")]
	private bool HasNoDefinedType(JsonContract? contract)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x1C4B990", Offset = "0x1C49F90", VA = "0x181C4B990")]
	private object? EnsureType(JsonReader reader, object? value, CultureInfo culture, JsonContract? contract, Type? targetType)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x1C51480", Offset = "0x1C4FA80", VA = "0x181C51480")]
	private bool SetPropertyValue(JsonProperty property, JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x1C450D0", Offset = "0x1C436D0", VA = "0x181C450D0")]
	private bool CalculatePropertyDetails(JsonProperty property, ref JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target, out bool useExistingValue, out object? currentValue, out JsonContract? propertyContract, out bool gottenCurrentValue, out bool ignoredValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x1C44DE0", Offset = "0x1C433E0", VA = "0x181C44DE0")]
	private void AddReference(JsonReader reader, string id, object value)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x1C51B20", Offset = "0x1C50120", VA = "0x181C51B20")]
	private bool ShouldSetPropertyValue(JsonProperty property, JsonObjectContract? contract, object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x1C47D70", Offset = "0x1C46370", VA = "0x181C47D70")]
	private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x1C47AE0", Offset = "0x1C460E0", VA = "0x181C47AE0")]
	private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x1C4C500", Offset = "0x1C4AB00", VA = "0x181C4C500")]
	private void OnDeserializing(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x1C4C350", Offset = "0x1C4A950", VA = "0x181C4C350")]
	private void OnDeserialized(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x1C4C6B0", Offset = "0x1C4ACB0", VA = "0x181C4C6B0")]
	private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x1C4D750", Offset = "0x1C4BD50", VA = "0x181C4D750")]
	private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x1C51C80", Offset = "0x1C50280", VA = "0x181C51C80")]
	private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, object? currentObject, string message)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x1C4D160", Offset = "0x1C4B760", VA = "0x181C4D160")]
	private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x1C463C0", Offset = "0x1C449C0", VA = "0x181C463C0")]
	private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x1C46240", Offset = "0x1C44840", VA = "0x181C46240")]
	internal object CreateISerializableItem(JToken token, Type type, JsonISerializableContract contract, JsonProperty? member)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x1C45950", Offset = "0x1C43F50", VA = "0x181C45950")]
	private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x1C483C0", Offset = "0x1C469C0", VA = "0x181C483C0")]
	private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, JsonProperty? containerProperty, ObjectConstructor<object> creator, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x1C4ACC0", Offset = "0x1C492C0", VA = "0x181C4ACC0")]
	private object DeserializeConvertable(JsonConverter converter, JsonReader reader, Type objectType, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x1C50240", Offset = "0x1C4E840", VA = "0x181C50240")]
	private List<CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, JsonProperty? containerProperty, JsonReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x1C480D0", Offset = "0x1C466D0", VA = "0x181C480D0")]
	public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, JsonProperty? containerMember, JsonProperty? containerProperty, string? id, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x1C4DF70", Offset = "0x1C4C570", VA = "0x181C4DF70")]
	private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x1C51950", Offset = "0x1C4FF50", VA = "0x181C51950")]
	private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x1C45750", Offset = "0x1C43D50", VA = "0x181C45750")]
	private bool CheckPropertyName(JsonReader reader, string memberName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x1C511B0", Offset = "0x1C4F7B0", VA = "0x181C511B0")]
	private void SetExtensionData(JsonObjectContract contract, JsonProperty? member, JsonReader reader, string memberName, object o)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x1C4F440", Offset = "0x1C4DA40", VA = "0x181C4F440")]
	private object ReadExtensionDataValue(JsonObjectContract contract, JsonProperty? member, JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x1C4B330", Offset = "0x1C49930", VA = "0x181C4B330")]
	private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, PropertyPresence presence, bool setDefaultValue)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x1C51370", Offset = "0x1C4F970", VA = "0x181C51370")]
	private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence>? requiredProperties)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x1C4C1F0", Offset = "0x1C4A7F0", VA = "0x181C4C1F0")]
	private void HandleError(JsonReader reader, bool readPastError, int initialDepth)
	{
	}
}
