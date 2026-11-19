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
	[Address(RVA = "0x5E8F1D0", Offset = "0x5E8E1D0", VA = "0x5E8F1D0")]
	public ConstraintConverter()
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x5E8F1E0", Offset = "0x5E8E1E0", VA = "0x5E8F1E0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x5E8F280", Offset = "0x5E8E280", VA = "0x5E8F280", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
