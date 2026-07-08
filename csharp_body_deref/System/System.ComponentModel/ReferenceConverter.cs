using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CC")]
public class ReferenceConverter : TypeConverter
{
	[Token(Token = "0x20002CD")]
	private class ReferenceComparer : IComparer
	{
		[Token(Token = "0x4000E05")]
		[FieldOffset(Offset = "0x10")]
		private ReferenceConverter _converter;

		[Token(Token = "0x600124A")]
		[Address(RVA = "0x4581F90", Offset = "0x4581F90", VA = "0x4581F90")]
		public ReferenceComparer(ReferenceConverter converter)
		{
		}

		[Token(Token = "0x600124B")]
		[Address(RVA = "0x4582050", Offset = "0x4582050", VA = "0x4582050", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_none;

	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x10")]
	private Type _type;

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x4580E00", Offset = "0x4580E00", VA = "0x4580E00")]
	public ReferenceConverter(Type type)
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x4580E30", Offset = "0x4580E30", VA = "0x4580E30", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x4580EC0", Offset = "0x4580EC0", VA = "0x4580EC0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x4581210", Offset = "0x4581210", VA = "0x4581210", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x4581680", Offset = "0x4581680", VA = "0x4581680", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x4581FC0", Offset = "0x4581FC0", VA = "0x4581FC0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x4581FD0", Offset = "0x4581FD0", VA = "0x4581FD0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x4581FE0", Offset = "0x4581FE0", VA = "0x4581FE0", Slot = "16")]
	protected virtual bool IsValueAllowed(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
