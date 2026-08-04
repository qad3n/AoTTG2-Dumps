// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReflectTypeDescriptionProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x48C3640", Offset = "0x48C3640", VA = "0x48C3640")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x48C3610", Offset = "0x48C3610", VA = "0x48C3610")]
		internal ReflectedTypeData(Type type)
		{
		}

		[Token(Token = "0x60013D8")]
		[Address(RVA = "0x48C3650", Offset = "0x48C3650", VA = "0x48C3650")]
		internal AttributeCollection GetAttributes()
		{
			return null;
		}

		[Token(Token = "0x60013D9")]
		[Address(RVA = "0x48C4370", Offset = "0x48C4370", VA = "0x48C4370")]
		internal string GetClassName(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DA")]
		[Address(RVA = "0x48C43A0", Offset = "0x48C43A0", VA = "0x48C43A0")]
		internal string GetComponentName(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DB")]
		[Address(RVA = "0x48C4560", Offset = "0x48C4560", VA = "0x48C4560")]
		internal TypeConverter GetConverter(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x48C4CB0", Offset = "0x48C4CB0", VA = "0x48C4CB0")]
		internal EventDescriptor GetDefaultEvent(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x48C50C0", Offset = "0x48C50C0", VA = "0x48C50C0")]
		internal PropertyDescriptor GetDefaultProperty(object instance)
		{
			return null;
		}

		[Token(Token = "0x60013DE")]
		[Address(RVA = "0x48C5590", Offset = "0x48C5590", VA = "0x48C5590")]
		internal object GetEditor(object instance, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60013DF")]
		[Address(RVA = "0x48C5CA0", Offset = "0x48C5CA0", VA = "0x48C5CA0")]
		private static EditorAttribute GetEditorAttribute(AttributeCollection attributes, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x48C6130", Offset = "0x48C6130", VA = "0x48C6130")]
		internal EventDescriptorCollection GetEvents()
		{
			return null;
		}

		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x48C6490", Offset = "0x48C6490", VA = "0x48C6490")]
		internal PropertyDescriptorCollection GetProperties()
		{
			return null;
		}

		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x48C4B00", Offset = "0x48C4B00", VA = "0x48C4B00")]
		private Type GetTypeFromName(string typeName)
		{
			return null;
		}

		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x48C67F0", Offset = "0x48C67F0", VA = "0x48C67F0")]
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
		[Address(RVA = "0x48BBD10", Offset = "0x48BBD10", VA = "0x48BBD10")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x1700047C")]
	private static Hashtable IntrinsicTypeConverters
	{
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x48BBD70", Offset = "0x48BBD70", VA = "0x48BBD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x48BBD60", Offset = "0x48BBD60", VA = "0x48BBD60")]
	internal ReflectTypeDescriptionProvider()
	{
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x48BC650", Offset = "0x48BC650", VA = "0x48BC650")]
	internal static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x48BC950", Offset = "0x48BC950", VA = "0x48BC950", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x48BCBA0", Offset = "0x48BCBA0", VA = "0x48BCBA0")]
	private static object CreateInstance(Type objectType, Type callingType)
	{
		return null;
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x48BCCA0", Offset = "0x48BCCA0", VA = "0x48BCCA0")]
	internal AttributeCollection GetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x48BCF60", Offset = "0x48BCF60", VA = "0x48BCF60", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x48BD2E0", Offset = "0x48BD2E0", VA = "0x48BD2E0")]
	internal string GetClassName(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x48BD310", Offset = "0x48BD310", VA = "0x48BD310")]
	internal string GetComponentName(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x48BD340", Offset = "0x48BD340", VA = "0x48BD340")]
	internal TypeConverter GetConverter(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x48BD370", Offset = "0x48BD370", VA = "0x48BD370")]
	internal EventDescriptor GetDefaultEvent(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x48BD3A0", Offset = "0x48BD3A0", VA = "0x48BD3A0")]
	internal PropertyDescriptor GetDefaultProperty(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x48BD3D0", Offset = "0x48BD3D0", VA = "0x48BD3D0")]
	internal object GetEditor(Type type, object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x48BD410", Offset = "0x48BD410", VA = "0x48BD410")]
	private static Hashtable GetEditorTable(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x48BD8D0", Offset = "0x48BD8D0", VA = "0x48BD8D0")]
	internal EventDescriptorCollection GetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x48BD8F0", Offset = "0x48BD8F0", VA = "0x48BD8F0")]
	internal AttributeCollection GetExtendedAttributes(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x48BD960", Offset = "0x48BD960", VA = "0x48BD960")]
	internal string GetExtendedClassName(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x48BD9A0", Offset = "0x48BD9A0", VA = "0x48BD9A0")]
	internal string GetExtendedComponentName(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x48BD9F0", Offset = "0x48BD9F0", VA = "0x48BD9F0")]
	internal TypeConverter GetExtendedConverter(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x48BDA40", Offset = "0x48BDA40", VA = "0x48BDA40")]
	internal EventDescriptor GetExtendedDefaultEvent(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x48BDA50", Offset = "0x48BDA50", VA = "0x48BDA50")]
	internal PropertyDescriptor GetExtendedDefaultProperty(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x48BDA60", Offset = "0x48BDA60", VA = "0x48BDA60")]
	internal object GetExtendedEditor(object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x48BDAB0", Offset = "0x48BDAB0", VA = "0x48BDAB0")]
	internal EventDescriptorCollection GetExtendedEvents(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x48BDB20", Offset = "0x48BDB20", VA = "0x48BDB20")]
	internal PropertyDescriptorCollection GetExtendedProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x48BF3E0", Offset = "0x48BF3E0", VA = "0x48BF3E0", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x48BF890", Offset = "0x48BF890", VA = "0x48BF890")]
	private static IExtenderProvider[] GetExtenders(ICollection components, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x48C07D0", Offset = "0x48C07D0", VA = "0x48C07D0")]
	internal object GetExtendedPropertyOwner(object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x48C08A0", Offset = "0x48C08A0", VA = "0x48C08A0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x48C08B0", Offset = "0x48C08B0", VA = "0x48C08B0", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x48C0A20", Offset = "0x48C0A20", VA = "0x48C0A20")]
	internal Type[] GetPopulatedTypes(Module module)
	{
		return null;
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x48C0FD0", Offset = "0x48C0FD0", VA = "0x48C0FD0")]
	internal PropertyDescriptorCollection GetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x48C0840", Offset = "0x48C0840", VA = "0x48C0840")]
	internal object GetPropertyOwner(Type type, object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x48C0FF0", Offset = "0x48C0FF0", VA = "0x48C0FF0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x48BCCC0", Offset = "0x48BCCC0", VA = "0x48BCCC0")]
	private ReflectedTypeData GetTypeData(Type type, bool createIfNeeded)
	{
		return null;
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x48C1000", Offset = "0x48C1000", VA = "0x48C1000", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x48C1010", Offset = "0x48C1010", VA = "0x48C1010")]
	private static Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x48C1100", Offset = "0x48C1100", VA = "0x48C1100")]
	internal bool IsPopulated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x48C1120", Offset = "0x48C1120", VA = "0x48C1120")]
	private static Attribute[] ReflectGetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x48A8F10", Offset = "0x48A8F10", VA = "0x48A8F10")]
	internal static Attribute[] ReflectGetAttributes(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x48C1620", Offset = "0x48C1620", VA = "0x48C1620")]
	private static EventDescriptor[] ReflectGetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x48BE270", Offset = "0x48BE270", VA = "0x48BE270")]
	private static PropertyDescriptor[] ReflectGetExtendedProperties(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x48C1EB0", Offset = "0x48C1EB0", VA = "0x48C1EB0")]
	private static PropertyDescriptor[] ReflectGetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x48C27A0", Offset = "0x48C27A0", VA = "0x48C27A0")]
	internal void Refresh(Type type)
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x48C27C0", Offset = "0x48C27C0", VA = "0x48C27C0")]
	private static object SearchIntrinsicTable(Hashtable table, Type callingType)
	{
		return null;
	}
}
