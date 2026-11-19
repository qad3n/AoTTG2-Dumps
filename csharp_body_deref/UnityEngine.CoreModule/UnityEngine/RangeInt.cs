// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RangeInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20001AC")]
public struct RangeInt
{
	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x0")]
	public int start;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x4")]
	public int length;

	[Token(Token = "0x1700024A")]
	public int end
	{
		[Token(Token = "0x6000E2F")]
		[Address(RVA = "0x691D3A0", Offset = "0x691C3A0", VA = "0x691D3A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x691D3B0", Offset = "0x691C3B0", VA = "0x691D3B0")]
	public RangeInt(int start, int length)
	{
	}
}
