// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EnumConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002FD")]
public class EnumConverter : TypeConverter
{
	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection values;

	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x18")]
	private Type type;

	[Token(Token = "0x1700045E")]
	protected Type EnumType
	{
		[Token(Token = "0x600134C")]
		[Address(RVA = "0x48B1FB0", Offset = "0x48B1FB0", VA = "0x48B1FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045F")]
	protected StandardValuesCollection Values
	{
		[Token(Token = "0x600134D")]
		[Address(RVA = "0x48B1FC0", Offset = "0x48B1FC0", VA = "0x48B1FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600134E")]
		[Address(RVA = "0x48B1FD0", Offset = "0x48B1FD0", VA = "0x48B1FD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000460")]
	protected virtual IComparer Comparer
	{
		[Token(Token = "0x6001351")]
		[Address(RVA = "0x48B2190", Offset = "0x48B2190", VA = "0x48B2190", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x48B1F80", Offset = "0x48B1F80", VA = "0x48B1F80")]
	public EnumConverter(Type type)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x48B1FE0", Offset = "0x48B1FE0", VA = "0x48B1FE0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x48B20B0", Offset = "0x48B20B0", VA = "0x48B20B0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x48B2200", Offset = "0x48B2200", VA = "0x48B2200", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x48B27B0", Offset = "0x48B27B0", VA = "0x48B27B0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x48B3710", Offset = "0x48B3710", VA = "0x48B3710", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x48B3B80", Offset = "0x48B3B80", VA = "0x48B3B80", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x48B3C10", Offset = "0x48B3C10", VA = "0x48B3C10", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x48B3C20", Offset = "0x48B3C20", VA = "0x48B3C20", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
