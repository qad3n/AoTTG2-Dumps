using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x20000FA")]
public class DefaultContractResolver : IContractResolver
{
	[Token(Token = "0x20000FB")]
	internal class EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> : IEnumerable<KeyValuePair<object, object>>, IEnumerable
	{
		[Token(Token = "0x20000FC")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__2 : IEnumerator<KeyValuePair<object, object>>, IEnumerator, IDisposable
		{
			[Token(Token = "0x40004EB")]
			[FieldOffset(Offset = "0x0")]
			private int _003C_003E1__state;

			[Token(Token = "0x40004EC")]
			[FieldOffset(Offset = "0x0")]
			private KeyValuePair<object, object> _003C_003E2__current;

			[Token(Token = "0x40004ED")]
			[FieldOffset(Offset = "0x0")]
			public EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> _003C_003E4__this;

			[Token(Token = "0x40004EE")]
			[FieldOffset(Offset = "0x0")]
			private IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _003C_003E7__wrap1;

			[Token(Token = "0x170000ED")]
			private KeyValuePair<object, object> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EObject_002CSystem_002EObject_003E_003E_002ECurrent
			{
				[Token(Token = "0x6000785")]
				[DebuggerHidden]
				get
				{
					return default(KeyValuePair<object, object>);
				}
			}

			[Token(Token = "0x170000EE")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000787")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000781")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__2(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000782")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000783")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000784")]
			private void _003C_003Em__Finally1()
			{
			}

			[Token(Token = "0x6000786")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x40004EA")]
		[FieldOffset(Offset = "0x0")]
		private readonly IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e;

		[Token(Token = "0x600077E")]
		public EnumerableDictionaryWrapper(IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e)
		{
		}

		[Token(Token = "0x600077F")]
		[IteratorStateMachine(typeof(EnumerableDictionaryWrapper<, >._003CGetEnumerator_003Ed__2))]
		public IEnumerator<KeyValuePair<object, object>> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000780")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IContractResolver _instance;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] BlacklistedTypeNames;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly JsonConverter[] BuiltInConverters;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x10")]
	private readonly DefaultJsonNameTable _nameTable;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x18")]
	private readonly ThreadSafeStore<Type, JsonContract> _contractCache;

	[Token(Token = "0x170000E4")]
	internal static IContractResolver Instance
	{
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x3AD31E0", Offset = "0x3AD31E0", VA = "0x3AD31E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public bool DynamicCodeGeneration
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x3AD3250", Offset = "0x3AD3250", VA = "0x3AD3250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	[Obsolete("DefaultMembersSearchFlags is obsolete. To modify the members serialized inherit from DefaultContractResolver and override the GetSerializableMembers method instead.")]
	public BindingFlags DefaultMembersSearchFlags
	{
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x3AD32B0", Offset = "0x3AD32B0", VA = "0x3AD32B0")]
		[CompilerGenerated]
		get
		{
			return default(BindingFlags);
		}
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x3AD32C0", Offset = "0x3AD32C0", VA = "0x3AD32C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public bool SerializeCompilerGeneratedMembers
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x3AD32D0", Offset = "0x3AD32D0", VA = "0x3AD32D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x3AD32E0", Offset = "0x3AD32E0", VA = "0x3AD32E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IgnoreSerializableInterface
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x3AD32F0", Offset = "0x3AD32F0", VA = "0x3AD32F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x3AD3300", Offset = "0x3AD3300", VA = "0x3AD3300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IgnoreSerializableAttribute
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x3AD3310", Offset = "0x3AD3310", VA = "0x3AD3310")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x3AD3320", Offset = "0x3AD3320", VA = "0x3AD3320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IgnoreIsSpecifiedMembers
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x3AD3330", Offset = "0x3AD3330", VA = "0x3AD3330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x3AD3340", Offset = "0x3AD3340", VA = "0x3AD3340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IgnoreShouldSerializeMembers
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x3AD3350", Offset = "0x3AD3350", VA = "0x3AD3350")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x3AD3360", Offset = "0x3AD3360", VA = "0x3AD3360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x3AD3370", Offset = "0x3AD3370", VA = "0x3AD3370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x3AD3380", Offset = "0x3AD3380", VA = "0x3AD3380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x3AD2C40", Offset = "0x3AD2C40", VA = "0x3AD2C40")]
	public DefaultContractResolver()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x3AD3390", Offset = "0x3AD3390", VA = "0x3AD3390", Slot = "5")]
	public virtual JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x3AD3440", Offset = "0x3AD3440", VA = "0x3AD3440")]
	private static bool FilterMembers(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x3AD3590", Offset = "0x3AD3590", VA = "0x3AD3590", Slot = "6")]
	protected virtual List<MemberInfo> GetSerializableMembers(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x3AD45C0", Offset = "0x3AD45C0", VA = "0x3AD45C0")]
	private bool ShouldSerializeEntityMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x3AD46C0", Offset = "0x3AD46C0", VA = "0x3AD46C0", Slot = "7")]
	protected virtual JsonObjectContract CreateObjectContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x3AD6890", Offset = "0x3AD6890", VA = "0x3AD6890")]
	private static void ThrowUnableToSerializeError(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x3AD5B90", Offset = "0x3AD5B90", VA = "0x3AD5B90")]
	private MemberInfo GetExtensionDataMemberForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x3AD5D80", Offset = "0x3AD5D80", VA = "0x3AD5D80")]
	private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x3AD5280", Offset = "0x3AD5280", VA = "0x3AD5280")]
	private ConstructorInfo GetAttributeConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x3AD58B0", Offset = "0x3AD58B0", VA = "0x3AD58B0")]
	private ConstructorInfo GetImmutableConstructor(Type objectType, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x3AD5870", Offset = "0x3AD5870", VA = "0x3AD5870")]
	private ConstructorInfo GetParameterizedConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x3AD6F40", Offset = "0x3AD6F40", VA = "0x3AD6F40", Slot = "8")]
	protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x3AD6E60", Offset = "0x3AD6E60", VA = "0x3AD6E60")]
	private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x3AD7710", Offset = "0x3AD7710", VA = "0x3AD7710", Slot = "9")]
	protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty? matchingMemberProperty, ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x3AD84C0", Offset = "0x3AD84C0", VA = "0x3AD84C0", Slot = "10")]
	protected virtual JsonConverter ResolveContractConverter(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x3AD8530", Offset = "0x3AD8530", VA = "0x3AD8530")]
	private Func<object> GetDefaultCreator(Type createdType)
	{
		return null;
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x3AD4FF0", Offset = "0x3AD4FF0", VA = "0x3AD4FF0")]
	private void InitializeContract(JsonContract contract)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x3AD85F0", Offset = "0x3AD85F0", VA = "0x3AD85F0")]
	private void ResolveCallbackMethods(JsonContract contract, Type t)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x3AD8970", Offset = "0x3AD8970", VA = "0x3AD8970")]
	private void GetCallbackMethodsForType(Type type, out List<SerializationCallback>? onSerializing, out List<SerializationCallback>? onSerialized, out List<SerializationCallback>? onDeserializing, out List<SerializationCallback>? onDeserialized, out List<SerializationErrorCallback>? onError)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x3ADA250", Offset = "0x3ADA250", VA = "0x3ADA250")]
	private static bool IsConcurrentOrObservableCollection(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x3AD9940", Offset = "0x3AD9940", VA = "0x3AD9940")]
	private static bool ShouldSkipDeserialized(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x3AD9840", Offset = "0x3AD9840", VA = "0x3AD9840")]
	private static bool ShouldSkipSerializing(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x3AD6930", Offset = "0x3AD6930", VA = "0x3AD6930")]
	private List<Type> GetClassHierarchyForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x3ADA390", Offset = "0x3ADA390", VA = "0x3ADA390", Slot = "11")]
	protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x3ADB5F0", Offset = "0x3ADB5F0", VA = "0x3ADB5F0", Slot = "12")]
	protected virtual JsonArrayContract CreateArrayContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x3ADCA50", Offset = "0x3ADCA50", VA = "0x3ADCA50", Slot = "13")]
	protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x3ADCB90", Offset = "0x3ADCB90", VA = "0x3ADCB90", Slot = "14")]
	protected virtual JsonLinqContract CreateLinqContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x3ADCC10", Offset = "0x3ADCC10", VA = "0x3ADCC10", Slot = "15")]
	protected virtual JsonISerializableContract CreateISerializableContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x3ADCE90", Offset = "0x3ADCE90", VA = "0x3ADCE90", Slot = "16")]
	protected virtual JsonDynamicContract CreateDynamicContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x3ADD2C0", Offset = "0x3ADD2C0", VA = "0x3ADD2C0", Slot = "17")]
	protected virtual JsonStringContract CreateStringContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x3ADD320", Offset = "0x3ADD320", VA = "0x3ADD320", Slot = "18")]
	protected virtual JsonContract CreateContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x3ADD810", Offset = "0x3ADD810", VA = "0x3ADD810")]
	internal static bool IsJsonPrimitiveType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x3ADD950", Offset = "0x3ADD950", VA = "0x3ADD950")]
	internal static bool IsIConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x3ADD860", Offset = "0x3ADD860", VA = "0x3ADD860")]
	internal static bool CanConvertToString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x3AD9A40", Offset = "0x3AD9A40", VA = "0x3AD9A40")]
	private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo? currentCallback, ref Type? prevAttributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x3ADDAD0", Offset = "0x3ADDAD0", VA = "0x3ADDAD0")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x3ADDBC0", Offset = "0x3ADDBC0", VA = "0x3ADDBC0", Slot = "19")]
	protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x3ADE1A0", Offset = "0x3ADE1A0", VA = "0x3ADE1A0", Slot = "20")]
	internal virtual DefaultJsonNameTable GetNameTable()
	{
		return null;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x3ADE1B0", Offset = "0x3ADE1B0", VA = "0x3ADE1B0", Slot = "21")]
	protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x3ADE200", Offset = "0x3ADE200", VA = "0x3ADE200", Slot = "22")]
	protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x3AD7BA0", Offset = "0x3AD7BA0", VA = "0x3AD7BA0")]
	private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x3ADE470", Offset = "0x3ADE470", VA = "0x3ADE470")]
	private Predicate<object> CreateShouldSerializeTest(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x3ADE6B0", Offset = "0x3ADE6B0", VA = "0x3ADE6B0")]
	private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x3ADEA00", Offset = "0x3ADEA00", VA = "0x3ADEA00", Slot = "23")]
	protected virtual string ResolvePropertyName(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x3ADEA30", Offset = "0x3ADEA30", VA = "0x3ADEA30", Slot = "24")]
	protected virtual string ResolveExtensionDataName(string extensionDataName)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x3ADEA50", Offset = "0x3ADEA50", VA = "0x3ADEA50", Slot = "25")]
	protected virtual string ResolveDictionaryKey(string dictionaryKey)
	{
		return null;
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x3ADEA90", Offset = "0x3ADEA90", VA = "0x3ADEA90")]
	public string GetResolvedPropertyName(string propertyName)
	{
		return null;
	}
}
