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

[Token(Token = "0x20001FE")]
public class CollectionConverter : TypeConverter
{
	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x28AF110", Offset = "0x28AD710", VA = "0x1828AF110", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public CollectionConverter()
	{
	}
}
