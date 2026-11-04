// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DepthOrderedDirtyTracking
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BE")]
internal struct DepthOrderedDirtyTracking
{
	[Token(Token = "0x40014ED")]
	[FieldOffset(Offset = "0x0")]
	public RenderTree owner;

	[Token(Token = "0x40014EE")]
	[FieldOffset(Offset = "0x8")]
	public List<RenderData> heads;

	[Token(Token = "0x40014EF")]
	[FieldOffset(Offset = "0x10")]
	public List<RenderData> tails;

	[Token(Token = "0x40014F0")]
	[FieldOffset(Offset = "0x18")]
	public int[] minDepths;

	[Token(Token = "0x40014F1")]
	[FieldOffset(Offset = "0x20")]
	public int[] maxDepths;

	[Token(Token = "0x40014F2")]
	[FieldOffset(Offset = "0x28")]
	public uint dirtyID;

	[Token(Token = "0x6002A91")]
	[Address(RVA = "0x31A2FB0", Offset = "0x31A15B0", VA = "0x1831A2FB0")]
	public void EnsureFits(int maxDepth)
	{
	}

	[Token(Token = "0x6002A92")]
	[Address(RVA = "0x31A3100", Offset = "0x31A1700", VA = "0x1831A3100")]
	public void RegisterDirty(RenderData renderData, RenderDataDirtyTypes dirtyTypes, RenderDataDirtyTypeClasses dirtyTypeClass)
	{
	}

	[Token(Token = "0x6002A93")]
	[Address(RVA = "0x31A2DE0", Offset = "0x31A13E0", VA = "0x1831A2DE0")]
	public void ClearDirty(RenderData renderData, RenderDataDirtyTypes dirtyTypesInverse)
	{
	}

	[Token(Token = "0x6002A94")]
	[Address(RVA = "0x31A32F0", Offset = "0x31A18F0", VA = "0x1831A32F0")]
	public void Reset()
	{
	}
}
