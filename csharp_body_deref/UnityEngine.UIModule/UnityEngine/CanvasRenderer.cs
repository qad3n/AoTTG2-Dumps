// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CanvasRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasRenderer.h")]
[UnityEngine.NativeClass("UI::CanvasRenderer")]
public sealed class CanvasRenderer : Component
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CisMask_003Ek__BackingField;

	[Token(Token = "0x17000005")]
	public bool hasPopInstruction
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x50BA2B0", Offset = "0x50BA2B0", VA = "0x50BA2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int materialCount
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x50BA390", Offset = "0x50BA390", VA = "0x50BA390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x50BA460", Offset = "0x50BA460", VA = "0x50BA460")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public int popMaterialCount
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x50BA540", Offset = "0x50BA540", VA = "0x50BA540")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int absoluteDepth
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x50BA620", Offset = "0x50BA620", VA = "0x50BA620")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public bool hasMoved
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x50BA6F0", Offset = "0x50BA6F0", VA = "0x50BA6F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool cullTransparentMesh
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x50BA7C0", Offset = "0x50BA7C0", VA = "0x50BA7C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x50BA890", Offset = "0x50BA890", VA = "0x50BA890")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("ShouldCull", false, UnityEngine.Bindings.TargetType.Function)]
	public bool cull
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x50BA970", Offset = "0x50BA970", VA = "0x50BA970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x50BAA40", Offset = "0x50BAA40", VA = "0x50BAA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector2 clippingSoftness
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x50BAE00", Offset = "0x50BAE00", VA = "0x50BAE00")]
		set
		{
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x50BAB20", Offset = "0x50BAB20", VA = "0x50BAB20")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x50BAC10", Offset = "0x50BAC10", VA = "0x50BAC10")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x50BAD10", Offset = "0x50BAD10", VA = "0x50BAD10")]
	public void EnableRectClipping(Rect rect)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x50BAEF0", Offset = "0x50BAEF0", VA = "0x50BAEF0")]
	public void DisableRectClipping()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x50BAFC0", Offset = "0x50BAFC0", VA = "0x50BAFC0")]
	public void SetMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x50BB100", Offset = "0x50BB100", VA = "0x50BB100")]
	public Material GetMaterial(int index)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x50BB1E0", Offset = "0x50BB1E0", VA = "0x50BB1E0")]
	public void SetPopMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x50BB320", Offset = "0x50BB320", VA = "0x50BB320")]
	public void SetTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x50BB460", Offset = "0x50BB460", VA = "0x50BB460")]
	public void SetAlphaTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x50BB5A0", Offset = "0x50BB5A0", VA = "0x50BB5A0")]
	public void SetMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x50BB6E0", Offset = "0x50BB6E0", VA = "0x50BB6E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x50BB7B0", Offset = "0x50BB7B0", VA = "0x50BB7B0")]
	public void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x50BB870", Offset = "0x50BB870", VA = "0x50BB870")]
	public void SetMaterial(Material material, Texture texture)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x50BBA20", Offset = "0x50BBA20", VA = "0x50BBA20")]
	public Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x50BBAC0", Offset = "0x50BBAC0", VA = "0x50BBAC0")]
	public static void SplitUIVertexStreams(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x50BBC30", Offset = "0x50BBC30", VA = "0x50BBC30")]
	public static void CreateUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x50BBCF0", Offset = "0x50BBCF0", VA = "0x50BBCF0")]
	public static void AddUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x50BBBF0", Offset = "0x50BBBF0", VA = "0x50BBBF0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitIndicesStreamsInternal(object verts, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x50BBB90", Offset = "0x50BBB90", VA = "0x50BBB90")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitUIVertexStreamsInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x50BBC90", Offset = "0x50BBC90", VA = "0x50BBC90")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void CreateUIVertexStreamInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x50BA350", Offset = "0x50BA350", VA = "0x50BA350")]
	private static extern void set_hasPopInstruction_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x50BA430", Offset = "0x50BA430", VA = "0x50BA430")]
	private static extern int get_materialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x50BA500", Offset = "0x50BA500", VA = "0x50BA500")]
	private static extern void set_materialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x50BA5E0", Offset = "0x50BA5E0", VA = "0x50BA5E0")]
	private static extern void set_popMaterialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x50BA6C0", Offset = "0x50BA6C0", VA = "0x50BA6C0")]
	private static extern int get_absoluteDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x50BA790", Offset = "0x50BA790", VA = "0x50BA790")]
	private static extern bool get_hasMoved_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x50BA860", Offset = "0x50BA860", VA = "0x50BA860")]
	private static extern bool get_cullTransparentMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x50BA930", Offset = "0x50BA930", VA = "0x50BA930")]
	private static extern void set_cullTransparentMesh_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x50BAA10", Offset = "0x50BAA10", VA = "0x50BAA10")]
	private static extern bool get_cull_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x50BAAE0", Offset = "0x50BAAE0", VA = "0x50BAAE0")]
	private static extern void set_cull_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x50BABD0", Offset = "0x50BABD0", VA = "0x50BABD0")]
	private static extern void SetColor_Injected(IntPtr _unity_self, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x50BACD0", Offset = "0x50BACD0", VA = "0x50BACD0")]
	private static extern void GetColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x50BADC0", Offset = "0x50BADC0", VA = "0x50BADC0")]
	private static extern void EnableRectClipping_Injected(IntPtr _unity_self, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x50BAEB0", Offset = "0x50BAEB0", VA = "0x50BAEB0")]
	private static extern void set_clippingSoftness_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x50BAF90", Offset = "0x50BAF90", VA = "0x50BAF90")]
	private static extern void DisableRectClipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x50BB0C0", Offset = "0x50BB0C0", VA = "0x50BB0C0")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x50BB1A0", Offset = "0x50BB1A0", VA = "0x50BB1A0")]
	private static extern Material GetMaterial_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x50BB2E0", Offset = "0x50BB2E0", VA = "0x50BB2E0")]
	private static extern void SetPopMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x50BB420", Offset = "0x50BB420", VA = "0x50BB420")]
	private static extern void SetTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x50BB560", Offset = "0x50BB560", VA = "0x50BB560")]
	private static extern void SetAlphaTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x50BB6A0", Offset = "0x50BB6A0", VA = "0x50BB6A0")]
	private static extern void SetMesh_Injected(IntPtr _unity_self, IntPtr mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x50BB780", Offset = "0x50BB780", VA = "0x50BB780")]
	private static extern void Clear_Injected(IntPtr _unity_self);
}
