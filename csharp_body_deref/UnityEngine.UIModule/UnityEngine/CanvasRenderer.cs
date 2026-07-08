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
		[Address(RVA = "0x4D92980", Offset = "0x4D92980", VA = "0x4D92980")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int materialCount
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4D92A60", Offset = "0x4D92A60", VA = "0x4D92A60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4D92B30", Offset = "0x4D92B30", VA = "0x4D92B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public int popMaterialCount
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4D92C10", Offset = "0x4D92C10", VA = "0x4D92C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int absoluteDepth
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4D92CF0", Offset = "0x4D92CF0", VA = "0x4D92CF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public bool hasMoved
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4D92DC0", Offset = "0x4D92DC0", VA = "0x4D92DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool cullTransparentMesh
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4D92E90", Offset = "0x4D92E90", VA = "0x4D92E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4D92F60", Offset = "0x4D92F60", VA = "0x4D92F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("ShouldCull", false, UnityEngine.Bindings.TargetType.Function)]
	public bool cull
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4D93040", Offset = "0x4D93040", VA = "0x4D93040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4D93110", Offset = "0x4D93110", VA = "0x4D93110")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector2 clippingSoftness
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4D934D0", Offset = "0x4D934D0", VA = "0x4D934D0")]
		set
		{
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4D931F0", Offset = "0x4D931F0", VA = "0x4D931F0")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4D932E0", Offset = "0x4D932E0", VA = "0x4D932E0")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4D933E0", Offset = "0x4D933E0", VA = "0x4D933E0")]
	public void EnableRectClipping(Rect rect)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4D935C0", Offset = "0x4D935C0", VA = "0x4D935C0")]
	public void DisableRectClipping()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4D93690", Offset = "0x4D93690", VA = "0x4D93690")]
	public void SetMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4D937D0", Offset = "0x4D937D0", VA = "0x4D937D0")]
	public Material GetMaterial(int index)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4D938B0", Offset = "0x4D938B0", VA = "0x4D938B0")]
	public void SetPopMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4D939F0", Offset = "0x4D939F0", VA = "0x4D939F0")]
	public void SetTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4D93B30", Offset = "0x4D93B30", VA = "0x4D93B30")]
	public void SetAlphaTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4D93C70", Offset = "0x4D93C70", VA = "0x4D93C70")]
	public void SetMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4D93DB0", Offset = "0x4D93DB0", VA = "0x4D93DB0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4D93E80", Offset = "0x4D93E80", VA = "0x4D93E80")]
	public void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4D93F40", Offset = "0x4D93F40", VA = "0x4D93F40")]
	public void SetMaterial(Material material, Texture texture)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4D940F0", Offset = "0x4D940F0", VA = "0x4D940F0")]
	public Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4D94190", Offset = "0x4D94190", VA = "0x4D94190")]
	public static void SplitUIVertexStreams(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4D94300", Offset = "0x4D94300", VA = "0x4D94300")]
	public static void CreateUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4D943C0", Offset = "0x4D943C0", VA = "0x4D943C0")]
	public static void AddUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4D942C0", Offset = "0x4D942C0", VA = "0x4D942C0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitIndicesStreamsInternal(object verts, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4D94260", Offset = "0x4D94260", VA = "0x4D94260")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitUIVertexStreamsInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4D94360", Offset = "0x4D94360", VA = "0x4D94360")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void CreateUIVertexStreamInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4D92A20", Offset = "0x4D92A20", VA = "0x4D92A20")]
	private static extern void set_hasPopInstruction_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4D92B00", Offset = "0x4D92B00", VA = "0x4D92B00")]
	private static extern int get_materialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4D92BD0", Offset = "0x4D92BD0", VA = "0x4D92BD0")]
	private static extern void set_materialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4D92CB0", Offset = "0x4D92CB0", VA = "0x4D92CB0")]
	private static extern void set_popMaterialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4D92D90", Offset = "0x4D92D90", VA = "0x4D92D90")]
	private static extern int get_absoluteDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4D92E60", Offset = "0x4D92E60", VA = "0x4D92E60")]
	private static extern bool get_hasMoved_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4D92F30", Offset = "0x4D92F30", VA = "0x4D92F30")]
	private static extern bool get_cullTransparentMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4D93000", Offset = "0x4D93000", VA = "0x4D93000")]
	private static extern void set_cullTransparentMesh_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4D930E0", Offset = "0x4D930E0", VA = "0x4D930E0")]
	private static extern bool get_cull_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4D931B0", Offset = "0x4D931B0", VA = "0x4D931B0")]
	private static extern void set_cull_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4D932A0", Offset = "0x4D932A0", VA = "0x4D932A0")]
	private static extern void SetColor_Injected(IntPtr _unity_self, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4D933A0", Offset = "0x4D933A0", VA = "0x4D933A0")]
	private static extern void GetColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4D93490", Offset = "0x4D93490", VA = "0x4D93490")]
	private static extern void EnableRectClipping_Injected(IntPtr _unity_self, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4D93580", Offset = "0x4D93580", VA = "0x4D93580")]
	private static extern void set_clippingSoftness_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4D93660", Offset = "0x4D93660", VA = "0x4D93660")]
	private static extern void DisableRectClipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4D93790", Offset = "0x4D93790", VA = "0x4D93790")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4D93870", Offset = "0x4D93870", VA = "0x4D93870")]
	private static extern Material GetMaterial_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4D939B0", Offset = "0x4D939B0", VA = "0x4D939B0")]
	private static extern void SetPopMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4D93AF0", Offset = "0x4D93AF0", VA = "0x4D93AF0")]
	private static extern void SetTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4D93C30", Offset = "0x4D93C30", VA = "0x4D93C30")]
	private static extern void SetAlphaTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4D93D70", Offset = "0x4D93D70", VA = "0x4D93D70")]
	private static extern void SetMesh_Injected(IntPtr _unity_self, IntPtr mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4D93E50", Offset = "0x4D93E50", VA = "0x4D93E50")]
	private static extern void Clear_Injected(IntPtr _unity_self);
}
