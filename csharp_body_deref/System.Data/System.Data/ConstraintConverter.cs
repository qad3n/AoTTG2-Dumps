// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ConstraintConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002A")]
internal sealed class ConstraintConverter : ExpandableObjectConverter
{
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public ConstraintConverter()
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x24E9070", Offset = "0x24E7670", VA = "0x1824E9070", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x24E9100", Offset = "0x24E7700", VA = "0x1824E9100", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
