using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000042")]
internal sealed class DataTableTypeConverter : ReferenceConverter
{
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4254CC0", Offset = "0x4254CC0", VA = "0x4254CC0")]
	public DataTableTypeConverter()
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4254D50", Offset = "0x4254D50", VA = "0x4254D50", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
