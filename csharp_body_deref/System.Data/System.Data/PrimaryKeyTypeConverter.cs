using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006E")]
internal sealed class PrimaryKeyTypeConverter : ReferenceConverter
{
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x427F750", Offset = "0x427F750", VA = "0x427F750")]
	public PrimaryKeyTypeConverter()
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x427F7E0", Offset = "0x427F7E0", VA = "0x427F7E0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x427F7F0", Offset = "0x427F7F0", VA = "0x427F7F0", Slot = "5")]
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x427F870", Offset = "0x427F870", VA = "0x427F870", Slot = "7")]
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType)
	{
		return null;
	}
}
