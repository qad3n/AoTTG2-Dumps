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

[Token(Token = "0x20001DD")]
public class SByteConverter : BaseNumberConverter
{
	[Token(Token = "0x17000294")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000CAE")]
		[Address(RVA = "0x28C90E0", Offset = "0x28C76E0", VA = "0x1828C90E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x28C8FB0", Offset = "0x28C75B0", VA = "0x1828C8FB0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x28C9020", Offset = "0x28C7620", VA = "0x1828C9020", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x28C9050", Offset = "0x28C7650", VA = "0x1828C9050", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public SByteConverter()
	{
	}
}
