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

[Token(Token = "0x2000280")]
public class DateTimeConverter : TypeConverter
{
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x488EB10", Offset = "0x488EB10", VA = "0x488EB10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x488EB90", Offset = "0x488EB90", VA = "0x488EB90", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x488EC30", Offset = "0x488EC30", VA = "0x488EC30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x488EF60", Offset = "0x488EF60", VA = "0x488EF60", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x488F2C0", Offset = "0x488F2C0", VA = "0x488F2C0")]
	public DateTimeConverter()
	{
	}
}
