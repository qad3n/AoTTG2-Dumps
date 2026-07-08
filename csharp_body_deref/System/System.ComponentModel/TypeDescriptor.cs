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
			[Address(RVA = "0x45B29F0", Offset = "0x45B29F0", VA = "0x45B29F0")]
			internal AttributeTypeDescriptor(Attribute[] attrs, ICustomTypeDescriptor parent)
			{
			}

			[Token(Token = "0x6001493")]
			[Address(RVA = "0x45B2A20", Offset = "0x45B2A20", VA = "0x45B2A20", Slot = "16")]
			public override AttributeCollection GetAttributes()
			{
				return null;
			}
		}

		[Token(Token = "0x4000EAF")]
		[FieldOffset(Offset = "0x20")]
		private Attribute[] _attrs;

		[Token(Token = "0x6001490")]
		[Address(RVA = "0x45A4330", Offset = "0x45A4330", VA = "0x45A4330")]
		internal AttributeProvider(TypeDescriptionProvider existingProvider, params Attribute[] attrs)
		{
		}

		[Token(Token = "0x6001491")]
		[Address(RVA = "0x45B2960", Offset = "0x45B2960", VA = "0x45B2960", Slot = "11")]
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
			[Address(RVA = "0x45B2E90", Offset = "0x45B2E90", VA = "0x45B2E90")]
			internal ComNativeTypeDescriptor(IComNativeDescriptorHandler handler, object instance)
			{
			}

			[Token(Token = "0x6001499")]
			[Address(RVA = "0x45B2ED0", Offset = "0x45B2ED0", VA = "0x45B2ED0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x600149A")]
			[Address(RVA = "0x45B2F80", Offset = "0x45B2F80", VA = "0x45B2F80", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x600149B")]
			[Address(RVA = "0x45B3030", Offset = "0x45B3030", VA = "0x45B3030", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x600149C")]
			[Address(RVA = "0x45B3040", Offset = "0x45B3040", VA = "0x45B3040", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x600149D")]
			[Address(RVA = "0x45B30F0", Offset = "0x45B30F0", VA = "0x45B30F0", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x600149E")]
			[Address(RVA = "0x45B31A0", Offset = "0x45B31A0", VA = "0x45B31A0", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x600149F")]
			[Address(RVA = "0x45B3250", Offset = "0x45B3250", VA = "0x45B3250", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014A0")]
			[Address(RVA = "0x45B3320", Offset = "0x45B3320", VA = "0x45B3320", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014A1")]
			[Address(RVA = "0x45B33D0", Offset = "0x45B33D0", VA = "0x45B33D0", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014A2")]
			[Address(RVA = "0x45B34A0", Offset = "0x45B34A0", VA = "0x45B34A0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014A3")]
			[Address(RVA = "0x45B3560", Offset = "0x45B3560", VA = "0x45B3560", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014A4")]
			[Address(RVA = "0x45B3630", Offset = "0x45B3630", VA = "0x45B3630", Slot = "15")]
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
			[Address(RVA = "0x45B2D20", Offset = "0x45B2D20", VA = "0x45B2D20")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001496")]
			[Address(RVA = "0x45B2D30", Offset = "0x45B2D30", VA = "0x45B2D30")]
			set
			{
			}
		}

		[Token(Token = "0x6001494")]
		[Address(RVA = "0x45A3BA0", Offset = "0x45A3BA0", VA = "0x45A3BA0")]
		internal ComNativeDescriptionProvider(IComNativeDescriptorHandler handler)
		{
		}

		[Token(Token = "0x6001497")]
		[Address(RVA = "0x45B2D40", Offset = "0x45B2D40", VA = "0x45B2D40", Slot = "11")]
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
		[Address(RVA = "0x45B0B30", Offset = "0x45B0B30", VA = "0x45B0B30")]
		internal AttributeFilterCacheItem(Attribute[] filter, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x60014A6")]
		[Address(RVA = "0x45B0AD0", Offset = "0x45B0AD0", VA = "0x45B0AD0")]
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
		[Address(RVA = "0x45B0E10", Offset = "0x45B0E10", VA = "0x45B0E10")]
		internal FilterCacheItem(ITypeDescriptorFilterService filterService, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x60014A8")]
		[Address(RVA = "0x45B0B70", Offset = "0x45B0B70", VA = "0x45B0B70")]
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
		[Address(RVA = "0x45B3640", Offset = "0x45B3640", VA = "0x45B3640", Slot = "4")]
		public int Compare(object left, object right)
		{
			return default(int);
		}

		[Token(Token = "0x60014AA")]
		[Address(RVA = "0x45B37B0", Offset = "0x45B37B0", VA = "0x45B37B0")]
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
		[Address(RVA = "0x45AE110", Offset = "0x45AE110", VA = "0x45AE110")]
		internal MergedTypeDescriptor(ICustomTypeDescriptor primary, ICustomTypeDescriptor secondary)
		{
		}

		[Token(Token = "0x60014AD")]
		[Address(RVA = "0x45B3830", Offset = "0x45B3830", VA = "0x45B3830", Slot = "4")]
		private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
		{
			return null;
		}

		[Token(Token = "0x60014AE")]
		[Address(RVA = "0x45B3950", Offset = "0x45B3950", VA = "0x45B3950", Slot = "5")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
		{
			return null;
		}

		[Token(Token = "0x60014AF")]
		[Address(RVA = "0x45B3A80", Offset = "0x45B3A80", VA = "0x45B3A80", Slot = "6")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
		{
			return null;
		}

		[Token(Token = "0x60014B0")]
		[Address(RVA = "0x45B3BB0", Offset = "0x45B3BB0", VA = "0x45B3BB0", Slot = "7")]
		private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
		{
			return null;
		}

		[Token(Token = "0x60014B1")]
		[Address(RVA = "0x45B3CE0", Offset = "0x45B3CE0", VA = "0x45B3CE0", Slot = "8")]
		private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
		{
			return null;
		}

		[Token(Token = "0x60014B2")]
		[Address(RVA = "0x45B3E10", Offset = "0x45B3E10", VA = "0x45B3E10", Slot = "9")]
		private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
		{
			return null;
		}

		[Token(Token = "0x60014B3")]
		[Address(RVA = "0x45B3F40", Offset = "0x45B3F40", VA = "0x45B3F40", Slot = "10")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x60014B4")]
		[Address(RVA = "0x45B40F0", Offset = "0x45B40F0", VA = "0x45B40F0", Slot = "11")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
		{
			return null;
		}

		[Token(Token = "0x60014B5")]
		[Address(RVA = "0x45B4220", Offset = "0x45B4220", VA = "0x45B4220", Slot = "12")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x45B4360", Offset = "0x45B4360", VA = "0x45B4360", Slot = "13")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
		{
			return null;
		}

		[Token(Token = "0x60014B7")]
		[Address(RVA = "0x45B4490", Offset = "0x45B4490", VA = "0x45B4490", Slot = "14")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x45B45D0", Offset = "0x45B45D0", VA = "0x45B45D0", Slot = "15")]
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
			[Address(RVA = "0x45B4990", Offset = "0x45B4990", VA = "0x45B4990")]
			internal DefaultExtendedTypeDescriptor(TypeDescriptionNode node, object instance)
			{
			}

			[Token(Token = "0x60014C4")]
			[Address(RVA = "0x45B4E70", Offset = "0x45B4E70", VA = "0x45B4E70", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x60014C5")]
			[Address(RVA = "0x45B5160", Offset = "0x45B5160", VA = "0x45B5160", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x60014C6")]
			[Address(RVA = "0x45B53B0", Offset = "0x45B53B0", VA = "0x45B53B0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x60014C7")]
			[Address(RVA = "0x45B55C0", Offset = "0x45B55C0", VA = "0x45B55C0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x60014C8")]
			[Address(RVA = "0x45B5870", Offset = "0x45B5870", VA = "0x45B5870", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x60014C9")]
			[Address(RVA = "0x45B5A80", Offset = "0x45B5A80", VA = "0x45B5A80", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x60014CA")]
			[Address(RVA = "0x45B5C90", Offset = "0x45B5C90", VA = "0x45B5C90", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014CB")]
			[Address(RVA = "0x45B5F10", Offset = "0x45B5F10", VA = "0x45B5F10", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014CC")]
			[Address(RVA = "0x45B6210", Offset = "0x45B6210", VA = "0x45B6210", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014CD")]
			[Address(RVA = "0x45B6510", Offset = "0x45B6510", VA = "0x45B6510", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014CE")]
			[Address(RVA = "0x45B67C0", Offset = "0x45B67C0", VA = "0x45B67C0", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014CF")]
			[Address(RVA = "0x45B6A70", Offset = "0x45B6A70", VA = "0x45B6A70", Slot = "15")]
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
			[Address(RVA = "0x45B4D80", Offset = "0x45B4D80", VA = "0x45B4D80")]
			internal DefaultTypeDescriptor(TypeDescriptionNode node, Type objectType, object instance)
			{
			}

			[Token(Token = "0x60014D1")]
			[Address(RVA = "0x45B6CB0", Offset = "0x45B6CB0", VA = "0x45B6CB0", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x60014D2")]
			[Address(RVA = "0x45B6F50", Offset = "0x45B6F50", VA = "0x45B6F50", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x60014D3")]
			[Address(RVA = "0x45B71A0", Offset = "0x45B71A0", VA = "0x45B71A0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x60014D4")]
			[Address(RVA = "0x45B73C0", Offset = "0x45B73C0", VA = "0x45B73C0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x60014D5")]
			[Address(RVA = "0x45B7670", Offset = "0x45B7670", VA = "0x45B7670", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x60014D6")]
			[Address(RVA = "0x45B7890", Offset = "0x45B7890", VA = "0x45B7890", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x60014D7")]
			[Address(RVA = "0x45B7AB0", Offset = "0x45B7AB0", VA = "0x45B7AB0", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x60014D8")]
			[Address(RVA = "0x45B7D50", Offset = "0x45B7D50", VA = "0x45B7D50", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x60014D9")]
			[Address(RVA = "0x45B8000", Offset = "0x45B8000", VA = "0x45B8000", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014DA")]
			[Address(RVA = "0x45B82C0", Offset = "0x45B82C0", VA = "0x45B82C0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x60014DB")]
			[Address(RVA = "0x45B8570", Offset = "0x45B8570", VA = "0x45B8570", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x60014DC")]
			[Address(RVA = "0x45B8830", Offset = "0x45B8830", VA = "0x45B8830", Slot = "15")]
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
		[Address(RVA = "0x45A4E70", Offset = "0x45A4E70", VA = "0x45A4E70")]
		internal TypeDescriptionNode(TypeDescriptionProvider provider)
		{
		}

		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x45B4710", Offset = "0x45B4710", VA = "0x45B4710", Slot = "4")]
		public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
		{
			return null;
		}

		[Token(Token = "0x60014BB")]
		[Address(RVA = "0x45B4850", Offset = "0x45B4850", VA = "0x45B4850", Slot = "5")]
		public override IDictionary GetCache(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BC")]
		[Address(RVA = "0x45B48C0", Offset = "0x45B48C0", VA = "0x45B48C0", Slot = "6")]
		public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BD")]
		[Address(RVA = "0x45B49C0", Offset = "0x45B49C0", VA = "0x45B49C0", Slot = "7")]
		protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
		{
			return null;
		}

		[Token(Token = "0x60014BE")]
		[Address(RVA = "0x45B4A30", Offset = "0x45B4A30", VA = "0x45B4A30", Slot = "8")]
		public override string GetFullComponentName(object component)
		{
			return null;
		}

		[Token(Token = "0x60014BF")]
		[Address(RVA = "0x45B4AA0", Offset = "0x45B4AA0", VA = "0x45B4AA0", Slot = "9")]
		public override Type GetReflectionType(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x60014C0")]
		[Address(RVA = "0x45B4B50", Offset = "0x45B4B50", VA = "0x45B4B50", Slot = "10")]
		public override Type GetRuntimeType(Type objectType)
		{
			return null;
		}

		[Token(Token = "0x60014C1")]
		[Address(RVA = "0x45B4C00", Offset = "0x45B4C00", VA = "0x45B4C00", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x60014C2")]
		[Address(RVA = "0x45B4DC0", Offset = "0x45B4DC0", VA = "0x45B4DC0", Slot = "12")]
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
		[Address(RVA = "0x45B8A70", Offset = "0x45B8A70", VA = "0x45B8A70")]
		public TypeDescriptorComObject()
		{
		}
	}

	[Token(Token = "0x200031A")]
	private sealed class TypeDescriptorInterface
	{
		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x45B8A80", Offset = "0x45B8A80", VA = "0x45B8A80")]
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
		[Address(RVA = "0x45A3760", Offset = "0x45A3760", VA = "0x45A3760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x45A3990", Offset = "0x45A3990", VA = "0x45A3990")]
		set
		{
		}
	}

	[Token(Token = "0x1700048A")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type ComObjectType
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x45A38C0", Offset = "0x45A38C0", VA = "0x45A38C0")]
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
		[Address(RVA = "0x45A3E90", Offset = "0x45A3E90", VA = "0x45A3E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048C")]
	internal static int MetadataVersion
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x45A3EF0", Offset = "0x45A3EF0", VA = "0x45A3EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1400000F")]
	public static event RefreshEventHandler Refreshed
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x45A3F60", Offset = "0x45A3F60", VA = "0x45A3F60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x45A4040", Offset = "0x45A4040", VA = "0x45A4040")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x45A3750", Offset = "0x45A3750", VA = "0x45A3750")]
	private TypeDescriptor()
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x45A4120", Offset = "0x45A4120", VA = "0x45A4120")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x45A4360", Offset = "0x45A4360", VA = "0x45A4360")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(object instance, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x45A4860", Offset = "0x45A4860", VA = "0x45A4860")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x45A3BD0", Offset = "0x45A3BD0", VA = "0x45A3BD0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x45A4520", Offset = "0x45A4520", VA = "0x45A4520")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x45A61C0", Offset = "0x45A61C0", VA = "0x45A61C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x45A62B0", Offset = "0x45A62B0", VA = "0x45A62B0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x45A6380", Offset = "0x45A6380", VA = "0x45A6380")]
	private static void CheckDefaultProvider(Type type)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x45A6A70", Offset = "0x45A6A70", VA = "0x45A6A70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void CreateAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x45A73D0", Offset = "0x45A73D0", VA = "0x45A73D0")]
	public static IDesigner CreateDesigner(IComponent component, Type designerBaseType)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x45A78D0", Offset = "0x45A78D0", VA = "0x45A78D0")]
	public static EventDescriptor CreateEvent(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x45A7940", Offset = "0x45A7940", VA = "0x45A7940")]
	public static EventDescriptor CreateEvent(Type componentType, EventDescriptor oldEventDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x45A79B0", Offset = "0x45A79B0", VA = "0x45A79B0")]
	public static object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x45A7CC0", Offset = "0x45A7CC0", VA = "0x45A7CC0")]
	public static PropertyDescriptor CreateProperty(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x45A7D30", Offset = "0x45A7D30", VA = "0x45A7D30")]
	public static PropertyDescriptor CreateProperty(Type componentType, PropertyDescriptor oldPropertyDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x45A7ED0", Offset = "0x45A7ED0", VA = "0x45A7ED0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(Type type, AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x45A7EE0", Offset = "0x45A7EE0", VA = "0x45A7EE0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x45A7EF0", Offset = "0x45A7EF0", VA = "0x45A7EF0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, Type type)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x45A7F00", Offset = "0x45A7F00", VA = "0x45A7F00")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x45A7F10", Offset = "0x45A7F10", VA = "0x45A7F10")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, Type type)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x45A7F20", Offset = "0x45A7F20", VA = "0x45A7F20")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x45A7F30", Offset = "0x45A7F30", VA = "0x45A7F30")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x45A7F40", Offset = "0x45A7F40", VA = "0x45A7F40")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x45A7F50", Offset = "0x45A7F50", VA = "0x45A7F50")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x45A7F60", Offset = "0x45A7F60", VA = "0x45A7F60")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x45A7F70", Offset = "0x45A7F70", VA = "0x45A7F70")]
	private static ArrayList FilterMembers(IList members, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x45A84F0", Offset = "0x45A84F0", VA = "0x45A84F0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetAssociation(Type type, object primary)
	{
		return null;
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x459EC40", Offset = "0x459EC40", VA = "0x459EC40")]
	public static AttributeCollection GetAttributes(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x459F990", Offset = "0x459F990", VA = "0x459F990")]
	public static AttributeCollection GetAttributes(object component)
	{
		return null;
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x45A8D90", Offset = "0x45A8D90", VA = "0x45A8D90")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static AttributeCollection GetAttributes(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x45ACC70", Offset = "0x45ACC70", VA = "0x45ACC70")]
	internal static IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x45AD5E0", Offset = "0x45AD5E0", VA = "0x45AD5E0")]
	public static string GetClassName(object component)
	{
		return null;
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x45AD640", Offset = "0x45AD640", VA = "0x45AD640")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetClassName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x45AD720", Offset = "0x45AD720", VA = "0x45AD720")]
	public static string GetClassName(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x45AD800", Offset = "0x45AD800", VA = "0x45AD800")]
	public static string GetComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x45AD860", Offset = "0x45AD860", VA = "0x45AD860")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetComponentName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x45AD940", Offset = "0x45AD940", VA = "0x45AD940")]
	public static TypeConverter GetConverter(object component)
	{
		return null;
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x45AD9A0", Offset = "0x45AD9A0", VA = "0x45AD9A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeConverter GetConverter(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x45ADA80", Offset = "0x45ADA80", VA = "0x45ADA80")]
	public static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x45ADB60", Offset = "0x45ADB60", VA = "0x45ADB60")]
	private static object ConvertFromInvariantString(Type type, string stringValue)
	{
		return null;
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x45ADC50", Offset = "0x45ADC50", VA = "0x45ADC50")]
	public static EventDescriptor GetDefaultEvent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x45ADD60", Offset = "0x45ADD60", VA = "0x45ADD60")]
	public static EventDescriptor GetDefaultEvent(object component)
	{
		return null;
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x45ADDC0", Offset = "0x45ADDC0", VA = "0x45ADDC0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptor GetDefaultEvent(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x45ADEB0", Offset = "0x45ADEB0", VA = "0x45ADEB0")]
	public static PropertyDescriptor GetDefaultProperty(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x45ADFC0", Offset = "0x45ADFC0", VA = "0x45ADFC0")]
	public static PropertyDescriptor GetDefaultProperty(object component)
	{
		return null;
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x45AE020", Offset = "0x45AE020", VA = "0x45AE020")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptor GetDefaultProperty(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x45A8C70", Offset = "0x45A8C70", VA = "0x45A8C70")]
	internal static ICustomTypeDescriptor GetDescriptor(Type type, string typeName)
	{
		return null;
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x45A91C0", Offset = "0x45A91C0", VA = "0x45A91C0")]
	internal static ICustomTypeDescriptor GetDescriptor(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x45A9450", Offset = "0x45A9450", VA = "0x45A9450")]
	internal static ICustomTypeDescriptor GetExtendedDescriptor(object component)
	{
		return null;
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x45AE150", Offset = "0x45AE150", VA = "0x45AE150")]
	public static object GetEditor(object component, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x45AE1A0", Offset = "0x45AE1A0", VA = "0x45AE1A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetEditor(object component, Type editorBaseType, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x45AE300", Offset = "0x45AE300", VA = "0x45AE300")]
	public static object GetEditor(Type type, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x459FE80", Offset = "0x459FE80", VA = "0x459FE80")]
	public static EventDescriptorCollection GetEvents(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x45AE470", Offset = "0x45AE470", VA = "0x45AE470")]
	public static EventDescriptorCollection GetEvents(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x459FE30", Offset = "0x459FE30", VA = "0x459FE30")]
	public static EventDescriptorCollection GetEvents(object component)
	{
		return null;
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x45AEC00", Offset = "0x45AEC00", VA = "0x45AEC00")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x45AEC50", Offset = "0x45AEC50", VA = "0x45AEC50")]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x45AE6C0", Offset = "0x45AE6C0", VA = "0x45AE6C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x45AF3D0", Offset = "0x45AF3D0", VA = "0x45AF3D0")]
	private static string GetExtenderCollisionSuffix(MemberDescriptor member)
	{
		return null;
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x45AF710", Offset = "0x45AF710", VA = "0x45AF710")]
	public static string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x45AF7D0", Offset = "0x45AF7D0", VA = "0x45AF7D0")]
	private static Type GetNodeForBaseType(Type searchType)
	{
		return null;
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x45A0350", Offset = "0x45A0350", VA = "0x45A0350")]
	public static PropertyDescriptorCollection GetProperties(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x45AF8F0", Offset = "0x45AF8F0", VA = "0x45AF8F0")]
	public static PropertyDescriptorCollection GetProperties(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x45A02A0", Offset = "0x45A02A0", VA = "0x45A02A0")]
	public static PropertyDescriptorCollection GetProperties(object component)
	{
		return null;
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x45AFB40", Offset = "0x45AFB40", VA = "0x45AFB40")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptorCollection GetProperties(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x45B02C0", Offset = "0x45B02C0", VA = "0x45B02C0")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x45B0370", Offset = "0x45B0370", VA = "0x45B0370")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x45AFBA0", Offset = "0x45AFBA0", VA = "0x45AFBA0")]
	private static PropertyDescriptorCollection GetPropertiesImpl(object component, Attribute[] attributes, bool noCustomTypeDesc, bool noAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x45A4260", Offset = "0x45A4260", VA = "0x45A4260")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x45A4480", Offset = "0x45A4480", VA = "0x45A4480")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x45B03D0", Offset = "0x45B03D0", VA = "0x45B03D0")]
	internal static TypeDescriptionProvider GetProviderRecursive(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x45B0440", Offset = "0x45B0440", VA = "0x45B0440")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x45B0570", Offset = "0x45B0570", VA = "0x45B0570")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x45A3920", Offset = "0x45A3920", VA = "0x45A3920")]
	private static TypeDescriptionNode NodeFor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x45A48C0", Offset = "0x45A48C0", VA = "0x45A48C0")]
	private static TypeDescriptionNode NodeFor(Type type, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x45AD570", Offset = "0x45AD570", VA = "0x45AD570")]
	private static TypeDescriptionNode NodeFor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x45A5530", Offset = "0x45A5530", VA = "0x45A5530")]
	private static TypeDescriptionNode NodeFor(object instance, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x45B0670", Offset = "0x45B0670", VA = "0x45B0670")]
	private static void NodeRemove(object key, TypeDescriptionProvider provider)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x45AECB0", Offset = "0x45AECB0", VA = "0x45AECB0")]
	private static ICollection PipelineAttributeFilter(int pipelineType, ICollection members, Attribute[] filter, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x45AAC20", Offset = "0x45AAC20", VA = "0x45AAC20")]
	private static ICollection PipelineFilter(int pipelineType, ICollection members, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x45ACD50", Offset = "0x45ACD50", VA = "0x45ACD50")]
	private static ICollection PipelineInitialize(int pipelineType, ICollection members, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x45A9560", Offset = "0x45A9560", VA = "0x45A9560")]
	private static ICollection PipelineMerge(int pipelineType, ICollection primary, ICollection secondary, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x45B0E50", Offset = "0x45B0E50", VA = "0x45B0E50")]
	private static void RaiseRefresh(object component)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x45B0EF0", Offset = "0x45B0EF0", VA = "0x45B0EF0")]
	private static void RaiseRefresh(Type type)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x45B0F90", Offset = "0x45B0F90", VA = "0x45B0F90")]
	public static void Refresh(object component)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x45A57F0", Offset = "0x45A57F0", VA = "0x45A57F0")]
	private static void Refresh(object component, bool refreshReflectionProvider)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x45A4EA0", Offset = "0x45A4EA0", VA = "0x45A4EA0")]
	public static void Refresh(Type type)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x45B1000", Offset = "0x45B1000", VA = "0x45B1000")]
	public static void Refresh(Module module)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x45B1B50", Offset = "0x45B1B50", VA = "0x45B1B50")]
	public static void Refresh(Assembly assembly)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x45B1C10", Offset = "0x45B1C10", VA = "0x45B1C10")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x45B2040", Offset = "0x45B2040", VA = "0x45B2040")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociations(object primary)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x45B2110", Offset = "0x45B2110", VA = "0x45B2110")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x45B2200", Offset = "0x45B2200", VA = "0x45B2200")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x45B22D0", Offset = "0x45B22D0", VA = "0x45B22D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x45B23C0", Offset = "0x45B23C0", VA = "0x45B23C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x45A8460", Offset = "0x45A8460", VA = "0x45A8460")]
	private static bool ShouldHideMember(MemberDescriptor member, Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x45B2490", Offset = "0x45B2490", VA = "0x45B2490")]
	public static void SortDescriptorArray(IList infos)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x45B2560", Offset = "0x45B2560", VA = "0x45B2560")]
	[Conditional("DEBUG")]
	internal static void Trace(string message, params object[] args)
	{
	}
}
