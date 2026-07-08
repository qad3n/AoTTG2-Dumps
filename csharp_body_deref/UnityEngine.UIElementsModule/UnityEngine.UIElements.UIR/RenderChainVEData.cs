using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004C4")]
internal struct RenderChainVEData
{
	[Token(Token = "0x4000F3D")]
	[FieldOffset(Offset = "0x0")]
	internal VisualElement prev;

	[Token(Token = "0x4000F3E")]
	[FieldOffset(Offset = "0x8")]
	internal VisualElement next;

	[Token(Token = "0x4000F3F")]
	[FieldOffset(Offset = "0x10")]
	internal VisualElement groupTransformAncestor;

	[Token(Token = "0x4000F40")]
	[FieldOffset(Offset = "0x18")]
	internal VisualElement boneTransformAncestor;

	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0x20")]
	internal VisualElement prevDirty;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x28")]
	internal VisualElement nextDirty;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x30")]
	internal RenderDataFlags flags;

	[Token(Token = "0x4000F44")]
	[FieldOffset(Offset = "0x34")]
	internal int hierarchyDepth;

	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x38")]
	internal RenderDataDirtyTypes dirtiedValues;

	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x3C")]
	internal uint dirtyID;

	[Token(Token = "0x4000F47")]
	[FieldOffset(Offset = "0x40")]
	internal RenderChainCommand firstHeadCommand;

	[Token(Token = "0x4000F48")]
	[FieldOffset(Offset = "0x48")]
	internal RenderChainCommand lastHeadCommand;

	[Token(Token = "0x4000F49")]
	[FieldOffset(Offset = "0x50")]
	internal RenderChainCommand firstTailCommand;

	[Token(Token = "0x4000F4A")]
	[FieldOffset(Offset = "0x58")]
	internal RenderChainCommand lastTailCommand;

	[Token(Token = "0x4000F4B")]
	[FieldOffset(Offset = "0x60")]
	internal bool isInChain;

	[Token(Token = "0x4000F4C")]
	[FieldOffset(Offset = "0x61")]
	internal bool localFlipsWinding;

	[Token(Token = "0x4000F4D")]
	[FieldOffset(Offset = "0x62")]
	internal bool localTransformScaleZero;

	[Token(Token = "0x4000F4E")]
	[FieldOffset(Offset = "0x63")]
	internal bool worldFlipsWinding;

	[Token(Token = "0x4000F4F")]
	[FieldOffset(Offset = "0x64")]
	internal ClipMethod clipMethod;

	[Token(Token = "0x4000F50")]
	[FieldOffset(Offset = "0x68")]
	internal int childrenStencilRef;

	[Token(Token = "0x4000F51")]
	[FieldOffset(Offset = "0x6C")]
	internal int childrenMaskDepth;

	[Token(Token = "0x4000F52")]
	[FieldOffset(Offset = "0x70")]
	internal MeshHandle headMesh;

	[Token(Token = "0x4000F53")]
	[FieldOffset(Offset = "0x78")]
	internal MeshHandle tailMesh;

	[Token(Token = "0x4000F54")]
	[FieldOffset(Offset = "0x80")]
	internal Matrix4x4 verticesSpace;

	[Token(Token = "0x4000F55")]
	[FieldOffset(Offset = "0xC0")]
	internal BMPAlloc transformID;

	[Token(Token = "0x4000F56")]
	[FieldOffset(Offset = "0xC8")]
	internal BMPAlloc clipRectID;

	[Token(Token = "0x4000F57")]
	[FieldOffset(Offset = "0xD0")]
	internal BMPAlloc opacityID;

	[Token(Token = "0x4000F58")]
	[FieldOffset(Offset = "0xD8")]
	internal BMPAlloc textCoreSettingsID;

	[Token(Token = "0x4000F59")]
	[FieldOffset(Offset = "0xE0")]
	internal BMPAlloc colorID;

	[Token(Token = "0x4000F5A")]
	[FieldOffset(Offset = "0xE8")]
	internal BMPAlloc backgroundColorID;

	[Token(Token = "0x4000F5B")]
	[FieldOffset(Offset = "0xF0")]
	internal BMPAlloc borderLeftColorID;

	[Token(Token = "0x4000F5C")]
	[FieldOffset(Offset = "0xF8")]
	internal BMPAlloc borderTopColorID;

	[Token(Token = "0x4000F5D")]
	[FieldOffset(Offset = "0x100")]
	internal BMPAlloc borderRightColorID;

	[Token(Token = "0x4000F5E")]
	[FieldOffset(Offset = "0x108")]
	internal BMPAlloc borderBottomColorID;

	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x110")]
	internal BMPAlloc tintColorID;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x118")]
	internal float compositeOpacity;

	[Token(Token = "0x4000F61")]
	[FieldOffset(Offset = "0x11C")]
	internal float backgroundAlpha;

	[Token(Token = "0x4000F62")]
	[FieldOffset(Offset = "0x120")]
	internal BasicNode<TextureEntry> textures;

	[Token(Token = "0x4000F63")]
	[FieldOffset(Offset = "0x128")]
	internal bool pendingRepaint;

	[Token(Token = "0x4000F64")]
	[FieldOffset(Offset = "0x129")]
	internal bool pendingHierarchicalRepaint;

	[Token(Token = "0x17000785")]
	internal RenderChainCommand lastTailOrHeadCommand
	{
		[Token(Token = "0x6001D92")]
		[Address(RVA = "0x4C77910", Offset = "0x4C77910", VA = "0x4C77910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000786")]
	public bool isIgnoringDynamicColorHint
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001D95")]
		[Address(RVA = "0x4C77990", Offset = "0x4C77990", VA = "0x4C77990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x4C75FC0", Offset = "0x4C75FC0", VA = "0x4C75FC0")]
	internal static bool AllocatesID(BMPAlloc alloc)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x4C77930", Offset = "0x4C77930", VA = "0x4C77930")]
	internal static bool InheritsID(BMPAlloc alloc)
	{
		return default(bool);
	}
}
