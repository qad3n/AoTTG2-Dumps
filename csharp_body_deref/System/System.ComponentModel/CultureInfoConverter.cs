// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CultureInfoConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000144")]
public class CultureInfoConverter : TypeConverter
{
	[Token(Token = "0x2000145")]
	private class CultureComparer : IComparer
	{
		[Token(Token = "0x4000597")]
		[FieldOffset(Offset = "0x10")]
		private CultureInfoConverter _converter;

		[Token(Token = "0x6000811")]
		[Address(RVA = "0x6229F50", Offset = "0x6228F50", VA = "0x6229F50")]
		public CultureComparer(CultureInfoConverter cultureConverter)
		{
		}

		[Token(Token = "0x6000812")]
		[Address(RVA = "0x6229FB0", Offset = "0x6228FB0", VA = "0x6229FB0", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000146")]
	private static class CultureInfoMapper
	{
		[Token(Token = "0x4000598")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Dictionary<string, string> s_cultureInfoNameMap;

		[Token(Token = "0x6000813")]
		[Address(RVA = "0x622A130", Offset = "0x6229130", VA = "0x622A130")]
		private static Dictionary<string, string> CreateMap()
		{
			return null;
		}

		[Token(Token = "0x6000814")]
		[Address(RVA = "0x6229810", Offset = "0x6228810", VA = "0x6229810")]
		public static string GetCultureInfoName(string cultureInfoDisplayName)
		{
			return null;
		}
	}

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x4000596")]
	private const string DefaultInvariantCultureString = "(Default)";

	[Token(Token = "0x170001B7")]
	private string DefaultCultureString
	{
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x6228C90", Offset = "0x6227C90", VA = "0x6228C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x6228CC0", Offset = "0x6227CC0", VA = "0x6228CC0", Slot = "16")]
	protected virtual string GetCultureName(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x6228CF0", Offset = "0x6227CF0", VA = "0x6228CF0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x6228D70", Offset = "0x6227D70", VA = "0x6228D70", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x6228E10", Offset = "0x6227E10", VA = "0x6228E10", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x62298A0", Offset = "0x62288A0", VA = "0x62298A0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x6229D40", Offset = "0x6228D40", VA = "0x6229D40", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x6229F80", Offset = "0x6228F80", VA = "0x6229F80", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x6229F90", Offset = "0x6228F90", VA = "0x6229F90", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x6229FA0", Offset = "0x6228FA0", VA = "0x6229FA0")]
	public CultureInfoConverter()
	{
	}
}
