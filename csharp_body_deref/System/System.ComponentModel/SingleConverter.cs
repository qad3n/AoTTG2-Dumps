// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.SingleConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001DF")]
public class SingleConverter : BaseNumberConverter
{
	[Token(Token = "0x17000296")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000297")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x28C93E0", Offset = "0x28C79E0", VA = "0x1828C93E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x28C92B0", Offset = "0x28C78B0", VA = "0x1828C92B0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x28C9280", Offset = "0x28C7880", VA = "0x1828C9280", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x28C9350", Offset = "0x28C7950", VA = "0x1828C9350", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public SingleConverter()
	{
	}
}
