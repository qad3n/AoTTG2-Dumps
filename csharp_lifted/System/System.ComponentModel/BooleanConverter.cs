// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BooleanConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200013A")]
public class BooleanConverter : TypeConverter
{
	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x0")]
	private static StandardValuesCollection s_values;

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x6226CF0", Offset = "0x6225CF0", VA = "0x6226CF0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x6226D70", Offset = "0x6225D70", VA = "0x6226D70", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x6226EF0", Offset = "0x6225EF0", VA = "0x6226EF0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x6227080", Offset = "0x6226080", VA = "0x6227080", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x6227090", Offset = "0x6226090", VA = "0x6227090", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x62270A0", Offset = "0x62260A0", VA = "0x62270A0")]
	public BooleanConverter()
	{
	}
}
