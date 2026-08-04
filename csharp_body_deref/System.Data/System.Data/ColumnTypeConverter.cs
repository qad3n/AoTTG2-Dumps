// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ColumnTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000006")]
internal sealed class ColumnTypeConverter : TypeConverter
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_types;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4531B20", Offset = "0x4531B20", VA = "0x4531B20")]
	public ColumnTypeConverter()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4531B30", Offset = "0x4531B30", VA = "0x4531B30", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4531BD0", Offset = "0x4531BD0", VA = "0x4531BD0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4532140", Offset = "0x4532140", VA = "0x4532140", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x45321C0", Offset = "0x45321C0", VA = "0x45321C0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x45323E0", Offset = "0x45323E0", VA = "0x45323E0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4532510", Offset = "0x4532510", VA = "0x4532510", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4532520", Offset = "0x4532520", VA = "0x4532520", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
