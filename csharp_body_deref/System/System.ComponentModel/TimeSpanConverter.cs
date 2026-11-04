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

[Token(Token = "0x20001E2")]
public class TimeSpanConverter : TypeConverter
{
	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x2892810", Offset = "0x2890E10", VA = "0x182892810", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x28C9740", Offset = "0x28C7D40", VA = "0x1828C9740", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x28C97D0", Offset = "0x28C7DD0", VA = "0x1828C97D0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x28C9930", Offset = "0x28C7F30", VA = "0x1828C9930", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public TimeSpanConverter()
	{
	}
}
