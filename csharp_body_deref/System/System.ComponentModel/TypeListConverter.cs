// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeListConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001AA")]
public abstract class TypeListConverter : TypeConverter
{
	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type[] _types;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x18")]
	private StandardValuesCollection _values;

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x624B130", Offset = "0x624A130", VA = "0x624B130")]
	protected TypeListConverter(Type[] types)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x624B160", Offset = "0x624A160", VA = "0x624B160", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x624B1E0", Offset = "0x624A1E0", VA = "0x624B1E0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x624B280", Offset = "0x624A280", VA = "0x624B280", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x624B360", Offset = "0x624A360", VA = "0x624B360", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x624B4F0", Offset = "0x624A4F0", VA = "0x624B4F0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x624B5B0", Offset = "0x624A5B0", VA = "0x624B5B0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x624B5C0", Offset = "0x624A5C0", VA = "0x624B5C0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
