// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Int32Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A9")]
public class Int32Converter : BaseNumberConverter
{
	[Token(Token = "0x170003C1")]
	internal override Type TargetType
	{
		[Token(Token = "0x60010C0")]
		[Address(RVA = "0x4894BD0", Offset = "0x4894BD0", VA = "0x4894BD0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x4894C10", Offset = "0x4894C10", VA = "0x4894C10", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x4894C80", Offset = "0x4894C80", VA = "0x4894C80", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x4894CB0", Offset = "0x4894CB0", VA = "0x4894CB0", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x4894D40", Offset = "0x4894D40", VA = "0x4894D40")]
	public Int32Converter()
	{
	}
}
