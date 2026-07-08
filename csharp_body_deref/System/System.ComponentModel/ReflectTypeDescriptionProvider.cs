using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000305")]
internal sealed class ReflectTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x2000306")]
	private class ReflectedTypeData
	{
		[Token(Token = "0x4000E90")]
		[FieldOffset(Offset = "0x10")]
		private Type _type;

		[Token(Token = "0x4000E91")]
		[FieldOffset(Offset = "0x18")]
		private AttributeCollection _attributes;

		[Token(Token = "0x4000E92")]
		[FieldOffset(Offset = "0x20")]
		private EventDescriptorCollection _events;

		[Token(Token = "0x4000E93")]
		[FieldOffset(Offset = "0x28")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x4000E94")]
		[FieldOffset(Offset = "0x30")]
		private TypeConverter _converter;

		[Token(Token = "0x4000E95")]
		[FieldOffset(Offset = "0x38")]
		private object[] _editors;

		[Token(Token = "0x4000E96")]
		[FieldOffset(Offset = "0x40")]
		private Type[] _editorTypes;

		[Token(Token = "0x4000E97")]
		[FieldOffset(Offset = "0x48")]
		private int _editorCount;

		[Token(Token = "0x1700047D")]
		internal bool IsPopulated
		{
			[Token(Token = "0x60013D7")]
			[Address(RVA = "0x459E540", Offset = "0x459E540", VA = "0x459E540")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x459E510", Offset = "0x459E510", VA = "0x459E510")]
		internal ReflectedTypeData(Type type)
		{
		}

		[Token(Token = "0x60013D8")]
		[Address(RVA = "0x459E550", Offset = "0x459E550", VA = "0x459E550")]
		internal AttributeCollection GetAttributes()
		{
			return null;
		}

		[Token(Token = "0x60013D9")]
		[Address(RVA = "0x459F270", Offset = "0x459F270", VA = "0x459F270")]
		internal string GetClassName(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DA")]
		[Address(RVA = "0x459F2A0", Offset = "0x459F2A0", VA = "0x459F2A0")]
		internal string GetComponentName(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DB")]
		[Address(RVA = "0x459F460", Offset = "0x459F460", VA = "0x459F460")]
		internal TypeConverter GetConverter(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x459FBB0", Offset = "0x459FBB0", VA = "0x459FBB0")]
		internal EventDescriptor GetDefaultEvent(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x459FFC0", Offset = "0x459FFC0", VA = "0x459FFC0")]
		internal PropertyDescriptor GetDefaultProperty(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DE")]
		[Address(RVA = "0x45A0490", Offset = "0x45A0490", VA = "0x45A0490")]
		internal object GetEditor(object instance, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60013DF")]
		[Address(RVA = "0x45A0BA0", Offset = "0x45A0BA0", VA = "0x45A0BA0")]
		private static EditorAttribute GetEditorAttribute(AttributeCollection attributes, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x45A1030", Offset = "0x45A1030", VA = "0x45A1030")]
		internal EventDescriptorCollection GetEvents()
		{
			return null;
		}

		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x45A1390", Offset = "0x45A1390", VA = "0x45A1390")]
		internal PropertyDescriptorCollection GetProperties()
		{
			return null;
		}

		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x459FA00", Offset = "0x459FA00", VA = "0x459FA00")]
		private Type GetTypeFromName(string typeName)
		{
			return null;
		}

		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x45A16F0", Offset = "0x45A16F0", VA = "0x45A16F0")]
		internal void Refresh()
		{
		}
	}

	[Token(Token = "0x4000E80")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _typeData;

	[Token(Token = "0x4000E81")]
	[FieldOffset(Offset = "0x0")]
	private static Type[] _typeConstructor;

	[Token(Token = "0x4000E82")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _editorTables;

	[Token(Token = "0x4000E83")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _intrinsicTypeConverters;

	[Token(Token = "0x4000E84")]
	[FieldOffset(Offset = "0x18")]
	private static object _intrinsicReferenceKey;

	[Token(Token = "0x4000E85")]
	[FieldOffset(Offset = "0x20")]
	private static object _intrinsicNullableKey;

	[Token(Token = "0x4000E86")]
	[FieldOffset(Offset = "0x28")]
	private static object _dictionaryKey;

	[Token(Token = "0x4000E87")]
	[FieldOffset(Offset = "0x30")]
	private static Hashtable _propertyCache;

	[Token(Token = "0x4000E88")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable _eventCache;

	[Token(Token = "0x4000E89")]
	[FieldOffset(Offset = "0x40")]
	private static Hashtable _attributeCache;

	[Token(Token = "0x4000E8A")]
	[FieldOffset(Offset = "0x48")]
	private static Hashtable _extendedPropertyCache;

	[Token(Token = "0x4000E8B")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Guid _extenderProviderKey;

	[Token(Token = "0x4000E8C")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Guid _extenderPropertiesKey;

	[Token(Token = "0x4000E8D")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Guid _extenderProviderPropertiesKey;

	[Token(Token = "0x4000E8E")]
	[FieldOffset(Offset = "0x80")]
	private static readonly Type[] _skipInterfaceAttributeList;

	[Token(Token = "0x4000E8F")]
	[FieldOffset(Offset = "0x88")]
	private static object _internalSyncObject;

	[Token(Token = "0x1700047B")]
	internal static Guid ExtenderProviderKey
	{
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x4596C10", Offset = "0x4596C10", VA = "0x4596C10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x1700047C")]
	private static Hashtable IntrinsicTypeConverters
	{
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x4596C70", Offset = "0x4596C70", VA = "0x4596C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x4596C60", Offset = "0x4596C60", VA = "0x4596C60")]
	internal ReflectTypeDescriptionProvider()
	{
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x4597550", Offset = "0x4597550", VA = "0x4597550")]
	internal static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x4597850", Offset = "0x4597850", VA = "0x4597850", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x4597AA0", Offset = "0x4597AA0", VA = "0x4597AA0")]
	private static object CreateInstance(Type objectType, Type callingType)
	{
		return null;
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x4597BA0", Offset = "0x4597BA0", VA = "0x4597BA0")]
	internal AttributeCollection GetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x4597E60", Offset = "0x4597E60", VA = "0x4597E60", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x45981E0", Offset = "0x45981E0", VA = "0x45981E0")]
	internal string GetClassName(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x4598210", Offset = "0x4598210", VA = "0x4598210")]
	internal string GetComponentName(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x4598240", Offset = "0x4598240", VA = "0x4598240")]
	internal TypeConverter GetConverter(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x4598270", Offset = "0x4598270", VA = "0x4598270")]
	internal EventDescriptor GetDefaultEvent(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x45982A0", Offset = "0x45982A0", VA = "0x45982A0")]
	internal PropertyDescriptor GetDefaultProperty(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x45982D0", Offset = "0x45982D0", VA = "0x45982D0")]
	internal object GetEditor(Type type, object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x4598310", Offset = "0x4598310", VA = "0x4598310")]
	private static Hashtable GetEditorTable(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x45987D0", Offset = "0x45987D0", VA = "0x45987D0")]
	internal EventDescriptorCollection GetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x45987F0", Offset = "0x45987F0", VA = "0x45987F0")]
	internal AttributeCollection GetExtendedAttributes(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x4598860", Offset = "0x4598860", VA = "0x4598860")]
	internal string GetExtendedClassName(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x45988A0", Offset = "0x45988A0", VA = "0x45988A0")]
	internal string GetExtendedComponentName(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x45988F0", Offset = "0x45988F0", VA = "0x45988F0")]
	internal TypeConverter GetExtendedConverter(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x4598940", Offset = "0x4598940", VA = "0x4598940")]
	internal EventDescriptor GetExtendedDefaultEvent(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x4598950", Offset = "0x4598950", VA = "0x4598950")]
	internal PropertyDescriptor GetExtendedDefaultProperty(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x4598960", Offset = "0x4598960", VA = "0x4598960")]
	internal object GetExtendedEditor(object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x45989B0", Offset = "0x45989B0", VA = "0x45989B0")]
	internal EventDescriptorCollection GetExtendedEvents(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x4598A20", Offset = "0x4598A20", VA = "0x4598A20")]
	internal PropertyDescriptorCollection GetExtendedProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x459A2E0", Offset = "0x459A2E0", VA = "0x459A2E0", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x459A790", Offset = "0x459A790", VA = "0x459A790")]
	private static IExtenderProvider[] GetExtenders(ICollection components, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x459B6D0", Offset = "0x459B6D0", VA = "0x459B6D0")]
	internal object GetExtendedPropertyOwner(object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x459B7A0", Offset = "0x459B7A0", VA = "0x459B7A0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x459B7B0", Offset = "0x459B7B0", VA = "0x459B7B0", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x459B920", Offset = "0x459B920", VA = "0x459B920")]
	internal Type[] GetPopulatedTypes(Module module)
	{
		return null;
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x459BED0", Offset = "0x459BED0", VA = "0x459BED0")]
	internal PropertyDescriptorCollection GetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x459B740", Offset = "0x459B740", VA = "0x459B740")]
	internal object GetPropertyOwner(Type type, object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x459BEF0", Offset = "0x459BEF0", VA = "0x459BEF0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x4597BC0", Offset = "0x4597BC0", VA = "0x4597BC0")]
	private ReflectedTypeData GetTypeData(Type type, bool createIfNeeded)
	{
		return null;
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x459BF00", Offset = "0x459BF00", VA = "0x459BF00", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x459BF10", Offset = "0x459BF10", VA = "0x459BF10")]
	private static Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x459C000", Offset = "0x459C000", VA = "0x459C000")]
	internal bool IsPopulated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x459C020", Offset = "0x459C020", VA = "0x459C020")]
	private static Attribute[] ReflectGetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x4583E10", Offset = "0x4583E10", VA = "0x4583E10")]
	internal static Attribute[] ReflectGetAttributes(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x459C520", Offset = "0x459C520", VA = "0x459C520")]
	private static EventDescriptor[] ReflectGetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x4599170", Offset = "0x4599170", VA = "0x4599170")]
	private static PropertyDescriptor[] ReflectGetExtendedProperties(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x459CDB0", Offset = "0x459CDB0", VA = "0x459CDB0")]
	private static PropertyDescriptor[] ReflectGetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x459D6A0", Offset = "0x459D6A0", VA = "0x459D6A0")]
	internal void Refresh(Type type)
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x459D6C0", Offset = "0x459D6C0", VA = "0x459D6C0")]
	private static object SearchIntrinsicTable(Hashtable table, Type callingType)
	{
		return null;
	}
}
