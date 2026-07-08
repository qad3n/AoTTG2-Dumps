using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.U2D;

[Token(Token = "0x2000333")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Renderer/SpriteRendererGroup.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct SpriteIntermediateRendererInfo
{
	[Token(Token = "0x4000A2F")]
	[FieldOffset(Offset = "0x0")]
	public int SpriteID;

	[Token(Token = "0x4000A30")]
	[FieldOffset(Offset = "0x4")]
	public int TextureID;

	[Token(Token = "0x4000A31")]
	[FieldOffset(Offset = "0x8")]
	public int MaterialID;

	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0xC")]
	public Color Color;

	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0x1C")]
	public Matrix4x4 Transform;

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0x5C")]
	public Bounds Bounds;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x74")]
	public int Layer;

	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x78")]
	public int SortingLayer;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x7C")]
	public int SortingOrder;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x80")]
	public ulong SceneCullingMask;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x88")]
	public IntPtr IndexData;

	[Token(Token = "0x4000A3A")]
	[FieldOffset(Offset = "0x90")]
	public IntPtr VertexData;

	[Token(Token = "0x4000A3B")]
	[FieldOffset(Offset = "0x98")]
	public int IndexCount;

	[Token(Token = "0x4000A3C")]
	[FieldOffset(Offset = "0x9C")]
	public int VertexCount;

	[Token(Token = "0x4000A3D")]
	[FieldOffset(Offset = "0xA0")]
	public int ShaderChannelMask;
}
