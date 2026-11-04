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

[Token(Token = "0x2000174")]
public abstract class BaseNumberConverter : TypeConverter
{
	[Token(Token = "0x170001C6")]
	internal virtual bool AllowHex
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C7")]
	internal abstract Type TargetType
	{
		[Token(Token = "0x6000950")]
		get;
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	internal BaseNumberConverter()
	{
	}

	[Token(Token = "0x6000951")]
	internal abstract object FromString(string value, int radix);

	[Token(Token = "0x6000952")]
	internal abstract object FromString(string value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000953")]
	internal abstract string ToString(object value, NumberFormatInfo formatInfo);

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2892810", Offset = "0x2890E10", VA = "0x182892810", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x28928C0", Offset = "0x2890EC0", VA = "0x1828928C0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x2892C10", Offset = "0x2891210", VA = "0x182892C10", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x2892880", Offset = "0x2890E80", VA = "0x182892880", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}
}
