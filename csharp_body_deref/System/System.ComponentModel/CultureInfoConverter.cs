using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000278")]
public class CultureInfoConverter : TypeConverter
{
	[Token(Token = "0x2000279")]
	private class CultureComparer : IComparer
	{
		[Token(Token = "0x4000D2F")]
		[FieldOffset(Offset = "0x10")]
		private CultureInfoConverter _converter;

		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x4564D00", Offset = "0x4564D00", VA = "0x4564D00")]
		public CultureComparer(CultureInfoConverter cultureConverter)
		{
		}

		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x4564D60", Offset = "0x4564D60", VA = "0x4564D60", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200027A")]
	private static class CultureInfoMapper
	{
		[Token(Token = "0x4000D30")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Dictionary<string, string> s_cultureInfoNameMap;

		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x4564EE0", Offset = "0x4564EE0", VA = "0x4564EE0")]
		private static Dictionary<string, string> CreateMap()
		{
			return null;
		}

		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x45645D0", Offset = "0x45645D0", VA = "0x45645D0")]
		public static string GetCultureInfoName(string cultureInfoDisplayName)
		{
			return null;
		}
	}

	[Token(Token = "0x4000D2D")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x4000D2E")]
	private const string DefaultInvariantCultureString = "(Default)";

	[Token(Token = "0x17000377")]
	private string DefaultCultureString
	{
		[Token(Token = "0x6000F7F")]
		[Address(RVA = "0x4563950", Offset = "0x4563950", VA = "0x4563950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4563980", Offset = "0x4563980", VA = "0x4563980", Slot = "16")]
	protected virtual string GetCultureName(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x45639B0", Offset = "0x45639B0", VA = "0x45639B0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4563A30", Offset = "0x4563A30", VA = "0x4563A30", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4563AD0", Offset = "0x4563AD0", VA = "0x4563AD0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4564660", Offset = "0x4564660", VA = "0x4564660", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4564AF0", Offset = "0x4564AF0", VA = "0x4564AF0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4564D30", Offset = "0x4564D30", VA = "0x4564D30", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4564D40", Offset = "0x4564D40", VA = "0x4564D40", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4564D50", Offset = "0x4564D50", VA = "0x4564D50")]
	public CultureInfoConverter()
	{
	}
}
