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

[Token(Token = "0x200014D")]
public class DecimalConverter : BaseNumberConverter
{
	[Token(Token = "0x170001BF")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x622F3E0", Offset = "0x622E3E0", VA = "0x622F3E0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C0")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x622F3F0", Offset = "0x622E3F0", VA = "0x622F3F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x622F450", Offset = "0x622E450", VA = "0x622F450", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x622F500", Offset = "0x622E500", VA = "0x622F500", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x622F830", Offset = "0x622E830", VA = "0x622F830", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x622F8E0", Offset = "0x622E8E0", VA = "0x622F8E0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x622F960", Offset = "0x622E960", VA = "0x622F960", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x622FA10", Offset = "0x622EA10", VA = "0x622FA10")]
	public DecimalConverter()
	{
	}
}
