// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A9")]
internal struct IndirectBufferContext
{
	[Token(Token = "0x20000AA")]
	public enum BufferState
	{
		[Token(Token = "0x4000329")]
		Pending,
		[Token(Token = "0x400032A")]
		Zeroed,
		[Token(Token = "0x400032B")]
		NoOcclusionTest,
		[Token(Token = "0x400032C")]
		AllInstancesOcclusionTested,
		[Token(Token = "0x400032D")]
		OccludedInstancesReTested
	}

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x0")]
	public JobHandle cullingJobHandle;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x10")]
	public BufferState bufferState;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x14")]
	public int occluderVersion;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x18")]
	public int subviewMask;

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x65E5520", Offset = "0x65E4520", VA = "0x65E5520")]
	public IndirectBufferContext(JobHandle cullingJobHandle)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x65E5540", Offset = "0x65E4540", VA = "0x65E5540")]
	public bool Matches(BufferState bufferState, int occluderVersion, int subviewMask)
	{
		return default(bool);
	}
}
