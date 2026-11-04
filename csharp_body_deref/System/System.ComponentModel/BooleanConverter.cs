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

[Token(Token = "0x2000179")]
public class BooleanConverter : TypeConverter
{
	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x0")]
	private static StandardValuesCollection s_values;

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x2892810", Offset = "0x2890E10", VA = "0x182892810", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x28931F0", Offset = "0x28917F0", VA = "0x1828931F0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x2893330", Offset = "0x2891930", VA = "0x182893330", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public BooleanConverter()
	{
	}
}
