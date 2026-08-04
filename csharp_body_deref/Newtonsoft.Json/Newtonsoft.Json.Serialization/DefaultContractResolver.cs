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
		[Address(RVA = "0x3DC8B30", Offset = "0x3DC8B30", VA = "0x3DC8B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public bool DynamicCodeGeneration
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x3DC8BA0", Offset = "0x3DC8BA0", VA = "0x3DC8BA0")]
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
		[Address(RVA = "0x3DC8C00", Offset = "0x3DC8C00", VA = "0x3DC8C00")]
		[CompilerGenerated]
		get
		{
			return default(BindingFlags);
		}
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x3DC8C10", Offset = "0x3DC8C10", VA = "0x3DC8C10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public bool SerializeCompilerGeneratedMembers
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x3DC8C20", Offset = "0x3DC8C20", VA = "0x3DC8C20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x3DC8C30", Offset = "0x3DC8C30", VA = "0x3DC8C30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IgnoreSerializableInterface
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x3DC8C40", Offset = "0x3DC8C40", VA = "0x3DC8C40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x3DC8C50", Offset = "0x3DC8C50", VA = "0x3DC8C50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IgnoreSerializableAttribute
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x3DC8C60", Offset = "0x3DC8C60", VA = "0x3DC8C60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x3DC8C70", Offset = "0x3DC8C70", VA = "0x3DC8C70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IgnoreIsSpecifiedMembers
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x3DC8C80", Offset = "0x3DC8C80", VA = "0x3DC8C80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x3DC8C90", Offset = "0x3DC8C90", VA = "0x3DC8C90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IgnoreShouldSerializeMembers
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x3DC8CA0", Offset = "0x3DC8CA0", VA = "0x3DC8CA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x3DC8CB0", Offset = "0x3DC8CB0", VA = "0x3DC8CB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x3DC8CC0", Offset = "0x3DC8CC0", VA = "0x3DC8CC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x3DC8CD0", Offset = "0x3DC8CD0", VA = "0x3DC8CD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x3DC8590", Offset = "0x3DC8590", VA = "0x3DC8590")]
	public DefaultContractResolver()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x3DC8CE0", Offset = "0x3DC8CE0", VA = "0x3DC8CE0", Slot = "5")]
	public virtual JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x3DC8D90", Offset = "0x3DC8D90", VA = "0x3DC8D90")]
	private static bool FilterMembers(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x3DC8EE0", Offset = "0x3DC8EE0", VA = "0x3DC8EE0", Slot = "6")]
	protected virtual List<MemberInfo> GetSerializableMembers(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x3DC9F10", Offset = "0x3DC9F10", VA = "0x3DC9F10")]
	private bool ShouldSerializeEntityMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x3DCA010", Offset = "0x3DCA010", VA = "0x3DCA010", Slot = "7")]
	protected virtual JsonObjectContract CreateObjectContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x3DCC1E0", Offset = "0x3DCC1E0", VA = "0x3DCC1E0")]
	private static void ThrowUnableToSerializeError(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x3DCB4E0", Offset = "0x3DCB4E0", VA = "0x3DCB4E0")]
	private MemberInfo GetExtensionDataMemberForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x3DCB6D0", Offset = "0x3DCB6D0", VA = "0x3DCB6D0")]
	private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x3DCABD0", Offset = "0x3DCABD0", VA = "0x3DCABD0")]
	private ConstructorInfo GetAttributeConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x3DCB200", Offset = "0x3DCB200", VA = "0x3DCB200")]
	private ConstructorInfo GetImmutableConstructor(Type objectType, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x3DCB1C0", Offset = "0x3DCB1C0", VA = "0x3DCB1C0")]
	private ConstructorInfo GetParameterizedConstructor(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x3DCC890", Offset = "0x3DCC890", VA = "0x3DCC890", Slot = "8")]
	protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties)
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x3DCC7B0", Offset = "0x3DCC7B0", VA = "0x3DCC7B0")]
	private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x3DCD060", Offset = "0x3DCD060", VA = "0x3DCD060", Slot = "9")]
	protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty? matchingMemberProperty, ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x3DCDE10", Offset = "0x3DCDE10", VA = "0x3DCDE10", Slot = "10")]
	protected virtual JsonConverter ResolveContractConverter(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x3DCDE80", Offset = "0x3DCDE80", VA = "0x3DCDE80")]
	private Func<object> GetDefaultCreator(Type createdType)
	{
		return null;
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x3DCA940", Offset = "0x3DCA940", VA = "0x3DCA940")]
	private void InitializeContract(JsonContract contract)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x3DCDF40", Offset = "0x3DCDF40", VA = "0x3DCDF40")]
	private void ResolveCallbackMethods(JsonContract contract, Type t)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x3DCE2C0", Offset = "0x3DCE2C0", VA = "0x3DCE2C0")]
	private void GetCallbackMethodsForType(Type type, out List<SerializationCallback>? onSerializing, out List<SerializationCallback>? onSerialized, out List<SerializationCallback>? onDeserializing, out List<SerializationCallback>? onDeserialized, out List<SerializationErrorCallback>? onError)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x3DCFBA0", Offset = "0x3DCFBA0", VA = "0x3DCFBA0")]
	private static bool IsConcurrentOrObservableCollection(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x3DCF290", Offset = "0x3DCF290", VA = "0x3DCF290")]
	private static bool ShouldSkipDeserialized(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x3DCF190", Offset = "0x3DCF190", VA = "0x3DCF190")]
	private static bool ShouldSkipSerializing(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x3DCC280", Offset = "0x3DCC280", VA = "0x3DCC280")]
	private List<Type> GetClassHierarchyForType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x3DCFCE0", Offset = "0x3DCFCE0", VA = "0x3DCFCE0", Slot = "11")]
	protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x3DD0F40", Offset = "0x3DD0F40", VA = "0x3DD0F40", Slot = "12")]
	protected virtual JsonArrayContract CreateArrayContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x3DD23A0", Offset = "0x3DD23A0", VA = "0x3DD23A0", Slot = "13")]
	protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x3DD24E0", Offset = "0x3DD24E0", VA = "0x3DD24E0", Slot = "14")]
	protected virtual JsonLinqContract CreateLinqContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x3DD2560", Offset = "0x3DD2560", VA = "0x3DD2560", Slot = "15")]
	protected virtual JsonISerializableContract CreateISerializableContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x3DD27E0", Offset = "0x3DD27E0", VA = "0x3DD27E0", Slot = "16")]
	protected virtual JsonDynamicContract CreateDynamicContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x3DD2C10", Offset = "0x3DD2C10", VA = "0x3DD2C10", Slot = "17")]
	protected virtual JsonStringContract CreateStringContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x3DD2C70", Offset = "0x3DD2C70", VA = "0x3DD2C70", Slot = "18")]
	protected virtual JsonContract CreateContract(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x3DD3160", Offset = "0x3DD3160", VA = "0x3DD3160")]
	internal static bool IsJsonPrimitiveType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x3DD32A0", Offset = "0x3DD32A0", VA = "0x3DD32A0")]
	internal static bool IsIConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x3DD31B0", Offset = "0x3DD31B0", VA = "0x3DD31B0")]
	internal static bool CanConvertToString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x3DCF390", Offset = "0x3DCF390", VA = "0x3DCF390")]
	private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo? currentCallback, ref Type? prevAttributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x3DD3420", Offset = "0x3DD3420", VA = "0x3DD3420")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x3DD3510", Offset = "0x3DD3510", VA = "0x3DD3510", Slot = "19")]
	protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x3DD3AF0", Offset = "0x3DD3AF0", VA = "0x3DD3AF0", Slot = "20")]
	internal virtual DefaultJsonNameTable GetNameTable()
	{
		return null;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x3DD3B00", Offset = "0x3DD3B00", VA = "0x3DD3B00", Slot = "21")]
	protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x3DD3B50", Offset = "0x3DD3B50", VA = "0x3DD3B50", Slot = "22")]
	protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x3DCD4F0", Offset = "0x3DCD4F0", VA = "0x3DCD4F0")]
	private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x3DD3DC0", Offset = "0x3DD3DC0", VA = "0x3DD3DC0")]
	private Predicate<object> CreateShouldSerializeTest(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x3DD4000", Offset = "0x3DD4000", VA = "0x3DD4000")]
	private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x3DD4350", Offset = "0x3DD4350", VA = "0x3DD4350", Slot = "23")]
	protected virtual string ResolvePropertyName(string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x3DD4380", Offset = "0x3DD4380", VA = "0x3DD4380", Slot = "24")]
	protected virtual string ResolveExtensionDataName(string extensionDataName)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x3DD43A0", Offset = "0x3DD43A0", VA = "0x3DD43A0", Slot = "25")]
	protected virtual string ResolveDictionaryKey(string dictionaryKey)
	{
		return null;
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x3DD43E0", Offset = "0x3DD43E0", VA = "0x3DD43E0")]
	public string GetResolvedPropertyName(string propertyName)
	{
		return null;
	}
}
