// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Int64Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000176")]
public class Int64Converter : BaseNumberConverter
{
	[Token(Token = "0x17000202")]
	internal override Type TargetType
	{
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x6234DB0", Offset = "0x6233DB0", VA = "0x6234DB0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x6234DE0", Offset = "0x6233DE0", VA = "0x6234DE0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x6234E50", Offset = "0x6233E50", VA = "0x6234E50", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x6234E80", Offset = "0x6233E80", VA = "0x6234E80", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x6234F00", Offset = "0x6233F00", VA = "0x6234F00")]
	public Int64Converter()
	{
	}
}
