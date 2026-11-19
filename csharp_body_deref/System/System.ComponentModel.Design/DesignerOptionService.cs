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

[Token(Token = "0x20001FB")]
public abstract class DesignerOptionService
{
	[Token(Token = "0x20001FC")]
	[DefaultMember("Item")]
	[TypeConverter(typeof(DesignerOptionConverter))]
	[Editor("", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	public sealed class DesignerOptionCollection : ICollection
	{
		[Token(Token = "0x20001FD")]
		private sealed class WrappedPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000745")]
			[FieldOffset(Offset = "0x88")]
			private object target;

			[Token(Token = "0x4000746")]
			[FieldOffset(Offset = "0x90")]
			private PropertyDescriptor property;

			[Token(Token = "0x170002D8")]
			public override AttributeCollection Attributes
			{
				[Token(Token = "0x6000DB3")]
				[Address(RVA = "0x627DF00", Offset = "0x627CF00", VA = "0x627DF00", Slot = "6")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170002D9")]
			public override Type ComponentType
			{
				[Token(Token = "0x6000DB4")]
				[Address(RVA = "0x627DF30", Offset = "0x627CF30", VA = "0x627DF30", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170002DA")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000DB5")]
				[Address(RVA = "0x627DF60", Offset = "0x627CF60", VA = "0x627DF60", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x170002DB")]
			public override Type PropertyType
			{
				[Token(Token = "0x6000DB6")]
				[Address(RVA = "0x627DF90", Offset = "0x627CF90", VA = "0x627DF90", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000DB2")]
			[Address(RVA = "0x627DE00", Offset = "0x627CE00", VA = "0x627DE00")]
			internal WrappedPropertyDescriptor(PropertyDescriptor property, object target)
			{
			}

			[Token(Token = "0x6000DB7")]
			[Address(RVA = "0x627DFC0", Offset = "0x627CFC0", VA = "0x627DFC0", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6000DB8")]
			[Address(RVA = "0x627DFF0", Offset = "0x627CFF0", VA = "0x627DFF0", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6000DB9")]
			[Address(RVA = "0x627E020", Offset = "0x627D020", VA = "0x627E020", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6000DBA")]
			[Address(RVA = "0x627E050", Offset = "0x627D050", VA = "0x627E050", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6000DBB")]
			[Address(RVA = "0x627E090", Offset = "0x627D090", VA = "0x627E090", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x4000740")]
		[FieldOffset(Offset = "0x10")]
		private DesignerOptionService _service;

		[Token(Token = "0x4000741")]
		[FieldOffset(Offset = "0x18")]
		private string _name;

		[Token(Token = "0x4000742")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x4000743")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _children;

		[Token(Token = "0x4000744")]
		[FieldOffset(Offset = "0x30")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x170002D3")]
		public int Count
		{
			[Token(Token = "0x6000DAA")]
			[Address(RVA = "0x627D470", Offset = "0x627C470", VA = "0x627D470", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002D4")]
		public string Name
		{
			[Token(Token = "0x6000DAB")]
			[Address(RVA = "0x627D540", Offset = "0x627C540", VA = "0x627D540")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002D5")]
		public PropertyDescriptorCollection Properties
		{
			[Token(Token = "0x6000DAC")]
			[Address(RVA = "0x627D550", Offset = "0x627C550", VA = "0x627D550")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002D6")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000DB0")]
			[Address(RVA = "0x627DEE0", Offset = "0x627CEE0", VA = "0x627DEE0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002D7")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000DB1")]
			[Address(RVA = "0x627DEF0", Offset = "0x627CEF0", VA = "0x627DEF0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x627DE70", Offset = "0x627CE70", VA = "0x627DE70", Slot = "4")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000DAE")]
		[Address(RVA = "0x627D4A0", Offset = "0x627C4A0", VA = "0x627D4A0")]
		private void EnsurePopulated()
		{
		}

		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x627DEB0", Offset = "0x627CEB0", VA = "0x627DEB0", Slot = "8")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x20001FE")]
	internal sealed class DesignerOptionConverter : TypeConverter
	{
		[Token(Token = "0x20001FF")]
		private class OptionPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000747")]
			[FieldOffset(Offset = "0x88")]
			private DesignerOptionCollection _option;

			[Token(Token = "0x170002DC")]
			public override Type ComponentType
			{
				[Token(Token = "0x6000DC1")]
				[Address(RVA = "0x627E800", Offset = "0x627D800", VA = "0x627E800", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170002DD")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000DC2")]
				[Address(RVA = "0x627E820", Offset = "0x627D820", VA = "0x627E820", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x170002DE")]
			public override Type PropertyType
			{
				[Token(Token = "0x6000DC3")]
				[Address(RVA = "0x627E830", Offset = "0x627D830", VA = "0x627E830", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000DC0")]
			[Address(RVA = "0x627E6F0", Offset = "0x627D6F0", VA = "0x627E6F0")]
			internal OptionPropertyDescriptor(DesignerOptionCollection option)
			{
			}

			[Token(Token = "0x6000DC4")]
			[Address(RVA = "0x627E850", Offset = "0x627D850", VA = "0x627E850", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6000DC5")]
			[Address(RVA = "0x627E860", Offset = "0x627D860", VA = "0x627E860", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6000DC6")]
			[Address(RVA = "0x627E870", Offset = "0x627D870", VA = "0x627E870", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6000DC7")]
			[Address(RVA = "0x627E880", Offset = "0x627D880", VA = "0x627E880", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6000DC8")]
			[Address(RVA = "0x627E890", Offset = "0x627D890", VA = "0x627E890", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000DBC")]
		[Address(RVA = "0x627E0C0", Offset = "0x627D0C0", VA = "0x627E0C0", Slot = "11")]
		public override bool GetPropertiesSupported(ITypeDescriptorContext cxt)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DBD")]
		[Address(RVA = "0x627E0D0", Offset = "0x627D0D0", VA = "0x627E0D0", Slot = "10")]
		public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext cxt, object value, Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x627E740", Offset = "0x627D740", VA = "0x627E740", Slot = "7")]
		public override object ConvertTo(ITypeDescriptorContext cxt, CultureInfo culture, object value, Type destinationType)
		{
			return null;
		}

		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x627E7F0", Offset = "0x627D7F0", VA = "0x627E7F0")]
		public DesignerOptionConverter()
		{
		}
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x627D460", Offset = "0x627C460", VA = "0x627D460", Slot = "4")]
	protected virtual void PopulateOptionCollection(DesignerOptionCollection options)
	{
	}
}
