// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A8")]
internal static class RenderEvents
{
	[Token(Token = "0x400142D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_NudgeVerticesMarker;

	[Token(Token = "0x400142E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly float VisibilityTreshold;

	[Token(Token = "0x6002A14")]
	[Address(RVA = "0x6B982B0", Offset = "0x6B972B0", VA = "0x6B982B0")]
	internal static void ProcessOnClippingChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A15")]
	[Address(RVA = "0x6B98AE0", Offset = "0x6B97AE0", VA = "0x6B98AE0")]
	internal static void ProcessOnOpacityChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A16")]
	[Address(RVA = "0x6B99200", Offset = "0x6B98200", VA = "0x6B99200")]
	internal static void ProcessOnColorChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A17")]
	[Address(RVA = "0x6B99590", Offset = "0x6B98590", VA = "0x6B99590")]
	internal static void ProcessOnTransformOrSizeChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A18")]
	[Address(RVA = "0x6B99B80", Offset = "0x6B98B80", VA = "0x6B99B80")]
	private static Matrix4x4 GetTransformIDTransformInfo(RenderData renderData)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6002A19")]
	[Address(RVA = "0x6B99D00", Offset = "0x6B98D00", VA = "0x6B99D00")]
	private static Vector4 GetClipRectIDClipInfo(RenderData renderData)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6002A1A")]
	[Address(RVA = "0x6B99EE0", Offset = "0x6B98EE0", VA = "0x6B99EE0")]
	internal static uint DepthFirstOnChildAdded(RenderTreeManager renderTreeManager, VisualElement parent, VisualElement ve, int index)
	{
		return default(uint);
	}

	[Token(Token = "0x6002A1B")]
	[Address(RVA = "0x6B9BD10", Offset = "0x6B9AD10", VA = "0x6B9BD10")]
	internal static uint DepthFirstOnElementRemoving(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(uint);
	}

	[Token(Token = "0x6002A1C")]
	[Address(RVA = "0x6B9BEE0", Offset = "0x6B9AEE0", VA = "0x6B9BEE0")]
	private static void DepthFirstRemoveRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A1D")]
	[Address(RVA = "0x6B9CA70", Offset = "0x6B9BA70", VA = "0x6B9CA70")]
	private static void DoDepthFirstRemoveRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A1E")]
	[Address(RVA = "0x6B9C000", Offset = "0x6B9B000", VA = "0x6B9C000")]
	private static void DisconnectSubTree(RenderData renderData)
	{
	}

	[Token(Token = "0x6002A1F")]
	[Address(RVA = "0x6B9CB70", Offset = "0x6B9BB70", VA = "0x6B9CB70")]
	private static void DisconnectRenderTreeFromParent(RenderTree parentTree, RenderTree nestedTree)
	{
	}

	[Token(Token = "0x6002A20")]
	[Address(RVA = "0x6B9C0B0", Offset = "0x6B9B0B0", VA = "0x6B9C0B0")]
	private static void ResetRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A21")]
	[Address(RVA = "0x6B98370", Offset = "0x6B97370", VA = "0x6B98370")]
	private static void DepthFirstOnClippingChanged(RenderTreeManager renderTreeManager, RenderData parentRenderData, RenderData renderData, uint dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, UIRenderDevice device, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A22")]
	[Address(RVA = "0x6B98C30", Offset = "0x6B97C30", VA = "0x6B98C30")]
	private static void DepthFirstOnOpacityChanged(RenderTreeManager renderTreeManager, float parentCompositeOpacity, RenderData renderData, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats, bool isDoingFullVertexRegeneration = false)
	{
	}

	[Token(Token = "0x6002A23")]
	[Address(RVA = "0x6B99270", Offset = "0x6B98270", VA = "0x6B99270")]
	private static void OnColorChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A24")]
	[Address(RVA = "0x6B99620", Offset = "0x6B98620", VA = "0x6B99620")]
	private static void DepthFirstOnTransformOrSizeChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, UIRenderDevice device, bool isAncestorOfChangeSkinned, bool transformChanged, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A25")]
	[Address(RVA = "0x6B9D3C0", Offset = "0x6B9C3C0", VA = "0x6B9D3C0")]
	public static bool UpdateTextCoreSettings(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A26")]
	[Address(RVA = "0x6B9D9B0", Offset = "0x6B9C9B0", VA = "0x6B9D9B0")]
	private static bool NudgeVerticesToNewSpace(RenderData renderData, RenderTreeManager renderTreeManager, UIRenderDevice device)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A27")]
	[Address(RVA = "0x6B9E400", Offset = "0x6B9D400", VA = "0x6B9E400")]
	private static void PrepareNudgeVertices(UIRenderDevice device, MeshHandle mesh, out IntPtr src, out IntPtr dst, out int count)
	{
	}

	[Token(Token = "0x6002A28")]
	[Address(RVA = "0x6B9D2F0", Offset = "0x6B9C2F0", VA = "0x6B9D2F0")]
	private static ClipMethod DetermineSelfClipMethod(RenderTreeManager renderTreeManager, RenderData renderData)
	{
		return default(ClipMethod);
	}

	[Token(Token = "0x6002A29")]
	[Address(RVA = "0x6B9AE20", Offset = "0x6B99E20", VA = "0x6B9AE20")]
	private static bool UpdateLocalFlipsWinding(RenderData renderData)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2A")]
	[Address(RVA = "0x6B9AF90", Offset = "0x6B99F90", VA = "0x6B9AF90")]
	private static bool NeedsTransformID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2B")]
	[Address(RVA = "0x6B9AFC0", Offset = "0x6B99FC0", VA = "0x6B9AFC0")]
	internal static bool NeedsColorID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2C")]
	[Address(RVA = "0x6B9E340", Offset = "0x6B9D340", VA = "0x6B9E340")]
	internal static bool NeedsTextCoreSettings(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2D")]
	[Address(RVA = "0x6B9AFE0", Offset = "0x6B99FE0", VA = "0x6B9AFE0")]
	private static bool InitColorIDs(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2E")]
	[Address(RVA = "0x6B9B5B0", Offset = "0x6B9A5B0", VA = "0x6B9B5B0")]
	public static void SetColorValues(RenderTreeManager renderTreeManager, VisualElement ve)
	{
	}
}
