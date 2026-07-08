using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000269")]
public abstract class BaseNumberConverter : TypeConverter
{
	[Token(Token = "0x17000357")]
	internal virtual bool AllowHex
	{
		[Token(Token = "0x6000F07")]
		[Address(RVA = "0x4560DA0", Offset = "0x4560DA0", VA = "0x4560DA0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000358")]
	internal abstract Type TargetType
	{
		[Token(Token = "0x6000F08")]
		get;
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x4560D90", Offset = "0x4560D90", VA = "0x4560D90")]
	internal BaseNumberConverter()
	{
	}

	[Token(Token = "0x6000F09")]
	internal abstract object FromString(string value, int radix);

	[Token(Token = "0x6000F0A")]
	internal abstract object FromString(string value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000F0B")]
	internal abstract string ToString(object value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4560DB0", Offset = "0x4560DB0", VA = "0x4560DB0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4560E30", Offset = "0x4560E30", VA = "0x4560E30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x45612A0", Offset = "0x45612A0", VA = "0x45612A0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4561530", Offset = "0x4561530", VA = "0x4561530", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}
}
