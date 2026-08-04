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

[Token(Token = "0x200032F")]
public abstract class DesignerOptionService
{
	[Token(Token = "0x2000330")]
	[Editor("", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[TypeConverter(typeof(DesignerOptionConverter))]
	[DefaultMember("Item")]
	public sealed class DesignerOptionCollection : ICollection
	{
		[Token(Token = "0x2000331")]
		private sealed class WrappedPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000EDD")]
			[FieldOffset(Offset = "0x88")]
			private object target;

			[Token(Token = "0x4000EDE")]
			[FieldOffset(Offset = "0x90")]
			private PropertyDescriptor property;

			[Token(Token = "0x17000498")]
			public override AttributeCollection Attributes
			{
				[Token(Token = "0x600152B")]
				[Address(RVA = "0x48E1160", Offset = "0x48E1160", VA = "0x48E1160", Slot = "6")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000499")]
			public override Type ComponentType
			{
				[Token(Token = "0x600152C")]
				[Address(RVA = "0x48E1190", Offset = "0x48E1190", VA = "0x48E1190", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700049A")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600152D")]
				[Address(RVA = "0x48E11C0", Offset = "0x48E11C0", VA = "0x48E11C0", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700049B")]
			public override Type PropertyType
			{
				[Token(Token = "0x600152E")]
				[Address(RVA = "0x48E11F0", Offset = "0x48E11F0", VA = "0x48E11F0", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600152A")]
			[Address(RVA = "0x48E1060", Offset = "0x48E1060", VA = "0x48E1060")]
			internal WrappedPropertyDescriptor(PropertyDescriptor property, object target)
			{
			}

			[Token(Token = "0x600152F")]
			[Address(RVA = "0x48E1220", Offset = "0x48E1220", VA = "0x48E1220", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6001530")]
			[Address(RVA = "0x48E1250", Offset = "0x48E1250", VA = "0x48E1250", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6001531")]
			[Address(RVA = "0x48E1280", Offset = "0x48E1280", VA = "0x48E1280", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6001532")]
			[Address(RVA = "0x48E12B0", Offset = "0x48E12B0", VA = "0x48E12B0", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6001533")]
			[Address(RVA = "0x48E12F0", Offset = "0x48E12F0", VA = "0x48E12F0", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x4000ED8")]
		[FieldOffset(Offset = "0x10")]
		private DesignerOptionService _service;

		[Token(Token = "0x4000ED9")]
		[FieldOffset(Offset = "0x18")]
		private string _name;

		[Token(Token = "0x4000EDA")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x4000EDB")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _children;

		[Token(Token = "0x4000EDC")]
		[FieldOffset(Offset = "0x30")]
		private PropertyDescriptorCollection _properties;

		[Token(Token = "0x17000493")]
		public int Count
		{
			[Token(Token = "0x6001522")]
			[Address(RVA = "0x48E0490", Offset = "0x48E0490", VA = "0x48E0490", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000494")]
		public string Name
		{
			[Token(Token = "0x6001523")]
			[Address(RVA = "0x48E0560", Offset = "0x48E0560", VA = "0x48E0560")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000495")]
		public PropertyDescriptorCollection Properties
		{
			[Token(Token = "0x6001524")]
			[Address(RVA = "0x48E0570", Offset = "0x48E0570", VA = "0x48E0570")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000496")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001528")]
			[Address(RVA = "0x48E1140", Offset = "0x48E1140", VA = "0x48E1140", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000497")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6001529")]
			[Address(RVA = "0x48E1150", Offset = "0x48E1150", VA = "0x48E1150", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001525")]
		[Address(RVA = "0x48E10D0", Offset = "0x48E10D0", VA = "0x48E10D0", Slot = "4")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001526")]
		[Address(RVA = "0x48E04C0", Offset = "0x48E04C0", VA = "0x48E04C0")]
		private void EnsurePopulated()
		{
		}

		[Token(Token = "0x6001527")]
		[Address(RVA = "0x48E1110", Offset = "0x48E1110", VA = "0x48E1110", Slot = "8")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000332")]
	internal sealed class DesignerOptionConverter : TypeConverter
	{
		[Token(Token = "0x2000333")]
		private class OptionPropertyDescriptor : PropertyDescriptor
		{
			[Token(Token = "0x4000EDF")]
			[FieldOffset(Offset = "0x88")]
			private DesignerOptionCollection _option;

			[Token(Token = "0x1700049C")]
			public override Type ComponentType
			{
				[Token(Token = "0x6001539")]
				[Address(RVA = "0x48E1E70", Offset = "0x48E1E70", VA = "0x48E1E70", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700049D")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600153A")]
				[Address(RVA = "0x48E1E90", Offset = "0x48E1E90", VA = "0x48E1E90", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700049E")]
			public override Type PropertyType
			{
				[Token(Token = "0x600153B")]
				[Address(RVA = "0x48E1EA0", Offset = "0x48E1EA0", VA = "0x48E1EA0", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001538")]
			[Address(RVA = "0x48E1D60", Offset = "0x48E1D60", VA = "0x48E1D60")]
			internal OptionPropertyDescriptor(DesignerOptionCollection option)
			{
			}

			[Token(Token = "0x600153C")]
			[Address(RVA = "0x48E1EC0", Offset = "0x48E1EC0", VA = "0x48E1EC0", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x600153D")]
			[Address(RVA = "0x48E1ED0", Offset = "0x48E1ED0", VA = "0x48E1ED0", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x600153E")]
			[Address(RVA = "0x48E1EE0", Offset = "0x48E1EE0", VA = "0x48E1EE0", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x600153F")]
			[Address(RVA = "0x48E1EF0", Offset = "0x48E1EF0", VA = "0x48E1EF0", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6001540")]
			[Address(RVA = "0x48E1F00", Offset = "0x48E1F00", VA = "0x48E1F00", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001534")]
		[Address(RVA = "0x48E1320", Offset = "0x48E1320", VA = "0x48E1320", Slot = "11")]
		public override bool GetPropertiesSupported(ITypeDescriptorContext cxt)
		{
			return default(bool);
		}

		[Token(Token = "0x6001535")]
		[Address(RVA = "0x48E1330", Offset = "0x48E1330", VA = "0x48E1330", Slot = "10")]
		public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext cxt, object value, Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6001536")]
		[Address(RVA = "0x48E1DB0", Offset = "0x48E1DB0", VA = "0x48E1DB0", Slot = "7")]
		public override object ConvertTo(ITypeDescriptorContext cxt, CultureInfo culture, object value, Type destinationType)
		{
			return null;
		}

		[Token(Token = "0x6001537")]
		[Address(RVA = "0x48E1E60", Offset = "0x48E1E60", VA = "0x48E1E60")]
		public DesignerOptionConverter()
		{
		}
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x48E0480", Offset = "0x48E0480", VA = "0x48E0480", Slot = "4")]
	protected virtual void PopulateOptionCollection(DesignerOptionCollection options)
	{
	}
}
