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
		[Address(RVA = "0x3AFE200", Offset = "0x3AFE200", VA = "0x3AFE200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	public static bool FullyTrusted
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x3AFC360", Offset = "0x3AFC360", VA = "0x3AFC360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	public static ReflectionDelegateFactory ReflectionDelegateFactory
	{
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x3AFDDD0", Offset = "0x3AFDDD0", VA = "0x3AFDDD0")]
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
	[Address(RVA = "0x3AFA250", Offset = "0x3AFA250", VA = "0x3AFA250")]
	public static bool CanTypeDescriptorConvertString(Type type, out TypeConverter typeConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x3AFD280", Offset = "0x3AFD280", VA = "0x3AFD280")]
	public static DataContractAttribute GetDataContractAttribute(Type type)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x3AFD350", Offset = "0x3AFD350", VA = "0x3AFD350")]
	public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x3AFD600", Offset = "0x3AFD600", VA = "0x3AFD600")]
	public static MemberSerialization GetObjectMemberSerialization(Type objectType, bool ignoreSerializableAttribute)
	{
		return default(MemberSerialization);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x3AFD790", Offset = "0x3AFD790", VA = "0x3AFD790")]
	public static JsonConverter GetJsonConverter(object attributeProvider)
	{
		return null;
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x3AFD8B0", Offset = "0x3AFD8B0", VA = "0x3AFD8B0")]
	public static JsonConverter CreateJsonConverterInstance(Type converterType, object[]? args)
	{
		return null;
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x3AFD9B0", Offset = "0x3AFD9B0", VA = "0x3AFD9B0")]
	public static NamingStrategy CreateNamingStrategyInstance(Type namingStrategyType, object[]? args)
	{
		return null;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x3AFDAB0", Offset = "0x3AFDAB0", VA = "0x3AFDAB0")]
	public static NamingStrategy GetContainerNamingStrategy(JsonContainerAttribute containerAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x3AFDB70", Offset = "0x3AFDB70", VA = "0x3AFDB70")]
	private static Func<object[], object> GetCreator(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x3AFDE80", Offset = "0x3AFDE80", VA = "0x3AFDE80")]
	private static Type GetAssociatedMetadataType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x3AFDF20", Offset = "0x3AFDF20", VA = "0x3AFDF20")]
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
	[Address(RVA = "0x3AFE1A0", Offset = "0x3AFE1A0", VA = "0x3AFE1A0")]
	public static bool IsNonSerializable(object provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x3AFD730", Offset = "0x3AFD730", VA = "0x3AFD730")]
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
