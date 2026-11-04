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

[Token(Token = "0x2000208")]
public class EnumConverter : TypeConverter
{
	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection values;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x18")]
	private Type type;

	[Token(Token = "0x170002CD")]
	protected Type EnumType
	{
		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	protected StandardValuesCollection Values
	{
		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D96")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	protected virtual IComparer Comparer
	{
		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x28B3D90", Offset = "0x28B2390", VA = "0x1828B3D90", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x2547AB0", Offset = "0x25460B0", VA = "0x182547AB0")]
	public EnumConverter(Type type)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x28B2610", Offset = "0x28B0C10", VA = "0x1828B2610", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x28B26E0", Offset = "0x28B0CE0", VA = "0x1828B26E0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x28B27B0", Offset = "0x28B0DB0", VA = "0x1828B27B0", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x28B2BF0", Offset = "0x28B11F0", VA = "0x1828B2BF0", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x28B39B0", Offset = "0x28B1FB0", VA = "0x1828B39B0", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x28B3920", Offset = "0x28B1F20", VA = "0x1828B3920", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x28B3D50", Offset = "0x28B2350", VA = "0x1828B3D50", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
