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

[Token(Token = "0x20001C9")]
public class EnumConverter : TypeConverter
{
	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x10")]
	private StandardValuesCollection values;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x18")]
	private Type type;

	[Token(Token = "0x1700029E")]
	protected Type EnumType
	{
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x6251200", Offset = "0x6250200", VA = "0x6251200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029F")]
	protected StandardValuesCollection Values
	{
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x6251210", Offset = "0x6250210", VA = "0x6251210")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x6251220", Offset = "0x6250220", VA = "0x6251220")]
		set
		{
		}
	}

	[Token(Token = "0x170002A0")]
	protected virtual IComparer Comparer
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x62513E0", Offset = "0x62503E0", VA = "0x62513E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x62511D0", Offset = "0x62501D0", VA = "0x62511D0")]
	public EnumConverter(Type type)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x6251230", Offset = "0x6250230", VA = "0x6251230", Slot = "4")]
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x6251300", Offset = "0x6250300", VA = "0x6251300", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x6251450", Offset = "0x6250450", VA = "0x6251450", Slot = "6")]
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value)
	{
		return null;
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x6251950", Offset = "0x6250950", VA = "0x6251950", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x6252860", Offset = "0x6251860", VA = "0x6252860", Slot = "12")]
	public override StandardValuesCollection GetStandardValues(ITypeDescriptorContext context)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x6252C60", Offset = "0x6251C60", VA = "0x6252C60", Slot = "13")]
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x6252CF0", Offset = "0x6251CF0", VA = "0x6252CF0", Slot = "14")]
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x6252D00", Offset = "0x6251D00", VA = "0x6252D00", Slot = "15")]
	public override bool IsValid(ITypeDescriptorContext context, object value)
	{
		return default(bool);
	}
}
