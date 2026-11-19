// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DateTimeOffsetConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C5")]
public class DateTimeOffsetConverter : TypeConverter
{
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x624F960", Offset = "0x624E960", VA = "0x624F960", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x624F9E0", Offset = "0x624E9E0", VA = "0x624F9E0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x624FA80", Offset = "0x624EA80", VA = "0x624FA80", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x624FDD0", Offset = "0x624EDD0", VA = "0x624FDD0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x6250AA0", Offset = "0x624FAA0", VA = "0x6250AA0")]
	public DateTimeOffsetConverter()
	{
	}
}
