// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RangeInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20001AB")]
public struct RangeInt
{
	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x0")]
	public int start;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x4")]
	public int length;

	[Token(Token = "0x17000245")]
	public int end
	{
		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x2BF0780", Offset = "0x2BEED80", VA = "0x182BF0780")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public RangeInt(int start, int length)
	{
	}
}
