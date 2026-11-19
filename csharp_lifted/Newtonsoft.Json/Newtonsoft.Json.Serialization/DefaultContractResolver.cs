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
		[Address(RVA = "0x55C1760", Offset = "0x55C0760", VA = "0x55C1760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public bool DynamicCodeGeneration
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x55C17D0", Offset = "0x55C07D0", VA = "0x55C17D0")]
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
		[Address(RVA = "0x55C1830", Offset = "0x55C0830", VA = "0x55C1830")]
		[CompilerGenerated]
		get
		{
			return default(BindingFlags);
		}
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x55C1840", Offset = "0x55C0840", VA = "0x55C1840")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public bool SerializeCompilerGeneratedMembers
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x55C1850", Offset = "0x55C0850", VA = "0x55C1850")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x55C1860", Offset = "0x55C0860", VA = "0x55C1860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IgnoreSerializableInterface
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x55C1870", Offset = "0x55C0870", VA = "0x55C1870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x55C1880", Offset = "0x55C0880", VA = "0x55C1880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IgnoreSerializableAttribute
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x55C1890", Offset = "0x55C0890", VA = "0x55C1890")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x55C18A0", Offset = "0x55C08A0", VA = "0x55C18A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IgnoreIsSpecifiedMembers
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x55C18B0", Offset = "0x55C08B0", VA = "0x55C18B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x55C18C0", Offset = "0x55C08C0", VA = "0x55C18C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IgnoreShouldSerializeMembers
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x55C18D0", Offset = "0x55C08D0", VA = "0x55C18D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x55C18E0", Offset = "0x55C08E0", VA = "0x55C18E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x55C18F0", Offset = "0x55C08F0", VA = "0x55C18F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x55C1900", Offset = "0x55C0900", VA = "0x55C1900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x55C11E0", Offset = "0x55C01E0", VA = "0x55C11E0")]
	public DefaultContractResolver()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x55C1910", Offset = "0x55C0910", VA = "0x55C1910", Slot = "5")]
	public virtual JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x55C19C0", Offset = "0x55C09C0", VA = "0x55C19C0")]
	private static bool FilterMembers(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x55C1AF0", Offset = "0x55C0AF0", VA = "0x55C1AF0", Slot = "6")]
	protected virtual List<MemberInfo> GetSerializableMembers(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x55C28B0", Offset = "0x55C18B0", VA = "0x55C28B0")]
	private bool ShouldSerializeEntityMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x55C29B0", Offset = "0x55C19B0", VA = "0x55C29B0", Slot = "7")]
	protected virtual JsonObjectContract CreateObjectContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x55C4BB0", Offset = "0x55C3BB0", VA = "0x55C4BB0")]
	private static void ThrowUnableToSerializeError(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x55C3EA0", Offset = "0x55C2EA0", VA = "0x55C3EA0")]
	private MemberInfo GetExtensionDataMemberForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x55C4090", Offset = "0x55C3090", VA = "0x55C4090")]
	private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x55C35A0", Offset = "0x55C25A0", VA = "0x55C35A0")]
	private ConstructorInfo GetAttributeConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x55C3BD0", Offset = "0x55C2BD0", VA = "0x55C3BD0")]
	private ConstructorInfo GetImmutableConstructor(Type objectType, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x55C3B90", Offset = "0x55C2B90", VA = "0x55C3B90")]
	private ConstructorInfo GetParameterizedConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x55C5270", Offset = "0x55C4270", VA = "0x55C5270", Slot = "8")]
	protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x55C5190", Offset = "0x55C4190", VA = "0x55C5190")]
	private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x55C5940", Offset = "0x55C4940", VA = "0x55C5940", Slot = "9")]
	protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty? matchingMemberProperty, ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x55C66D0", Offset = "0x55C56D0", VA = "0x55C66D0", Slot = "10")]
	protected virtual JsonConverter ResolveContractConverter(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x55C6740", Offset = "0x55C5740", VA = "0x55C6740")]
	private Func<object> GetDefaultCreator(Type createdType)
	{
		return null;
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x55C3310", Offset = "0x55C2310", VA = "0x55C3310")]
	private void InitializeContract(JsonContract contract)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x55C6800", Offset = "0x55C5800", VA = "0x55C6800")]
	private void ResolveCallbackMethods(JsonContract contract, Type t)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x55C6B80", Offset = "0x55C5B80", VA = "0x55C6B80")]
	private void GetCallbackMethodsForType(Type type, out List<SerializationCallback>? onSerializing, out List<SerializationCallback>? onSerialized, out List<SerializationCallback>? onDeserializing, out List<SerializationCallback>? onDeserialized, out List<SerializationErrorCallback>? onError)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x55C84A0", Offset = "0x55C74A0", VA = "0x55C84A0")]
	private static bool IsConcurrentOrObservableCollection(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x55C7B90", Offset = "0x55C6B90", VA = "0x55C7B90")]
	private static bool ShouldSkipDeserialized(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x55C7AB0", Offset = "0x55C6AB0", VA = "0x55C7AB0")]
	private static bool ShouldSkipSerializing(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x55C4C50", Offset = "0x55C3C50", VA = "0x55C4C50")]
	private List<Type> GetClassHierarchyForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x55C85E0", Offset = "0x55C75E0", VA = "0x55C85E0", Slot = "11")]
	protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x55C9810", Offset = "0x55C8810", VA = "0x55C9810", Slot = "12")]
	protected virtual JsonArrayContract CreateArrayContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x55CACA0", Offset = "0x55C9CA0", VA = "0x55CACA0", Slot = "13")]
	protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x55CADE0", Offset = "0x55C9DE0", VA = "0x55CADE0", Slot = "14")]
	protected virtual JsonLinqContract CreateLinqContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x55CAE60", Offset = "0x55C9E60", VA = "0x55CAE60", Slot = "15")]
	protected virtual JsonISerializableContract CreateISerializableContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x55CB0D0", Offset = "0x55CA0D0", VA = "0x55CB0D0", Slot = "16")]
	protected virtual JsonDynamicContract CreateDynamicContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x55CB4E0", Offset = "0x55CA4E0", VA = "0x55CB4E0", Slot = "17")]
	protected virtual JsonStringContract CreateStringContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x55CB540", Offset = "0x55CA540", VA = "0x55CB540", Slot = "18")]
	protected virtual JsonContract CreateContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x55CBA30", Offset = "0x55CAA30", VA = "0x55CBA30")]
	internal static bool IsJsonPrimitiveType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x55CBB70", Offset = "0x55CAB70", VA = "0x55CBB70")]
	internal static bool IsIConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x55CBA80", Offset = "0x55CAA80", VA = "0x55CBA80")]
	internal static bool CanConvertToString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x55C7C70", Offset = "0x55C6C70", VA = "0x55C7C70")]
	private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo? currentCallback, ref Type? prevAttributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x55CBCF0", Offset = "0x55CACF0", VA = "0x55CBCF0")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x55CBDE0", Offset = "0x55CADE0", VA = "0x55CBDE0", Slot = "19")]
	protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x55CC2C0", Offset = "0x55CB2C0", VA = "0x55CC2C0", Slot = "20")]
	internal virtual DefaultJsonNameTable GetNameTable()
	{
		return null;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x55CC2D0", Offset = "0x55CB2D0", VA = "0x55CC2D0", Slot = "21")]
	protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x55CC320", Offset = "0x55CB320", VA = "0x55CC320", Slot = "22")]
	protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x55C5DD0", Offset = "0x55C4DD0", VA = "0x55C5DD0")]
	private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x55CC590", Offset = "0x55CB590", VA = "0x55CC590")]
	private Predicate<object> CreateShouldSerializeTest(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x55CC7D0", Offset = "0x55CB7D0", VA = "0x55CC7D0")]
	private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x55CCB20", Offset = "0x55CBB20", VA = "0x55CCB20", Slot = "23")]
	protected virtual string ResolvePropertyName(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x55CCB50", Offset = "0x55CBB50", VA = "0x55CCB50", Slot = "24")]
	protected virtual string ResolveExtensionDataName(string extensionDataName)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x55CCB70", Offset = "0x55CBB70", VA = "0x55CCB70", Slot = "25")]
	protected virtual string ResolveDictionaryKey(string dictionaryKey)
	{
		return null;
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x55CCBB0", Offset = "0x55CBBB0", VA = "0x55CCBB0")]
	public string GetResolvedPropertyName(string propertyName)
	{
		return null;
	}
}
