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

[Token(Token = "0x2000135")]
public abstract class BaseNumberConverter : TypeConverter
{
	[Token(Token = "0x17000197")]
	internal virtual bool AllowHex
	{
		[Token(Token = "0x600078F")]
		[Address(RVA = "0x6226340", Offset = "0x6225340", VA = "0x6226340", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	internal abstract Type TargetType
	{
		[Token(Token = "0x6000790")]
		get;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x6226330", Offset = "0x6225330", VA = "0x6226330")]
	internal BaseNumberConverter()
	{
	}

	[Token(Token = "0x6000791")]
	internal abstract object FromString(string value, int radix);

	[Token(Token = "0x6000792")]
	internal abstract object FromString(string value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000793")]
	internal abstract string ToString(object value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x6226350", Offset = "0x6225350", VA = "0x6226350", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x62263D0", Offset = "0x62253D0", VA = "0x62263D0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x6226770", Offset = "0x6225770", VA = "0x6226770", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x6226A00", Offset = "0x6225A00", VA = "0x6226A00", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}
}
