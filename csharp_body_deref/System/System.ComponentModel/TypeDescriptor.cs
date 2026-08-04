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

[Token(Token = "0x200030C")]
public sealed class TypeDescriptor
{
	[Token(Token = "0x200030D")]
	private sealed class AttributeProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x200030E")]
		private class AttributeTypeDescriptor : CustomTypeDescriptor
		{
			[Token(Token = "0x4000EB0")]
			[FieldOffset(Offset = "0x18")]
			private Attribute[] _attributeArray;

			[Token(Token = "0x6001492")]
			[Address(RVA = "0x48D7AF0", Offset = "0x48D7AF0", VA = "0x48D7AF0")]
			internal AttributeTypeDescriptor(Attribute[] attrs, ICustomTypeDescriptor parent)
			{
			}

			[Token(Token = "0x6001493")]
			[Address(RVA = "0x48D7B20", Offset = "0x48D7B20", VA = "0x48D7B20", Slot = "16")]
			public override AttributeCollection GetAttributes()
			{
				return null;
			}
		}

		[Token(Token = "0x4000EAF")]
		[FieldOffset(Offset = "0x20")]
		private Attribute[] _attrs;

		[Token(Token = "0x6001490")]
		[Address(RVA = "0x48C9430", Offset = "0x48C9430", VA = "0x48C9430")]
		internal AttributeProvider(TypeDescriptionProvider existingProvider, params Attribute[] attrs)
		{
		}

		[Token(Token = "0x6001491")]
		[Address(RVA = "0x48D7A60", Offset = "0x48D7A60", VA = "0x48D7A60", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x200030F")]
	private sealed class ComNativeDescriptionProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x2000310")]
		private sealed class ComNativeTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x4000EB2")]
			[FieldOffset(Offset = "0x10")]
			private IComNativeDescriptorHandler _handler;

			[Token(Token = "0x4000EB3")]
			[FieldOffset(Offset = "0x18")]
			private object _instance;

			[Token(Token = "0x6001498")]
			[Address(RVA = "0x48D7F90", Offset = "0x48D7F90", VA = "0x48D7F90")]
			internal ComNativeTypeDescriptor(IComNativeDescriptorHandler handler, object instance)
			{
			}

			[Token(Token = "0x6001499")]
			[Address(RVA = "0x48D7FD0", Offset = "0x48D7FD0", VA = "0x48D7FD0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x600149A")]
			[Address(RVA = "0x48D8080", Offset = "0x48D8080", VA = "0x48D8080", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x600149B")]
			[Address(RVA = "0x48D8130", Offset = "0x48D8130", VA = "0x48D8130", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x600149C")]
			[Address(RVA = "0x48D8140", Offset = "0x48D8140", VA = "0x48D8140", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x600149D")]
			[Address(RVA = "0x48D81F0", Offset = "0x48D81F0", VA = "0x48D81F0", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x600149E")]
			[Address(RVA = "0x48D82A0", Offset = "0x48D82A0", VA = "0x48D82A0", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x600149F")]
			[Address(RVA = "0x48D8350", Offset = "0x48D8350", VA = "0x48D8350", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014A0")]
			[Address(RVA = "0x48D8420", Offset = "0x48D8420", VA = "0x48D8420", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014A1")]
			[Address(RVA = "0x48D84D0", Offset = "0x48D84D0", VA = "0x48D84D0", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014A2")]
			[Address(RVA = "0x48D85A0", Offset = "0x48D85A0", VA = "0x48D85A0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014A3")]
			[Address(RVA = "0x48D8660", Offset = "0x48D8660", VA = "0x48D8660", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014A4")]
			[Address(RVA = "0x48D8730", Offset = "0x48D8730", VA = "0x48D8730", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x4000EB1")]
		[FieldOffset(Offset = "0x20")]
		private IComNativeDescriptorHandler _handler;

		[Token(Token = "0x1700048D")]
		internal IComNativeDescriptorHandler Handler
		{
			[Token(Token = "0x6001495")]
			[Address(RVA = "0x48D7E20", Offset = "0x48D7E20", VA = "0x48D7E20")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001496")]
			[Address(RVA = "0x48D7E30", Offset = "0x48D7E30", VA = "0x48D7E30")]
			set
			{
			}
		}

		[Token(Token = "0x6001494")]
		[Address(RVA = "0x48C8CA0", Offset = "0x48C8CA0", VA = "0x48C8CA0")]
		internal ComNativeDescriptionProvider(IComNativeDescriptorHandler handler)
		{
		}

		[Token(Token = "0x6001497")]
		[Address(RVA = "0x48D7E40", Offset = "0x48D7E40", VA = "0x48D7E40", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x2000311")]
	private sealed class AttributeFilterCacheItem
	{
		[Token(Token = "0x4000EB4")]
		[FieldOffset(Offset = "0x10")]
		private Attribute[] _filter;

		[Token(Token = "0x4000EB5")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x60014A5")]
		[Address(RVA = "0x48D5C30", Offset = "0x48D5C30", VA = "0x48D5C30")]
		internal AttributeFilterCacheItem(Attribute[] filter, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x60014A6")]
		[Address(RVA = "0x48D5BD0", Offset = "0x48D5BD0", VA = "0x48D5BD0")]
		internal bool IsValid(Attribute[] filter)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000312")]
	private sealed class FilterCacheItem
	{
		[Token(Token = "0x4000EB6")]
		[FieldOffset(Offset = "0x10")]
		private ITypeDescriptorFilterService _filterService;

		[Token(Token = "0x4000EB7")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x60014A7")]
		[Address(RVA = "0x48D5F10", Offset = "0x48D5F10", VA = "0x48D5F10")]
		internal FilterCacheItem(ITypeDescriptorFilterService filterService, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x60014A8")]
		[Address(RVA = "0x48D5C70", Offset = "0x48D5C70", VA = "0x48D5C70")]
		internal bool IsValid(ITypeDescriptorFilterService filterService)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000313")]
	private interface IUnimplemented
	{
	}

	[Token(Token = "0x2000314")]
	private sealed class MemberDescriptorComparer : IComparer
	{
		[Token(Token = "0x4000EB8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly MemberDescriptorComparer Instance;

		[Token(Token = "0x60014A9")]
		[Address(RVA = "0x48D8740", Offset = "0x48D8740", VA = "0x48D8740", Slot = "4")]
		public int Compare(object left, object right)
		{
			return default(int);
		}

		[Token(Token = "0x60014AA")]
		[Address(RVA = "0x48D88B0", Offset = "0x48D88B0", VA = "0x48D88B0")]
		public MemberDescriptorComparer()
		{
		}
	}

	[Token(Token = "0x2000315")]
	private sealed class MergedTypeDescriptor : ICustomTypeDescriptor
	{
		[Token(Token = "0x4000EB9")]
		[FieldOffset(Offset = "0x10")]
		private ICustomTypeDescriptor _primary;

		[Token(Token = "0x4000EBA")]
		[FieldOffset(Offset = "0x18")]
		private ICustomTypeDescriptor _secondary;

		[Token(Token = "0x60014AC")]
		[Address(RVA = "0x48D3210", Offset = "0x48D3210", VA = "0x48D3210")]
		internal MergedTypeDescriptor(ICustomTypeDescriptor primary, ICustomTypeDescriptor secondary)
		{
		}

		[Token(Token = "0x60014AD")]
		[Address(RVA = "0x48D8930", Offset = "0x48D8930", VA = "0x48D8930", Slot = "4")]
		private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
		{
			return null;
		}

		[Token(Token = "0x60014AE")]
		[Address(RVA = "0x48D8A50", Offset = "0x48D8A50", VA = "0x48D8A50", Slot = "5")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
		{
			return null;
		}

		[Token(Token = "0x60014AF")]
		[Address(RVA = "0x48D8B80", Offset = "0x48D8B80", VA = "0x48D8B80", Slot = "6")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
		{
			return null;
		}

		[Token(Token = "0x60014B0")]
		[Address(RVA = "0x48D8CB0", Offset = "0x48D8CB0", VA = "0x48D8CB0", Slot = "7")]
		private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
		{
			return null;
		}

		[Token(Token = "0x60014B1")]
		[Address(RVA = "0x48D8DE0", Offset = "0x48D8DE0", VA = "0x48D8DE0", Slot = "8")]
		private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
		{
			return null;
		}

		[Token(Token = "0x60014B2")]
		[Address(RVA = "0x48D8F10", Offset = "0x48D8F10", VA = "0x48D8F10", Slot = "9")]
		private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
		{
			return null;
		}

		[Token(Token = "0x60014B3")]
		[Address(RVA = "0x48D9040", Offset = "0x48D9040", VA = "0x48D9040", Slot = "10")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60014B4")]
		[Address(RVA = "0x48D91F0", Offset = "0x48D91F0", VA = "0x48D91F0", Slot = "11")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
		{
			return null;
		}

		[Token(Token = "0x60014B5")]
		[Address(RVA = "0x48D9320", Offset = "0x48D9320", VA = "0x48D9320", Slot = "12")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x48D9460", Offset = "0x48D9460", VA = "0x48D9460", Slot = "13")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
		{
			return null;
		}

		[Token(Token = "0x60014B7")]
		[Address(RVA = "0x48D9590", Offset = "0x48D9590", VA = "0x48D9590", Slot = "14")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x48D96D0", Offset = "0x48D96D0", VA = "0x48D96D0", Slot = "15")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
		{
			return null;
		}
	}

	[Token(Token = "0x2000316")]
	private sealed class TypeDescriptionNode : TypeDescriptionProvider
	{
		[Token(Token = "0x2000317")]
		private struct DefaultExtendedTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x4000EBD")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x4000EBE")]
			[FieldOffset(Offset = "0x8")]
			private object _instance;

			[Token(Token = "0x60014C3")]
			[Address(RVA = "0x48D9A90", Offset = "0x48D9A90", VA = "0x48D9A90")]
			internal DefaultExtendedTypeDescriptor(TypeDescriptionNode node, object instance)
			{
			}

			[Token(Token = "0x60014C4")]
			[Address(RVA = "0x48D9F70", Offset = "0x48D9F70", VA = "0x48D9F70", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x60014C5")]
			[Address(RVA = "0x48DA260", Offset = "0x48DA260", VA = "0x48DA260", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x60014C6")]
			[Address(RVA = "0x48DA4B0", Offset = "0x48DA4B0", VA = "0x48DA4B0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x60014C7")]
			[Address(RVA = "0x48DA6C0", Offset = "0x48DA6C0", VA = "0x48DA6C0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x60014C8")]
			[Address(RVA = "0x48DA970", Offset = "0x48DA970", VA = "0x48DA970", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x60014C9")]
			[Address(RVA = "0x48DAB80", Offset = "0x48DAB80", VA = "0x48DAB80", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x60014CA")]
			[Address(RVA = "0x48DAD90", Offset = "0x48DAD90", VA = "0x48DAD90", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014CB")]
			[Address(RVA = "0x48DB010", Offset = "0x48DB010", VA = "0x48DB010", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014CC")]
			[Address(RVA = "0x48DB310", Offset = "0x48DB310", VA = "0x48DB310", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014CD")]
			[Address(RVA = "0x48DB610", Offset = "0x48DB610", VA = "0x48DB610", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014CE")]
			[Address(RVA = "0x48DB8C0", Offset = "0x48DB8C0", VA = "0x48DB8C0", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014CF")]
			[Address(RVA = "0x48DBB70", Offset = "0x48DBB70", VA = "0x48DBB70", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x2000318")]
		private struct DefaultTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x4000EBF")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x4000EC0")]
			[FieldOffset(Offset = "0x8")]
			private Type _objectType;

			[Token(Token = "0x4000EC1")]
			[FieldOffset(Offset = "0x10")]
			private object _instance;

			[Token(Token = "0x60014D0")]
			[Address(RVA = "0x48D9E80", Offset = "0x48D9E80", VA = "0x48D9E80")]
			internal DefaultTypeDescriptor(TypeDescriptionNode node, Type objectType, object instance)
			{
			}

			[Token(Token = "0x60014D1")]
			[Address(RVA = "0x48DBDB0", Offset = "0x48DBDB0", VA = "0x48DBDB0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x60014D2")]
			[Address(RVA = "0x48DC050", Offset = "0x48DC050", VA = "0x48DC050", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x60014D3")]
			[Address(RVA = "0x48DC2A0", Offset = "0x48DC2A0", VA = "0x48DC2A0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x60014D4")]
			[Address(RVA = "0x48DC4C0", Offset = "0x48DC4C0", VA = "0x48DC4C0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x60014D5")]
			[Address(RVA = "0x48DC770", Offset = "0x48DC770", VA = "0x48DC770", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x60014D6")]
			[Address(RVA = "0x48DC990", Offset = "0x48DC990", VA = "0x48DC990", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x60014D7")]
			[Address(RVA = "0x48DCBB0", Offset = "0x48DCBB0", VA = "0x48DCBB0", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014D8")]
			[Address(RVA = "0x48DCE50", Offset = "0x48DCE50", VA = "0x48DCE50", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014D9")]
			[Address(RVA = "0x48DD100", Offset = "0x48DD100", VA = "0x48DD100", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014DA")]
			[Address(RVA = "0x48DD3C0", Offset = "0x48DD3C0", VA = "0x48DD3C0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014DB")]
			[Address(RVA = "0x48DD670", Offset = "0x48DD670", VA = "0x48DD670", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014DC")]
			[Address(RVA = "0x48DD930", Offset = "0x48DD930", VA = "0x48DD930", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x4000EBB")]
		[FieldOffset(Offset = "0x20")]
		internal TypeDescriptionNode Next;

		[Token(Token = "0x4000EBC")]
		[FieldOffset(Offset = "0x28")]
		internal TypeDescriptionProvider Provider;

		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x48C9F70", Offset = "0x48C9F70", VA = "0x48C9F70")]
		internal TypeDescriptionNode(TypeDescriptionProvider provider)
		{
		}

		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x48D9810", Offset = "0x48D9810", VA = "0x48D9810", Slot = "4")]
		public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
		{
			return null;
		}

		[Token(Token = "0x60014BB")]
		[Address(RVA = "0x48D9950", Offset = "0x48D9950", VA = "0x48D9950", Slot = "5")]
		public override IDictionary GetCache(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BC")]
		[Address(RVA = "0x48D99C0", Offset = "0x48D99C0", VA = "0x48D99C0", Slot = "6")]
		public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BD")]
		[Address(RVA = "0x48D9AC0", Offset = "0x48D9AC0", VA = "0x48D9AC0", Slot = "7")]
		protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BE")]
		[Address(RVA = "0x48D9B30", Offset = "0x48D9B30", VA = "0x48D9B30", Slot = "8")]
		public override string GetFullComponentName(object component)
		{
			return null;
		}

		[Token(Token = "0x60014BF")]
		[Address(RVA = "0x48D9BA0", Offset = "0x48D9BA0", VA = "0x48D9BA0", Slot = "9")]
		public override Type GetReflectionType(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x60014C0")]
		[Address(RVA = "0x48D9C50", Offset = "0x48D9C50", VA = "0x48D9C50", Slot = "10")]
		public override Type GetRuntimeType(Type objectType)
		{
			return null;
		}

		[Token(Token = "0x60014C1")]
		[Address(RVA = "0x48D9D00", Offset = "0x48D9D00", VA = "0x48D9D00", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x60014C2")]
		[Address(RVA = "0x48D9EC0", Offset = "0x48D9EC0", VA = "0x48D9EC0", Slot = "12")]
		public override bool IsSupportedType(Type type)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000319")]
	[TypeDescriptionProvider("System.Windows.Forms.ComponentModel.Com2Interop.ComNativeDescriptor, System.Windows.Forms, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private sealed class TypeDescriptorComObject
	{
		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x48DDB70", Offset = "0x48DDB70", VA = "0x48DDB70")]
		public TypeDescriptorComObject()
		{
		}
	}

	[Token(Token = "0x200031A")]
	private sealed class TypeDescriptorInterface
	{
		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x48DDB80", Offset = "0x48DDB80", VA = "0x48DDB80")]
		public TypeDescriptorInterface()
		{
		}
	}

	[Token(Token = "0x4000E9F")]
	[FieldOffset(Offset = "0x0")]
	private static WeakHashtable _providerTable;

	[Token(Token = "0x4000EA0")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _providerTypeTable;

	[Token(Token = "0x4000EA1")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _defaultProviders;

	[Token(Token = "0x4000EA2")]
	[FieldOffset(Offset = "0x18")]
	private static WeakHashtable _associationTable;

	[Token(Token = "0x4000EA3")]
	[FieldOffset(Offset = "0x20")]
	private static int _metadataVersion;

	[Token(Token = "0x4000EA4")]
	[FieldOffset(Offset = "0x24")]
	private static int _collisionIndex;

	[Token(Token = "0x4000EA5")]
	[FieldOffset(Offset = "0x28")]
	private static BooleanSwitch TraceDescriptor;

	[Token(Token = "0x4000EA6")]
	private const int PIPELINE_ATTRIBUTES = 0;

	[Token(Token = "0x4000EA7")]
	private const int PIPELINE_PROPERTIES = 1;

	[Token(Token = "0x4000EA8")]
	private const int PIPELINE_EVENTS = 2;

	[Token(Token = "0x4000EA9")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Guid[] _pipelineInitializeKeys;

	[Token(Token = "0x4000EAA")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Guid[] _pipelineMergeKeys;

	[Token(Token = "0x4000EAB")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Guid[] _pipelineFilterKeys;

	[Token(Token = "0x4000EAC")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Guid[] _pipelineAttributeFilterKeys;

	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x50")]
	private static object _internalSyncObject;

	[Token(Token = "0x17000489")]
	[Obsolete("This property has been deprecated.  Use a type description provider to supply type information for COM types instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	public static IComNativeDescriptorHandler ComNativeDescriptorHandler
	{
		[Token(Token = "0x6001426")]
		[Address(RVA = "0x48C8860", Offset = "0x48C8860", VA = "0x48C8860")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x48C8A90", Offset = "0x48C8A90", VA = "0x48C8A90")]
		set
		{
		}
	}

	[Token(Token = "0x1700048A")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type ComObjectType
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x48C89C0", Offset = "0x48C89C0", VA = "0x48C89C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048B")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type InterfaceType
	{
		[Token(Token = "0x6001429")]
		[Address(RVA = "0x48C8F90", Offset = "0x48C8F90", VA = "0x48C8F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048C")]
	internal static int MetadataVersion
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x48C8FF0", Offset = "0x48C8FF0", VA = "0x48C8FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1400000F")]
	public static event RefreshEventHandler Refreshed
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x48C9060", Offset = "0x48C9060", VA = "0x48C9060")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x48C9140", Offset = "0x48C9140", VA = "0x48C9140")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x48C8850", Offset = "0x48C8850", VA = "0x48C8850")]
	private TypeDescriptor()
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x48C9220", Offset = "0x48C9220", VA = "0x48C9220")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x48C9460", Offset = "0x48C9460", VA = "0x48C9460")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(object instance, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x48C9960", Offset = "0x48C9960", VA = "0x48C9960")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x48C8CD0", Offset = "0x48C8CD0", VA = "0x48C8CD0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x48C9620", Offset = "0x48C9620", VA = "0x48C9620")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x48CB2C0", Offset = "0x48CB2C0", VA = "0x48CB2C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x48CB3B0", Offset = "0x48CB3B0", VA = "0x48CB3B0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x48CB480", Offset = "0x48CB480", VA = "0x48CB480")]
	private static void CheckDefaultProvider(Type type)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x48CBB70", Offset = "0x48CBB70", VA = "0x48CBB70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void CreateAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x48CC4D0", Offset = "0x48CC4D0", VA = "0x48CC4D0")]
	public static IDesigner CreateDesigner(IComponent component, Type designerBaseType)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x48CC9D0", Offset = "0x48CC9D0", VA = "0x48CC9D0")]
	public static EventDescriptor CreateEvent(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x48CCA40", Offset = "0x48CCA40", VA = "0x48CCA40")]
	public static EventDescriptor CreateEvent(Type componentType, EventDescriptor oldEventDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x48CCAB0", Offset = "0x48CCAB0", VA = "0x48CCAB0")]
	public static object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x48CCDC0", Offset = "0x48CCDC0", VA = "0x48CCDC0")]
	public static PropertyDescriptor CreateProperty(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x48CCE30", Offset = "0x48CCE30", VA = "0x48CCE30")]
	public static PropertyDescriptor CreateProperty(Type componentType, PropertyDescriptor oldPropertyDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x48CCFD0", Offset = "0x48CCFD0", VA = "0x48CCFD0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(Type type, AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x48CCFE0", Offset = "0x48CCFE0", VA = "0x48CCFE0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x48CCFF0", Offset = "0x48CCFF0", VA = "0x48CCFF0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, Type type)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x48CD000", Offset = "0x48CD000", VA = "0x48CD000")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x48CD010", Offset = "0x48CD010", VA = "0x48CD010")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, Type type)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x48CD020", Offset = "0x48CD020", VA = "0x48CD020")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x48CD030", Offset = "0x48CD030", VA = "0x48CD030")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x48CD040", Offset = "0x48CD040", VA = "0x48CD040")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x48CD050", Offset = "0x48CD050", VA = "0x48CD050")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x48CD060", Offset = "0x48CD060", VA = "0x48CD060")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x48CD070", Offset = "0x48CD070", VA = "0x48CD070")]
	private static ArrayList FilterMembers(IList members, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x48CD5F0", Offset = "0x48CD5F0", VA = "0x48CD5F0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetAssociation(Type type, object primary)
	{
		return null;
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x48C3D40", Offset = "0x48C3D40", VA = "0x48C3D40")]
	public static AttributeCollection GetAttributes(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x48C4A90", Offset = "0x48C4A90", VA = "0x48C4A90")]
	public static AttributeCollection GetAttributes(object component)
	{
		return null;
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x48CDE90", Offset = "0x48CDE90", VA = "0x48CDE90")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static AttributeCollection GetAttributes(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x48D1D70", Offset = "0x48D1D70", VA = "0x48D1D70")]
	internal static IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x48D26E0", Offset = "0x48D26E0", VA = "0x48D26E0")]
	public static string GetClassName(object component)
	{
		return null;
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x48D2740", Offset = "0x48D2740", VA = "0x48D2740")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetClassName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x48D2820", Offset = "0x48D2820", VA = "0x48D2820")]
	public static string GetClassName(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x48D2900", Offset = "0x48D2900", VA = "0x48D2900")]
	public static string GetComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x48D2960", Offset = "0x48D2960", VA = "0x48D2960")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetComponentName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x48D2A40", Offset = "0x48D2A40", VA = "0x48D2A40")]
	public static TypeConverter GetConverter(object component)
	{
		return null;
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x48D2AA0", Offset = "0x48D2AA0", VA = "0x48D2AA0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeConverter GetConverter(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x48D2B80", Offset = "0x48D2B80", VA = "0x48D2B80")]
	public static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x48D2C60", Offset = "0x48D2C60", VA = "0x48D2C60")]
	private static object ConvertFromInvariantString(Type type, string stringValue)
	{
		return null;
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x48D2D50", Offset = "0x48D2D50", VA = "0x48D2D50")]
	public static EventDescriptor GetDefaultEvent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x48D2E60", Offset = "0x48D2E60", VA = "0x48D2E60")]
	public static EventDescriptor GetDefaultEvent(object component)
	{
		return null;
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x48D2EC0", Offset = "0x48D2EC0", VA = "0x48D2EC0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptor GetDefaultEvent(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x48D2FB0", Offset = "0x48D2FB0", VA = "0x48D2FB0")]
	public static PropertyDescriptor GetDefaultProperty(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x48D30C0", Offset = "0x48D30C0", VA = "0x48D30C0")]
	public static PropertyDescriptor GetDefaultProperty(object component)
	{
		return null;
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x48D3120", Offset = "0x48D3120", VA = "0x48D3120")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptor GetDefaultProperty(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x48CDD70", Offset = "0x48CDD70", VA = "0x48CDD70")]
	internal static ICustomTypeDescriptor GetDescriptor(Type type, string typeName)
	{
		return null;
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x48CE2C0", Offset = "0x48CE2C0", VA = "0x48CE2C0")]
	internal static ICustomTypeDescriptor GetDescriptor(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x48CE550", Offset = "0x48CE550", VA = "0x48CE550")]
	internal static ICustomTypeDescriptor GetExtendedDescriptor(object component)
	{
		return null;
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x48D3250", Offset = "0x48D3250", VA = "0x48D3250")]
	public static object GetEditor(object component, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x48D32A0", Offset = "0x48D32A0", VA = "0x48D32A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetEditor(object component, Type editorBaseType, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x48D3400", Offset = "0x48D3400", VA = "0x48D3400")]
	public static object GetEditor(Type type, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x48C4F80", Offset = "0x48C4F80", VA = "0x48C4F80")]
	public static EventDescriptorCollection GetEvents(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x48D3570", Offset = "0x48D3570", VA = "0x48D3570")]
	public static EventDescriptorCollection GetEvents(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x48C4F30", Offset = "0x48C4F30", VA = "0x48C4F30")]
	public static EventDescriptorCollection GetEvents(object component)
	{
		return null;
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x48D3D00", Offset = "0x48D3D00", VA = "0x48D3D00")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x48D3D50", Offset = "0x48D3D50", VA = "0x48D3D50")]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x48D37C0", Offset = "0x48D37C0", VA = "0x48D37C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x48D44D0", Offset = "0x48D44D0", VA = "0x48D44D0")]
	private static string GetExtenderCollisionSuffix(MemberDescriptor member)
	{
		return null;
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x48D4810", Offset = "0x48D4810", VA = "0x48D4810")]
	public static string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x48D48D0", Offset = "0x48D48D0", VA = "0x48D48D0")]
	private static Type GetNodeForBaseType(Type searchType)
	{
		return null;
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x48C5450", Offset = "0x48C5450", VA = "0x48C5450")]
	public static PropertyDescriptorCollection GetProperties(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x48D49F0", Offset = "0x48D49F0", VA = "0x48D49F0")]
	public static PropertyDescriptorCollection GetProperties(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x48C53A0", Offset = "0x48C53A0", VA = "0x48C53A0")]
	public static PropertyDescriptorCollection GetProperties(object component)
	{
		return null;
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x48D4C40", Offset = "0x48D4C40", VA = "0x48D4C40")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptorCollection GetProperties(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x48D53C0", Offset = "0x48D53C0", VA = "0x48D53C0")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x48D5470", Offset = "0x48D5470", VA = "0x48D5470")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x48D4CA0", Offset = "0x48D4CA0", VA = "0x48D4CA0")]
	private static PropertyDescriptorCollection GetPropertiesImpl(object component, Attribute[] attributes, bool noCustomTypeDesc, bool noAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x48C9360", Offset = "0x48C9360", VA = "0x48C9360")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x48C9580", Offset = "0x48C9580", VA = "0x48C9580")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x48D54D0", Offset = "0x48D54D0", VA = "0x48D54D0")]
	internal static TypeDescriptionProvider GetProviderRecursive(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x48D5540", Offset = "0x48D5540", VA = "0x48D5540")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x48D5670", Offset = "0x48D5670", VA = "0x48D5670")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x48C8A20", Offset = "0x48C8A20", VA = "0x48C8A20")]
	private static TypeDescriptionNode NodeFor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x48C99C0", Offset = "0x48C99C0", VA = "0x48C99C0")]
	private static TypeDescriptionNode NodeFor(Type type, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x48D2670", Offset = "0x48D2670", VA = "0x48D2670")]
	private static TypeDescriptionNode NodeFor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x48CA630", Offset = "0x48CA630", VA = "0x48CA630")]
	private static TypeDescriptionNode NodeFor(object instance, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x48D5770", Offset = "0x48D5770", VA = "0x48D5770")]
	private static void NodeRemove(object key, TypeDescriptionProvider provider)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x48D3DB0", Offset = "0x48D3DB0", VA = "0x48D3DB0")]
	private static ICollection PipelineAttributeFilter(int pipelineType, ICollection members, Attribute[] filter, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x48CFD20", Offset = "0x48CFD20", VA = "0x48CFD20")]
	private static ICollection PipelineFilter(int pipelineType, ICollection members, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x48D1E50", Offset = "0x48D1E50", VA = "0x48D1E50")]
	private static ICollection PipelineInitialize(int pipelineType, ICollection members, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x48CE660", Offset = "0x48CE660", VA = "0x48CE660")]
	private static ICollection PipelineMerge(int pipelineType, ICollection primary, ICollection secondary, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x48D5F50", Offset = "0x48D5F50", VA = "0x48D5F50")]
	private static void RaiseRefresh(object component)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x48D5FF0", Offset = "0x48D5FF0", VA = "0x48D5FF0")]
	private static void RaiseRefresh(Type type)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x48D6090", Offset = "0x48D6090", VA = "0x48D6090")]
	public static void Refresh(object component)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x48CA8F0", Offset = "0x48CA8F0", VA = "0x48CA8F0")]
	private static void Refresh(object component, bool refreshReflectionProvider)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x48C9FA0", Offset = "0x48C9FA0", VA = "0x48C9FA0")]
	public static void Refresh(Type type)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x48D6100", Offset = "0x48D6100", VA = "0x48D6100")]
	public static void Refresh(Module module)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x48D6C50", Offset = "0x48D6C50", VA = "0x48D6C50")]
	public static void Refresh(Assembly assembly)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x48D6D10", Offset = "0x48D6D10", VA = "0x48D6D10")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x48D7140", Offset = "0x48D7140", VA = "0x48D7140")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociations(object primary)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x48D7210", Offset = "0x48D7210", VA = "0x48D7210")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x48D7300", Offset = "0x48D7300", VA = "0x48D7300")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x48D73D0", Offset = "0x48D73D0", VA = "0x48D73D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x48D74C0", Offset = "0x48D74C0", VA = "0x48D74C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x48CD560", Offset = "0x48CD560", VA = "0x48CD560")]
	private static bool ShouldHideMember(MemberDescriptor member, Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x48D7590", Offset = "0x48D7590", VA = "0x48D7590")]
	public static void SortDescriptorArray(IList infos)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x48D7660", Offset = "0x48D7660", VA = "0x48D7660")]
	[Conditional("DEBUG")]
	internal static void Trace(string message, params object[] args)
	{
	}
}
