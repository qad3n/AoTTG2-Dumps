using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000263")]
public class ArrayConverter : CollectionConverter
{
	[Token(Token = "0x2000264")]
	private class ArrayPropertyDescriptor : SimplePropertyDescriptor
	{
		[Token(Token = "0x4000CFC")]
		[FieldOffset(Offset = "0x98")]
		private readonly int _index;

		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x455ED40", Offset = "0x455ED40", VA = "0x455ED40")]
		public ArrayPropertyDescriptor(Type arrayType, Type elementType, int index)
		{
		}

		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x455EE00", Offset = "0x455EE00", VA = "0x455EE00", Slot = "26")]
		public override object GetValue(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x455EE80", Offset = "0x455EE80", VA = "0x455EE80", Slot = "30")]
		public override void SetValue(object instance, object value)
		{
		}
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x455E8C0", Offset = "0x455E8C0", VA = "0x455E8C0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x455EA50", Offset = "0x455EA50", VA = "0x455EA50", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x455EDE0", Offset = "0x455EDE0", VA = "0x455EDE0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x455EDF0", Offset = "0x455EDF0", VA = "0x455EDF0")]
	public ArrayConverter()
	{
	}
}
