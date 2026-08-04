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
		[Address(RVA = "0x4883E40", Offset = "0x4883E40", VA = "0x4883E40")]
		public ArrayPropertyDescriptor(Type arrayType, Type elementType, int index)
		{
		}

		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x4883F00", Offset = "0x4883F00", VA = "0x4883F00", Slot = "26")]
		public override object GetValue(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x4883F80", Offset = "0x4883F80", VA = "0x4883F80", Slot = "30")]
		public override void SetValue(object instance, object value)
		{
		}
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x48839C0", Offset = "0x48839C0", VA = "0x48839C0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x4883B50", Offset = "0x4883B50", VA = "0x4883B50", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x4883EE0", Offset = "0x4883EE0", VA = "0x4883EE0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4883EF0", Offset = "0x4883EF0", VA = "0x4883EF0")]
	public ArrayConverter()
	{
	}
}
