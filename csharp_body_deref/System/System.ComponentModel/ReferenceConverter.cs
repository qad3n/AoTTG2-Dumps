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

[Token(Token = "0x20001D7")]
public class ReferenceConverter : TypeConverter
{
	[Token(Token = "0x20001D8")]
	private class ReferenceComparer : IComparer
	{
		[Token(Token = "0x400073C")]
		[FieldOffset(Offset = "0x10")]
		private ReferenceConverter _converter;

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public ReferenceComparer(ReferenceConverter converter)
		{
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x28B8B20", Offset = "0x28B7120", VA = "0x1828B8B20", Slot = "4")]
		public int Compare(object item1, object item2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_none;

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x10")]
	private Type _type;

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public ReferenceConverter(Type type)
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x28B8BD0", Offset = "0x28B71D0", VA = "0x1828B8BD0", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x28B8C50", Offset = "0x28B7250", VA = "0x1828B8C50", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x28B8EE0", Offset = "0x28B74E0", VA = "0x1828B8EE0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x28B9240", Offset = "0x28B7840", VA = "0x1828B9240", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
	protected virtual bool IsValueAllowed(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
