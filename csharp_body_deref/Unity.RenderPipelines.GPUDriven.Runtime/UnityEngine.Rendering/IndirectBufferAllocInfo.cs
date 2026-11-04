// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferAllocInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A8")]
internal struct IndirectBufferAllocInfo
{
	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x0")]
	public int drawAllocIndex;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x4")]
	public int drawCount;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x8")]
	public int instanceAllocIndex;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0xC")]
	public int instanceCount;

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2BEE6F0", Offset = "0x2BECCF0", VA = "0x182BEE6F0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x2BEE700", Offset = "0x2BECD00", VA = "0x182BEE700")]
	public bool IsWithinLimits(in IndirectBufferLimits limits)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x2BEE6E0", Offset = "0x2BECCE0", VA = "0x182BEE6E0")]
	public int GetExtraDrawInfoSlotIndex()
	{
		return default(int);
	}
}
