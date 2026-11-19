// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.StringConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001A1")]
public class StringConverter : TypeConverter
{
	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x62499C0", Offset = "0x62489C0", VA = "0x62499C0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x6249A40", Offset = "0x6248A40", VA = "0x6249A40", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x6249A70", Offset = "0x6248A70", VA = "0x6249A70")]
	public StringConverter()
	{
	}
}
