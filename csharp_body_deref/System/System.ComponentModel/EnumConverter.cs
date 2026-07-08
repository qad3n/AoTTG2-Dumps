using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002FD")]
public class EnumConverter : TypeConverter
{
	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection values;

	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x18")]
	private Type type;

	[Token(Token = "0x1700045E")]
	protected Type EnumType
	{
		[Token(Token = "0x600134C")]
		[Address(RVA = "0x458CEB0", Offset = "0x458CEB0", VA = "0x458CEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045F")]
	protected StandardValuesCollection Values
	{
		[Token(Token = "0x600134D")]
		[Address(RVA = "0x458CEC0", Offset = "0x458CEC0", VA = "0x458CEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600134E")]
		[Address(RVA = "0x458CED0", Offset = "0x458CED0", VA = "0x458CED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000460")]
	protected virtual IComparer Comparer
	{
		[Token(Token = "0x6001351")]
		[Address(RVA = "0x458D090", Offset = "0x458D090", VA = "0x458D090", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x458CE80", Offset = "0x458CE80", VA = "0x458CE80")]
	public EnumConverter(Type type)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x458CEE0", Offset = "0x458CEE0", VA = "0x458CEE0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x458CFB0", Offset = "0x458CFB0", VA = "0x458CFB0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x458D100", Offset = "0x458D100", VA = "0x458D100", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x458D6B0", Offset = "0x458D6B0", VA = "0x458D6B0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x458E610", Offset = "0x458E610", VA = "0x458E610", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x458EA80", Offset = "0x458EA80", VA = "0x458EA80", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x458EB10", Offset = "0x458EB10", VA = "0x458EB10", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x458EB20", Offset = "0x458EB20", VA = "0x458EB20", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
