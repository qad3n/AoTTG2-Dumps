// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.NullableConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000191")]
public class NullableConverter : TypeConverter
{
	[Token(Token = "0x1700023E")]
	public Type NullableType
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x6240D00", Offset = "0x623FD00", VA = "0x6240D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023F")]
	public Type UnderlyingType
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x6240D10", Offset = "0x623FD10", VA = "0x6240D10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000240")]
	public TypeConverter UnderlyingTypeConverter
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x6240D20", Offset = "0x623FD20", VA = "0x6240D20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x6240290", Offset = "0x623F290", VA = "0x6240290")]
	public NullableConverter(Type type)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x62403C0", Offset = "0x623F3C0", VA = "0x62403C0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x6240460", Offset = "0x623F460", VA = "0x6240460", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x6240550", Offset = "0x623F550", VA = "0x6240550", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x62405F0", Offset = "0x623F5F0", VA = "0x62405F0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x62407B0", Offset = "0x623F7B0", VA = "0x62407B0", Slot = "8")]
	public override object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues)
	{
		return null;
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x62407E0", Offset = "0x623F7E0", VA = "0x62407E0", Slot = "9")]
	public override bool GetCreateInstanceSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x6240810", Offset = "0x623F810", VA = "0x6240810", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x6240840", Offset = "0x623F840", VA = "0x6240840", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x6240870", Offset = "0x623F870", VA = "0x6240870", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x6240C60", Offset = "0x623FC60", VA = "0x6240C60", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x6240C90", Offset = "0x623FC90", VA = "0x6240C90", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x6240CC0", Offset = "0x623FCC0", VA = "0x6240CC0", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
