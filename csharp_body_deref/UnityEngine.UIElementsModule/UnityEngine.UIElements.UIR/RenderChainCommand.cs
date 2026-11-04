// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderChainCommand
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058E")]
internal class RenderChainCommand : LinkedPoolItem<RenderChainCommand>
{
	[Token(Token = "0x400135F")]
	[FieldOffset(Offset = "0x18")]
	public RenderData owner;

	[Token(Token = "0x4001360")]
	[FieldOffset(Offset = "0x20")]
	public RenderChainCommand prev;

	[Token(Token = "0x4001361")]
	[FieldOffset(Offset = "0x28")]
	public RenderChainCommand next;

	[Token(Token = "0x4001362")]
	[FieldOffset(Offset = "0x30")]
	public CommandType type;

	[Token(Token = "0x4001363")]
	[FieldOffset(Offset = "0x34")]
	public CommandFlags flags;

	[Token(Token = "0x4001364")]
	[FieldOffset(Offset = "0x38")]
	public Material material;

	[Token(Token = "0x4001365")]
	[FieldOffset(Offset = "0x40")]
	public MaterialPropertyBlock userProps;

	[Token(Token = "0x4001366")]
	[FieldOffset(Offset = "0x48")]
	public TextureId texture;

	[Token(Token = "0x4001367")]
	[FieldOffset(Offset = "0x4C")]
	public int stencilRef;

	[Token(Token = "0x4001368")]
	[FieldOffset(Offset = "0x50")]
	public float sdfScale;

	[Token(Token = "0x4001369")]
	[FieldOffset(Offset = "0x54")]
	public float sharpness;

	[Token(Token = "0x400136A")]
	[FieldOffset(Offset = "0x58")]
	public MeshHandle mesh;

	[Token(Token = "0x400136B")]
	[FieldOffset(Offset = "0x60")]
	public int indexOffset;

	[Token(Token = "0x400136C")]
	[FieldOffset(Offset = "0x64")]
	public int indexCount;

	[Token(Token = "0x400136D")]
	[FieldOffset(Offset = "0x68")]
	public Action callback;

	[Token(Token = "0x400136E")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_ImmediateOverheadMarker;

	[Token(Token = "0x6002983")]
	[Address(RVA = "0x31840A0", Offset = "0x31826A0", VA = "0x1831840A0")]
	public RenderChainCommand()
	{
	}

	[Token(Token = "0x6002984")]
	[Address(RVA = "0x3183F60", Offset = "0x3182560", VA = "0x183183F60")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002985")]
	[Address(RVA = "0x31830B0", Offset = "0x31816B0", VA = "0x1831830B0")]
	public void ExecuteNonDrawMesh(DrawParams drawParams, float pixelsPerPoint, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6002986")]
	[Address(RVA = "0x3183B60", Offset = "0x3182160", VA = "0x183183B60")]
	public static void PushScissor(DrawParams drawParams, Rect scissor, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002987")]
	[Address(RVA = "0x3183930", Offset = "0x3181F30", VA = "0x183183930")]
	public static void PopScissor(DrawParams drawParams, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002988")]
	[Address(RVA = "0x3182F70", Offset = "0x3181570", VA = "0x183182F70")]
	private static Rect CombineScissorRects(Rect r0, Rect r1)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002989")]
	[Address(RVA = "0x3183E10", Offset = "0x3182410", VA = "0x183183E10")]
	private static RectInt RectPointsToPixelsAndFlipYAxis(Rect rect, Vector2 boundsMin, float pixelsPerPoint)
	{
		return default(RectInt);
	}
}
