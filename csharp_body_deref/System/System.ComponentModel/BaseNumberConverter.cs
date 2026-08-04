// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BaseNumberConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4885EA0", Offset = "0x4885EA0", VA = "0x4885EA0", Slot = "16")]
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
	[Address(RVA = "0x4885E90", Offset = "0x4885E90", VA = "0x4885E90")]
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
	[Address(RVA = "0x4885EB0", Offset = "0x4885EB0", VA = "0x4885EB0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4885F30", Offset = "0x4885F30", VA = "0x4885F30", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x48863A0", Offset = "0x48863A0", VA = "0x48863A0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4886630", Offset = "0x4886630", VA = "0x4886630", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}
}
