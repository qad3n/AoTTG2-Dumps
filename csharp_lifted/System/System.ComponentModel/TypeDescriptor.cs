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

[Token(Token = "0x20001D8")]
public sealed class TypeDescriptor
{
	[Token(Token = "0x20001D9")]
	private sealed class AttributeProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x20001DA")]
		private class AttributeTypeDescriptor : CustomTypeDescriptor
		{
			[Token(Token = "0x4000718")]
			[FieldOffset(Offset = "0x18")]
			private Attribute[] _attributeArray;

			[Token(Token = "0x6000D1A")]
			[Address(RVA = "0x6274D80", Offset = "0x6273D80", VA = "0x6274D80")]
			internal AttributeTypeDescriptor(Attribute[] attrs, ICustomTypeDescriptor parent)
			{
			}

			[Token(Token = "0x6000D1B")]
			[Address(RVA = "0x6274DB0", Offset = "0x6273DB0", VA = "0x6274DB0", Slot = "16")]
			public override AttributeCollection GetAttributes()
			{
				return null;
			}
		}

		[Token(Token = "0x4000717")]
		[FieldOffset(Offset = "0x20")]
		private Attribute[] _attrs;

		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x62671D0", Offset = "0x62661D0", VA = "0x62671D0")]
		internal AttributeProvider(TypeDescriptionProvider existingProvider, params Attribute[] attrs)
		{
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x6274CF0", Offset = "0x6273CF0", VA = "0x6274CF0", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x20001DB")]
	private sealed class ComNativeDescriptionProvider : TypeDescriptionProvider
	{
		[Token(Token = "0x20001DC")]
		private sealed class ComNativeTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x400071A")]
			[FieldOffset(Offset = "0x10")]
			private IComNativeDescriptorHandler _handler;

			[Token(Token = "0x400071B")]
			[FieldOffset(Offset = "0x18")]
			private object _instance;

			[Token(Token = "0x6000D20")]
			[Address(RVA = "0x62751F0", Offset = "0x62741F0", VA = "0x62751F0")]
			internal ComNativeTypeDescriptor(IComNativeDescriptorHandler handler, object instance)
			{
			}

			[Token(Token = "0x6000D21")]
			[Address(RVA = "0x6275230", Offset = "0x6274230", VA = "0x6275230", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000D22")]
			[Address(RVA = "0x62752E0", Offset = "0x62742E0", VA = "0x62752E0", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000D23")]
			[Address(RVA = "0x6275390", Offset = "0x6274390", VA = "0x6275390", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000D24")]
			[Address(RVA = "0x62753A0", Offset = "0x62743A0", VA = "0x62753A0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000D25")]
			[Address(RVA = "0x6275450", Offset = "0x6274450", VA = "0x6275450", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000D26")]
			[Address(RVA = "0x6275500", Offset = "0x6274500", VA = "0x6275500", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000D27")]
			[Address(RVA = "0x62755B0", Offset = "0x62745B0", VA = "0x62755B0", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000D28")]
			[Address(RVA = "0x6275680", Offset = "0x6274680", VA = "0x6275680", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000D29")]
			[Address(RVA = "0x6275730", Offset = "0x6274730", VA = "0x6275730", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D2A")]
			[Address(RVA = "0x6275800", Offset = "0x6274800", VA = "0x6275800", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000D2B")]
			[Address(RVA = "0x62758C0", Offset = "0x62748C0", VA = "0x62758C0", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D2C")]
			[Address(RVA = "0x6275990", Offset = "0x6274990", VA = "0x6275990", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x4000719")]
		[FieldOffset(Offset = "0x20")]
		private IComNativeDescriptorHandler _handler;

		[Token(Token = "0x170002CD")]
		internal IComNativeDescriptorHandler Handler
		{
			[Token(Token = "0x6000D1D")]
			[Address(RVA = "0x6275080", Offset = "0x6274080", VA = "0x6275080")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000D1E")]
			[Address(RVA = "0x6275090", Offset = "0x6274090", VA = "0x6275090")]
			set
			{
			}
		}

		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x6266A60", Offset = "0x6265A60", VA = "0x6266A60")]
		internal ComNativeDescriptionProvider(IComNativeDescriptorHandler handler)
		{
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x62750A0", Offset = "0x62740A0", VA = "0x62750A0", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}
	}

	[Token(Token = "0x20001DD")]
	private sealed class AttributeFilterCacheItem
	{
		[Token(Token = "0x400071C")]
		[FieldOffset(Offset = "0x10")]
		private Attribute[] _filter;

		[Token(Token = "0x400071D")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x6272FB0", Offset = "0x6271FB0", VA = "0x6272FB0")]
		internal AttributeFilterCacheItem(Attribute[] filter, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x6272F40", Offset = "0x6271F40", VA = "0x6272F40")]
		internal bool IsValid(Attribute[] filter)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20001DE")]
	private sealed class FilterCacheItem
	{
		[Token(Token = "0x400071E")]
		[FieldOffset(Offset = "0x10")]
		private ITypeDescriptorFilterService _filterService;

		[Token(Token = "0x400071F")]
		[FieldOffset(Offset = "0x18")]
		internal ICollection FilteredMembers;

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x6273290", Offset = "0x6272290", VA = "0x6273290")]
		internal FilterCacheItem(ITypeDescriptorFilterService filterService, ICollection filteredMembers)
		{
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x6272FF0", Offset = "0x6271FF0", VA = "0x6272FF0")]
		internal bool IsValid(ITypeDescriptorFilterService filterService)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20001DF")]
	private interface IUnimplemented
	{
	}

	[Token(Token = "0x20001E0")]
	private sealed class MemberDescriptorComparer : IComparer
	{
		[Token(Token = "0x4000720")]
		[FieldOffset(Offset = "0x0")]
		public static readonly MemberDescriptorComparer Instance;

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x62759A0", Offset = "0x62749A0", VA = "0x62759A0", Slot = "4")]
		public int Compare(object left, object right)
		{
			return default(int);
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x6275AC0", Offset = "0x6274AC0", VA = "0x6275AC0")]
		public MemberDescriptorComparer()
		{
		}
	}

	[Token(Token = "0x20001E1")]
	private sealed class MergedTypeDescriptor : ICustomTypeDescriptor
	{
		[Token(Token = "0x4000721")]
		[FieldOffset(Offset = "0x10")]
		private ICustomTypeDescriptor _primary;

		[Token(Token = "0x4000722")]
		[FieldOffset(Offset = "0x18")]
		private ICustomTypeDescriptor _secondary;

		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x62705A0", Offset = "0x626F5A0", VA = "0x62705A0")]
		internal MergedTypeDescriptor(ICustomTypeDescriptor primary, ICustomTypeDescriptor secondary)
		{
		}

		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x6275B40", Offset = "0x6274B40", VA = "0x6275B40", Slot = "4")]
		private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
		{
			return null;
		}

		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x6275C60", Offset = "0x6274C60", VA = "0x6275C60", Slot = "5")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
		{
			return null;
		}

		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x6275D90", Offset = "0x6274D90", VA = "0x6275D90", Slot = "6")]
		private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
		{
			return null;
		}

		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x6275EC0", Offset = "0x6274EC0", VA = "0x6275EC0", Slot = "7")]
		private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
		{
			return null;
		}

		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x6275FF0", Offset = "0x6274FF0", VA = "0x6275FF0", Slot = "8")]
		private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
		{
			return null;
		}

		[Token(Token = "0x6000D3A")]
		[Address(RVA = "0x6276120", Offset = "0x6275120", VA = "0x6276120", Slot = "9")]
		private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
		{
			return null;
		}

		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x6276250", Offset = "0x6275250", VA = "0x6276250", Slot = "10")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
		{
			return null;
		}

		[Token(Token = "0x6000D3C")]
		[Address(RVA = "0x6276400", Offset = "0x6275400", VA = "0x6276400", Slot = "11")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
		{
			return null;
		}

		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x6276530", Offset = "0x6275530", VA = "0x6276530", Slot = "12")]
		private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x6276670", Offset = "0x6275670", VA = "0x6276670", Slot = "13")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
		{
			return null;
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x62767A0", Offset = "0x62757A0", VA = "0x62767A0", Slot = "14")]
		private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x62768E0", Offset = "0x62758E0", VA = "0x62768E0", Slot = "15")]
		private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
		{
			return null;
		}
	}

	[Token(Token = "0x20001E2")]
	private sealed class TypeDescriptionNode : TypeDescriptionProvider
	{
		[Token(Token = "0x20001E3")]
		private struct DefaultExtendedTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x4000725")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x4000726")]
			[FieldOffset(Offset = "0x8")]
			private object _instance;

			[Token(Token = "0x6000D4B")]
			[Address(RVA = "0x6276CA0", Offset = "0x6275CA0", VA = "0x6276CA0")]
			internal DefaultExtendedTypeDescriptor(TypeDescriptionNode node, object instance)
			{
			}

			[Token(Token = "0x6000D4C")]
			[Address(RVA = "0x6277180", Offset = "0x6276180", VA = "0x6277180", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000D4D")]
			[Address(RVA = "0x6277460", Offset = "0x6276460", VA = "0x6277460", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000D4E")]
			[Address(RVA = "0x62776A0", Offset = "0x62766A0", VA = "0x62776A0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000D4F")]
			[Address(RVA = "0x62778B0", Offset = "0x62768B0", VA = "0x62778B0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000D50")]
			[Address(RVA = "0x6277B50", Offset = "0x6276B50", VA = "0x6277B50", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000D51")]
			[Address(RVA = "0x6277D60", Offset = "0x6276D60", VA = "0x6277D60", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000D52")]
			[Address(RVA = "0x6277F70", Offset = "0x6276F70", VA = "0x6277F70", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000D53")]
			[Address(RVA = "0x62781E0", Offset = "0x62771E0", VA = "0x62781E0", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000D54")]
			[Address(RVA = "0x62784C0", Offset = "0x62774C0", VA = "0x62784C0", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D55")]
			[Address(RVA = "0x62787B0", Offset = "0x62777B0", VA = "0x62787B0", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000D56")]
			[Address(RVA = "0x6278A50", Offset = "0x6277A50", VA = "0x6278A50", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D57")]
			[Address(RVA = "0x6278CF0", Offset = "0x6277CF0", VA = "0x6278CF0", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x20001E4")]
		private struct DefaultTypeDescriptor : ICustomTypeDescriptor
		{
			[Token(Token = "0x4000727")]
			[FieldOffset(Offset = "0x0")]
			private TypeDescriptionNode _node;

			[Token(Token = "0x4000728")]
			[FieldOffset(Offset = "0x8")]
			private Type _objectType;

			[Token(Token = "0x4000729")]
			[FieldOffset(Offset = "0x10")]
			private object _instance;

			[Token(Token = "0x6000D58")]
			[Address(RVA = "0x6277090", Offset = "0x6276090", VA = "0x6277090")]
			internal DefaultTypeDescriptor(TypeDescriptionNode node, Type objectType, object instance)
			{
			}

			[Token(Token = "0x6000D59")]
			[Address(RVA = "0x6278F10", Offset = "0x6277F10", VA = "0x6278F10", Slot = "4")]
			private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
			{
				return null;
			}

			[Token(Token = "0x6000D5A")]
			[Address(RVA = "0x62791A0", Offset = "0x62781A0", VA = "0x62791A0", Slot = "5")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
			{
				return null;
			}

			[Token(Token = "0x6000D5B")]
			[Address(RVA = "0x62793D0", Offset = "0x62783D0", VA = "0x62793D0", Slot = "6")]
			private string System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
			{
				return null;
			}

			[Token(Token = "0x6000D5C")]
			[Address(RVA = "0x62795E0", Offset = "0x62785E0", VA = "0x62795E0", Slot = "7")]
			private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
			{
				return null;
			}

			[Token(Token = "0x6000D5D")]
			[Address(RVA = "0x6279880", Offset = "0x6278880", VA = "0x6279880", Slot = "8")]
			private EventDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
			{
				return null;
			}

			[Token(Token = "0x6000D5E")]
			[Address(RVA = "0x6279A90", Offset = "0x6278A90", VA = "0x6279A90", Slot = "9")]
			private PropertyDescriptor System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
			{
				return null;
			}

			[Token(Token = "0x6000D5F")]
			[Address(RVA = "0x6279CA0", Offset = "0x6278CA0", VA = "0x6279CA0", Slot = "10")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
			{
				return null;
			}

			[Token(Token = "0x6000D60")]
			[Address(RVA = "0x6279F30", Offset = "0x6278F30", VA = "0x6279F30", Slot = "11")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
			{
				return null;
			}

			[Token(Token = "0x6000D61")]
			[Address(RVA = "0x627A1D0", Offset = "0x62791D0", VA = "0x627A1D0", Slot = "12")]
			private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D62")]
			[Address(RVA = "0x627A480", Offset = "0x6279480", VA = "0x627A480", Slot = "13")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
			{
				return null;
			}

			[Token(Token = "0x6000D63")]
			[Address(RVA = "0x627A720", Offset = "0x6279720", VA = "0x627A720", Slot = "14")]
			private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[] attributes)
			{
				return null;
			}

			[Token(Token = "0x6000D64")]
			[Address(RVA = "0x627A9D0", Offset = "0x62799D0", VA = "0x627A9D0", Slot = "15")]
			private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor pd)
			{
				return null;
			}
		}

		[Token(Token = "0x4000723")]
		[FieldOffset(Offset = "0x20")]
		internal TypeDescriptionNode Next;

		[Token(Token = "0x4000724")]
		[FieldOffset(Offset = "0x28")]
		internal TypeDescriptionProvider Provider;

		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x6267C40", Offset = "0x6266C40", VA = "0x6267C40")]
		internal TypeDescriptionNode(TypeDescriptionProvider provider)
		{
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x6276A20", Offset = "0x6275A20", VA = "0x6276A20", Slot = "4")]
		public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
		{
			return null;
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x6276B60", Offset = "0x6275B60", VA = "0x6276B60", Slot = "5")]
		public override IDictionary GetCache(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x6276BD0", Offset = "0x6275BD0", VA = "0x6276BD0", Slot = "6")]
		public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x6276CD0", Offset = "0x6275CD0", VA = "0x6276CD0", Slot = "7")]
		protected internal override IExtenderProvider[] GetExtenderProviders(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x6276D40", Offset = "0x6275D40", VA = "0x6276D40", Slot = "8")]
		public override string GetFullComponentName(object component)
		{
			return null;
		}

		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x6276DB0", Offset = "0x6275DB0", VA = "0x6276DB0", Slot = "9")]
		public override Type GetReflectionType(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x6276E60", Offset = "0x6275E60", VA = "0x6276E60", Slot = "10")]
		public override Type GetRuntimeType(Type objectType)
		{
			return null;
		}

		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x6276F10", Offset = "0x6275F10", VA = "0x6276F10", Slot = "11")]
		public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance)
		{
			return null;
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x62770D0", Offset = "0x62760D0", VA = "0x62770D0", Slot = "12")]
		public override bool IsSupportedType(Type type)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20001E5")]
	[TypeDescriptionProvider("System.Windows.Forms.ComponentModel.Com2Interop.ComNativeDescriptor, System.Windows.Forms, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private sealed class TypeDescriptorComObject
	{
		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x627AC00", Offset = "0x6279C00", VA = "0x627AC00")]
		public TypeDescriptorComObject()
		{
		}
	}

	[Token(Token = "0x20001E6")]
	private sealed class TypeDescriptorInterface
	{
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x627AC10", Offset = "0x6279C10", VA = "0x627AC10")]
		public TypeDescriptorInterface()
		{
		}
	}

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x0")]
	private static WeakHashtable _providerTable;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable _providerTypeTable;

	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable _defaultProviders;

	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x18")]
	private static WeakHashtable _associationTable;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x20")]
	private static int _metadataVersion;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x24")]
	private static int _collisionIndex;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x28")]
	private static BooleanSwitch TraceDescriptor;

	[Token(Token = "0x400070E")]
	private const int PIPELINE_ATTRIBUTES = 0;

	[Token(Token = "0x400070F")]
	private const int PIPELINE_PROPERTIES = 1;

	[Token(Token = "0x4000710")]
	private const int PIPELINE_EVENTS = 2;

	[Token(Token = "0x4000711")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Guid[] _pipelineInitializeKeys;

	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Guid[] _pipelineMergeKeys;

	[Token(Token = "0x4000713")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Guid[] _pipelineFilterKeys;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Guid[] _pipelineAttributeFilterKeys;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x50")]
	private static object _internalSyncObject;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static RefreshEventHandler m_Refreshed;

	[Token(Token = "0x170002C9")]
	[Obsolete("This property has been deprecated.  Use a type description provider to supply type information for COM types instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	public static IComNativeDescriptorHandler ComNativeDescriptorHandler
	{
		[Token(Token = "0x6000CAE")]
		[Address(RVA = "0x6266620", Offset = "0x6265620", VA = "0x6266620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x6266850", Offset = "0x6265850", VA = "0x6266850")]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type ComObjectType
	{
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x6266780", Offset = "0x6265780", VA = "0x6266780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CB")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type InterfaceType
	{
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x6266D30", Offset = "0x6265D30", VA = "0x6266D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CC")]
	internal static int MetadataVersion
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x6266D90", Offset = "0x6265D90", VA = "0x6266D90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1400000F")]
	public static event RefreshEventHandler Refreshed
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x6266E00", Offset = "0x6265E00", VA = "0x6266E00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x6266EE0", Offset = "0x6265EE0", VA = "0x6266EE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x6266610", Offset = "0x6265610", VA = "0x6266610")]
	private TypeDescriptor()
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x6266FC0", Offset = "0x6265FC0", VA = "0x6266FC0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x6267200", Offset = "0x6266200", VA = "0x6267200")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider AddAttributes(object instance, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x62676D0", Offset = "0x62666D0", VA = "0x62676D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddEditorTable(Type editorBaseType, Hashtable table)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x6266A90", Offset = "0x6265A90", VA = "0x6266A90")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x62673C0", Offset = "0x62663C0", VA = "0x62673C0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x6268E60", Offset = "0x6267E60", VA = "0x6268E60")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x6268F50", Offset = "0x6267F50", VA = "0x6268F50")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void AddProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x6269020", Offset = "0x6268020", VA = "0x6269020")]
	private static void CheckDefaultProvider(Type type)
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x6269690", Offset = "0x6268690", VA = "0x6269690")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void CreateAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x6269F90", Offset = "0x6268F90", VA = "0x6269F90")]
	public static IDesigner CreateDesigner(IComponent component, Type designerBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x626A490", Offset = "0x6269490", VA = "0x626A490")]
	public static EventDescriptor CreateEvent(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x626A500", Offset = "0x6269500", VA = "0x626A500")]
	public static EventDescriptor CreateEvent(Type componentType, EventDescriptor oldEventDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x626A570", Offset = "0x6269570", VA = "0x626A570")]
	public static object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x626A880", Offset = "0x6269880", VA = "0x626A880")]
	public static PropertyDescriptor CreateProperty(Type componentType, string name, Type type, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x626A8F0", Offset = "0x62698F0", VA = "0x626A8F0")]
	public static PropertyDescriptor CreateProperty(Type componentType, PropertyDescriptor oldPropertyDescriptor, params Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x626AA90", Offset = "0x6269A90", VA = "0x626AA90")]
	[Conditional("DEBUG")]
	private static void DebugValidate(Type type, AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x626AAA0", Offset = "0x6269AA0", VA = "0x626AAA0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, AttributeCollection debugAttributes)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x626AAB0", Offset = "0x6269AB0", VA = "0x626AAB0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, Type type)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x626AAC0", Offset = "0x6269AC0", VA = "0x626AAC0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(AttributeCollection attributes, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x626AAD0", Offset = "0x6269AD0", VA = "0x626AAD0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, Type type)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x626AAE0", Offset = "0x6269AE0", VA = "0x626AAE0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(TypeConverter converter, object instance, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x626AAF0", Offset = "0x6269AF0", VA = "0x626AAF0")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x626AB00", Offset = "0x6269B00", VA = "0x626AB00")]
	[Conditional("DEBUG")]
	private static void DebugValidate(EventDescriptorCollection events, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x626AB10", Offset = "0x6269B10", VA = "0x626AB10")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, Type type, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x626AB20", Offset = "0x6269B20", VA = "0x626AB20")]
	[Conditional("DEBUG")]
	private static void DebugValidate(PropertyDescriptorCollection properties, object instance, Attribute[] attributes, bool noCustomTypeDesc)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x626AB30", Offset = "0x6269B30", VA = "0x626AB30")]
	private static ArrayList FilterMembers(IList members, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x626B080", Offset = "0x626A080", VA = "0x626B080")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetAssociation(Type type, object primary)
	{
		return null;
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x6261B50", Offset = "0x6260B50", VA = "0x6261B50")]
	public static AttributeCollection GetAttributes(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x62628B0", Offset = "0x62618B0", VA = "0x62628B0")]
	public static AttributeCollection GetAttributes(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x626B7D0", Offset = "0x626A7D0", VA = "0x626B7D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static AttributeCollection GetAttributes(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x626F010", Offset = "0x626E010", VA = "0x626F010")]
	internal static IDictionary GetCache(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x626FA20", Offset = "0x626EA20", VA = "0x626FA20")]
	public static string GetClassName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x626FA90", Offset = "0x626EA90", VA = "0x626FA90")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetClassName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x626FB70", Offset = "0x626EB70", VA = "0x626FB70")]
	public static string GetClassName(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x626FC50", Offset = "0x626EC50", VA = "0x626FC50")]
	public static string GetComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x626FCC0", Offset = "0x626ECC0", VA = "0x626FCC0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static string GetComponentName(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x626FDA0", Offset = "0x626EDA0", VA = "0x626FDA0")]
	public static TypeConverter GetConverter(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x626FE10", Offset = "0x626EE10", VA = "0x626FE10")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeConverter GetConverter(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x626FEF0", Offset = "0x626EEF0", VA = "0x626FEF0")]
	public static TypeConverter GetConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x626FFD0", Offset = "0x626EFD0", VA = "0x626FFD0")]
	private static object ConvertFromInvariantString(Type type, string stringValue)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x62700C0", Offset = "0x626F0C0", VA = "0x62700C0")]
	public static EventDescriptor GetDefaultEvent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x62701D0", Offset = "0x626F1D0", VA = "0x62701D0")]
	public static EventDescriptor GetDefaultEvent(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x6270240", Offset = "0x626F240", VA = "0x6270240")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptor GetDefaultEvent(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x6270330", Offset = "0x626F330", VA = "0x6270330")]
	public static PropertyDescriptor GetDefaultProperty(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x6270440", Offset = "0x626F440", VA = "0x6270440")]
	public static PropertyDescriptor GetDefaultProperty(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x62704B0", Offset = "0x626F4B0", VA = "0x62704B0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptor GetDefaultProperty(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x626B6B0", Offset = "0x626A6B0", VA = "0x626B6B0")]
	internal static ICustomTypeDescriptor GetDescriptor(Type type, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x626BC00", Offset = "0x626AC00", VA = "0x626BC00")]
	internal static ICustomTypeDescriptor GetDescriptor(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x626BE90", Offset = "0x626AE90", VA = "0x626BE90")]
	internal static ICustomTypeDescriptor GetExtendedDescriptor(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x62705E0", Offset = "0x626F5E0", VA = "0x62705E0")]
	public static object GetEditor(object component, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x6270640", Offset = "0x626F640", VA = "0x6270640")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static object GetEditor(object component, Type editorBaseType, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x62707A0", Offset = "0x626F7A0", VA = "0x62707A0")]
	public static object GetEditor(Type type, Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x6262DA0", Offset = "0x6261DA0", VA = "0x6262DA0")]
	public static EventDescriptorCollection GetEvents(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x6270910", Offset = "0x626F910", VA = "0x6270910")]
	public static EventDescriptorCollection GetEvents(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x6262D50", Offset = "0x6261D50", VA = "0x6262D50")]
	public static EventDescriptorCollection GetEvents(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x6271090", Offset = "0x6270090", VA = "0x6271090")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x62710E0", Offset = "0x62700E0", VA = "0x62710E0")]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x6270B60", Offset = "0x626FB60", VA = "0x6270B60")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static EventDescriptorCollection GetEvents(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x6271860", Offset = "0x6270860", VA = "0x6271860")]
	private static string GetExtenderCollisionSuffix(MemberDescriptor member)
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x6271B90", Offset = "0x6270B90", VA = "0x6271B90")]
	public static string GetFullComponentName(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x6271C50", Offset = "0x6270C50", VA = "0x6271C50")]
	private static Type GetNodeForBaseType(Type searchType)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x6263270", Offset = "0x6262270", VA = "0x6263270")]
	public static PropertyDescriptorCollection GetProperties(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x6271DD0", Offset = "0x6270DD0", VA = "0x6271DD0")]
	public static PropertyDescriptorCollection GetProperties(Type componentType, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x62631C0", Offset = "0x62621C0", VA = "0x62631C0")]
	public static PropertyDescriptorCollection GetProperties(object component)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x6272020", Offset = "0x6271020", VA = "0x6272020")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static PropertyDescriptorCollection GetProperties(object component, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x62727C0", Offset = "0x62717C0", VA = "0x62727C0")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x6272870", Offset = "0x6271870", VA = "0x6272870")]
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes, bool noCustomTypeDesc)
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x6272080", Offset = "0x6271080", VA = "0x6272080")]
	private static PropertyDescriptorCollection GetPropertiesImpl(object component, Attribute[] attributes, bool noCustomTypeDesc, bool noAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x6267100", Offset = "0x6266100", VA = "0x6267100")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x6267320", Offset = "0x6266320", VA = "0x6267320")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static TypeDescriptionProvider GetProvider(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x62728D0", Offset = "0x62718D0", VA = "0x62728D0")]
	internal static TypeDescriptionProvider GetProviderRecursive(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x6272940", Offset = "0x6271940", VA = "0x6272940")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x6272A70", Offset = "0x6271A70", VA = "0x6272A70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static Type GetReflectionType(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x62667E0", Offset = "0x62657E0", VA = "0x62667E0")]
	private static TypeDescriptionNode NodeFor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x6267730", Offset = "0x6266730", VA = "0x6267730")]
	private static TypeDescriptionNode NodeFor(Type type, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x626F9B0", Offset = "0x626E9B0", VA = "0x626F9B0")]
	private static TypeDescriptionNode NodeFor(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x6268260", Offset = "0x6267260", VA = "0x6268260")]
	private static TypeDescriptionNode NodeFor(object instance, bool createDelegator)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x6272B70", Offset = "0x6271B70", VA = "0x6272B70")]
	private static void NodeRemove(object key, TypeDescriptionProvider provider)
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x6271140", Offset = "0x6270140", VA = "0x6271140")]
	private static ICollection PipelineAttributeFilter(int pipelineType, ICollection members, Attribute[] filter, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x626D3F0", Offset = "0x626C3F0", VA = "0x626D3F0")]
	private static ICollection PipelineFilter(int pipelineType, ICollection members, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x626F0F0", Offset = "0x626E0F0", VA = "0x626F0F0")]
	private static ICollection PipelineInitialize(int pipelineType, ICollection members, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x626BFA0", Offset = "0x626AFA0", VA = "0x626BFA0")]
	private static ICollection PipelineMerge(int pipelineType, ICollection primary, ICollection secondary, object instance, IDictionary cache)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x62732D0", Offset = "0x62722D0", VA = "0x62732D0")]
	private static void RaiseRefresh(object component)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x6273370", Offset = "0x6272370", VA = "0x6273370")]
	private static void RaiseRefresh(Type type)
	{
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x6273410", Offset = "0x6272410", VA = "0x6273410")]
	public static void Refresh(object component)
	{
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x6268520", Offset = "0x6267520", VA = "0x6268520")]
	private static void Refresh(object component, bool refreshReflectionProvider)
	{
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x6267C70", Offset = "0x6266C70", VA = "0x6267C70")]
	public static void Refresh(Type type)
	{
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x6273480", Offset = "0x6272480", VA = "0x6273480")]
	public static void Refresh(Module module)
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x6273F30", Offset = "0x6272F30", VA = "0x6273F30")]
	public static void Refresh(Assembly assembly)
	{
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x6273FF0", Offset = "0x6272FF0", VA = "0x6273FF0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociation(object primary, object secondary)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x62743D0", Offset = "0x62733D0", VA = "0x62743D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveAssociations(object primary)
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x62744A0", Offset = "0x62734A0", VA = "0x62744A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x6274590", Offset = "0x6273590", VA = "0x6274590")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProvider(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x6274660", Offset = "0x6273660", VA = "0x6274660")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, Type type)
	{
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x6274750", Offset = "0x6273750", VA = "0x6274750")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static void RemoveProviderTransparent(TypeDescriptionProvider provider, object instance)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x626AFF0", Offset = "0x6269FF0", VA = "0x626AFF0")]
	private static bool ShouldHideMember(MemberDescriptor member, Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x6274820", Offset = "0x6273820", VA = "0x6274820")]
	public static void SortDescriptorArray(IList infos)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x62748F0", Offset = "0x62738F0", VA = "0x62748F0")]
	[Conditional("DEBUG")]
	internal static void Trace(string message, params object[] args)
	{
	}
}
