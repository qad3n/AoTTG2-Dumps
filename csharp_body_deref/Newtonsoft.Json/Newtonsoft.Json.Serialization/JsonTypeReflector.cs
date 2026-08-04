// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonTypeReflector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using System.Reflection;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200012F")]
internal static class JsonTypeReflector
{
	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x0")]
	private static bool? _dynamicCodeGeneration;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x2")]
	private static bool? _fullyTrusted;

	[Token(Token = "0x40005A7")]
	public const string IdPropertyName = "$id";

	[Token(Token = "0x40005A8")]
	public const string RefPropertyName = "$ref";

	[Token(Token = "0x40005A9")]
	public const string TypePropertyName = "$type";

	[Token(Token = "0x40005AA")]
	public const string ValuePropertyName = "$value";

	[Token(Token = "0x40005AB")]
	public const string ArrayValuesPropertyName = "$values";

	[Token(Token = "0x40005AC")]
	public const string ShouldSerializePrefix = "ShouldSerialize";

	[Token(Token = "0x40005AD")]
	public const string SpecifiedPostfix = "Specified";

	[Token(Token = "0x40005AE")]
	public const string ConcurrentDictionaryTypeName = "System.Collections.Concurrent.ConcurrentDictionary`2";

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ThreadSafeStore<Type, Func<object[]?, object>> CreatorCache;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ThreadSafeStore<Type, Type?> AssociatedMetadataTypesCache;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x18")]
	private static ReflectionObject? _metadataTypeAttributeReflectionObject;

	[Token(Token = "0x1700016C")]
	public static bool DynamicCodeGeneration
	{
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x3DF3B50", Offset = "0x3DF3B50", VA = "0x3DF3B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	public static bool FullyTrusted
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x3DF1CB0", Offset = "0x3DF1CB0", VA = "0x3DF1CB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	public static ReflectionDelegateFactory ReflectionDelegateFactory
	{
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x3DF3720", Offset = "0x3DF3720", VA = "0x3DF3720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000957")]
	public static T GetCachedAttribute<T>(object attributeProvider) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x3DEFBA0", Offset = "0x3DEFBA0", VA = "0x3DEFBA0")]
	public static bool CanTypeDescriptorConvertString(Type type, out TypeConverter typeConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x3DF2BD0", Offset = "0x3DF2BD0", VA = "0x3DF2BD0")]
	public static DataContractAttribute GetDataContractAttribute(Type type)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x3DF2CA0", Offset = "0x3DF2CA0", VA = "0x3DF2CA0")]
	public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x3DF2F50", Offset = "0x3DF2F50", VA = "0x3DF2F50")]
	public static MemberSerialization GetObjectMemberSerialization(Type objectType, bool ignoreSerializableAttribute)
	{
		return default(MemberSerialization);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x3DF30E0", Offset = "0x3DF30E0", VA = "0x3DF30E0")]
	public static JsonConverter GetJsonConverter(object attributeProvider)
	{
		return null;
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x3DF3200", Offset = "0x3DF3200", VA = "0x3DF3200")]
	public static JsonConverter CreateJsonConverterInstance(Type converterType, object[]? args)
	{
		return null;
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x3DF3300", Offset = "0x3DF3300", VA = "0x3DF3300")]
	public static NamingStrategy CreateNamingStrategyInstance(Type namingStrategyType, object[]? args)
	{
		return null;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x3DF3400", Offset = "0x3DF3400", VA = "0x3DF3400")]
	public static NamingStrategy GetContainerNamingStrategy(JsonContainerAttribute containerAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x3DF34C0", Offset = "0x3DF34C0", VA = "0x3DF34C0")]
	private static Func<object[], object> GetCreator(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x3DF37D0", Offset = "0x3DF37D0", VA = "0x3DF37D0")]
	private static Type GetAssociatedMetadataType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x3DF3870", Offset = "0x3DF3870", VA = "0x3DF3870")]
	private static Type GetAssociateMetadataTypeFromAttribute(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000963")]
	private static T GetAttribute<T>(Type type) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x6000964")]
	private static T GetAttribute<T>(MemberInfo memberInfo) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x3DF3AF0", Offset = "0x3DF3AF0", VA = "0x3DF3AF0")]
	public static bool IsNonSerializable(object provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x3DF3080", Offset = "0x3DF3080", VA = "0x3DF3080")]
	public static bool IsSerializable(object provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000967")]
	public static T GetAttribute<T>(object provider) where T : notnull, Attribute
	{
		return null;
	}
}
