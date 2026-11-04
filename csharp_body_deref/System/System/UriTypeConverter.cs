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

[Token(Token = "0x20000D7")]
public class UriTypeConverter : TypeConverter
{
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UriTypeConverter()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x2860CE0", Offset = "0x285F2E0", VA = "0x182860CE0")]
	private bool CanConvert(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x2860BE0", Offset = "0x285F1E0", VA = "0x182860BE0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x2860C80", Offset = "0x285F280", VA = "0x182860C80", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x2860DA0", Offset = "0x285F3A0", VA = "0x182860DA0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x2860F90", Offset = "0x285F590", VA = "0x182860F90", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
