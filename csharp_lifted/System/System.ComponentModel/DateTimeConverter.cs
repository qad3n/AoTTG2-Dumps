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

[Token(Token = "0x200014C")]
public class DateTimeConverter : TypeConverter
{
	[Token(Token = "0x600083C")]
	[Address(RVA = "0x622EC10", Offset = "0x622DC10", VA = "0x622EC10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x622EC90", Offset = "0x622DC90", VA = "0x622EC90", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x622ED30", Offset = "0x622DD30", VA = "0x622ED30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x622F000", Offset = "0x622E000", VA = "0x622F000", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x622F3D0", Offset = "0x622E3D0", VA = "0x622F3D0")]
	public DateTimeConverter()
	{
	}
}
