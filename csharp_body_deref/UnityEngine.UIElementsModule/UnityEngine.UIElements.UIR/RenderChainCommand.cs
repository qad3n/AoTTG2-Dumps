using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004F2")]
internal class RenderChainCommand : LinkedPoolItem<RenderChainCommand>
{
	[Token(Token = "0x4001077")]
	[FieldOffset(Offset = "0x18")]
	internal VisualElement owner;

	[Token(Token = "0x4001078")]
	[FieldOffset(Offset = "0x20")]
	internal RenderChainCommand prev;

	[Token(Token = "0x4001079")]
	[FieldOffset(Offset = "0x28")]
	internal RenderChainCommand next;

	[Token(Token = "0x400107A")]
	[FieldOffset(Offset = "0x30")]
	internal bool isTail;

	[Token(Token = "0x400107B")]
	[FieldOffset(Offset = "0x34")]
	internal CommandType type;

	[Token(Token = "0x400107C")]
	[FieldOffset(Offset = "0x38")]
	internal State state;

	[Token(Token = "0x400107D")]
	[FieldOffset(Offset = "0x50")]
	internal MeshHandle mesh;

	[Token(Token = "0x400107E")]
	[FieldOffset(Offset = "0x58")]
	internal int indexOffset;

	[Token(Token = "0x400107F")]
	[FieldOffset(Offset = "0x5C")]
	internal int indexCount;

	[Token(Token = "0x4001080")]
	[FieldOffset(Offset = "0x60")]
	internal Action callback;

	[Token(Token = "0x4001081")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int k_ID_MainTex;

	[Token(Token = "0x4001082")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_ImmediateOverheadMarker;

	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x4C8B0D0", Offset = "0x4C8B0D0", VA = "0x4C8B0D0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x4C8B150", Offset = "0x4C8B150", VA = "0x4C8B150")]
	internal void ExecuteNonDrawMesh(DrawParams drawParams, float pixelsPerPoint, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x4C8C740", Offset = "0x4C8C740", VA = "0x4C8C740")]
	private void Blit(Texture source, RenderTexture destination, float depth)
	{
	}

	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x4C8C620", Offset = "0x4C8C620", VA = "0x4C8C620")]
	private static Rect CombineScissorRects(Rect r0, Rect r1)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x4C8C110", Offset = "0x4C8C110", VA = "0x4C8C110")]
	private static RectInt RectPointsToPixelsAndFlipYAxis(Rect rect, float pixelsPerPoint)
	{
		return default(RectInt);
	}

	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x4C8C8B0", Offset = "0x4C8C8B0", VA = "0x4C8C8B0")]
	public RenderChainCommand()
	{
	}
}
