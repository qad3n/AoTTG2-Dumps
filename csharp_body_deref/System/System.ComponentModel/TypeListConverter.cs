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
	[Address(RVA = "0x4586BD0", Offset = "0x4586BD0", VA = "0x4586BD0")]
	protected TypeListConverter(Type[] types)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x4586C00", Offset = "0x4586C00", VA = "0x4586C00", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x4586C80", Offset = "0x4586C80", VA = "0x4586C80", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x4586D20", Offset = "0x4586D20", VA = "0x4586D20", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x4586E00", Offset = "0x4586E00", VA = "0x4586E00", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x4586F90", Offset = "0x4586F90", VA = "0x4586F90", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x4587050", Offset = "0x4587050", VA = "0x4587050", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x4587060", Offset = "0x4587060", VA = "0x4587060", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
