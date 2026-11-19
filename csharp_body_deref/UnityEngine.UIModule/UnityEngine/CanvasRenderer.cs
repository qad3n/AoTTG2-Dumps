// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CanvasRenderer
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000005")]
[UnityEngine.UIModuleHelpURL("class-CanvasRenderer")]
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
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6CC9900", Offset = "0x6CC8900", VA = "0x6CC9900")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int materialCount
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6CC99C0", Offset = "0x6CC89C0", VA = "0x6CC99C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x6CC9A70", Offset = "0x6CC8A70", VA = "0x6CC9A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public int popMaterialCount
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x6CC9B30", Offset = "0x6CC8B30", VA = "0x6CC9B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int absoluteDepth
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x6CC9BF0", Offset = "0x6CC8BF0", VA = "0x6CC9BF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public bool hasMoved
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x6CC9CA0", Offset = "0x6CC8CA0", VA = "0x6CC9CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool cullTransparentMesh
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x6CC9D50", Offset = "0x6CC8D50", VA = "0x6CC9D50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x6CC9E00", Offset = "0x6CC8E00", VA = "0x6CC9E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("ShouldCull", false, UnityEngine.Bindings.TargetType.Function)]
	public bool cull
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x6CC9EC0", Offset = "0x6CC8EC0", VA = "0x6CC9EC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x6CC9F70", Offset = "0x6CC8F70", VA = "0x6CC9F70")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector2 clippingSoftness
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x6CCA2B0", Offset = "0x6CC92B0", VA = "0x6CCA2B0")]
		set
		{
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6CCA030", Offset = "0x6CC9030", VA = "0x6CCA030")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6CCA100", Offset = "0x6CC9100", VA = "0x6CCA100")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6CCA1E0", Offset = "0x6CC91E0", VA = "0x6CCA1E0")]
	public void EnableRectClipping(Rect rect)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6CCA380", Offset = "0x6CC9380", VA = "0x6CCA380")]
	public void DisableRectClipping()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6CCA430", Offset = "0x6CC9430", VA = "0x6CCA430")]
	public void SetMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6CCA550", Offset = "0x6CC9550", VA = "0x6CCA550")]
	public Material GetMaterial(int index)
	{
		return null;
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6CCA630", Offset = "0x6CC9630", VA = "0x6CCA630")]
	public void SetPopMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6CCA750", Offset = "0x6CC9750", VA = "0x6CCA750")]
	public void SetTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6CCA860", Offset = "0x6CC9860", VA = "0x6CCA860")]
	public void SetSecondaryTextureCount(int size)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6CCA920", Offset = "0x6CC9920", VA = "0x6CCA920")]
	public void SetSecondaryTexture(int index, string name, Texture2D texture)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6CCAB60", Offset = "0x6CC9B60", VA = "0x6CCAB60")]
	public void SetAlphaTexture(Texture texture)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6CCAC70", Offset = "0x6CC9C70", VA = "0x6CCAC70")]
	public void SetMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6CCAD80", Offset = "0x6CC9D80", VA = "0x6CCAD80")]
	public void Clear()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6CCAE30", Offset = "0x6CC9E30", VA = "0x6CCAE30")]
	public void SetMaterial(Material material, Texture texture)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6CCAFD0", Offset = "0x6CC9FD0", VA = "0x6CCAFD0")]
	public Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6CCAFE0", Offset = "0x6CC9FE0", VA = "0x6CCAFE0")]
	public static void SplitUIVertexStreams(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6CCB150", Offset = "0x6CCA150", VA = "0x6CCB150")]
	public static void CreateUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6CCB210", Offset = "0x6CCA210", VA = "0x6CCB210")]
	public static void AddUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6CCB110", Offset = "0x6CCA110", VA = "0x6CCB110")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitIndicesStreamsInternal(object verts, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6CCB0B0", Offset = "0x6CCA0B0", VA = "0x6CCB0B0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitUIVertexStreamsInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6CCB1B0", Offset = "0x6CCA1B0", VA = "0x6CCB1B0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void CreateUIVertexStreamInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents, object indices);

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6CCB270", Offset = "0x6CCA270", VA = "0x6CCB270")]
	public CanvasRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6CC9980", Offset = "0x6CC8980", VA = "0x6CC9980")]
	private static extern void set_hasPopInstruction_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6CC9A40", Offset = "0x6CC8A40", VA = "0x6CC9A40")]
	private static extern int get_materialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x6CC9AF0", Offset = "0x6CC8AF0", VA = "0x6CC9AF0")]
	private static extern void set_materialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x6CC9BB0", Offset = "0x6CC8BB0", VA = "0x6CC9BB0")]
	private static extern void set_popMaterialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x6CC9C70", Offset = "0x6CC8C70", VA = "0x6CC9C70")]
	private static extern int get_absoluteDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x6CC9D20", Offset = "0x6CC8D20", VA = "0x6CC9D20")]
	private static extern bool get_hasMoved_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x6CC9DD0", Offset = "0x6CC8DD0", VA = "0x6CC9DD0")]
	private static extern bool get_cullTransparentMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6CC9E80", Offset = "0x6CC8E80", VA = "0x6CC9E80")]
	private static extern void set_cullTransparentMesh_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x6CC9F40", Offset = "0x6CC8F40", VA = "0x6CC9F40")]
	private static extern bool get_cull_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6CC9FF0", Offset = "0x6CC8FF0", VA = "0x6CC9FF0")]
	private static extern void set_cull_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6CCA0C0", Offset = "0x6CC90C0", VA = "0x6CCA0C0")]
	private static extern void SetColor_Injected(IntPtr _unity_self, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6CCA1A0", Offset = "0x6CC91A0", VA = "0x6CCA1A0")]
	private static extern void GetColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6CCA270", Offset = "0x6CC9270", VA = "0x6CCA270")]
	private static extern void EnableRectClipping_Injected(IntPtr _unity_self, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6CCA340", Offset = "0x6CC9340", VA = "0x6CCA340")]
	private static extern void set_clippingSoftness_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6CCA400", Offset = "0x6CC9400", VA = "0x6CCA400")]
	private static extern void DisableRectClipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6CCA510", Offset = "0x6CC9510", VA = "0x6CCA510")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6CCA5F0", Offset = "0x6CC95F0", VA = "0x6CCA5F0")]
	private static extern IntPtr GetMaterial_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6CCA710", Offset = "0x6CC9710", VA = "0x6CCA710")]
	private static extern void SetPopMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6CCA820", Offset = "0x6CC9820", VA = "0x6CCA820")]
	private static extern void SetTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6CCA8E0", Offset = "0x6CC98E0", VA = "0x6CCA8E0")]
	private static extern void SetSecondaryTextureCount_Injected(IntPtr _unity_self, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6CCAB10", Offset = "0x6CC9B10", VA = "0x6CCAB10")]
	private static extern void SetSecondaryTexture_Injected(IntPtr _unity_self, int index, ref UnityEngine.Bindings.ManagedSpanWrapper name, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6CCAC30", Offset = "0x6CC9C30", VA = "0x6CCAC30")]
	private static extern void SetAlphaTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6CCAD40", Offset = "0x6CC9D40", VA = "0x6CCAD40")]
	private static extern void SetMesh_Injected(IntPtr _unity_self, IntPtr mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6CCAE00", Offset = "0x6CC9E00", VA = "0x6CCAE00")]
	private static extern void Clear_Injected(IntPtr _unity_self);
}
