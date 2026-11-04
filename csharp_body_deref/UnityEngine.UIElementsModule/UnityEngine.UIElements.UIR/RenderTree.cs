// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTree
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BF")]
internal class RenderTree
{
	[Token(Token = "0x20005C0")]
	[Flags]
	internal enum AllowedClasses
	{
		[Token(Token = "0x4001505")]
		Clipping = 1,
		[Token(Token = "0x4001506")]
		Opacity = 2,
		[Token(Token = "0x4001507")]
		Color = 4,
		[Token(Token = "0x4001508")]
		TransformSize = 8,
		[Token(Token = "0x4001509")]
		Visuals = 0x10,
		[Token(Token = "0x400150A")]
		All = Clipping | Opacity | Color | TransformSize | Visuals
	}

	[Token(Token = "0x40014F3")]
	[FieldOffset(Offset = "0x10")]
	private RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x40014F4")]
	[FieldOffset(Offset = "0x18")]
	private DepthOrderedDirtyTracking m_DirtyTracker;

	[Token(Token = "0x40014F5")]
	[FieldOffset(Offset = "0x48")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x40014F6")]
	[FieldOffset(Offset = "0x50")]
	private RenderData m_RootRenderData;

	[Token(Token = "0x40014F7")]
	[FieldOffset(Offset = "0x58")]
	public TextureId quadTextureId;

	[Token(Token = "0x40014F8")]
	[FieldOffset(Offset = "0x5C")]
	public Rect quadRect;

	[Token(Token = "0x40014F9")]
	[FieldOffset(Offset = "0x6C")]
	public Rect quadUVRect;

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0x80")]
	public GCHandlePool m_GCHandlePool;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0x88")]
	internal RenderTree parent;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x90")]
	internal RenderTree firstChild;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x98")]
	internal RenderTree nextSibling;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_MarkerClipProcessing;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerOpacityProcessing;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerColorsProcessing;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerTransformProcessing;

	[Token(Token = "0x4001502")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_MarkerVisualsProcessing;

	[Token(Token = "0x4001503")]
	[FieldOffset(Offset = "0xA0")]
	private AllowedClasses m_AllowedDirtyClasses;

	[Token(Token = "0x17000A7D")]
	internal RenderTreeManager renderTreeManager
	{
		[Token(Token = "0x6002A95")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A7E")]
	internal RenderData rootRenderData
	{
		[Token(Token = "0x6002A96")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A7F")]
	internal unsafe ref DepthOrderedDirtyTracking dirtyTracker
	{
		[Token(Token = "0x6002A97")]
		[Address(RVA = "0x31AFD80", Offset = "0x31AE380", VA = "0x1831AFD80")]
		get
		{
			return ref *(DepthOrderedDirtyTracking*)null;
		}
	}

	[Token(Token = "0x17000A80")]
	internal RenderChainCommand firstCommand
	{
		[Token(Token = "0x6002A98")]
		[Address(RVA = "0x2E8E8E0", Offset = "0x2E8CEE0", VA = "0x182E8E8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A99")]
	[Address(RVA = "0x31AEFB0", Offset = "0x31AD5B0", VA = "0x1831AEFB0")]
	public void Init(RenderTreeManager renderTreeManager, RenderData rootRenderData)
	{
	}

	[Token(Token = "0x6002A9A")]
	[Address(RVA = "0x31AFB20", Offset = "0x31AE120", VA = "0x1831AFB20")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002A9B")]
	[Address(RVA = "0x31AEF90", Offset = "0x31AD590", VA = "0x1831AEF90")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A9C")]
	[Address(RVA = "0x31AEDD0", Offset = "0x31AD3D0", VA = "0x1831AEDD0")]
	private void DepthFirstResetTextures(RenderData renderData)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A9D")]
	[Address(RVA = "0x31AF230", Offset = "0x31AD830", VA = "0x1831AF230")]
	public void OnRenderDataOpacityChanged(RenderData renderData, bool hierarchical = false)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A9E")]
	[Address(RVA = "0x31AF350", Offset = "0x31AD950", VA = "0x1831AF350")]
	public void OnRenderDataTransformOrSizeChanged(RenderData renderData, bool transformChanged, bool clipRectSizeChanged)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A9F")]
	[Address(RVA = "0x31AF2C0", Offset = "0x31AD8C0", VA = "0x1831AF2C0")]
	public void OnRenderDataOpacityIdChanged(RenderData renderData)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002AA0")]
	[Address(RVA = "0x31AF3E0", Offset = "0x31AD9E0", VA = "0x1831AF3E0")]
	public void OnRenderDataVisualsChanged(RenderData renderData, bool hierarchical)
	{
	}

	[Token(Token = "0x6002AA1")]
	[Address(RVA = "0x31AF470", Offset = "0x31ADA70", VA = "0x1831AF470")]
	public void ProcessChanges(ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002AA2")]
	[Address(RVA = "0x31AF1C0", Offset = "0x31AD7C0", VA = "0x1831AF1C0")]
	internal void OnRenderCommandAdded(RenderChainCommand command)
	{
	}

	[Token(Token = "0x6002AA3")]
	[Address(RVA = "0x31AF1F0", Offset = "0x31AD7F0", VA = "0x1831AF1F0")]
	internal void OnRenderCommandsRemoved(RenderChainCommand firstCommand, RenderChainCommand lastCommand)
	{
	}

	[Token(Token = "0x6002AA4")]
	[Address(RVA = "0x31AED30", Offset = "0x31AD330", VA = "0x1831AED30")]
	internal void ChildWillBeRemoved(RenderData renderData)
	{
	}

	[Token(Token = "0x6002AA5")]
	[Address(RVA = "0x31AFCF0", Offset = "0x31AE2F0", VA = "0x1831AFCF0")]
	public RenderTree()
	{
	}
}
