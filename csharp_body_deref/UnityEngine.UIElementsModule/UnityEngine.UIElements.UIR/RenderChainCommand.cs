// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderChainCommand
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E8")]
internal class RenderChainCommand : LinkedPoolItem<RenderChainCommand>
{
	[Token(Token = "0x4001608")]
	[FieldOffset(Offset = "0x18")]
	public RenderData owner;

	[Token(Token = "0x4001609")]
	[FieldOffset(Offset = "0x20")]
	public RenderChainCommand prev;

	[Token(Token = "0x400160A")]
	[FieldOffset(Offset = "0x28")]
	public RenderChainCommand next;

	[Token(Token = "0x400160B")]
	[FieldOffset(Offset = "0x30")]
	public CommandType type;

	[Token(Token = "0x400160C")]
	[FieldOffset(Offset = "0x34")]
	public CommandFlags flags;

	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x38")]
	public Material material;

	[Token(Token = "0x400160E")]
	[FieldOffset(Offset = "0x40")]
	public MaterialPropertyBlock userProps;

	[Token(Token = "0x400160F")]
	[FieldOffset(Offset = "0x48")]
	public TextureId texture;

	[Token(Token = "0x4001610")]
	[FieldOffset(Offset = "0x4C")]
	public int stencilRef;

	[Token(Token = "0x4001611")]
	[FieldOffset(Offset = "0x50")]
	public float sdfScale;

	[Token(Token = "0x4001612")]
	[FieldOffset(Offset = "0x54")]
	public float sharpness;

	[Token(Token = "0x4001613")]
	[FieldOffset(Offset = "0x58")]
	public MeshHandle mesh;

	[Token(Token = "0x4001614")]
	[FieldOffset(Offset = "0x60")]
	public int indexOffset;

	[Token(Token = "0x4001615")]
	[FieldOffset(Offset = "0x64")]
	public int indexCount;

	[Token(Token = "0x4001616")]
	[FieldOffset(Offset = "0x68")]
	public Action callback;

	[Token(Token = "0x4001617")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_ImmediateOverheadMarker;

	[Token(Token = "0x6002BBD")]
	[Address(RVA = "0x6BA9A70", Offset = "0x6BA8A70", VA = "0x6BA9A70")]
	public RenderChainCommand()
	{
	}

	[Token(Token = "0x6002BBE")]
	[Address(RVA = "0x6BA9AD0", Offset = "0x6BA8AD0", VA = "0x6BA9AD0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002BBF")]
	[Address(RVA = "0x6BB8040", Offset = "0x6BB7040", VA = "0x6BB8040")]
	public void ExecuteNonDrawMesh(DrawParams drawParams, float pixelsPerPoint, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6002BC0")]
	[Address(RVA = "0x6BB79E0", Offset = "0x6BB69E0", VA = "0x6BB79E0")]
	public static void PushScissor(DrawParams drawParams, Rect scissor, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002BC1")]
	[Address(RVA = "0x6BB8840", Offset = "0x6BB7840", VA = "0x6BB8840")]
	public static void PopScissor(DrawParams drawParams, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002BC2")]
	[Address(RVA = "0x6BBB2D0", Offset = "0x6BBA2D0", VA = "0x6BBB2D0")]
	private static Rect CombineScissorRects(Rect r0, Rect r1)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002BC3")]
	[Address(RVA = "0x6BBACE0", Offset = "0x6BB9CE0", VA = "0x6BBACE0")]
	private static RectInt RectPointsToPixelsAndFlipYAxis(Rect rect, Vector2 boundsMin, float pixelsPerPoint)
	{
		return default(RectInt);
	}
}
