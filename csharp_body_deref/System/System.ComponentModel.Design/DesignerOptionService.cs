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
				[Address(RVA = "0x45BC060", Offset = "0x45BC060", VA = "0x45BC060", Slot = "6")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000499")]
			public override Type ComponentType
			{
				[Token(Token = "0x600152C")]
				[Address(RVA = "0x45BC090", Offset = "0x45BC090", VA = "0x45BC090", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700049A")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600152D")]
				[Address(RVA = "0x45BC0C0", Offset = "0x45BC0C0", VA = "0x45BC0C0", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700049B")]
			public override Type PropertyType
			{
				[Token(Token = "0x600152E")]
				[Address(RVA = "0x45BC0F0", Offset = "0x45BC0F0", VA = "0x45BC0F0", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600152A")]
			[Address(RVA = "0x45BBF60", Offset = "0x45BBF60", VA = "0x45BBF60")]
			internal WrappedPropertyDescriptor(PropertyDescriptor property, object target)
			{
			}

			[Token(Token = "0x600152F")]
			[Address(RVA = "0x45BC120", Offset = "0x45BC120", VA = "0x45BC120", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x6001530")]
			[Address(RVA = "0x45BC150", Offset = "0x45BC150", VA = "0x45BC150", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x6001531")]
			[Address(RVA = "0x45BC180", Offset = "0x45BC180", VA = "0x45BC180", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x6001532")]
			[Address(RVA = "0x45BC1B0", Offset = "0x45BC1B0", VA = "0x45BC1B0", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6001533")]
			[Address(RVA = "0x45BC1F0", Offset = "0x45BC1F0", VA = "0x45BC1F0", Slot = "31")]
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
			[Address(RVA = "0x45BB390", Offset = "0x45BB390", VA = "0x45BB390", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000494")]
		public string Name
		{
			[Token(Token = "0x6001523")]
			[Address(RVA = "0x45BB460", Offset = "0x45BB460", VA = "0x45BB460")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000495")]
		public PropertyDescriptorCollection Properties
		{
			[Token(Token = "0x6001524")]
			[Address(RVA = "0x45BB470", Offset = "0x45BB470", VA = "0x45BB470")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000496")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001528")]
			[Address(RVA = "0x45BC040", Offset = "0x45BC040", VA = "0x45BC040", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000497")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6001529")]
			[Address(RVA = "0x45BC050", Offset = "0x45BC050", VA = "0x45BC050", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001525")]
		[Address(RVA = "0x45BBFD0", Offset = "0x45BBFD0", VA = "0x45BBFD0", Slot = "4")]
		public void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001526")]
		[Address(RVA = "0x45BB3C0", Offset = "0x45BB3C0", VA = "0x45BB3C0")]
		private void EnsurePopulated()
		{
		}

		[Token(Token = "0x6001527")]
		[Address(RVA = "0x45BC010", Offset = "0x45BC010", VA = "0x45BC010", Slot = "8")]
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
				[Address(RVA = "0x45BCD70", Offset = "0x45BCD70", VA = "0x45BCD70", Slot = "17")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700049D")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600153A")]
				[Address(RVA = "0x45BCD90", Offset = "0x45BCD90", VA = "0x45BCD90", Slot = "20")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x1700049E")]
			public override Type PropertyType
			{
				[Token(Token = "0x600153B")]
				[Address(RVA = "0x45BCDA0", Offset = "0x45BCDA0", VA = "0x45BCDA0", Slot = "21")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001538")]
			[Address(RVA = "0x45BCC60", Offset = "0x45BCC60", VA = "0x45BCC60")]
			internal OptionPropertyDescriptor(DesignerOptionCollection option)
			{
			}

			[Token(Token = "0x600153C")]
			[Address(RVA = "0x45BCDC0", Offset = "0x45BCDC0", VA = "0x45BCDC0", Slot = "23")]
			public override bool CanResetValue(object component)
			{
				return default(bool);
			}

			[Token(Token = "0x600153D")]
			[Address(RVA = "0x45BCDD0", Offset = "0x45BCDD0", VA = "0x45BCDD0", Slot = "26")]
			public override object GetValue(object component)
			{
				return null;
			}

			[Token(Token = "0x600153E")]
			[Address(RVA = "0x45BCDE0", Offset = "0x45BCDE0", VA = "0x45BCDE0", Slot = "29")]
			public override void ResetValue(object component)
			{
			}

			[Token(Token = "0x600153F")]
			[Address(RVA = "0x45BCDF0", Offset = "0x45BCDF0", VA = "0x45BCDF0", Slot = "30")]
			public override void SetValue(object component, object value)
			{
			}

			[Token(Token = "0x6001540")]
			[Address(RVA = "0x45BCE00", Offset = "0x45BCE00", VA = "0x45BCE00", Slot = "31")]
			public override bool ShouldSerializeValue(object component)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001534")]
		[Address(RVA = "0x45BC220", Offset = "0x45BC220", VA = "0x45BC220", Slot = "11")]
		public override bool GetPropertiesSupported(ITypeDescriptorContext cxt)
		{
			return default(bool);
		}

		[Token(Token = "0x6001535")]
		[Address(RVA = "0x45BC230", Offset = "0x45BC230", VA = "0x45BC230", Slot = "10")]
		public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext cxt, object value, Attribute[] attributes)
		{
			return null;
		}

		[Token(Token = "0x6001536")]
		[Address(RVA = "0x45BCCB0", Offset = "0x45BCCB0", VA = "0x45BCCB0", Slot = "7")]
		public override object ConvertTo(ITypeDescriptorContext cxt, CultureInfo culture, object value, Type destinationType)
		{
			return null;
		}

		[Token(Token = "0x6001537")]
		[Address(RVA = "0x45BCD60", Offset = "0x45BCD60", VA = "0x45BCD60")]
		public DesignerOptionConverter()
		{
		}
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x45BB380", Offset = "0x45BB380", VA = "0x45BB380", Slot = "4")]
	protected virtual void PopulateOptionCollection(DesignerOptionCollection options)
	{
	}
}
