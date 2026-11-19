// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTree
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005AA")]
internal class RenderTree
{
	[Token(Token = "0x20005AB")]
	[Flags]
	internal enum AllowedClasses
	{
		[Token(Token = "0x4001447")]
		Clipping = 1,
		[Token(Token = "0x4001448")]
		Opacity = 2,
		[Token(Token = "0x4001449")]
		Color = 4,
		[Token(Token = "0x400144A")]
		TransformSize = 8,
		[Token(Token = "0x400144B")]
		Visuals = 0x10,
		[Token(Token = "0x400144C")]
		All = Clipping | Opacity | Color | TransformSize | Visuals
	}

	[Token(Token = "0x4001435")]
	[FieldOffset(Offset = "0x10")]
	private RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x4001436")]
	[FieldOffset(Offset = "0x18")]
	private DepthOrderedDirtyTracking m_DirtyTracker;

	[Token(Token = "0x4001437")]
	[FieldOffset(Offset = "0x48")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x4001438")]
	[FieldOffset(Offset = "0x50")]
	private RenderData m_RootRenderData;

	[Token(Token = "0x4001439")]
	[FieldOffset(Offset = "0x58")]
	public TextureId quadTextureId;

	[Token(Token = "0x400143A")]
	[FieldOffset(Offset = "0x5C")]
	public Rect quadRect;

	[Token(Token = "0x400143B")]
	[FieldOffset(Offset = "0x6C")]
	public Rect quadUVRect;

	[Token(Token = "0x400143C")]
	[FieldOffset(Offset = "0x80")]
	public GCHandlePool m_GCHandlePool;

	[Token(Token = "0x400143D")]
	[FieldOffset(Offset = "0x88")]
	internal RenderTree parent;

	[Token(Token = "0x400143E")]
	[FieldOffset(Offset = "0x90")]
	internal RenderTree firstChild;

	[Token(Token = "0x400143F")]
	[FieldOffset(Offset = "0x98")]
	internal RenderTree nextSibling;

	[Token(Token = "0x4001440")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_MarkerClipProcessing;

	[Token(Token = "0x4001441")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerOpacityProcessing;

	[Token(Token = "0x4001442")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerColorsProcessing;

	[Token(Token = "0x4001443")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerTransformProcessing;

	[Token(Token = "0x4001444")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_MarkerVisualsProcessing;

	[Token(Token = "0x4001445")]
	[FieldOffset(Offset = "0xA0")]
	private AllowedClasses m_AllowedDirtyClasses;

	[Token(Token = "0x17000A71")]
	internal RenderTreeManager renderTreeManager
	{
		[Token(Token = "0x6002A34")]
		[Address(RVA = "0x6B9EB20", Offset = "0x6B9DB20", VA = "0x6B9EB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A72")]
	internal RenderData rootRenderData
	{
		[Token(Token = "0x6002A35")]
		[Address(RVA = "0x6B9EB30", Offset = "0x6B9DB30", VA = "0x6B9EB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A73")]
	internal unsafe ref DepthOrderedDirtyTracking dirtyTracker
	{
		[Token(Token = "0x6002A36")]
		[Address(RVA = "0x6B9AC50", Offset = "0x6B99C50", VA = "0x6B9AC50")]
		get
		{
			return ref *(DepthOrderedDirtyTracking*)null;
		}
	}

	[Token(Token = "0x17000A74")]
	internal RenderChainCommand firstCommand
	{
		[Token(Token = "0x6002A37")]
		[Address(RVA = "0x6B9EB40", Offset = "0x6B9DB40", VA = "0x6B9EB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A38")]
	[Address(RVA = "0x6B9EB50", Offset = "0x6B9DB50", VA = "0x6B9EB50")]
	public void Init(RenderTreeManager renderTreeManager, RenderData rootRenderData)
	{
	}

	[Token(Token = "0x6002A39")]
	[Address(RVA = "0x6B9EDC0", Offset = "0x6B9DDC0", VA = "0x6B9EDC0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002A3A")]
	[Address(RVA = "0x6B9EE40", Offset = "0x6B9DE40", VA = "0x6B9EE40")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A3B")]
	[Address(RVA = "0x6B9EE50", Offset = "0x6B9DE50", VA = "0x6B9EE50")]
	private void DepthFirstResetTextures(RenderData renderData)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A3C")]
	[Address(RVA = "0x6B9EEB0", Offset = "0x6B9DEB0", VA = "0x6B9EEB0")]
	public void OnRenderDataOpacityChanged(RenderData renderData, bool hierarchical = false)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A3D")]
	[Address(RVA = "0x6B9EF40", Offset = "0x6B9DF40", VA = "0x6B9EF40")]
	public void OnRenderDataTransformOrSizeChanged(RenderData renderData, bool transformChanged, bool clipRectSizeChanged)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A3E")]
	[Address(RVA = "0x6B9EFD0", Offset = "0x6B9DFD0", VA = "0x6B9EFD0")]
	public void OnRenderDataOpacityIdChanged(RenderData renderData)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A3F")]
	[Address(RVA = "0x6B9F040", Offset = "0x6B9E040", VA = "0x6B9F040")]
	public void OnRenderDataVisualsChanged(RenderData renderData, bool hierarchical)
	{
	}

	[Token(Token = "0x6002A40")]
	[Address(RVA = "0x6B9F0D0", Offset = "0x6B9E0D0", VA = "0x6B9F0D0")]
	public void ProcessChanges(ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002A41")]
	[Address(RVA = "0x6B9FB20", Offset = "0x6B9EB20", VA = "0x6B9FB20")]
	internal void OnRenderCommandAdded(RenderChainCommand command)
	{
	}

	[Token(Token = "0x6002A42")]
	[Address(RVA = "0x6B9FB50", Offset = "0x6B9EB50", VA = "0x6B9FB50")]
	internal void OnRenderCommandsRemoved(RenderChainCommand firstCommand, RenderChainCommand lastCommand)
	{
	}

	[Token(Token = "0x6002A43")]
	[Address(RVA = "0x6B9CBE0", Offset = "0x6B9BBE0", VA = "0x6B9CBE0")]
	internal void ChildWillBeRemoved(RenderData renderData)
	{
	}

	[Token(Token = "0x6002A44")]
	[Address(RVA = "0x6B9FB80", Offset = "0x6B9EB80", VA = "0x6B9FB80")]
	public RenderTree()
	{
	}
}
