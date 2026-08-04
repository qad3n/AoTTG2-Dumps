// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TimeSpanConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002D7")]
public class TimeSpanConverter : TypeConverter
{
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x48AA770", Offset = "0x48AA770", VA = "0x48AA770", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x48AA7F0", Offset = "0x48AA7F0", VA = "0x48AA7F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x48AA890", Offset = "0x48AA890", VA = "0x48AA890", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x48AAA70", Offset = "0x48AAA70", VA = "0x48AAA70", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x48AAD80", Offset = "0x48AAD80", VA = "0x48AAD80")]
	public TimeSpanConverter()
	{
	}
}
