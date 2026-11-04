// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DecimalConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200018C")]
public class DecimalConverter : BaseNumberConverter
{
	[Token(Token = "0x170001EE")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x289B240", Offset = "0x2899840", VA = "0x18289B240", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x289AC40", Offset = "0x2899240", VA = "0x18289AC40", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x289ACF0", Offset = "0x28992F0", VA = "0x18289ACF0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x289B0E0", Offset = "0x28996E0", VA = "0x18289B0E0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x289B050", Offset = "0x2899650", VA = "0x18289B050", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x289B190", Offset = "0x2899790", VA = "0x18289B190", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DecimalConverter()
	{
	}
}
