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

[Token(Token = "0x20001A0")]
public class SingleConverter : BaseNumberConverter
{
	[Token(Token = "0x17000267")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x6249810", Offset = "0x6248810", VA = "0x6249810", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000268")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x6249820", Offset = "0x6248820", VA = "0x6249820", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x6249850", Offset = "0x6248850", VA = "0x6249850", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x62498F0", Offset = "0x62488F0", VA = "0x62498F0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x6249920", Offset = "0x6248920", VA = "0x6249920", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x62499B0", Offset = "0x62489B0", VA = "0x62499B0")]
	public SingleConverter()
	{
	}
}
