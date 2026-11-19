// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CollectionConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BF")]
public class CollectionConverter : TypeConverter
{
	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x624D6F0", Offset = "0x624C6F0", VA = "0x624D6F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x624D850", Offset = "0x624C850", VA = "0x624D850", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x624D860", Offset = "0x624C860", VA = "0x624D860", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x624D870", Offset = "0x624C870", VA = "0x624D870")]
	public CollectionConverter()
	{
	}
}
