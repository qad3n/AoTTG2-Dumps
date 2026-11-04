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

[Token(Token = "0x2000183")]
public class CultureInfoConverter : TypeConverter
{
	[Token(Token = "0x2000184")]
	private class CultureComparer : IComparer
	{
		[Token(Token = "0x4000666")]
		[FieldOffset(Offset = "0x10")]
		private CultureInfoConverter _converter;

		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public CultureComparer(CultureInfoConverter cultureConverter)
		{
		}

		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x2894B60", Offset = "0x2893160", VA = "0x182894B60", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000185")]
	private static class CultureInfoMapper
	{
		[Token(Token = "0x4000667")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Dictionary<string, string> s_cultureInfoNameMap;

		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x2895C40", Offset = "0x2894240", VA = "0x182895C40")]
		private static Dictionary<string, string> CreateMap()
		{
			return null;
		}

		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x2899580", Offset = "0x2897B80", VA = "0x182899580")]
		public static string GetCultureInfoName(string cultureInfoDisplayName)
		{
			return null;
		}
	}

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection _values;

	[Token(Token = "0x4000665")]
	private const string DefaultInvariantCultureString = "(Default)";

	[Token(Token = "0x170001E6")]
	private string DefaultCultureString
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x2895C10", Offset = "0x2894210", VA = "0x182895C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x8DE960", Offset = "0x8DCF60", VA = "0x1808DE960", Slot = "16")]
	protected virtual string GetCultureName(CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x2894D10", Offset = "0x2893310", VA = "0x182894D10", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2894D80", Offset = "0x2893380", VA = "0x182894D80", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x2894E10", Offset = "0x2893410", VA = "0x182894E10", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x2895550", Offset = "0x2893B50", VA = "0x182895550", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x2895A10", Offset = "0x2894010", VA = "0x182895A10", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public CultureInfoConverter()
	{
	}
}
