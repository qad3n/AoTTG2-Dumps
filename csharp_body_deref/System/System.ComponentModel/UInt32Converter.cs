// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.UInt32Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001EB")]
public class UInt32Converter : BaseNumberConverter
{
	[Token(Token = "0x1700029E")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x28CB060", Offset = "0x28C9660", VA = "0x1828CB060", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x28CAF30", Offset = "0x28C9530", VA = "0x1828CAF30", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x28CAFA0", Offset = "0x28C95A0", VA = "0x1828CAFA0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x28CAFD0", Offset = "0x28C95D0", VA = "0x1828CAFD0", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public UInt32Converter()
	{
	}
}
