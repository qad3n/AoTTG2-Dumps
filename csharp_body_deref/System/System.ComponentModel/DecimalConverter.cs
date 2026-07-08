using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000281")]
public class DecimalConverter : BaseNumberConverter
{
	[Token(Token = "0x1700037F")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x456A1D0", Offset = "0x456A1D0", VA = "0x456A1D0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000380")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x456A1E0", Offset = "0x456A1E0", VA = "0x456A1E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x456A240", Offset = "0x456A240", VA = "0x456A240", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x456A2F0", Offset = "0x456A2F0", VA = "0x456A2F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x456A620", Offset = "0x456A620", VA = "0x456A620", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x456A6D0", Offset = "0x456A6D0", VA = "0x456A6D0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x456A750", Offset = "0x456A750", VA = "0x456A750", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x456A800", Offset = "0x456A800", VA = "0x456A800")]
	public DecimalConverter()
	{
	}
}
