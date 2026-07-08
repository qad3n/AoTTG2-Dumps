using System.Collections;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C5")]
public class NullableConverter : TypeConverter
{
	[Token(Token = "0x170003FE")]
	public Type NullableType
	{
		[Token(Token = "0x60011D1")]
		[Address(RVA = "0x457C0F0", Offset = "0x457C0F0", VA = "0x457C0F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public Type UnderlyingType
	{
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x457C100", Offset = "0x457C100", VA = "0x457C100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public TypeConverter UnderlyingTypeConverter
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x457C110", Offset = "0x457C110", VA = "0x457C110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x457B620", Offset = "0x457B620", VA = "0x457B620")]
	public NullableConverter(Type type)
	{
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x457B750", Offset = "0x457B750", VA = "0x457B750", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x457B7F0", Offset = "0x457B7F0", VA = "0x457B7F0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x457B8E0", Offset = "0x457B8E0", VA = "0x457B8E0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x457B980", Offset = "0x457B980", VA = "0x457B980", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x457BB40", Offset = "0x457BB40", VA = "0x457BB40", Slot = "8")]
	public override object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x457BB70", Offset = "0x457BB70", VA = "0x457BB70", Slot = "9")]
	public override bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x457BBA0", Offset = "0x457BBA0", VA = "0x457BBA0", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x457BBD0", Offset = "0x457BBD0", VA = "0x457BBD0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x457BC00", Offset = "0x457BC00", VA = "0x457BC00", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x457C050", Offset = "0x457C050", VA = "0x457C050", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x457C080", Offset = "0x457C080", VA = "0x457C080", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x457C0B0", Offset = "0x457C0B0", VA = "0x457C0B0", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
