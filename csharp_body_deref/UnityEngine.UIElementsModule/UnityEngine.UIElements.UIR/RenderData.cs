// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BB")]
internal class RenderData
{
	[Token(Token = "0x40014B7")]
	[FieldOffset(Offset = "0x10")]
	public VisualElement owner;

	[Token(Token = "0x40014B8")]
	[FieldOffset(Offset = "0x18")]
	public RenderTree renderTree;

	[Token(Token = "0x40014B9")]
	[FieldOffset(Offset = "0x20")]
	public RenderData parent;

	[Token(Token = "0x40014BA")]
	[FieldOffset(Offset = "0x28")]
	public RenderData prevSibling;

	[Token(Token = "0x40014BB")]
	[FieldOffset(Offset = "0x30")]
	public RenderData nextSibling;

	[Token(Token = "0x40014BC")]
	[FieldOffset(Offset = "0x38")]
	public RenderData firstChild;

	[Token(Token = "0x40014BD")]
	[FieldOffset(Offset = "0x40")]
	public RenderData lastChild;

	[Token(Token = "0x40014BE")]
	[FieldOffset(Offset = "0x48")]
	public RenderData groupTransformAncestor;

	[Token(Token = "0x40014BF")]
	[FieldOffset(Offset = "0x50")]
	public RenderData boneTransformAncestor;

	[Token(Token = "0x40014C0")]
	[FieldOffset(Offset = "0x58")]
	public RenderData prevDirty;

	[Token(Token = "0x40014C1")]
	[FieldOffset(Offset = "0x60")]
	public RenderData nextDirty;

	[Token(Token = "0x40014C2")]
	[FieldOffset(Offset = "0x68")]
	public RenderDataFlags flags;

	[Token(Token = "0x40014C3")]
	[FieldOffset(Offset = "0x6C")]
	public int depthInRenderTree;

	[Token(Token = "0x40014C4")]
	[FieldOffset(Offset = "0x70")]
	public RenderDataDirtyTypes dirtiedValues;

	[Token(Token = "0x40014C5")]
	[FieldOffset(Offset = "0x74")]
	public uint dirtyID;

	[Token(Token = "0x40014C6")]
	[FieldOffset(Offset = "0x78")]
	public RenderChainCommand firstHeadCommand;

	[Token(Token = "0x40014C7")]
	[FieldOffset(Offset = "0x80")]
	public RenderChainCommand lastHeadCommand;

	[Token(Token = "0x40014C8")]
	[FieldOffset(Offset = "0x88")]
	public RenderChainCommand firstTailCommand;

	[Token(Token = "0x40014C9")]
	[FieldOffset(Offset = "0x90")]
	public RenderChainCommand lastTailCommand;

	[Token(Token = "0x40014CA")]
	[FieldOffset(Offset = "0x98")]
	public bool localFlipsWinding;

	[Token(Token = "0x40014CB")]
	[FieldOffset(Offset = "0x99")]
	public bool worldFlipsWinding;

	[Token(Token = "0x40014CC")]
	[FieldOffset(Offset = "0x9C")]
	public ClipMethod clipMethod;

	[Token(Token = "0x40014CD")]
	[FieldOffset(Offset = "0xA0")]
	public int childrenStencilRef;

	[Token(Token = "0x40014CE")]
	[FieldOffset(Offset = "0xA4")]
	public int childrenMaskDepth;

	[Token(Token = "0x40014CF")]
	[FieldOffset(Offset = "0xA8")]
	public MeshHandle headMesh;

	[Token(Token = "0x40014D0")]
	[FieldOffset(Offset = "0xB0")]
	public MeshHandle tailMesh;

	[Token(Token = "0x40014D1")]
	[FieldOffset(Offset = "0xB8")]
	public Matrix4x4 verticesSpace;

	[Token(Token = "0x40014D2")]
	[FieldOffset(Offset = "0xF8")]
	public BMPAlloc transformID;

	[Token(Token = "0x40014D3")]
	[FieldOffset(Offset = "0x100")]
	public BMPAlloc clipRectID;

	[Token(Token = "0x40014D4")]
	[FieldOffset(Offset = "0x108")]
	public BMPAlloc opacityID;

	[Token(Token = "0x40014D5")]
	[FieldOffset(Offset = "0x110")]
	public BMPAlloc textCoreSettingsID;

	[Token(Token = "0x40014D6")]
	[FieldOffset(Offset = "0x118")]
	public BMPAlloc colorID;

	[Token(Token = "0x40014D7")]
	[FieldOffset(Offset = "0x120")]
	public BMPAlloc backgroundColorID;

	[Token(Token = "0x40014D8")]
	[FieldOffset(Offset = "0x128")]
	public BMPAlloc borderLeftColorID;

	[Token(Token = "0x40014D9")]
	[FieldOffset(Offset = "0x130")]
	public BMPAlloc borderTopColorID;

	[Token(Token = "0x40014DA")]
	[FieldOffset(Offset = "0x138")]
	public BMPAlloc borderRightColorID;

	[Token(Token = "0x40014DB")]
	[FieldOffset(Offset = "0x140")]
	public BMPAlloc borderBottomColorID;

	[Token(Token = "0x40014DC")]
	[FieldOffset(Offset = "0x148")]
	public BMPAlloc tintColorID;

	[Token(Token = "0x40014DD")]
	[FieldOffset(Offset = "0x150")]
	public float compositeOpacity;

	[Token(Token = "0x40014DE")]
	[FieldOffset(Offset = "0x154")]
	public float backgroundAlpha;

	[Token(Token = "0x40014DF")]
	[FieldOffset(Offset = "0x158")]
	public BasicNode<GraphicEntry> graphicEntries;

	[Token(Token = "0x40014E0")]
	[FieldOffset(Offset = "0x160")]
	public bool pendingRepaint;

	[Token(Token = "0x40014E1")]
	[FieldOffset(Offset = "0x161")]
	public bool pendingHierarchicalRepaint;

	[Token(Token = "0x40014E2")]
	[FieldOffset(Offset = "0x164")]
	private Rect m_ClippingRect;

	[Token(Token = "0x40014E3")]
	[FieldOffset(Offset = "0x174")]
	private Rect m_ClippingRectMinusGroup;

	[Token(Token = "0x40014E4")]
	[FieldOffset(Offset = "0x184")]
	private bool m_ClippingRectIsInfinite;

	[Token(Token = "0x17000A73")]
	public bool isGroupTransform
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A64")]
		[Address(RVA = "0x319AFD0", Offset = "0x31995D0", VA = "0x18319AFD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A74")]
	public bool isIgnoringDynamicColorHint
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A65")]
		[Address(RVA = "0x319AFE0", Offset = "0x31995E0", VA = "0x18319AFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A75")]
	public bool hasExtraData
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x319AFA0", Offset = "0x31995A0", VA = "0x18319AFA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A76")]
	public bool hasExtraMeshes
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A67")]
		[Address(RVA = "0x319AFB0", Offset = "0x31995B0", VA = "0x18319AFB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A77")]
	public bool isSubTreeQuad
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x319B000", Offset = "0x3199600", VA = "0x18319B000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A78")]
	public bool isNestedRenderTreeRoot
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x319AFF0", Offset = "0x31995F0", VA = "0x18319AFF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A79")]
	public bool isClippingRectDirty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x319AFC0", Offset = "0x31995C0", VA = "0x18319AFC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7A")]
	public Rect clippingRect
	{
		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x319AF50", Offset = "0x3199550", VA = "0x18319AF50")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6002A6C")]
		[Address(RVA = "0x319B030", Offset = "0x3199630", VA = "0x18319B030")]
		set
		{
		}
	}

	[Token(Token = "0x17000A7B")]
	public Rect clippingRectMinusGroup
	{
		[Token(Token = "0x6002A6D")]
		[Address(RVA = "0x319AF00", Offset = "0x3199500", VA = "0x18319AF00")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6002A6E")]
		[Address(RVA = "0x319B020", Offset = "0x3199620", VA = "0x18319B020")]
		set
		{
		}
	}

	[Token(Token = "0x17000A7C")]
	internal bool clippingRectIsInfinite
	{
		[Token(Token = "0x6002A6F")]
		[Address(RVA = "0x319AEC0", Offset = "0x31994C0", VA = "0x18319AEC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A70")]
		[Address(RVA = "0x319B010", Offset = "0x3199610", VA = "0x18319B010")]
		set
		{
		}
	}

	[Token(Token = "0x6002A60")]
	[Address(RVA = "0x3199C70", Offset = "0x3198270", VA = "0x183199C70")]
	public static bool AllocatesID(BMPAlloc alloc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A61")]
	[Address(RVA = "0x3199F90", Offset = "0x3198590", VA = "0x183199F90")]
	public static bool InheritsID(BMPAlloc alloc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x3199FF0", Offset = "0x31985F0", VA = "0x183199FF0")]
	public void Init()
	{
	}

	[Token(Token = "0x6002A63")]
	[Address(RVA = "0x319A4D0", Offset = "0x3198AD0", VA = "0x18319A4D0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002A71")]
	[Address(RVA = "0x319A620", Offset = "0x3198C20", VA = "0x18319A620")]
	internal void UpdateClippingRect()
	{
	}

	[Token(Token = "0x6002A72")]
	[Address(RVA = "0x319A3F0", Offset = "0x31989F0", VA = "0x18319A3F0")]
	private static Rect IntersectClipRects(Rect rect, Rect parentRect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002A73")]
	[Address(RVA = "0x3199CD0", Offset = "0x31982D0", VA = "0x183199CD0")]
	private static void GetLocalClippingRect(VisualElement owner, out Rect localRect)
	{
	}

	[Token(Token = "0x6002A74")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RenderData()
	{
	}
}
