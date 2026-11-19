// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DoubleConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000158")]
public class DoubleConverter : BaseNumberConverter
{
	[Token(Token = "0x170001CC")]
	internal override bool AllowHex
	{
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x6231C30", Offset = "0x6230C30", VA = "0x6231C30", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	internal override Type TargetType
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x6231C40", Offset = "0x6230C40", VA = "0x6231C40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x6231C80", Offset = "0x6230C80", VA = "0x6231C80", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x6231D20", Offset = "0x6230D20", VA = "0x6231D20", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x6231D50", Offset = "0x6230D50", VA = "0x6231D50", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x6231DE0", Offset = "0x6230DE0", VA = "0x6231DE0")]
	public DoubleConverter()
	{
	}
}
