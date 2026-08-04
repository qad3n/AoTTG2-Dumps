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

[Token(Token = "0x20002AA")]
public class Int64Converter : BaseNumberConverter
{
	[Token(Token = "0x170003C2")]
	internal override Type TargetType
	{
		[Token(Token = "0x60010C5")]
		[Address(RVA = "0x4894D50", Offset = "0x4894D50", VA = "0x4894D50", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4894D90", Offset = "0x4894D90", VA = "0x4894D90", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4894E00", Offset = "0x4894E00", VA = "0x4894E00", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4894E30", Offset = "0x4894E30", VA = "0x4894E30", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4894EC0", Offset = "0x4894EC0", VA = "0x4894EC0")]
	public Int64Converter()
	{
	}
}
