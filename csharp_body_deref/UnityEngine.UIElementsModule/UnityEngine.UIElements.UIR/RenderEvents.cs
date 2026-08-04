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

[Token(Token = "0x20004C7")]
internal static class RenderEvents
{
	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_NudgeVerticesMarker;

	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly float VisibilityTreshold;

	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x4F9F2D0", Offset = "0x4F9F2D0", VA = "0x4F9F2D0")]
	internal static void ProcessOnClippingChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x4F9FC40", Offset = "0x4F9FC40", VA = "0x4F9FC40")]
	internal static void ProcessOnOpacityChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x4FA0360", Offset = "0x4FA0360", VA = "0x4FA0360")]
	internal static void ProcessOnColorChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x4FA05E0", Offset = "0x4FA05E0", VA = "0x4FA05E0")]
	internal static void ProcessOnTransformOrSizeChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x4FA0C50", Offset = "0x4FA0C50", VA = "0x4FA0C50")]
	private static Matrix4x4 GetTransformIDTransformInfo(VisualElement ve)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x4FA0E50", Offset = "0x4FA0E50", VA = "0x4FA0E50")]
	private static Vector4 GetClipRectIDClipInfo(VisualElement ve)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x4FA1010", Offset = "0x4FA1010", VA = "0x4FA1010")]
	internal static uint DepthFirstOnChildAdded(RenderChain renderChain, VisualElement parent, VisualElement ve, int index, bool resetState)
	{
		return default(uint);
	}

	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x4FA28F0", Offset = "0x4FA28F0", VA = "0x4FA28F0")]
	internal static uint DepthFirstOnChildRemoving(RenderChain renderChain, VisualElement ve)
	{
		return default(uint);
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x4F9F3C0", Offset = "0x4F9F3C0", VA = "0x4F9F3C0")]
	private static void DepthFirstOnClippingChanged(RenderChain renderChain, VisualElement parent, VisualElement ve, uint dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, UIRenderDevice device, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x4F9FD50", Offset = "0x4F9FD50", VA = "0x4F9FD50")]
	private static void DepthFirstOnOpacityChanged(RenderChain renderChain, float parentCompositeOpacity, VisualElement ve, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats, bool isDoingFullVertexRegeneration = false)
	{
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x4FA03D0", Offset = "0x4FA03D0", VA = "0x4FA03D0")]
	private static void OnColorChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x4FA06A0", Offset = "0x4FA06A0", VA = "0x4FA06A0")]
	private static void DepthFirstOnTransformOrSizeChanged(RenderChain renderChain, VisualElement parent, VisualElement ve, uint dirtyID, UIRenderDevice device, bool isAncestorOfChangeSkinned, bool transformChanged, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x4F9D980", Offset = "0x4F9D980", VA = "0x4F9D980")]
	public static bool UpdateTextCoreSettings(RenderChain renderChain, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x4FA5090", Offset = "0x4FA5090", VA = "0x4FA5090")]
	private static bool NudgeVerticesToNewSpace(VisualElement ve, RenderChain renderChain, UIRenderDevice device)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x4FA5C50", Offset = "0x4FA5C50", VA = "0x4FA5C50")]
	private static void PrepareNudgeVertices(VisualElement ve, UIRenderDevice device, MeshHandle mesh, out IntPtr src, out IntPtr dst, out int count)
	{
	}

	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x4FA1A70", Offset = "0x4FA1A70", VA = "0x4FA1A70")]
	private static VisualElement GetLastDeepestChild(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x4FA4A40", Offset = "0x4FA4A40", VA = "0x4FA4A40")]
	private static ClipMethod DetermineSelfClipMethod(RenderChain renderChain, VisualElement ve)
	{
		return default(ClipMethod);
	}

	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x4FA1930", Offset = "0x4FA1930", VA = "0x4FA1930")]
	private static bool UpdateLocalFlipsWinding(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x4FA4EF0", Offset = "0x4FA4EF0", VA = "0x4FA4EF0")]
	private static void UpdateZeroScaling(VisualElement ve)
	{
	}

	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x4FA1AF0", Offset = "0x4FA1AF0", VA = "0x4FA1AF0")]
	private static bool NeedsTransformID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x4FA1B90", Offset = "0x4FA1B90", VA = "0x4FA1B90")]
	internal static bool NeedsColorID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x4FA5750", Offset = "0x4FA5750", VA = "0x4FA5750")]
	internal static bool NeedsTextCoreSettings(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x4FA1BB0", Offset = "0x4FA1BB0", VA = "0x4FA1BB0")]
	private static bool InitColorIDs(RenderChain renderChain, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x4F9E040", Offset = "0x4F9E040", VA = "0x4F9E040")]
	public static void SetColorValues(RenderChain renderChain, VisualElement ve)
	{
	}
}
