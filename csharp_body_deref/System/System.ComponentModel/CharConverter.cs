// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CharConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000271")]
public class CharConverter : TypeConverter
{
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4886FE0", Offset = "0x4886FE0", VA = "0x4886FE0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4887060", Offset = "0x4887060", VA = "0x4887060", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4887140", Offset = "0x4887140", VA = "0x4887140", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4887250", Offset = "0x4887250", VA = "0x4887250")]
	public CharConverter()
	{
	}
}
