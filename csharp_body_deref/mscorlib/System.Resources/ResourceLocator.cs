// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceLocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004BC")]
internal struct ResourceLocator
{
	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x0")]
	internal object _value;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x8")]
	internal int _dataPos;

	[Token(Token = "0x17000499")]
	internal int DataPosition
	{
		[Token(Token = "0x6002399")]
		[Address(RVA = "0x3BCB430", Offset = "0x3BCB430", VA = "0x3BCB430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700049A")]
	internal object Value
	{
		[Token(Token = "0x600239A")]
		[Address(RVA = "0x3BCB440", Offset = "0x3BCB440", VA = "0x3BCB440")]
		get
		{
			return null;
		}
		[Token(Token = "0x600239B")]
		[Address(RVA = "0x3BCB450", Offset = "0x3BCB450", VA = "0x3BCB450")]
		set
		{
		}
	}

	[Token(Token = "0x6002398")]
	[Address(RVA = "0x3BCB420", Offset = "0x3BCB420", VA = "0x3BCB420")]
	internal ResourceLocator(int dataPos, object value)
	{
	}

	[Token(Token = "0x600239C")]
	[Address(RVA = "0x3BCB460", Offset = "0x3BCB460", VA = "0x3BCB460")]
	internal static bool CanCache(System.Resources.ResourceTypeCode value)
	{
		return default(bool);
	}
}
