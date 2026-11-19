// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReferenceConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000198")]
public class ReferenceConverter : TypeConverter
{
	[Token(Token = "0x2000199")]
	private class ReferenceComparer : IComparer
	{
		[Token(Token = "0x400066D")]
		[FieldOffset(Offset = "0x10")]
		private ReferenceConverter _converter;

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x6246760", Offset = "0x6245760", VA = "0x6246760")]
		public ReferenceComparer(ReferenceConverter converter)
		{
		}

		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x6246820", Offset = "0x6245820", VA = "0x6246820", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_none;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x10")]
	private Type _type;

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x6245680", Offset = "0x6244680", VA = "0x6245680")]
	public ReferenceConverter(Type type)
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x62456B0", Offset = "0x62446B0", VA = "0x62456B0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x6245740", Offset = "0x6244740", VA = "0x6245740", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x6245A90", Offset = "0x6244A90", VA = "0x6245A90", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x6245F00", Offset = "0x6244F00", VA = "0x6245F00", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x6246790", Offset = "0x6245790", VA = "0x6246790", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x62467A0", Offset = "0x62457A0", VA = "0x62467A0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x62467B0", Offset = "0x62457B0", VA = "0x62467B0", Slot = "16")]
	protected virtual bool IsValueAllowed(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
