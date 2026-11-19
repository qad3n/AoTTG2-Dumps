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

[Token(Token = "0x20001D1")]
internal sealed class ReflectTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x20001D2")]
	private class ReflectedTypeData
	{
		[Token(Token = "0x40006F8")]
		[FieldOffset(Offset = "0x10")]
		private Type _type;

		[Token(Token = "0x40006F9")]
		[FieldOffset(Offset = "0x18")]
		private AttributeCollection _attributes;

		[Token(Token = "0x40006FA")]
		[FieldOffset(Offset = "0x20")]
		private EventDescriptorCollection _events;

		[Token(Token = "0x40006FB")]
		[FieldOffset(Offset = "0x28")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x40006FC")]
		[FieldOffset(Offset = "0x30")]
		private TypeConverter _converter;

		[Token(Token = "0x40006FD")]
		[FieldOffset(Offset = "0x38")]
		private object[] _editors;

		[Token(Token = "0x40006FE")]
		[FieldOffset(Offset = "0x40")]
		private Type[] _editorTypes;

		[Token(Token = "0x40006FF")]
		[FieldOffset(Offset = "0x48")]
		private int _editorCount;

		[Token(Token = "0x170002BD")]
		internal bool IsPopulated
		{
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x62614A0", Offset = "0x62604A0", VA = "0x62614A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x6261470", Offset = "0x6260470", VA = "0x6261470")]
		internal ReflectedTypeData(Type type)
		{
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x62614B0", Offset = "0x62604B0", VA = "0x62614B0")]
		internal AttributeCollection GetAttributes()
		{
			return null;
		}

		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x6262180", Offset = "0x6261180", VA = "0x6262180")]
		internal string GetClassName(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x62621B0", Offset = "0x62611B0", VA = "0x62621B0")]
		internal string GetComponentName(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x6262360", Offset = "0x6261360", VA = "0x6262360")]
		internal TypeConverter GetConverter(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x6262AD0", Offset = "0x6261AD0", VA = "0x6262AD0")]
		internal EventDescriptor GetDefaultEvent(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x6262EE0", Offset = "0x6261EE0", VA = "0x6262EE0")]
		internal PropertyDescriptor GetDefaultProperty(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x62633B0", Offset = "0x62623B0", VA = "0x62633B0")]
		internal object GetEditor(object instance, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x6263A40", Offset = "0x6262A40", VA = "0x6263A40")]
		private static EditorAttribute GetEditorAttribute(AttributeCollection attributes, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x6263DF0", Offset = "0x6262DF0", VA = "0x6263DF0")]
		internal EventDescriptorCollection GetEvents()
		{
			return null;
		}

		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x6264200", Offset = "0x6263200", VA = "0x6264200")]
		internal PropertyDescriptorCollection GetProperties()
		{
			return null;
		}

		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x6262920", Offset = "0x6261920", VA = "0x6262920")]
		private Type GetTypeFromName(string typeName)
		{
			return null;
		}

		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x6264610", Offset = "0x6263610", VA = "0x6264610")]
		internal void Refresh()
		{
		}
	}

	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _typeData;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0x0")]
	private static Type[] _typeConstructor;

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _editorTables;

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _intrinsicTypeConverters;

	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x18")]
	private static object _intrinsicReferenceKey;

	[Token(Token = "0x40006ED")]
	[FieldOffset(Offset = "0x20")]
	private static object _intrinsicNullableKey;

	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x28")]
	private static object _dictionaryKey;

	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x30")]
	private static Hashtable _propertyCache;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable _eventCache;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x40")]
	private static Hashtable _attributeCache;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x48")]
	private static Hashtable _extendedPropertyCache;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Guid _extenderProviderKey;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Guid _extenderPropertiesKey;

	[Token(Token = "0x40006F5")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Guid _extenderProviderPropertiesKey;

	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x80")]
	private static readonly Type[] _skipInterfaceAttributeList;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x88")]
	private static object _internalSyncObject;

	[Token(Token = "0x170002BB")]
	internal static Guid ExtenderProviderKey
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x625A6D0", Offset = "0x62596D0", VA = "0x625A6D0")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170002BC")]
	private static Hashtable IntrinsicTypeConverters
	{
		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x625A730", Offset = "0x6259730", VA = "0x625A730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x625A720", Offset = "0x6259720", VA = "0x625A720")]
	internal ReflectTypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x625B010", Offset = "0x625A010", VA = "0x625B010")]
	internal static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x625B2B0", Offset = "0x625A2B0", VA = "0x625B2B0", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x625B4C0", Offset = "0x625A4C0", VA = "0x625B4C0")]
	private static object CreateInstance(Type objectType, Type callingType)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x625B5C0", Offset = "0x625A5C0", VA = "0x625B5C0")]
	internal AttributeCollection GetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x625B840", Offset = "0x625A840", VA = "0x625B840", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x625BBC0", Offset = "0x625ABC0", VA = "0x625BBC0")]
	internal string GetClassName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x625BBF0", Offset = "0x625ABF0", VA = "0x625BBF0")]
	internal string GetComponentName(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x625BC20", Offset = "0x625AC20", VA = "0x625BC20")]
	internal TypeConverter GetConverter(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x625BC50", Offset = "0x625AC50", VA = "0x625BC50")]
	internal EventDescriptor GetDefaultEvent(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x625BC80", Offset = "0x625AC80", VA = "0x625BC80")]
	internal PropertyDescriptor GetDefaultProperty(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x625BCB0", Offset = "0x625ACB0", VA = "0x625BCB0")]
	internal object GetEditor(Type type, object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x625BCF0", Offset = "0x625ACF0", VA = "0x625BCF0")]
	private static Hashtable GetEditorTable(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x625C170", Offset = "0x625B170", VA = "0x625C170")]
	internal EventDescriptorCollection GetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x625C190", Offset = "0x625B190", VA = "0x625C190")]
	internal AttributeCollection GetExtendedAttributes(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x625C200", Offset = "0x625B200", VA = "0x625C200")]
	internal string GetExtendedClassName(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x625C240", Offset = "0x625B240", VA = "0x625C240")]
	internal string GetExtendedComponentName(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x625C290", Offset = "0x625B290", VA = "0x625C290")]
	internal TypeConverter GetExtendedConverter(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x625C2E0", Offset = "0x625B2E0", VA = "0x625C2E0")]
	internal EventDescriptor GetExtendedDefaultEvent(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x625C2F0", Offset = "0x625B2F0", VA = "0x625C2F0")]
	internal PropertyDescriptor GetExtendedDefaultProperty(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x625C300", Offset = "0x625B300", VA = "0x625C300")]
	internal object GetExtendedEditor(object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x625C350", Offset = "0x625B350", VA = "0x625C350")]
	internal EventDescriptorCollection GetExtendedEvents(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x625C3C0", Offset = "0x625B3C0", VA = "0x625C3C0")]
	internal PropertyDescriptorCollection GetExtendedProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x625DA50", Offset = "0x625CA50", VA = "0x625DA50", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x625DF00", Offset = "0x625CF00", VA = "0x625DF00")]
	private static IExtenderProvider[] GetExtenders(ICollection components, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x625EC00", Offset = "0x625DC00", VA = "0x625EC00")]
	internal object GetExtendedPropertyOwner(object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x625ECD0", Offset = "0x625DCD0", VA = "0x625ECD0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x625ECE0", Offset = "0x625DCE0", VA = "0x625ECE0", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x625EE50", Offset = "0x625DE50", VA = "0x625EE50")]
	internal Type[] GetPopulatedTypes(Module module)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x625F350", Offset = "0x625E350", VA = "0x625F350")]
	internal PropertyDescriptorCollection GetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x625EC70", Offset = "0x625DC70", VA = "0x625EC70")]
	internal object GetPropertyOwner(Type type, object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x625F370", Offset = "0x625E370", VA = "0x625F370", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x625B5E0", Offset = "0x625A5E0", VA = "0x625B5E0")]
	private ReflectedTypeData GetTypeData(Type type, bool createIfNeeded)
	{
		return null;
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x625F380", Offset = "0x625E380", VA = "0x625F380", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x625F390", Offset = "0x625E390", VA = "0x625F390")]
	private static Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x625F480", Offset = "0x625E480", VA = "0x625F480")]
	internal bool IsPopulated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x625F4A0", Offset = "0x625E4A0", VA = "0x625F4A0")]
	private static Attribute[] ReflectGetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x62484D0", Offset = "0x62474D0", VA = "0x62484D0")]
	internal static Attribute[] ReflectGetAttributes(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x625F910", Offset = "0x625E910", VA = "0x625F910")]
	private static EventDescriptor[] ReflectGetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x625C980", Offset = "0x625B980", VA = "0x625C980")]
	private static PropertyDescriptor[] ReflectGetExtendedProperties(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x6260030", Offset = "0x625F030", VA = "0x6260030")]
	private static PropertyDescriptor[] ReflectGetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x62606B0", Offset = "0x625F6B0", VA = "0x62606B0")]
	internal void Refresh(Type type)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x62606D0", Offset = "0x625F6D0", VA = "0x62606D0")]
	private static object SearchIntrinsicTable(Hashtable table, Type callingType)
	{
		return null;
	}
}
