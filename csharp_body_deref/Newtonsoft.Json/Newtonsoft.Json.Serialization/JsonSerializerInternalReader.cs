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
		[Address(RVA = "0x3DEA540", Offset = "0x3DEA540", VA = "0x3DEA540")]
		public CreatorPropertyContext(string name)
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x3DDB780", Offset = "0x3DDB780", VA = "0x3DDB780")]
	public JsonSerializerInternalReader(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x3DDB790", Offset = "0x3DDB790", VA = "0x3DDB790")]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x3DDDFC0", Offset = "0x3DDDFC0", VA = "0x3DDDFC0")]
	private JsonContract? GetContractSafe(Type? type)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x3DDE010", Offset = "0x3DDE010", VA = "0x3DDE010")]
	private JsonContract GetContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x3DDE0C0", Offset = "0x3DDE0C0", VA = "0x3DDE0C0")]
	public object? Deserialize(JsonReader reader, Type? objectType, bool checkAdditionalContent)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x3DDF030", Offset = "0x3DDF030", VA = "0x3DDF030")]
	private JsonSerializerProxy GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x3DDF0B0", Offset = "0x3DDF0B0", VA = "0x3DDF0B0")]
	private JToken? CreateJToken(JsonReader reader, JsonContract? contract)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x3DDF4F0", Offset = "0x3DDF4F0", VA = "0x3DDF4F0")]
	private JToken CreateJObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x3DDEA80", Offset = "0x3DDEA80", VA = "0x3DDEA80")]
	private object? CreateValueInternal(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x3DE1620", Offset = "0x3DE1620", VA = "0x3DE1620")]
	private static bool CoerceEmptyStringToNull(Type? objectType, JsonContract? contract, string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x3DE1710", Offset = "0x3DE1710", VA = "0x3DE1710")]
	internal string GetExpectedDescription(JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x3DDE560", Offset = "0x3DDE560", VA = "0x3DDE560")]
	private JsonConverter? GetConverter(JsonContract? contract, JsonConverter? memberConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty)
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x3DDF9D0", Offset = "0x3DDF9D0", VA = "0x3DDF9D0")]
	private object? CreateObject(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x3DE17C0", Offset = "0x3DE17C0", VA = "0x3DE17C0")]
	private bool ReadMetadataPropertiesToken(JTokenReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x3DE1F50", Offset = "0x3DE1F50", VA = "0x3DE1F50")]
	private bool ReadMetadataProperties(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, object? existingValue, out object? newValue, out string? id)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x3DE3E70", Offset = "0x3DE3E70", VA = "0x3DE3E70")]
	private void ResolveTypeName(JsonReader reader, ref Type? objectType, ref JsonContract? contract, JsonProperty? member, JsonContainerContract? containerContract, JsonProperty? containerMember, string qualifiedTypeName)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x3DE44C0", Offset = "0x3DE44C0", VA = "0x3DE44C0")]
	private JsonArrayContract EnsureArrayContract(JsonReader reader, Type objectType, JsonContract contract)
	{
		return null;
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x3DE0710", Offset = "0x3DE0710", VA = "0x3DE0710")]
	private object? CreateList(JsonReader reader, Type? objectType, JsonContract? contract, JsonProperty? member, object? existingValue, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x3DE26B0", Offset = "0x3DE26B0", VA = "0x3DE26B0")]
	private bool HasNoDefinedType(JsonContract? contract)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x3DE0F90", Offset = "0x3DE0F90", VA = "0x3DE0F90")]
	private object? EnsureType(JsonReader reader, object? value, CultureInfo culture, JsonContract? contract, Type? targetType)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x3DE51C0", Offset = "0x3DE51C0", VA = "0x3DE51C0")]
	private bool SetPropertyValue(JsonProperty property, JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x3DE56F0", Offset = "0x3DE56F0", VA = "0x3DE56F0")]
	private bool CalculatePropertyDetails(JsonProperty property, ref JsonConverter? propertyConverter, JsonContainerContract? containerContract, JsonProperty? containerProperty, JsonReader reader, object target, out bool useExistingValue, out object? currentValue, out JsonContract? propertyContract, out bool gottenCurrentValue, out bool ignoredValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x3DE5FF0", Offset = "0x3DE5FF0", VA = "0x3DE5FF0")]
	private void AddReference(JsonReader reader, string id, object value)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x3DE5FE0", Offset = "0x3DE5FE0", VA = "0x3DE5FE0")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x3DE5E80", Offset = "0x3DE5E80", VA = "0x3DE5E80")]
	private bool ShouldSetPropertyValue(JsonProperty property, JsonObjectContract? contract, object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x3DE4620", Offset = "0x3DE4620", VA = "0x3DE4620")]
	private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x3DE2AA0", Offset = "0x3DE2AA0", VA = "0x3DE2AA0")]
	private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x3DE6440", Offset = "0x3DE6440", VA = "0x3DE6440")]
	private void OnDeserializing(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x3DE6680", Offset = "0x3DE6680", VA = "0x3DE6680")]
	private void OnDeserialized(JsonReader reader, JsonContract contract, object value)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x3DDC400", Offset = "0x3DDC400", VA = "0x3DDC400")]
	private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x3DE4970", Offset = "0x3DE4970", VA = "0x3DE4970")]
	private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x3DE68C0", Offset = "0x3DE68C0", VA = "0x3DE68C0")]
	private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, object? currentObject, string message)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x3DDBD10", Offset = "0x3DDBD10", VA = "0x3DDBD10")]
	private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty? containerProperty, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x3DE36A0", Offset = "0x3DE36A0", VA = "0x3DE36A0")]
	private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x3DD9710", Offset = "0x3DD9710", VA = "0x3DD9710")]
	internal object CreateISerializableItem(JToken token, Type type, JsonISerializableContract contract, JsonProperty? member)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x3DE2DA0", Offset = "0x3DE2DA0", VA = "0x3DE2DA0")]
	private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x3DE6A60", Offset = "0x3DE6A60", VA = "0x3DE6A60")]
	private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, JsonProperty? containerProperty, ObjectConstructor<object> creator, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x3DDE5D0", Offset = "0x3DDE5D0", VA = "0x3DDE5D0")]
	private object DeserializeConvertable(JsonConverter converter, JsonReader reader, Type objectType, object? existingValue)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x3DE8FD0", Offset = "0x3DE8FD0", VA = "0x3DE8FD0")]
	private List<CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, JsonProperty? containerProperty, JsonReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x3DE2780", Offset = "0x3DE2780", VA = "0x3DE2780")]
	public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, JsonProperty? containerMember, JsonProperty? containerProperty, string? id, out bool createdFromNonDefaultCreator)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x3DDD0F0", Offset = "0x3DDD0F0", VA = "0x3DDD0F0")]
	private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, JsonProperty? member, string? id)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x3DEA1F0", Offset = "0x3DEA1F0", VA = "0x3DEA1F0")]
	private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x3DDF8D0", Offset = "0x3DDF8D0", VA = "0x3DDF8D0")]
	private bool CheckPropertyName(JsonReader reader, string memberName)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x3DEA000", Offset = "0x3DEA000", VA = "0x3DEA000")]
	private void SetExtensionData(JsonObjectContract contract, JsonProperty? member, JsonReader reader, string memberName, object o)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x3DE9F60", Offset = "0x3DE9F60", VA = "0x3DE9F60")]
	private object ReadExtensionDataValue(JsonObjectContract contract, JsonProperty? member, JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x3DE9970", Offset = "0x3DE9970", VA = "0x3DE9970")]
	private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, PropertyPresence presence, bool setDefaultValue)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x3DEA440", Offset = "0x3DEA440", VA = "0x3DEA440")]
	private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence>? requiredProperties)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x3DDEF70", Offset = "0x3DDEF70", VA = "0x3DDEF70")]
	private void HandleError(JsonReader reader, bool readPastError, int initialDepth)
	{
	}
}
