// ==================== AoTTG2 cross-reference ====================
// Type: System.UriTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000098")]
public class UriTypeConverter : TypeConverter
{
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x49000B0", Offset = "0x49000B0", VA = "0x49000B0")]
	public UriTypeConverter()
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x49000C0", Offset = "0x49000C0", VA = "0x49000C0")]
	private bool CanConvert(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4900170", Offset = "0x4900170", VA = "0x4900170", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x49001F0", Offset = "0x49001F0", VA = "0x49001F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4900230", Offset = "0x4900230", VA = "0x4900230", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x49003B0", Offset = "0x49003B0", VA = "0x49003B0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
