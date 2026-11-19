// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.SByteConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200019E")]
public class SByteConverter : BaseNumberConverter
{
	[Token(Token = "0x17000265")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x6249540", Offset = "0x6248540", VA = "0x6249540", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x6249570", Offset = "0x6248570", VA = "0x6249570", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x62495E0", Offset = "0x62485E0", VA = "0x62495E0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x6249610", Offset = "0x6248610", VA = "0x6249610", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x6249690", Offset = "0x6248690", VA = "0x6249690")]
	public SByteConverter()
	{
	}
}
