// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.GuidConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000294")]
public class GuidConverter : TypeConverter
{
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x4894130", Offset = "0x4894130", VA = "0x4894130", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x48941B0", Offset = "0x48941B0", VA = "0x48941B0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x4894250", Offset = "0x4894250", VA = "0x4894250", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x4894310", Offset = "0x4894310", VA = "0x4894310", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x4894630", Offset = "0x4894630", VA = "0x4894630")]
	public GuidConverter()
	{
	}
}
