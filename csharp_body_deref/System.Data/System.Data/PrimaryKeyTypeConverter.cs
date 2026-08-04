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

[Token(Token = "0x200006E")]
internal sealed class PrimaryKeyTypeConverter : ReferenceConverter
{
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x45BCEB0", Offset = "0x45BCEB0", VA = "0x45BCEB0")]
	public PrimaryKeyTypeConverter()
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x45BCF40", Offset = "0x45BCF40", VA = "0x45BCF40", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x45BCF50", Offset = "0x45BCF50", VA = "0x45BCF50", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x45BCFD0", Offset = "0x45BCFD0", VA = "0x45BCFD0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
