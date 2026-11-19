// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DepthOrderedDirtyTracking
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A9")]
internal struct DepthOrderedDirtyTracking
{
	[Token(Token = "0x400142F")]
	[FieldOffset(Offset = "0x0")]
	public RenderTree owner;

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x8")]
	public List<RenderData> heads;

	[Token(Token = "0x4001431")]
	[FieldOffset(Offset = "0x10")]
	public List<RenderData> tails;

	[Token(Token = "0x4001432")]
	[FieldOffset(Offset = "0x18")]
	public int[] minDepths;

	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x20")]
	public int[] maxDepths;

	[Token(Token = "0x4001434")]
	[FieldOffset(Offset = "0x28")]
	public uint dirtyID;

	[Token(Token = "0x6002A30")]
	[Address(RVA = "0x6B9AC60", Offset = "0x6B99C60", VA = "0x6B9AC60")]
	public void EnsureFits(int maxDepth)
	{
	}

	[Token(Token = "0x6002A31")]
	[Address(RVA = "0x6B9E670", Offset = "0x6B9D670", VA = "0x6B9E670")]
	public void RegisterDirty(RenderData renderData, RenderDataDirtyTypes dirtyTypes, RenderDataDirtyTypeClasses dirtyTypeClass)
	{
	}

	[Token(Token = "0x6002A32")]
	[Address(RVA = "0x6B9E860", Offset = "0x6B9D860", VA = "0x6B9E860")]
	public void ClearDirty(RenderData renderData, RenderDataDirtyTypes dirtyTypesInverse)
	{
	}

	[Token(Token = "0x6002A33")]
	[Address(RVA = "0x6B9EA40", Offset = "0x6B9DA40", VA = "0x6B9EA40")]
	public void Reset()
	{
	}
}
