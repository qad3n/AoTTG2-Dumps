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

[Token(Token = "0x2000281")]
public class DecimalConverter : BaseNumberConverter
{
	[Token(Token = "0x1700037F")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x488F2D0", Offset = "0x488F2D0", VA = "0x488F2D0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000380")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x488F2E0", Offset = "0x488F2E0", VA = "0x488F2E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x488F340", Offset = "0x488F340", VA = "0x488F340", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x488F3F0", Offset = "0x488F3F0", VA = "0x488F3F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x488F720", Offset = "0x488F720", VA = "0x488F720", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x488F7D0", Offset = "0x488F7D0", VA = "0x488F7D0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x488F850", Offset = "0x488F850", VA = "0x488F850", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x488F900", Offset = "0x488F900", VA = "0x488F900")]
	public DecimalConverter()
	{
	}
}
