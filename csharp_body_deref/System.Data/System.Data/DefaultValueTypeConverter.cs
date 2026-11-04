// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DefaultValueTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000059")]
internal sealed class DefaultValueTypeConverter : StringConverter
{
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public DefaultValueTypeConverter()
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x2511C30", Offset = "0x2510230", VA = "0x182511C30", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x2511AC0", Offset = "0x25100C0", VA = "0x182511AC0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}
}
