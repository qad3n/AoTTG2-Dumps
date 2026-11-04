// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200018B")]
public class DateTimeConverter : TypeConverter
{
	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x2892810", Offset = "0x2890E10", VA = "0x182892810", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x289A520", Offset = "0x2898B20", VA = "0x18289A520", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x289A5B0", Offset = "0x2898BB0", VA = "0x18289A5B0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x289A840", Offset = "0x2898E40", VA = "0x18289A840", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DateTimeConverter()
	{
	}
}
