// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TimeSpanConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001A3")]
public class TimeSpanConverter : TypeConverter
{
	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x6249C10", Offset = "0x6248C10", VA = "0x6249C10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x6249C90", Offset = "0x6248C90", VA = "0x6249C90", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x6249D30", Offset = "0x6248D30", VA = "0x6249D30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x6249EF0", Offset = "0x6248EF0", VA = "0x6249EF0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x624A200", Offset = "0x6249200", VA = "0x624A200")]
	public TimeSpanConverter()
	{
	}
}
