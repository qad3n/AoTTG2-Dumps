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

[Token(Token = "0x20002F9")]
public class DateTimeOffsetConverter : TypeConverter
{
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x48B06D0", Offset = "0x48B06D0", VA = "0x48B06D0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x48B0750", Offset = "0x48B0750", VA = "0x48B0750", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x48B07F0", Offset = "0x48B07F0", VA = "0x48B07F0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x48B0BD0", Offset = "0x48B0BD0", VA = "0x48B0BD0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x48B1840", Offset = "0x48B1840", VA = "0x48B1840")]
	public DateTimeOffsetConverter()
	{
	}
}
