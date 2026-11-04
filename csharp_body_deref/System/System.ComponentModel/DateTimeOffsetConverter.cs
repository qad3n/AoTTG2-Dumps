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

[Token(Token = "0x2000204")]
public class DateTimeOffsetConverter : TypeConverter
{
	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x2894D10", Offset = "0x2893310", VA = "0x182894D10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x28B0E70", Offset = "0x28AF470", VA = "0x1828B0E70", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x28B0F00", Offset = "0x28AF500", VA = "0x1828B0F00", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x28B1230", Offset = "0x28AF830", VA = "0x1828B1230", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DateTimeOffsetConverter()
	{
	}
}
