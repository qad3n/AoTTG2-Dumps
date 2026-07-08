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
	[Address(RVA = "0x4C779A0", Offset = "0x4C779A0", VA = "0x4C779A0")]
	internal static void ProcessOnClippingChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x4C78310", Offset = "0x4C78310", VA = "0x4C78310")]
	internal static void ProcessOnOpacityChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x4C78A30", Offset = "0x4C78A30", VA = "0x4C78A30")]
	internal static void ProcessOnColorChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x4C78CB0", Offset = "0x4C78CB0", VA = "0x4C78CB0")]
	internal static void ProcessOnTransformOrSizeChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x4C79320", Offset = "0x4C79320", VA = "0x4C79320")]
	private static Matrix4x4 GetTransformIDTransformInfo(VisualElement ve)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x4C79520", Offset = "0x4C79520", VA = "0x4C79520")]
	private static Vector4 GetClipRectIDClipInfo(VisualElement ve)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x4C796E0", Offset = "0x4C796E0", VA = "0x4C796E0")]
	internal static uint DepthFirstOnChildAdded(RenderChain renderChain, VisualElement parent, VisualElement ve, int index, bool resetState)
	{
		return default(uint);
	}

	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x4C7AFC0", Offset = "0x4C7AFC0", VA = "0x4C7AFC0")]
	internal static uint DepthFirstOnChildRemoving(RenderChain renderChain, VisualElement ve)
	{
		return default(uint);
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x4C77A90", Offset = "0x4C77A90", VA = "0x4C77A90")]
	private static void DepthFirstOnClippingChanged(RenderChain renderChain, VisualElement parent, VisualElement ve, uint dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, UIRenderDevice device, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x4C78420", Offset = "0x4C78420", VA = "0x4C78420")]
	private static void DepthFirstOnOpacityChanged(RenderChain renderChain, float parentCompositeOpacity, VisualElement ve, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats, bool isDoingFullVertexRegeneration = false)
	{
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x4C78AA0", Offset = "0x4C78AA0", VA = "0x4C78AA0")]
	private static void OnColorChanged(RenderChain renderChain, VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x4C78D70", Offset = "0x4C78D70", VA = "0x4C78D70")]
	private static void DepthFirstOnTransformOrSizeChanged(RenderChain renderChain, VisualElement parent, VisualElement ve, uint dirtyID, UIRenderDevice device, bool isAncestorOfChangeSkinned, bool transformChanged, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x4C76050", Offset = "0x4C76050", VA = "0x4C76050")]
	public static bool UpdateTextCoreSettings(RenderChain renderChain, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x4C7D760", Offset = "0x4C7D760", VA = "0x4C7D760")]
	private static bool NudgeVerticesToNewSpace(VisualElement ve, RenderChain renderChain, UIRenderDevice device)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x4C7E320", Offset = "0x4C7E320", VA = "0x4C7E320")]
	private static void PrepareNudgeVertices(VisualElement ve, UIRenderDevice device, MeshHandle mesh, out IntPtr src, out IntPtr dst, out int count)
	{
	}

	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x4C7A140", Offset = "0x4C7A140", VA = "0x4C7A140")]
	private static VisualElement GetLastDeepestChild(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x4C7D110", Offset = "0x4C7D110", VA = "0x4C7D110")]
	private static ClipMethod DetermineSelfClipMethod(RenderChain renderChain, VisualElement ve)
	{
		return default(ClipMethod);
	}

	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x4C7A000", Offset = "0x4C7A000", VA = "0x4C7A000")]
	private static bool UpdateLocalFlipsWinding(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x4C7D5C0", Offset = "0x4C7D5C0", VA = "0x4C7D5C0")]
	private static void UpdateZeroScaling(VisualElement ve)
	{
	}

	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x4C7A1C0", Offset = "0x4C7A1C0", VA = "0x4C7A1C0")]
	private static bool NeedsTransformID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x4C7A260", Offset = "0x4C7A260", VA = "0x4C7A260")]
	internal static bool NeedsColorID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x4C7DE20", Offset = "0x4C7DE20", VA = "0x4C7DE20")]
	internal static bool NeedsTextCoreSettings(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x4C7A280", Offset = "0x4C7A280", VA = "0x4C7A280")]
	private static bool InitColorIDs(RenderChain renderChain, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x4C76710", Offset = "0x4C76710", VA = "0x4C76710")]
	public static void SetColorValues(RenderChain renderChain, VisualElement ve)
	{
	}
}
