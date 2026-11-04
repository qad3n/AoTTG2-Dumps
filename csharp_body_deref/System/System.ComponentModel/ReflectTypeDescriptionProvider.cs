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

[Token(Token = "0x2000210")]
internal sealed class ReflectTypeDescriptionProvider : TypeDescriptionProvider
{
	[Token(Token = "0x2000211")]
	private class ReflectedTypeData
	{
		[Token(Token = "0x40007C7")]
		[FieldOffset(Offset = "0x10")]
		private Type _type;

		[Token(Token = "0x40007C8")]
		[FieldOffset(Offset = "0x18")]
		private AttributeCollection _attributes;

		[Token(Token = "0x40007C9")]
		[FieldOffset(Offset = "0x20")]
		private EventDescriptorCollection _events;

		[Token(Token = "0x40007CA")]
		[FieldOffset(Offset = "0x28")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x40007CB")]
		[FieldOffset(Offset = "0x30")]
		private TypeConverter _converter;

		[Token(Token = "0x40007CC")]
		[FieldOffset(Offset = "0x38")]
		private object[] _editors;

		[Token(Token = "0x40007CD")]
		[FieldOffset(Offset = "0x40")]
		private Type[] _editorTypes;

		[Token(Token = "0x40007CE")]
		[FieldOffset(Offset = "0x48")]
		private int _editorCount;

		[Token(Token = "0x170002EC")]
		internal bool IsPopulated
		{
			[Token(Token = "0x6000E1F")]
			[Address(RVA = "0x28C8C90", Offset = "0x28C7290", VA = "0x1828C8C90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal ReflectedTypeData(Type type)
		{
		}

		[Token(Token = "0x6000E20")]
		[Address(RVA = "0x28C6D20", Offset = "0x28C5320", VA = "0x1828C6D20")]
		internal AttributeCollection GetAttributes()
		{
			return null;
		}

		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x1AB84F0", Offset = "0x1AB6AF0", VA = "0x181AB84F0")]
		internal string GetClassName(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x28C7270", Offset = "0x28C5870", VA = "0x1828C7270")]
		internal string GetComponentName(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x28C7330", Offset = "0x28C5930", VA = "0x1828C7330")]
		internal TypeConverter GetConverter(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x28C7890", Offset = "0x28C5E90", VA = "0x1828C7890")]
		internal EventDescriptor GetDefaultEvent(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x28C7A10", Offset = "0x28C6010", VA = "0x1828C7A10")]
		internal PropertyDescriptor GetDefaultProperty(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x28C7DE0", Offset = "0x28C63E0", VA = "0x1828C7DE0")]
		internal object GetEditor(object instance, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x28C7B90", Offset = "0x28C6190", VA = "0x1828C7B90")]
		private static EditorAttribute GetEditorAttribute(AttributeCollection attributes, Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x28C8400", Offset = "0x28C6A00", VA = "0x1828C8400")]
		internal EventDescriptorCollection GetEvents()
		{
			return null;
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x28C86F0", Offset = "0x28C6CF0", VA = "0x1828C86F0")]
		internal PropertyDescriptorCollection GetProperties()
		{
			return null;
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x28C8A70", Offset = "0x28C7070", VA = "0x1828C8A70")]
		private Type GetTypeFromName(string typeName)
		{
			return null;
		}

		[Token(Token = "0x6000E2B")]
		[Address(RVA = "0x28C8C10", Offset = "0x28C7210", VA = "0x1828C8C10")]
		internal void Refresh()
		{
		}
	}

	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _typeData;

	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x0")]
	private static Type[] _typeConstructor;

	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _editorTables;

	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _intrinsicTypeConverters;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x18")]
	private static object _intrinsicReferenceKey;

	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x20")]
	private static object _intrinsicNullableKey;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x28")]
	private static object _dictionaryKey;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x30")]
	private static Hashtable _propertyCache;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable _eventCache;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0x40")]
	private static Hashtable _attributeCache;

	[Token(Token = "0x40007C1")]
	[FieldOffset(Offset = "0x48")]
	private static Hashtable _extendedPropertyCache;

	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Guid _extenderProviderKey;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Guid _extenderPropertiesKey;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Guid _extenderProviderPropertiesKey;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x80")]
	private static readonly Type[] _skipInterfaceAttributeList;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x88")]
	private static object _internalSyncObject;

	[Token(Token = "0x170002EA")]
	internal static Guid ExtenderProviderKey
	{
		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x28C63F0", Offset = "0x28C49F0", VA = "0x1828C63F0")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x170002EB")]
	private static Hashtable IntrinsicTypeConverters
	{
		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x28C6450", Offset = "0x28C4A50", VA = "0x1828C6450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal ReflectTypeDescriptionProvider()
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x28C0550", Offset = "0x28BEB50", VA = "0x1828C0550")]
	internal static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x28C0900", Offset = "0x28BEF00", VA = "0x1828C0900", Slot = "4")]
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x28C0800", Offset = "0x28BEE00", VA = "0x1828C0800")]
	private static object CreateInstance(Type objectType, Type callingType)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x28C0B00", Offset = "0x28BF100", VA = "0x1828C0B00")]
	internal AttributeCollection GetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x28C0B30", Offset = "0x28BF130", VA = "0x1828C0B30", Slot = "5")]
	public override IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x28C0D20", Offset = "0x28BF320", VA = "0x1828C0D20")]
	internal string GetClassName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x28C0D60", Offset = "0x28BF360", VA = "0x1828C0D60")]
	internal string GetComponentName(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x28C0E30", Offset = "0x28BF430", VA = "0x1828C0E30")]
	internal TypeConverter GetConverter(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x28C0E70", Offset = "0x28BF470", VA = "0x1828C0E70")]
	internal EventDescriptor GetDefaultEvent(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x28C1000", Offset = "0x28BF600", VA = "0x1828C1000")]
	internal PropertyDescriptor GetDefaultProperty(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x28C1670", Offset = "0x28BFC70", VA = "0x1828C1670")]
	internal object GetEditor(Type type, object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x28C1190", Offset = "0x28BF790", VA = "0x1828C1190")]
	private static Hashtable GetEditorTable(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x28C16C0", Offset = "0x28BFCC0", VA = "0x1828C16C0")]
	internal EventDescriptorCollection GetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x28C16F0", Offset = "0x28BFCF0", VA = "0x1828C16F0")]
	internal AttributeCollection GetExtendedAttributes(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x28C1740", Offset = "0x28BFD40", VA = "0x1828C1740")]
	internal string GetExtendedClassName(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x28C17A0", Offset = "0x28BFDA0", VA = "0x1828C17A0")]
	internal string GetExtendedComponentName(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x28C18A0", Offset = "0x28BFEA0", VA = "0x1828C18A0")]
	internal TypeConverter GetExtendedConverter(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	internal EventDescriptor GetExtendedDefaultEvent(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	internal PropertyDescriptor GetExtendedDefaultProperty(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x28C1900", Offset = "0x28BFF00", VA = "0x1828C1900")]
	internal object GetExtendedEditor(object instance, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x28C1970", Offset = "0x28BFF70", VA = "0x1828C1970")]
	internal EventDescriptorCollection GetExtendedEvents(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x28C19C0", Offset = "0x28BFFC0", VA = "0x1828C19C0")]
	internal PropertyDescriptorCollection GetExtendedProperties(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x28C1F00", Offset = "0x28C0500", VA = "0x1828C1F00", Slot = "7")]
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x28C21C0", Offset = "0x28C07C0", VA = "0x1828C21C0")]
	private static IExtenderProvider[] GetExtenders(ICollection components, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x28C1E90", Offset = "0x28C0490", VA = "0x1828C1E90")]
	internal object GetExtendedPropertyOwner(object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x28C2A40", Offset = "0x28C1040", VA = "0x1828C2A40", Slot = "8")]
	public override string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x28C2AF0", Offset = "0x28C10F0", VA = "0x1828C2AF0")]
	internal Type[] GetPopulatedTypes(Module module)
	{
		return null;
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x28C2F20", Offset = "0x28C1520", VA = "0x1828C2F20")]
	internal PropertyDescriptorCollection GetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x28C2F50", Offset = "0x28C1550", VA = "0x1828C2F50")]
	internal object GetPropertyOwner(Type type, object instance, PropertyDescriptor pd)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "9")]
	public override Type GetReflectionType(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x28C2FB0", Offset = "0x28C15B0", VA = "0x1828C2FB0")]
	private ReflectedTypeData GetTypeData(Type type, bool createIfNeeded)
	{
		return null;
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x28C3230", Offset = "0x28C1830", VA = "0x1828C3230")]
	private static Type GetTypeFromName(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x28C3320", Offset = "0x28C1920", VA = "0x1828C3320")]
	internal bool IsPopulated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x28C3370", Offset = "0x28C1970", VA = "0x1828C3370")]
	private static Attribute[] ReflectGetAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x28C3830", Offset = "0x28C1E30", VA = "0x1828C3830")]
	internal static Attribute[] ReflectGetAttributes(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x28C3CF0", Offset = "0x28C22F0", VA = "0x1828C3CF0")]
	private static EventDescriptor[] ReflectGetEvents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x28C43F0", Offset = "0x28C29F0", VA = "0x1828C43F0")]
	private static PropertyDescriptor[] ReflectGetExtendedProperties(IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x28C5130", Offset = "0x28C3730", VA = "0x1828C5130")]
	private static PropertyDescriptor[] ReflectGetProperties(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x28C57B0", Offset = "0x28C3DB0", VA = "0x1828C57B0")]
	internal void Refresh(Type type)
	{
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x28C5840", Offset = "0x28C3E40", VA = "0x1828C5840")]
	private static object SearchIntrinsicTable(Hashtable table, Type callingType)
	{
		return null;
	}
}
