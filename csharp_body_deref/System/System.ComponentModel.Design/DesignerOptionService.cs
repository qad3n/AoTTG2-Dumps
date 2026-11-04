// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.DesignerOptionService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200023A")]
public abstract class DesignerOptionService
{
	[Token(Token = "0x200023B")]
	[Editor("", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[TypeConverter(typeof(DesignerOptionConverter))]
	[DefaultMember("Item")]
	public sealed class DesignerOptionCollection : ICollection
	{
		[Token(Token = "0x200023C")]
		private sealed class WrappedPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000814")]
			[FieldOffset(Offset = "0x88")]
			private object target;

			[Token(Token = "0x4000815")]
			[FieldOffset(Offset = "0x90")]
			private PropertyDescriptor property;

			[Token(Token = "0x17000307")]
			public override AttributeCollection Attributes
			{
				[Token(Token = "0x6000F73")]
				[Address(RVA = "0x28EA970", Offset = "0x28E8F70", VA = "0x1828EA970", Slot = "6")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000308")]
			public override Type ComponentType
			{
				[Token(Token = "0x6000F74")]
				[Address(RVA = "0x28EA9A0", Offset = "0x28E8FA0", VA = "0x1828EA9A0", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000309")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000F75")]
				[Address(RVA = "0x28EA9D0", Offset = "0x28E8FD0", VA = "0x1828EA9D0", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700030A")]
			public override Type PropertyType
			{
				[Token(Token = "0x6000F76")]
				[Address(RVA = "0x28EAA00", Offset = "0x28E9000", VA = "0x1828EAA00", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000F72")]
			[Address(RVA = "0x28EA8E0", Offset = "0x28E8EE0", VA = "0x1828EA8E0")]
			internal WrappedPropertyDescriptor(PropertyDescriptor property, object target)
			{
			}

			[Token(Token = "0x6000F77")]
			[Address(RVA = "0x28EA7A0", Offset = "0x28E8DA0", VA = "0x1828EA7A0", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6000F78")]
			[Address(RVA = "0x28EA7E0", Offset = "0x28E8DE0", VA = "0x1828EA7E0", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6000F79")]
			[Address(RVA = "0x28EA820", Offset = "0x28E8E20", VA = "0x1828EA820", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6000F7A")]
			[Address(RVA = "0x28EA860", Offset = "0x28E8E60", VA = "0x1828EA860", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6000F7B")]
			[Address(RVA = "0x28EA8A0", Offset = "0x28E8EA0", VA = "0x1828EA8A0", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x400080F")]
		[FieldOffset(Offset = "0x10")]
		private DesignerOptionService _service;

		[Token(Token = "0x4000810")]
		[FieldOffset(Offset = "0x18")]
		private string _name;

		[Token(Token = "0x4000811")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x4000812")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _children;

		[Token(Token = "0x4000813")]
		[FieldOffset(Offset = "0x30")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x17000302")]
		public int Count
		{
			[Token(Token = "0x6000F6A")]
			[Address(RVA = "0x28D2A00", Offset = "0x28D1000", VA = "0x1828D2A00", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000303")]
		public string Name
		{
			[Token(Token = "0x6000F6B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000304")]
		public PropertyDescriptorCollection Properties
		{
			[Token(Token = "0x6000F6C")]
			[Address(RVA = "0x28D2A40", Offset = "0x28D1040", VA = "0x1828D2A40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000305")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000F70")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000306")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000F71")]
			[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x28D28C0", Offset = "0x28D0EC0", VA = "0x1828D28C0", Slot = "4")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x28D2920", Offset = "0x28D0F20", VA = "0x1828D2920")]
		private void EnsurePopulated()
		{
		}

		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x28D29C0", Offset = "0x28D0FC0", VA = "0x1828D29C0", Slot = "8")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200023D")]
	internal sealed class DesignerOptionConverter : TypeConverter
	{
		[Token(Token = "0x200023E")]
		private class OptionPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000816")]
			[FieldOffset(Offset = "0x88")]
			private DesignerOptionCollection _option;

			[Token(Token = "0x1700030B")]
			public override Type ComponentType
			{
				[Token(Token = "0x6000F81")]
				[Address(RVA = "0x28D8C20", Offset = "0x28D7220", VA = "0x1828D8C20", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700030C")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000F82")]
				[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700030D")]
			public override Type PropertyType
			{
				[Token(Token = "0x6000F83")]
				[Address(RVA = "0x28D8C20", Offset = "0x28D7220", VA = "0x1828D8C20", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000F80")]
			[Address(RVA = "0x28D8BD0", Offset = "0x28D71D0", VA = "0x1828D8BD0")]
			internal OptionPropertyDescriptor(DesignerOptionCollection option)
			{
			}

			[Token(Token = "0x6000F84")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6000F85")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6000F86")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6000F87")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6000F88")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000F7C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		public override bool GetPropertiesSupported(ITypeDescriptorContext cxt)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F7D")]
		[Address(RVA = "0x28D31D0", Offset = "0x28D17D0", VA = "0x1828D31D0", Slot = "10")]
		public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext cxt, object value, Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000F7E")]
		[Address(RVA = "0x28D3110", Offset = "0x28D1710", VA = "0x1828D3110", Slot = "7")]
		public override object ConvertTo(ITypeDescriptorContext cxt, CultureInfo culture, object value, Type destinationType)
		{
			return null;
		}

		[Token(Token = "0x6000F7F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DesignerOptionConverter()
		{
		}
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	protected virtual void PopulateOptionCollection(DesignerOptionCollection options)
	{
	}
}
