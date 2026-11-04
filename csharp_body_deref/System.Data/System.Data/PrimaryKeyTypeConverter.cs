// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.PrimaryKeyTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000078")]
internal sealed class PrimaryKeyTypeConverter : ReferenceConverter
{
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x2523300", Offset = "0x2521900", VA = "0x182523300")]
	public PrimaryKeyTypeConverter()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x24E4B10", Offset = "0x24E3110", VA = "0x1824E4B10", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x2523190", Offset = "0x2521790", VA = "0x182523190", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
