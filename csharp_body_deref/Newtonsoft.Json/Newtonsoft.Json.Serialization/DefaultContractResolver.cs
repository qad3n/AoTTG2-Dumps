// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.DefaultContractResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1C3C7F0", Offset = "0x1C3ADF0", VA = "0x181C3C7F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public bool DynamicCodeGeneration
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x1C3C780", Offset = "0x1C3AD80", VA = "0x181C3C780")]
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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(BindingFlags);
		}
		[Token(Token = "0x6000740")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public bool SerializeCompilerGeneratedMembers
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IgnoreSerializableInterface
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x1C3C7E0", Offset = "0x1C3ADE0", VA = "0x181C3C7E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x1C3C860", Offset = "0x1C3AE60", VA = "0x181C3C860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IgnoreSerializableAttribute
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x1C3C7D0", Offset = "0x1C3ADD0", VA = "0x181C3C7D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x1C3C850", Offset = "0x1C3AE50", VA = "0x181C3C850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IgnoreIsSpecifiedMembers
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x1C3C7C0", Offset = "0x1C3ADC0", VA = "0x181C3C7C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x1C3C840", Offset = "0x1C3AE40", VA = "0x181C3C840")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IgnoreShouldSerializeMembers
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074A")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x1C3C680", Offset = "0x1C3AC80", VA = "0x181C3C680")]
	public DefaultContractResolver()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x1C3A630", Offset = "0x1C38C30", VA = "0x181C3A630", Slot = "5")]
	public virtual JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x1C37470", Offset = "0x1C35A70", VA = "0x181C37470")]
	private static bool FilterMembers(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x1C38AE0", Offset = "0x1C370E0", VA = "0x181C38AE0", Slot = "6")]
	protected virtual List<MemberInfo> GetSerializableMembers(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x1C3BD40", Offset = "0x1C3A340", VA = "0x181C3BD40")]
	private bool ShouldSerializeEntityMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x1C35E00", Offset = "0x1C34400", VA = "0x181C35E00", Slot = "7")]
	protected virtual JsonObjectContract CreateObjectContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x1C3BFF0", Offset = "0x1C3A5F0", VA = "0x181C3BFF0")]
	private static void ThrowUnableToSerializeError(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x1C38650", Offset = "0x1C36C50", VA = "0x181C38650")]
	private MemberInfo GetExtensionDataMemberForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x1C3A780", Offset = "0x1C38D80", VA = "0x181C3A780")]
	private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x1C37590", Offset = "0x1C35B90", VA = "0x181C37590")]
	private ConstructorInfo GetAttributeConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x1C38850", Offset = "0x1C36E50", VA = "0x181C38850")]
	private ConstructorInfo GetImmutableConstructor(Type objectType, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x1C38A70", Offset = "0x1C37070", VA = "0x181C38A70")]
	private ConstructorInfo GetParameterizedConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x1C34860", Offset = "0x1C32E60", VA = "0x181C34860", Slot = "8")]
	protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x1C3A2A0", Offset = "0x1C388A0", VA = "0x181C3A2A0")]
	private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x1C36C00", Offset = "0x1C35200", VA = "0x181C36C00", Slot = "9")]
	protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty? matchingMemberProperty, ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x1C3A5E0", Offset = "0x1C38BE0", VA = "0x181C3A5E0", Slot = "10")]
	protected virtual JsonConverter ResolveContractConverter(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x1C385B0", Offset = "0x1C36BB0", VA = "0x181C385B0")]
	private Func<object> GetDefaultCreator(Type createdType)
	{
		return null;
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x1C394B0", Offset = "0x1C37AB0", VA = "0x181C394B0")]
	private void InitializeContract(JsonContract contract)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x1C3A340", Offset = "0x1C38940", VA = "0x181C3A340")]
	private void ResolveCallbackMethods(JsonContract contract, Type t)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x1C379E0", Offset = "0x1C35FE0", VA = "0x181C379E0")]
	private void GetCallbackMethodsForType(Type type, out List<SerializationCallback>? onSerializing, out List<SerializationCallback>? onSerialized, out List<SerializationCallback>? onDeserializing, out List<SerializationCallback>? onDeserialized, out List<SerializationErrorCallback>? onError)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x1C397A0", Offset = "0x1C37DA0", VA = "0x181C397A0")]
	private static bool IsConcurrentOrObservableCollection(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x1C3BE50", Offset = "0x1C3A450", VA = "0x181C3BE50")]
	private static bool ShouldSkipDeserialized(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x1C3BF20", Offset = "0x1C3A520", VA = "0x181C3BF20")]
	private static bool ShouldSkipSerializing(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x1C38300", Offset = "0x1C36900", VA = "0x181C38300")]
	private List<Type> GetClassHierarchyForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x1C35140", Offset = "0x1C33740", VA = "0x181C35140", Slot = "11")]
	protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x1C344D0", Offset = "0x1C32AD0", VA = "0x181C344D0", Slot = "12")]
	protected virtual JsonArrayContract CreateArrayContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x1C366C0", Offset = "0x1C34CC0", VA = "0x181C366C0", Slot = "13")]
	protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x1C35D20", Offset = "0x1C34320", VA = "0x181C35D20", Slot = "14")]
	protected virtual JsonLinqContract CreateLinqContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x1C35AC0", Offset = "0x1C340C0", VA = "0x181C35AC0", Slot = "15")]
	protected virtual JsonISerializableContract CreateISerializableContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x1C35750", Offset = "0x1C33D50", VA = "0x181C35750", Slot = "16")]
	protected virtual JsonDynamicContract CreateDynamicContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x1C37400", Offset = "0x1C35A00", VA = "0x181C37400", Slot = "17")]
	protected virtual JsonStringContract CreateStringContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x1C34A60", Offset = "0x1C33060", VA = "0x181C34A60", Slot = "18")]
	protected virtual JsonContract CreateContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x1C39A50", Offset = "0x1C38050", VA = "0x181C39A50")]
	internal static bool IsJsonPrimitiveType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x1C398E0", Offset = "0x1C37EE0", VA = "0x181C398E0")]
	internal static bool IsIConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x1C343D0", Offset = "0x1C329D0", VA = "0x181C343D0")]
	internal static bool CanConvertToString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x1C39AB0", Offset = "0x1C380B0", VA = "0x181C39AB0")]
	private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo? currentCallback, ref Type? prevAttributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x1C38490", Offset = "0x1C36A90", VA = "0x181C38490")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x1C367F0", Offset = "0x1C34DF0", VA = "0x181C367F0", Slot = "19")]
	protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "20")]
	internal virtual DefaultJsonNameTable GetNameTable()
	{
		return null;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x1C35DA0", Offset = "0x1C343A0", VA = "0x181C35DA0", Slot = "21")]
	protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x1C36F30", Offset = "0x1C35530", VA = "0x181C36F30", Slot = "22")]
	protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x1C3B610", Offset = "0x1C39C10", VA = "0x181C3B610")]
	private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x1C371B0", Offset = "0x1C357B0", VA = "0x181C371B0")]
	private Predicate<object> CreateShouldSerializeTest(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x1C3B2F0", Offset = "0x1C398F0", VA = "0x181C3B2F0")]
	private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x1C3A750", Offset = "0x1C38D50", VA = "0x181C3A750", Slot = "23")]
	protected virtual string ResolvePropertyName(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x1C3A730", Offset = "0x1C38D30", VA = "0x181C3A730", Slot = "24")]
	protected virtual string ResolveExtensionDataName(string extensionDataName)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x1C3A6E0", Offset = "0x1C38CE0", VA = "0x181C3A6E0", Slot = "25")]
	protected virtual string ResolveDictionaryKey(string dictionaryKey)
	{
		return null;
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x1C38AC0", Offset = "0x1C370C0", VA = "0x181C38AC0")]
	public string GetResolvedPropertyName(string propertyName)
	{
		return null;
	}
}
