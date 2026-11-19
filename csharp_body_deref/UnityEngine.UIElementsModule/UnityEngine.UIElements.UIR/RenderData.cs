// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A6")]
internal class RenderData
{
	[Token(Token = "0x40013F9")]
	[FieldOffset(Offset = "0x10")]
	public VisualElement owner;

	[Token(Token = "0x40013FA")]
	[FieldOffset(Offset = "0x18")]
	public RenderTree renderTree;

	[Token(Token = "0x40013FB")]
	[FieldOffset(Offset = "0x20")]
	public RenderData parent;

	[Token(Token = "0x40013FC")]
	[FieldOffset(Offset = "0x28")]
	public RenderData prevSibling;

	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x30")]
	public RenderData nextSibling;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x38")]
	public RenderData firstChild;

	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x40")]
	public RenderData lastChild;

	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x48")]
	public RenderData groupTransformAncestor;

	[Token(Token = "0x4001401")]
	[FieldOffset(Offset = "0x50")]
	public RenderData boneTransformAncestor;

	[Token(Token = "0x4001402")]
	[FieldOffset(Offset = "0x58")]
	public RenderData prevDirty;

	[Token(Token = "0x4001403")]
	[FieldOffset(Offset = "0x60")]
	public RenderData nextDirty;

	[Token(Token = "0x4001404")]
	[FieldOffset(Offset = "0x68")]
	public RenderDataFlags flags;

	[Token(Token = "0x4001405")]
	[FieldOffset(Offset = "0x6C")]
	public int depthInRenderTree;

	[Token(Token = "0x4001406")]
	[FieldOffset(Offset = "0x70")]
	public RenderDataDirtyTypes dirtiedValues;

	[Token(Token = "0x4001407")]
	[FieldOffset(Offset = "0x74")]
	public uint dirtyID;

	[Token(Token = "0x4001408")]
	[FieldOffset(Offset = "0x78")]
	public RenderChainCommand firstHeadCommand;

	[Token(Token = "0x4001409")]
	[FieldOffset(Offset = "0x80")]
	public RenderChainCommand lastHeadCommand;

	[Token(Token = "0x400140A")]
	[FieldOffset(Offset = "0x88")]
	public RenderChainCommand firstTailCommand;

	[Token(Token = "0x400140B")]
	[FieldOffset(Offset = "0x90")]
	public RenderChainCommand lastTailCommand;

	[Token(Token = "0x400140C")]
	[FieldOffset(Offset = "0x98")]
	public bool localFlipsWinding;

	[Token(Token = "0x400140D")]
	[FieldOffset(Offset = "0x99")]
	public bool worldFlipsWinding;

	[Token(Token = "0x400140E")]
	[FieldOffset(Offset = "0x9C")]
	public ClipMethod clipMethod;

	[Token(Token = "0x400140F")]
	[FieldOffset(Offset = "0xA0")]
	public int childrenStencilRef;

	[Token(Token = "0x4001410")]
	[FieldOffset(Offset = "0xA4")]
	public int childrenMaskDepth;

	[Token(Token = "0x4001411")]
	[FieldOffset(Offset = "0xA8")]
	public MeshHandle headMesh;

	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0xB0")]
	public MeshHandle tailMesh;

	[Token(Token = "0x4001413")]
	[FieldOffset(Offset = "0xB8")]
	public Matrix4x4 verticesSpace;

	[Token(Token = "0x4001414")]
	[FieldOffset(Offset = "0xF8")]
	public BMPAlloc transformID;

	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0x100")]
	public BMPAlloc clipRectID;

	[Token(Token = "0x4001416")]
	[FieldOffset(Offset = "0x108")]
	public BMPAlloc opacityID;

	[Token(Token = "0x4001417")]
	[FieldOffset(Offset = "0x110")]
	public BMPAlloc textCoreSettingsID;

	[Token(Token = "0x4001418")]
	[FieldOffset(Offset = "0x118")]
	public BMPAlloc colorID;

	[Token(Token = "0x4001419")]
	[FieldOffset(Offset = "0x120")]
	public BMPAlloc backgroundColorID;

	[Token(Token = "0x400141A")]
	[FieldOffset(Offset = "0x128")]
	public BMPAlloc borderLeftColorID;

	[Token(Token = "0x400141B")]
	[FieldOffset(Offset = "0x130")]
	public BMPAlloc borderTopColorID;

	[Token(Token = "0x400141C")]
	[FieldOffset(Offset = "0x138")]
	public BMPAlloc borderRightColorID;

	[Token(Token = "0x400141D")]
	[FieldOffset(Offset = "0x140")]
	public BMPAlloc borderBottomColorID;

	[Token(Token = "0x400141E")]
	[FieldOffset(Offset = "0x148")]
	public BMPAlloc tintColorID;

	[Token(Token = "0x400141F")]
	[FieldOffset(Offset = "0x150")]
	public float compositeOpacity;

	[Token(Token = "0x4001420")]
	[FieldOffset(Offset = "0x154")]
	public float backgroundAlpha;

	[Token(Token = "0x4001421")]
	[FieldOffset(Offset = "0x158")]
	public BasicNode<GraphicEntry> graphicEntries;

	[Token(Token = "0x4001422")]
	[FieldOffset(Offset = "0x160")]
	public bool pendingRepaint;

	[Token(Token = "0x4001423")]
	[FieldOffset(Offset = "0x161")]
	public bool pendingHierarchicalRepaint;

	[Token(Token = "0x4001424")]
	[FieldOffset(Offset = "0x164")]
	private Rect m_ClippingRect;

	[Token(Token = "0x4001425")]
	[FieldOffset(Offset = "0x174")]
	private Rect m_ClippingRectMinusGroup;

	[Token(Token = "0x4001426")]
	[FieldOffset(Offset = "0x184")]
	private bool m_ClippingRectIsInfinite;

	[Token(Token = "0x17000A67")]
	public bool isGroupTransform
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A03")]
		[Address(RVA = "0x6B972F0", Offset = "0x6B962F0", VA = "0x6B972F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A68")]
	public bool isIgnoringDynamicColorHint
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A04")]
		[Address(RVA = "0x6B97300", Offset = "0x6B96300", VA = "0x6B97300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A69")]
	public bool hasExtraData
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A05")]
		[Address(RVA = "0x6B97310", Offset = "0x6B96310", VA = "0x6B97310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A6A")]
	public bool hasExtraMeshes
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A06")]
		[Address(RVA = "0x6B97320", Offset = "0x6B96320", VA = "0x6B97320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A6B")]
	public bool isSubTreeQuad
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A07")]
		[Address(RVA = "0x6B97330", Offset = "0x6B96330", VA = "0x6B97330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A6C")]
	public bool isNestedRenderTreeRoot
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A08")]
		[Address(RVA = "0x6B97340", Offset = "0x6B96340", VA = "0x6B97340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A6D")]
	public bool isClippingRectDirty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A09")]
		[Address(RVA = "0x6B97350", Offset = "0x6B96350", VA = "0x6B97350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A6E")]
	public Rect clippingRect
	{
		[Token(Token = "0x6002A0A")]
		[Address(RVA = "0x6B97360", Offset = "0x6B96360", VA = "0x6B97360")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6002A0B")]
		[Address(RVA = "0x6B97130", Offset = "0x6B96130", VA = "0x6B97130")]
		set
		{
		}
	}

	[Token(Token = "0x17000A6F")]
	public Rect clippingRectMinusGroup
	{
		[Token(Token = "0x6002A0C")]
		[Address(RVA = "0x6B97AA0", Offset = "0x6B96AA0", VA = "0x6B97AA0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6002A0D")]
		[Address(RVA = "0x6B97140", Offset = "0x6B96140", VA = "0x6B97140")]
		set
		{
		}
	}

	[Token(Token = "0x17000A70")]
	internal bool clippingRectIsInfinite
	{
		[Token(Token = "0x6002A0E")]
		[Address(RVA = "0x6B97AD0", Offset = "0x6B96AD0", VA = "0x6B97AD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A0F")]
		[Address(RVA = "0x6B97150", Offset = "0x6B96150", VA = "0x6B97150")]
		set
		{
		}
	}

	[Token(Token = "0x60029FF")]
	[Address(RVA = "0x6B96C20", Offset = "0x6B95C20", VA = "0x6B96C20")]
	public static bool AllocatesID(BMPAlloc alloc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A00")]
	[Address(RVA = "0x6B96C90", Offset = "0x6B95C90", VA = "0x6B96C90")]
	public static bool InheritsID(BMPAlloc alloc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A01")]
	[Address(RVA = "0x6B96D00", Offset = "0x6B95D00", VA = "0x6B96D00")]
	public void Init()
	{
	}

	[Token(Token = "0x6002A02")]
	[Address(RVA = "0x6B97160", Offset = "0x6B96160", VA = "0x6B97160")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002A10")]
	[Address(RVA = "0x6B97390", Offset = "0x6B96390", VA = "0x6B97390")]
	internal void UpdateClippingRect()
	{
	}

	[Token(Token = "0x6002A11")]
	[Address(RVA = "0x6B981F0", Offset = "0x6B971F0", VA = "0x6B981F0")]
	private static Rect IntersectClipRects(Rect rect, Rect parentRect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x6B97AF0", Offset = "0x6B96AF0", VA = "0x6B97AF0")]
	private static void GetLocalClippingRect(VisualElement owner, out Rect localRect)
	{
	}

	[Token(Token = "0x6002A13")]
	[Address(RVA = "0x6B982A0", Offset = "0x6B972A0", VA = "0x6B982A0")]
	public RenderData()
	{
	}
}
