// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceLocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004EC")]
internal struct ResourceLocator
{
	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x0")]
	internal object _value;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x8")]
	internal int _dataPos;

	[Token(Token = "0x1700049C")]
	internal int DataPosition
	{
		[Token(Token = "0x600241B")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700049D")]
	internal object Value
	{
		[Token(Token = "0x600241C")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600241D")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x600241A")]
	[Address(RVA = "0x1A22210", Offset = "0x1A20810", VA = "0x181A22210")]
	internal ResourceLocator(int dataPos, object value)
	{
	}

	[Token(Token = "0x600241E")]
	[Address(RVA = "0x1A4D010", Offset = "0x1A4B610", VA = "0x181A4D010")]
	internal static bool CanCache(System.Resources.ResourceTypeCode value)
	{
		return default(bool);
	}
}
