// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderEvents
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BD")]
internal static class RenderEvents
{
	[Token(Token = "0x40014EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_NudgeVerticesMarker;

	[Token(Token = "0x40014EC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly float VisibilityTreshold;

	[Token(Token = "0x6002A75")]
	[Address(RVA = "0x319E290", Offset = "0x319C890", VA = "0x18319E290")]
	internal static void ProcessOnClippingChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A76")]
	[Address(RVA = "0x319E410", Offset = "0x319CA10", VA = "0x18319E410")]
	internal static void ProcessOnOpacityChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A77")]
	[Address(RVA = "0x319E3A0", Offset = "0x319C9A0", VA = "0x18319E3A0")]
	internal static void ProcessOnColorChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A78")]
	[Address(RVA = "0x319E570", Offset = "0x319CB70", VA = "0x18319E570")]
	internal static void ProcessOnTransformOrSizeChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A79")]
	[Address(RVA = "0x319D1E0", Offset = "0x319B7E0", VA = "0x18319D1E0")]
	private static Matrix4x4 GetTransformIDTransformInfo(RenderData renderData)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x319CF90", Offset = "0x319B590", VA = "0x18319CF90")]
	private static Vector4 GetClipRectIDClipInfo(RenderData renderData)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x319B040", Offset = "0x3199640", VA = "0x18319B040")]
	internal static uint DepthFirstOnChildAdded(RenderTreeManager renderTreeManager, VisualElement parent, VisualElement ve, int index)
	{
		return default(uint);
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x319BF60", Offset = "0x319A560", VA = "0x18319BF60")]
	internal static uint DepthFirstOnElementRemoving(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(uint);
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x319CAC0", Offset = "0x319B0C0", VA = "0x18319CAC0")]
	private static void DepthFirstRemoveRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A7E")]
	[Address(RVA = "0x319CE80", Offset = "0x319B480", VA = "0x18319CE80")]
	private static void DoDepthFirstRemoveRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A7F")]
	[Address(RVA = "0x319CDE0", Offset = "0x319B3E0", VA = "0x18319CDE0")]
	private static void DisconnectSubTree(RenderData renderData)
	{
	}

	[Token(Token = "0x6002A80")]
	[Address(RVA = "0x319CD50", Offset = "0x319B350", VA = "0x18319CD50")]
	private static void DisconnectRenderTreeFromParent(RenderTree parentTree, RenderTree nestedTree)
	{
	}

	[Token(Token = "0x6002A81")]
	[Address(RVA = "0x319E610", Offset = "0x319CC10", VA = "0x18319E610")]
	private static void ResetRenderData(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002A82")]
	[Address(RVA = "0x319B8D0", Offset = "0x3199ED0", VA = "0x18319B8D0")]
	private static void DepthFirstOnClippingChanged(RenderTreeManager renderTreeManager, RenderData parentRenderData, RenderData renderData, uint dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, UIRenderDevice device, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x319C120", Offset = "0x319A720", VA = "0x18319C120")]
	private static void DepthFirstOnOpacityChanged(RenderTreeManager renderTreeManager, float parentCompositeOpacity, RenderData renderData, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats, bool isDoingFullVertexRegeneration = false)
	{
	}

	[Token(Token = "0x6002A84")]
	[Address(RVA = "0x319DF40", Offset = "0x319C540", VA = "0x18319DF40")]
	private static void OnColorChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A85")]
	[Address(RVA = "0x319C600", Offset = "0x319AC00", VA = "0x18319C600")]
	private static void DepthFirstOnTransformOrSizeChanged(RenderTreeManager renderTreeManager, RenderData renderData, uint dirtyID, UIRenderDevice device, bool isAncestorOfChangeSkinned, bool transformChanged, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A86")]
	[Address(RVA = "0x319F910", Offset = "0x319DF10", VA = "0x18319F910")]
	public static bool UpdateTextCoreSettings(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A87")]
	[Address(RVA = "0x319D940", Offset = "0x319BF40", VA = "0x18319D940")]
	private static bool NudgeVerticesToNewSpace(RenderData renderData, RenderTreeManager renderTreeManager, UIRenderDevice device)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A88")]
	[Address(RVA = "0x319E140", Offset = "0x319C740", VA = "0x18319E140")]
	private static void PrepareNudgeVertices(UIRenderDevice device, MeshHandle mesh, out IntPtr src, out IntPtr dst, out int count)
	{
	}

	[Token(Token = "0x6002A89")]
	[Address(RVA = "0x319CC40", Offset = "0x319B240", VA = "0x18319CC40")]
	private static ClipMethod DetermineSelfClipMethod(RenderTreeManager renderTreeManager, RenderData renderData)
	{
		return default(ClipMethod);
	}

	[Token(Token = "0x6002A8A")]
	[Address(RVA = "0x319F780", Offset = "0x319DD80", VA = "0x18319F780")]
	private static bool UpdateLocalFlipsWinding(RenderData renderData)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8B")]
	[Address(RVA = "0x319D900", Offset = "0x319BF00", VA = "0x18319D900")]
	private static bool NeedsTransformID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8C")]
	[Address(RVA = "0x319D7F0", Offset = "0x319BDF0", VA = "0x18319D7F0")]
	internal static bool NeedsColorID(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8D")]
	[Address(RVA = "0x319D810", Offset = "0x319BE10", VA = "0x18319D810")]
	internal static bool NeedsTextCoreSettings(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8E")]
	[Address(RVA = "0x319D370", Offset = "0x319B970", VA = "0x18319D370")]
	private static bool InitColorIDs(RenderTreeManager renderTreeManager, VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8F")]
	[Address(RVA = "0x319EF80", Offset = "0x319D580", VA = "0x18319EF80")]
	public static void SetColorValues(RenderTreeManager renderTreeManager, VisualElement ve)
	{
	}
}
