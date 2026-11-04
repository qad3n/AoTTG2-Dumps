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

[Token(Token = "0x20001E9")]
public abstract class TypeListConverter : TypeConverter
{
	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type[] _types;

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x18")]
	private StandardValuesCollection _values;

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	protected TypeListConverter(Type[] types)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x2894D10", Offset = "0x2893310", VA = "0x182894D10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x28CA9F0", Offset = "0x28C8FF0", VA = "0x1828CA9F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x28CAA80", Offset = "0x28C9080", VA = "0x1828CAA80", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x28CAB70", Offset = "0x28C9170", VA = "0x1828CAB70", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x28CACF0", Offset = "0x28C92F0", VA = "0x1828CACF0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
