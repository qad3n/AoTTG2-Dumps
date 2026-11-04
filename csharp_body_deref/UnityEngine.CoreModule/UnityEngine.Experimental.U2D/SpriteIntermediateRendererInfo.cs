// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.U2D;

[Token(Token = "0x20003FE")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Renderer/SpriteRendererGroup.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct SpriteIntermediateRendererInfo
{
	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0x0")]
	public int SpriteID;

	[Token(Token = "0x4000DFA")]
	[FieldOffset(Offset = "0x4")]
	public int TextureID;

	[Token(Token = "0x4000DFB")]
	[FieldOffset(Offset = "0x8")]
	public int MaterialID;

	[Token(Token = "0x4000DFC")]
	[FieldOffset(Offset = "0xC")]
	public Color Color;

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0x1C")]
	public Matrix4x4 Transform;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x5C")]
	public Bounds Bounds;

	[Token(Token = "0x4000DFF")]
	[FieldOffset(Offset = "0x74")]
	public int Layer;

	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0x78")]
	public int SortingLayer;

	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x7C")]
	public int SortingOrder;

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x80")]
	public ulong SceneCullingMask;

	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x88")]
	public IntPtr IndexData;

	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x90")]
	public IntPtr VertexData;

	[Token(Token = "0x4000E05")]
	[FieldOffset(Offset = "0x98")]
	public int IndexCount;

	[Token(Token = "0x4000E06")]
	[FieldOffset(Offset = "0x9C")]
	public int VertexCount;

	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0xA0")]
	public int ShaderChannelMask;
}
