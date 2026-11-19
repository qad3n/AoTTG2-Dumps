// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ArrayConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200012F")]
public class ArrayConverter : CollectionConverter
{
	[Token(Token = "0x2000130")]
	private class ArrayPropertyDescriptor : SimplePropertyDescriptor
	{
		[Token(Token = "0x4000564")]
		[FieldOffset(Offset = "0x98")]
		private readonly int _index;

		[Token(Token = "0x6000770")]
		[Address(RVA = "0x62248E0", Offset = "0x62238E0", VA = "0x62248E0")]
		public ArrayPropertyDescriptor(Type arrayType, Type elementType, int index)
		{
		}

		[Token(Token = "0x6000771")]
		[Address(RVA = "0x62249A0", Offset = "0x62239A0", VA = "0x62249A0", Slot = "26")]
		public override object GetValue(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000772")]
		[Address(RVA = "0x6224A10", Offset = "0x6223A10", VA = "0x6224A10", Slot = "30")]
		public override void SetValue(object instance, object value)
		{
		}
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x6224470", Offset = "0x6223470", VA = "0x6224470", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x6224600", Offset = "0x6223600", VA = "0x6224600", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x6224980", Offset = "0x6223980", VA = "0x6224980", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x6224990", Offset = "0x6223990", VA = "0x6224990")]
	public ArrayConverter()
	{
	}
}
