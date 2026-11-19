// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferAllocInfo
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x65E54E0", Offset = "0x65E44E0", VA = "0x65E54E0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x65E54F0", Offset = "0x65E44F0", VA = "0x65E54F0")]
	public bool IsWithinLimits(in IndirectBufferLimits limits)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x65E5510", Offset = "0x65E4510", VA = "0x65E5510")]
	public int GetExtraDrawInfoSlotIndex()
	{
		return default(int);
	}
}
