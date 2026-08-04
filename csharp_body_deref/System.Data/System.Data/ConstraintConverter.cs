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

[Token(Token = "0x200000A")]
internal sealed class ConstraintConverter : ExpandableObjectConverter
{
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x45370B0", Offset = "0x45370B0", VA = "0x45370B0")]
	public ConstraintConverter()
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x45370C0", Offset = "0x45370C0", VA = "0x45370C0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4537160", Offset = "0x4537160", VA = "0x4537160", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
