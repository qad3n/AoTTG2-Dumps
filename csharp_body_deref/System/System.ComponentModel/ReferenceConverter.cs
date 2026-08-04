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
		[Address(RVA = "0x48A7090", Offset = "0x48A7090", VA = "0x48A7090")]
		public ReferenceComparer(ReferenceConverter converter)
		{
		}

		[Token(Token = "0x600124B")]
		[Address(RVA = "0x48A7150", Offset = "0x48A7150", VA = "0x48A7150", Slot = "4")]
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
	[Address(RVA = "0x48A5F00", Offset = "0x48A5F00", VA = "0x48A5F00")]
	public ReferenceConverter(Type type)
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x48A5F30", Offset = "0x48A5F30", VA = "0x48A5F30", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x48A5FC0", Offset = "0x48A5FC0", VA = "0x48A5FC0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x48A6310", Offset = "0x48A6310", VA = "0x48A6310", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x48A6780", Offset = "0x48A6780", VA = "0x48A6780", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x48A70C0", Offset = "0x48A70C0", VA = "0x48A70C0", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x48A70D0", Offset = "0x48A70D0", VA = "0x48A70D0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x48A70E0", Offset = "0x48A70E0", VA = "0x48A70E0", Slot = "16")]
	protected virtual bool IsValueAllowed(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
