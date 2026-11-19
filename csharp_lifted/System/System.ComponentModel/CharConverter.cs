// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CharConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200013D")]
public class CharConverter : TypeConverter
{
	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x6227370", Offset = "0x6226370", VA = "0x6227370", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x62273F0", Offset = "0x62263F0", VA = "0x62273F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x62274D0", Offset = "0x62264D0", VA = "0x62274D0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x62275E0", Offset = "0x62265E0", VA = "0x62275E0")]
	public CharConverter()
	{
	}
}
