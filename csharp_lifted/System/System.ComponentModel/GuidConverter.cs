// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.GuidConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000160")]
public class GuidConverter : TypeConverter
{
	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x62341D0", Offset = "0x62331D0", VA = "0x62341D0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x6234250", Offset = "0x6233250", VA = "0x6234250", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x62342F0", Offset = "0x62332F0", VA = "0x62342F0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x62343B0", Offset = "0x62333B0", VA = "0x62343B0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x62346D0", Offset = "0x62336D0", VA = "0x62346D0")]
	public GuidConverter()
	{
	}
}
