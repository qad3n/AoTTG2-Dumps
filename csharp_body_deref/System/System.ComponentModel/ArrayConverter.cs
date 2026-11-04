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

[Token(Token = "0x200016E")]
public class ArrayConverter : CollectionConverter
{
	[Token(Token = "0x200016F")]
	private class ArrayPropertyDescriptor : SimplePropertyDescriptor
	{
		[Token(Token = "0x4000633")]
		[FieldOffset(Offset = "0x98")]
		private readonly int _index;

		[Token(Token = "0x6000930")]
		[Address(RVA = "0x2877F70", Offset = "0x2876570", VA = "0x182877F70")]
		public ArrayPropertyDescriptor(Type arrayType, Type elementType, int index)
		{
		}

		[Token(Token = "0x6000931")]
		[Address(RVA = "0x2877DD0", Offset = "0x28763D0", VA = "0x182877DD0", Slot = "26")]
		public override object GetValue(object instance)
		{
			return null;
		}

		[Token(Token = "0x6000932")]
		[Address(RVA = "0x2877E50", Offset = "0x2876450", VA = "0x182877E50", Slot = "30")]
		public override void SetValue(object instance, object value)
		{
		}
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x28779D0", Offset = "0x2875FD0", VA = "0x1828779D0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x2877B70", Offset = "0x2876170", VA = "0x182877B70", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public ArrayConverter()
	{
	}
}
