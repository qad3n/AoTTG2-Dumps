// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RangeInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000176")]
public struct RangeInt
{
	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x0")]
	public int start;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x4")]
	public int length;

	[Token(Token = "0x170001D7")]
	public int end
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x4DFE640", Offset = "0x4DFE640", VA = "0x4DFE640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x4DFE650", Offset = "0x4DFE650", VA = "0x4DFE650")]
	public RangeInt(int start, int length)
	{
	}
}
