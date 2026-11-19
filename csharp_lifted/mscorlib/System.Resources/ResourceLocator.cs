// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceLocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004C5")]
internal struct ResourceLocator
{
	[Token(Token = "0x40012ED")]
	[FieldOffset(Offset = "0x0")]
	internal object _value;

	[Token(Token = "0x40012EE")]
	[FieldOffset(Offset = "0x8")]
	internal int _dataPos;

	[Token(Token = "0x1700049B")]
	internal int DataPosition
	{
		[Token(Token = "0x60023E9")]
		[Address(RVA = "0x53D2A20", Offset = "0x53D1A20", VA = "0x53D2A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700049C")]
	internal object Value
	{
		[Token(Token = "0x60023EA")]
		[Address(RVA = "0x53D2A30", Offset = "0x53D1A30", VA = "0x53D2A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023EB")]
		[Address(RVA = "0x53D2A40", Offset = "0x53D1A40", VA = "0x53D2A40")]
		set
		{
		}
	}

	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x53D2A10", Offset = "0x53D1A10", VA = "0x53D2A10")]
	internal ResourceLocator(int dataPos, object value)
	{
	}

	[Token(Token = "0x60023EC")]
	[Address(RVA = "0x53D2A50", Offset = "0x53D1A50", VA = "0x53D2A50")]
	internal static bool CanCache(System.Resources.ResourceTypeCode value)
	{
		return default(bool);
	}
}
