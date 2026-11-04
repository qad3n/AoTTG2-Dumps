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

[Token(Token = "0x200019F")]
public class GuidConverter : TypeConverter
{
	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x2892810", Offset = "0x2890E10", VA = "0x182892810", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x289E500", Offset = "0x289CB00", VA = "0x18289E500", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x289E590", Offset = "0x289CB90", VA = "0x18289E590", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x289E650", Offset = "0x289CC50", VA = "0x18289E650", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public GuidConverter()
	{
	}
}
