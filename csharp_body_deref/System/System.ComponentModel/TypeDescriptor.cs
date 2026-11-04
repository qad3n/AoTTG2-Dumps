// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel.Design;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000217")]
public sealed class TypeDescriptor
{
	[Token(Token = "0x2000218")]
	private sealed class AttributeProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x2000219")]
		private class AttributeTypeDescriptor : CustomTypeDescriptor
		{
			[Token(Token = "0x40007E7")]
			[FieldOffset(Offset = "0x18")]
			private Attribute[] _attributeArray;

			[Token(Token = "0x6000EDA")]
			[Address(RVA = "0x28CB9E0", Offset = "0x28C9FE0", VA = "0x1828CB9E0")]
			internal AttributeTypeDescriptor(Attribute[] attrs, ICustomTypeDescriptor parent)
			{
			}

			[Token(Token = "0x6000EDB")]
			[Address(RVA = "0x28CB700", Offset = "0x28C9D00", VA = "0x1828CB700", Slot = "16")]
			public override AttributeCollection GetAttributes()
			{
				return null;
			}
		}

		[Token(Token = "0x40007E6")]
		[FieldOffset(Offset = "0x20")]
		private Attribute[] _attrs;

		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x28CB6C0", Offset = "0x28C9CC0", VA = "0x1828CB6C0")]
		internal AttributeProvider(TypeDescriptionProvider existingProvider, params Attribute[] attrs)
		{
		}

		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x28CB640", Offset = "0x28C9C40", VA = "0x1828CB640", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x200021A")]
	private sealed class ComNativeDescriptionProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x200021B")]
		private sealed class ComNativeTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x40007E9")]
			[FieldOffset(Offset = "0x10")]
			private IComNativeDescriptorHandler _handler;

			[Token(Token = "0x40007EA")]
			[FieldOffset(Offset = "0x18")]
			private object _instance;

			[Token(Token = "0x6000EE0")]
			[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
			internal ComNativeTypeDescriptor(IComNativeDescriptorHandler handler, object instance)
			{
			}

			[Token(Token = "0x6000EE1")]
			[Address(RVA = "0x28CC0A0", Offset = "0x28CA6A0", VA = "0x1828CC0A0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000EE2")]
			[Address(RVA = "0x28CC160", Offset = "0x28CA760", VA = "0x1828CC160", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000EE3")]
			[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000EE4")]
			[Address(RVA = "0x28CC220", Offset = "0x28CA820", VA = "0x1828CC220", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000EE5")]
			[Address(RVA = "0x28CC2F0", Offset = "0x28CA8F0", VA = "0x1828CC2F0", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000EE6")]
			[Address(RVA = "0x28CC3C0", Offset = "0x28CA9C0", VA = "0x1828CC3C0", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000EE7")]
			[Address(RVA = "0x28CC490", Offset = "0x28CAA90", VA = "0x1828CC490", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000EE8")]
			[Address(RVA = "0x28CC630", Offset = "0x28CAC30", VA = "0x1828CC630", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000EE9")]
			[Address(RVA = "0x28CC560", Offset = "0x28CAB60", VA = "0x1828CC560", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000EEA")]
			[Address(RVA = "0x28CC760", Offset = "0x28CAD60", VA = "0x1828CC760", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000EEB")]
			[Address(RVA = "0x28CC700", Offset = "0x28CAD00", VA = "0x1828CC700", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000EEC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x40007E8")]
		[FieldOffset(Offset = "0x20")]
		private IComNativeDescriptorHandler _handler;

		[Token(Token = "0x170002FC")]
		internal IComNativeDescriptorHandler Handler
		{
			[Token(Token = "0x6000EDD")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000EDE")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			set
			{
			}
		}

		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x289BA00", Offset = "0x289A000", VA = "0x18289BA00")]
		internal ComNativeDescriptionProvider(IComNativeDescriptorHandler handler)
		{
		}

		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x28CBF10", Offset = "0x28CA510", VA = "0x1828CBF10", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x200021C")]
	private sealed class AttributeFilterCacheItem
	{
		[Token(Token = "0x40007EB")]
		[FieldOffset(Offset = "0x10")]
		private Attribute[] _filter;

		[Token(Token = "0x40007EC")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x6000EED")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal AttributeFilterCacheItem(Attribute[] filter, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x28CB5D0", Offset = "0x28C9BD0", VA = "0x1828CB5D0")]
		internal bool IsValid(Attribute[] filter)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200021D")]
	private sealed class FilterCacheItem
	{
		[Token(Token = "0x40007ED")]
		[FieldOffset(Offset = "0x10")]
		private ITypeDescriptorFilterService _filterService;

		[Token(Token = "0x40007EE")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal FilterCacheItem(ITypeDescriptorFilterService filterService, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x1C7A970", Offset = "0x1C78F70", VA = "0x181C7A970")]
		internal bool IsValid(ITypeDescriptorFilterService filterService)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200021E")]
	private interface IUnimplemented
	{
	}

	[Token(Token = "0x200021F")]
	private sealed class MemberDescriptorComparer : IComparer
	{
		[Token(Token = "0x40007EF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly MemberDescriptorComparer Instance;

		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x28D46B0", Offset = "0x28D2CB0", VA = "0x1828D46B0", Slot = "4")]
		public int Compare(object left, object right)
		{
			return default(int);
		}

		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MemberDescriptorComparer()
		{
		}
	}

	[Token(Token = "0x2000220")]
	private sealed class MergedTypeDescriptor : ICustomTypeDescriptor
	{
		[Token(Token = "0x40007F0")]
		[FieldOffset(Offset = "0x10")]
		private ICustomTypeDescriptor _primary;

		[Token(Token = "0x40007F1")]
		[FieldOffset(Offset = "0x18")]
		private ICustomTypeDescriptor _secondary;

		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal MergedTypeDescriptor(ICustomTypeDescriptor primary, ICustomTypeDescriptor secondary)
		{
		}

		[Token(Token = "0x6000EF5")]
		[Address(RVA = "0x28D4860", Offset = "0x28D2E60", VA = "0x1828D4860", Slot = "4")]
		private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
		{
			return null;
		}

		[Token(Token = "0x6000EF6")]
		[Address(RVA = "0x28D48D0", Offset = "0x28D2ED0", VA = "0x1828D48D0", Slot = "5")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
		{
			return null;
		}

		[Token(Token = "0x6000EF7")]
		[Address(RVA = "0x28D4940", Offset = "0x28D2F40", VA = "0x1828D4940", Slot = "6")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
		{
			return null;
		}

		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x28D49B0", Offset = "0x28D2FB0", VA = "0x1828D49B0", Slot = "7")]
		private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
		{
			return null;
		}

		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x28D4A20", Offset = "0x28D3020", VA = "0x1828D4A20", Slot = "8")]
		private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
		{
			return null;
		}

		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x28D4A90", Offset = "0x28D3090", VA = "0x1828D4A90", Slot = "9")]
		private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
		{
			return null;
		}

		[Token(Token = "0x6000EFB")]
		[Address(RVA = "0x28D4B00", Offset = "0x28D3100", VA = "0x1828D4B00", Slot = "10")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000EFC")]
		[Address(RVA = "0x28D4BF0", Offset = "0x28D31F0", VA = "0x1828D4BF0", Slot = "11")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
		{
			return null;
		}

		[Token(Token = "0x6000EFD")]
		[Address(RVA = "0x28D4C60", Offset = "0x28D3260", VA = "0x1828D4C60", Slot = "12")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000EFE")]
		[Address(RVA = "0x28D4D60", Offset = "0x28D3360", VA = "0x1828D4D60", Slot = "13")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
		{
			return null;
		}

		[Token(Token = "0x6000EFF")]
		[Address(RVA = "0x28D4CE0", Offset = "0x28D32E0", VA = "0x1828D4CE0", Slot = "14")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000F00")]
		[Address(RVA = "0x28D4DD0", Offset = "0x28D33D0", VA = "0x1828D4DD0", Slot = "15")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
		{
			return null;
		}
	}

	[Token(Token = "0x2000221")]
	private sealed class TypeDescriptionNode : TypeDescriptionProvider
	{
		[Token(Token = "0x2000222")]
		private struct DefaultExtendedTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x40007F4")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x40007F5")]
			[FieldOffset(Offset = "0x8")]
			private object _instance;

			[Token(Token = "0x6000F0B")]
			[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
			internal DefaultExtendedTypeDescriptor(TypeDescriptionNode node, object instance)
			{
			}

			[Token(Token = "0x6000F0C")]
			[Address(RVA = "0x28CCBE0", Offset = "0x28CB1E0", VA = "0x1828CCBE0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000F0D")]
			[Address(RVA = "0x28CCEF0", Offset = "0x28CB4F0", VA = "0x1828CCEF0", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000F0E")]
			[Address(RVA = "0x28CD0E0", Offset = "0x28CB6E0", VA = "0x1828CD0E0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000F0F")]
			[Address(RVA = "0x28CD2A0", Offset = "0x28CB8A0", VA = "0x1828CD2A0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000F10")]
			[Address(RVA = "0x28CD580", Offset = "0x28CBB80", VA = "0x1828CD580", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000F11")]
			[Address(RVA = "0x28CD740", Offset = "0x28CBD40", VA = "0x1828CD740", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000F12")]
			[Address(RVA = "0x28CD900", Offset = "0x28CBF00", VA = "0x1828CD900", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000F13")]
			[Address(RVA = "0x28CDB50", Offset = "0x28CC150", VA = "0x1828CDB50", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000F14")]
			[Address(RVA = "0x28CDE70", Offset = "0x28CC470", VA = "0x1828CDE70", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000F15")]
			[Address(RVA = "0x28CE460", Offset = "0x28CCA60", VA = "0x1828CE460", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000F16")]
			[Address(RVA = "0x28CE190", Offset = "0x28CC790", VA = "0x1828CE190", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000F17")]
			[Address(RVA = "0x28CE740", Offset = "0x28CCD40", VA = "0x1828CE740", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x2000223")]
		private struct DefaultTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x40007F6")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x40007F7")]
			[FieldOffset(Offset = "0x8")]
			private Type _objectType;

			[Token(Token = "0x40007F8")]
			[FieldOffset(Offset = "0x10")]
			private object _instance;

			[Token(Token = "0x6000F18")]
			[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
			internal DefaultTypeDescriptor(TypeDescriptionNode node, Type objectType, object instance)
			{
			}

			[Token(Token = "0x6000F19")]
			[Address(RVA = "0x28CE910", Offset = "0x28CCF10", VA = "0x1828CE910", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000F1A")]
			[Address(RVA = "0x28CEBE0", Offset = "0x28CD1E0", VA = "0x1828CEBE0", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000F1B")]
			[Address(RVA = "0x28CEDD0", Offset = "0x28CD3D0", VA = "0x1828CEDD0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000F1C")]
			[Address(RVA = "0x28CEF90", Offset = "0x28CD590", VA = "0x1828CEF90", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000F1D")]
			[Address(RVA = "0x28CF260", Offset = "0x28CD860", VA = "0x1828CF260", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000F1E")]
			[Address(RVA = "0x28CF420", Offset = "0x28CDA20", VA = "0x1828CF420", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000F1F")]
			[Address(RVA = "0x28CF5E0", Offset = "0x28CDBE0", VA = "0x1828CF5E0", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000F20")]
			[Address(RVA = "0x28CFB10", Offset = "0x28CE110", VA = "0x1828CFB10", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000F21")]
			[Address(RVA = "0x28CF830", Offset = "0x28CDE30", VA = "0x1828CF830", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000F22")]
			[Address(RVA = "0x28D00C0", Offset = "0x28CE6C0", VA = "0x1828D00C0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000F23")]
			[Address(RVA = "0x28CFDE0", Offset = "0x28CE3E0", VA = "0x1828CFDE0", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000F24")]
			[Address(RVA = "0x28D0390", Offset = "0x28CE990", VA = "0x1828D0390", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x40007F2")]
		[FieldOffset(Offset = "0x20")]
		internal TypeDescriptionNode Next;

		[Token(Token = "0x40007F3")]
		[FieldOffset(Offset = "0x28")]
		internal TypeDescriptionProvider Provider;

		[Token(Token = "0x6000F01")]
		[Address(RVA = "0x28DDE00", Offset = "0x28DC400", VA = "0x1828DDE00")]
		internal TypeDescriptionNode(TypeDescriptionProvider provider)
		{
		}

		[Token(Token = "0x6000F02")]
		[Address(RVA = "0x28DD660", Offset = "0x28DBC60", VA = "0x1828DD660", Slot = "4")]
		public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
		{
			return null;
		}

		[Token(Token = "0x6000F03")]
		[Address(RVA = "0x28DD7F0", Offset = "0x28DBDF0", VA = "0x1828DD7F0", Slot = "5")]
		public override IDictionary GetCache(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000F04")]
		[Address(RVA = "0x28DD870", Offset = "0x28DBE70", VA = "0x1828DD870", Slot = "6")]
		public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000F05")]
		[Address(RVA = "0x28DD940", Offset = "0x28DBF40", VA = "0x1828DD940", Slot = "7")]
		protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000F06")]
		[Address(RVA = "0x28DD9C0", Offset = "0x28DBFC0", VA = "0x1828DD9C0", Slot = "8")]
		public override string GetFullComponentName(object component)
		{
			return null;
		}

		[Token(Token = "0x6000F07")]
		[Address(RVA = "0x28DDA40", Offset = "0x28DC040", VA = "0x1828DDA40", Slot = "9")]
		public override Type GetReflectionType(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x6000F08")]
		[Address(RVA = "0x28DDB00", Offset = "0x28DC100", VA = "0x1828DDB00", Slot = "10")]
		public override Type GetRuntimeType(Type objectType)
		{
			return null;
		}

		[Token(Token = "0x6000F09")]
		[Address(RVA = "0x28DDBB0", Offset = "0x28DC1B0", VA = "0x1828DDBB0", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x28DDD50", Offset = "0x28DC350", VA = "0x1828DDD50", Slot = "12")]
		public override bool IsSupportedType(Type type)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000224")]
	[TypeDescriptionProvider("System.Windows.Forms.ComponentModel.Com2Interop.ComNativeDescriptor, System.Windows.Forms, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private sealed class TypeDescriptorComObject
	{
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TypeDescriptorComObject()
		{
		}
	}

	[Token(Token = "0x2000225")]
	private sealed class TypeDescriptorInterface
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TypeDescriptorInterface()
		{
		}
	}

	[Token(Token = "0x40007D6")]
	[FieldOffset(Offset = "0x0")]
	private static WeakHashtable _providerTable;

	[Token(Token = "0x40007D7")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _providerTypeTable;

	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _defaultProviders;

	[Token(Token = "0x40007D9")]
	[FieldOffset(Offset = "0x18")]
	private static WeakHashtable _associationTable;

	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x20")]
	private static int _metadataVersion;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x24")]
	private static int _collisionIndex;

	[Token(Token = "0x40007DC")]
	[FieldOffset(Offset = "0x28")]
	private static BooleanSwitch TraceDescriptor;

	[Token(Token = "0x40007DD")]
	private const int PIPELINE_ATTRIBUTES = 0;

	[Token(Token = "0x40007DE")]
	private const int PIPELINE_PROPERTIES = 1;

	[Token(Token = "0x40007DF")]
	private const int PIPELINE_EVENTS = 2;

	[Token(Token = "0x40007E0")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Guid[] _pipelineInitializeKeys;

	[Token(Token = "0x40007E1")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Guid[] _pipelineMergeKeys;

	[Token(Token = "0x40007E2")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Guid[] _pipelineFilterKeys;

	[Token(Token = "0x40007E3")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Guid[] _pipelineAttributeFilterKeys;

	[Token(Token = "0x40007E4")]
	[FieldOffset(Offset = "0x50")]
	private static object _internalSyncObject;

	[Token(Token = "0x40007E5")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static RefreshEventHandler m_Refreshed;

	[Token(Token = "0x170002F8")]
	[Obsolete("This property has been deprecated.  Use a type description provider to supply type information for COM types instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	public static IComNativeDescriptorHandler ComNativeDescriptorHandler
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x28E8BB0", Offset = "0x28E71B0", VA = "0x1828E8BB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x28E8EC0", Offset = "0x28E74C0", VA = "0x1828E8EC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F9")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type ComObjectType
	{
		[Token(Token = "0x6000E70")]
		[Address(RVA = "0x28E8CD0", Offset = "0x28E72D0", VA = "0x1828E8CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FA")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type InterfaceType
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x28E8D20", Offset = "0x28E7320", VA = "0x1828E8D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FB")]
	internal static int MetadataVersion
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x28E8D70", Offset = "0x28E7370", VA = "0x1828E8D70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1400000F")]
	public static event RefreshEventHandler Refreshed
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x28E8AB0", Offset = "0x28E70B0", VA = "0x1828E8AB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x28E8DC0", Offset = "0x28E73C0", VA = "0x1828E8DC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private TypeDescriptor()
	{
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x28DDE40", Offset = "0x28DC440", VA = "0x1828DDE40")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x28DE070", Offset = "0x28DC670", VA = "0x1828DE070")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(object instance, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x28DE200", Offset = "0x28DC800", VA = "0x1828DE200")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x28DE7E0", Offset = "0x28DCDE0", VA = "0x1828DE7E0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x28DE480", Offset = "0x28DCA80", VA = "0x1828DE480")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x28DE360", Offset = "0x28DC960", VA = "0x1828DE360")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x28DE260", Offset = "0x28DC860", VA = "0x1828DE260")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x28DEA90", Offset = "0x28DD090", VA = "0x1828DEA90")]
	private static void CheckDefaultProvider(Type type)
	{
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x28DF240", Offset = "0x28DD840", VA = "0x1828DF240")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void CreateAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x28DF9B0", Offset = "0x28DDFB0", VA = "0x1828DF9B0")]
	public static IDesigner CreateDesigner(IComponent component, Type designerBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x28DFD00", Offset = "0x28DE300", VA = "0x1828DFD00")]
	public static EventDescriptor CreateEvent(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x28DFD70", Offset = "0x28DE370", VA = "0x1828DFD70")]
	public static EventDescriptor CreateEvent(Type componentType, EventDescriptor oldEventDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x28DFDE0", Offset = "0x28DE3E0", VA = "0x1828DFDE0")]
	public static object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x28E0260", Offset = "0x28DE860", VA = "0x1828E0260")]
	public static PropertyDescriptor CreateProperty(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x28E0090", Offset = "0x28DE690", VA = "0x1828E0090")]
	public static PropertyDescriptor CreateProperty(Type componentType, PropertyDescriptor oldPropertyDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(Type type, AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, Type type)
	{
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, Type type)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x28E02D0", Offset = "0x28DE8D0", VA = "0x1828E02D0")]
	private static ArrayList FilterMembers(IList members, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x28E0510", Offset = "0x28DEB10", VA = "0x1828E0510")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetAssociation(Type type, object primary)
	{
		return null;
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x28E0D20", Offset = "0x28DF320", VA = "0x1828E0D20")]
	public static AttributeCollection GetAttributes(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x28E0CD0", Offset = "0x28DF2D0", VA = "0x1828E0CD0")]
	public static AttributeCollection GetAttributes(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x28E09D0", Offset = "0x28DEFD0", VA = "0x1828E09D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static AttributeCollection GetAttributes(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x28E0E00", Offset = "0x28DF400", VA = "0x1828E0E00")]
	internal static IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x28E0F30", Offset = "0x28DF530", VA = "0x1828E0F30")]
	public static string GetClassName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x28E0EA0", Offset = "0x28DF4A0", VA = "0x1828E0EA0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetClassName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x28E0FE0", Offset = "0x28DF5E0", VA = "0x1828E0FE0")]
	public static string GetClassName(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x28E1070", Offset = "0x28DF670", VA = "0x1828E1070")]
	public static string GetComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x28E1120", Offset = "0x28DF720", VA = "0x1828E1120")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetComponentName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x28E12D0", Offset = "0x28DF8D0", VA = "0x1828E12D0")]
	public static TypeConverter GetConverter(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x28E11B0", Offset = "0x28DF7B0", VA = "0x1828E11B0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeConverter GetConverter(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x28E1240", Offset = "0x28DF840", VA = "0x1828E1240")]
	public static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x28DF110", Offset = "0x28DD710", VA = "0x1828DF110")]
	private static object ConvertFromInvariantString(Type type, string stringValue)
	{
		return null;
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x28E1420", Offset = "0x28DFA20", VA = "0x1828E1420")]
	public static EventDescriptor GetDefaultEvent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x28E14E0", Offset = "0x28DFAE0", VA = "0x1828E14E0")]
	public static EventDescriptor GetDefaultEvent(object component)
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x28E1380", Offset = "0x28DF980", VA = "0x1828E1380")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptor GetDefaultEvent(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x28E1700", Offset = "0x28DFD00", VA = "0x1828E1700")]
	public static PropertyDescriptor GetDefaultProperty(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x28E15A0", Offset = "0x28DFBA0", VA = "0x1828E15A0")]
	public static PropertyDescriptor GetDefaultProperty(object component)
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x28E1660", Offset = "0x28DFC60", VA = "0x1828E1660")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptor GetDefaultProperty(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x28E1A30", Offset = "0x28E0030", VA = "0x1828E1A30")]
	internal static ICustomTypeDescriptor GetDescriptor(Type type, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x28E17C0", Offset = "0x28DFDC0", VA = "0x1828E17C0")]
	internal static ICustomTypeDescriptor GetDescriptor(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x28E2600", Offset = "0x28E0C00", VA = "0x1828E2600")]
	internal static ICustomTypeDescriptor GetExtendedDescriptor(object component)
	{
		return null;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x28E1B40", Offset = "0x28E0140", VA = "0x1828E1B40")]
	public static object GetEditor(object component, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x28E1C70", Offset = "0x28E0270", VA = "0x1828E1C70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetEditor(object component, Type editorBaseType, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x28E1D80", Offset = "0x28E0380", VA = "0x1828E1D80")]
	public static object GetEditor(Type type, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x28E2200", Offset = "0x28E0800", VA = "0x1828E2200")]
	public static EventDescriptorCollection GetEvents(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x28E23A0", Offset = "0x28E09A0", VA = "0x1828E23A0")]
	public static EventDescriptorCollection GetEvents(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x28E22F0", Offset = "0x28E08F0", VA = "0x1828E22F0")]
	public static EventDescriptorCollection GetEvents(object component)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x28E25A0", Offset = "0x28E0BA0", VA = "0x1828E25A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x28E2340", Offset = "0x28E0940", VA = "0x1828E2340")]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x28E1E90", Offset = "0x28E0490", VA = "0x1828E1E90")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x28E26F0", Offset = "0x28E0CF0", VA = "0x1828E26F0")]
	private static string GetExtenderCollisionSuffix(MemberDescriptor member)
	{
		return null;
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x28E2920", Offset = "0x28E0F20", VA = "0x1828E2920")]
	public static string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x28E2A10", Offset = "0x28E1010", VA = "0x1828E2A10")]
	private static Type GetNodeForBaseType(Type searchType)
	{
		return null;
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x28E2F60", Offset = "0x28E1560", VA = "0x1828E2F60")]
	public static PropertyDescriptorCollection GetProperties(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x28E3050", Offset = "0x28E1650", VA = "0x1828E3050")]
	public static PropertyDescriptorCollection GetProperties(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x28E33E0", Offset = "0x28E19E0", VA = "0x1828E33E0")]
	public static PropertyDescriptorCollection GetProperties(object component)
	{
		return null;
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x28E3250", Offset = "0x28E1850", VA = "0x1828E3250")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptorCollection GetProperties(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x28E32C0", Offset = "0x28E18C0", VA = "0x1828E32C0")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x28E3360", Offset = "0x28E1960", VA = "0x1828E3360")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x28E2B70", Offset = "0x28E1170", VA = "0x1828E2B70")]
	private static PropertyDescriptorCollection GetPropertiesImpl(object component, Attribute[] attributes, bool noCustomTypeDesc, bool noAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x28E3560", Offset = "0x28E1B60", VA = "0x1828E3560")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x28E34C0", Offset = "0x28E1AC0", VA = "0x1828E34C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x28E3470", Offset = "0x28E1A70", VA = "0x1828E3470")]
	internal static TypeDescriptionProvider GetProviderRecursive(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x28E3710", Offset = "0x28E1D10", VA = "0x1828E3710")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x28E3620", Offset = "0x28E1C20", VA = "0x1828E3620")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x28E3A80", Offset = "0x28E2080", VA = "0x1828E3A80")]
	private static TypeDescriptionNode NodeFor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x28E3AD0", Offset = "0x28E20D0", VA = "0x1828E3AD0")]
	private static TypeDescriptionNode NodeFor(Type type, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x28E3A30", Offset = "0x28E2030", VA = "0x1828E3A30")]
	private static TypeDescriptionNode NodeFor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x28E3820", Offset = "0x28E1E20", VA = "0x1828E3820")]
	private static TypeDescriptionNode NodeFor(object instance, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x28E4050", Offset = "0x28E2650", VA = "0x1828E4050")]
	private static void NodeRemove(object key, TypeDescriptionProvider provider)
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x28E4400", Offset = "0x28E2A00", VA = "0x1828E4400")]
	private static ICollection PipelineAttributeFilter(int pipelineType, ICollection members, Attribute[] filter, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x28E4890", Offset = "0x28E2E90", VA = "0x1828E4890")]
	private static ICollection PipelineFilter(int pipelineType, ICollection members, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x28E5930", Offset = "0x28E3F30", VA = "0x1828E5930")]
	private static ICollection PipelineInitialize(int pipelineType, ICollection members, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x28E5D00", Offset = "0x28E4300", VA = "0x1828E5D00")]
	private static ICollection PipelineMerge(int pipelineType, ICollection primary, ICollection secondary, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x28E66C0", Offset = "0x28E4CC0", VA = "0x1828E66C0")]
	private static void RaiseRefresh(object component)
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x28E6770", Offset = "0x28E4D70", VA = "0x1828E6770")]
	private static void RaiseRefresh(Type type)
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x28E6CD0", Offset = "0x28E52D0", VA = "0x1828E6CD0")]
	public static void Refresh(object component)
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x28E74F0", Offset = "0x28E5AF0", VA = "0x1828E74F0")]
	private static void Refresh(object component, bool refreshReflectionProvider)
	{
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x28E6820", Offset = "0x28E4E20", VA = "0x1828E6820")]
	public static void Refresh(Type type)
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x28E6DE0", Offset = "0x28E53E0", VA = "0x1828E6DE0")]
	public static void Refresh(Module module)
	{
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x28E6D20", Offset = "0x28E5320", VA = "0x1828E6D20")]
	public static void Refresh(Assembly assembly)
	{
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x28E7B70", Offset = "0x28E6170", VA = "0x1828E7B70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x28E7E40", Offset = "0x28E6440", VA = "0x1828E7E40")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociations(object primary)
	{
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x28E8330", Offset = "0x28E6930", VA = "0x1828E8330")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x28E8220", Offset = "0x28E6820", VA = "0x1828E8220")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x28E8050", Offset = "0x28E6650", VA = "0x1828E8050")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x28E7F10", Offset = "0x28E6510", VA = "0x1828E7F10")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x28E8460", Offset = "0x28E6A60", VA = "0x1828E8460")]
	private static bool ShouldHideMember(MemberDescriptor member, Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x28E8520", Offset = "0x28E6B20", VA = "0x1828E8520")]
	public static void SortDescriptorArray(IList infos)
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	internal static void Trace(string message, params object[] args)
	{
	}
}
