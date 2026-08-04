// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeListConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002DE")]
public abstract class TypeListConverter : TypeConverter
{
	[Token(Token = "0x4000E22")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type[] _types;

	[Token(Token = "0x4000E23")]
	[FieldOffset(Offset = "0x18")]
	private StandardValuesCollection _values;

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x48ABCD0", Offset = "0x48ABCD0", VA = "0x48ABCD0")]
	protected TypeListConverter(Type[] types)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x48ABD00", Offset = "0x48ABD00", VA = "0x48ABD00", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x48ABD80", Offset = "0x48ABD80", VA = "0x48ABD80", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x48ABE20", Offset = "0x48ABE20", VA = "0x48ABE20", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x48ABF00", Offset = "0x48ABF00", VA = "0x48ABF00", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x48AC090", Offset = "0x48AC090", VA = "0x48AC090", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x48AC150", Offset = "0x48AC150", VA = "0x48AC150", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x48AC160", Offset = "0x48AC160", VA = "0x48AC160", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
