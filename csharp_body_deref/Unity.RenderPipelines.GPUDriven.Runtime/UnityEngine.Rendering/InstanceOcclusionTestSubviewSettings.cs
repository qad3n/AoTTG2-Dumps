// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceOcclusionTestSubviewSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B0")]
internal struct InstanceOcclusionTestSubviewSettings
{
	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x0")]
	public int testCount;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x4")]
	public int occluderSubviewIndices;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x8")]
	public int occluderSubviewMask;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0xC")]
	public int cullingSplitIndices;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x10")]
	public int cullingSplitMask;

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x2BF07B0", Offset = "0x2BEEDB0", VA = "0x182BF07B0")]
	public static InstanceOcclusionTestSubviewSettings FromSpan(ReadOnlySpan<SubviewOcclusionTest> subviewOcclusionTests)
	{
		return default(InstanceOcclusionTestSubviewSettings);
	}
}
