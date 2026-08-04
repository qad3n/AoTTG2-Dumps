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

[Token(Token = "0x200026E")]
public class BooleanConverter : TypeConverter
{
	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x0")]
	private static StandardValuesCollection s_values;

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x4886920", Offset = "0x4886920", VA = "0x4886920", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x48869A0", Offset = "0x48869A0", VA = "0x48869A0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4886B40", Offset = "0x4886B40", VA = "0x4886B40", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4886CD0", Offset = "0x4886CD0", VA = "0x4886CD0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4886CE0", Offset = "0x4886CE0", VA = "0x4886CE0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4886CF0", Offset = "0x4886CF0", VA = "0x4886CF0")]
	public BooleanConverter()
	{
	}
}
