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
		[Address(RVA = "0x32BEAA0", Offset = "0x32BD0A0", VA = "0x1832BEAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int materialCount
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x32BE730", Offset = "0x32BCD30", VA = "0x1832BE730")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x32BEB70", Offset = "0x32BD170", VA = "0x1832BEB70")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public int popMaterialCount
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x32BEC40", Offset = "0x32BD240", VA = "0x1832BEC40")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int absoluteDepth
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x32BE430", Offset = "0x32BCA30", VA = "0x1832BE430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public bool hasMoved
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x32BE670", Offset = "0x32BCC70", VA = "0x1832BE670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool cullTransparentMesh
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x32BE4F0", Offset = "0x32BCAF0", VA = "0x1832BE4F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x32BE8E0", Offset = "0x32BCEE0", VA = "0x1832BE8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("ShouldCull", false, UnityEngine.Bindings.TargetType.Function)]
	public bool cull
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x32BE5B0", Offset = "0x32BCBB0", VA = "0x1832BE5B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x32BE9C0", Offset = "0x32BCFC0", VA = "0x1832BE9C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector2 clippingSoftness
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x32BE800", Offset = "0x32BCE00", VA = "0x1832BE800")]
		set
		{
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x32BD880", Offset = "0x32BBE80", VA = "0x1832BD880")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x32BD3F0", Offset = "0x32BB9F0", VA = "0x1832BD3F0")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x32BD310", Offset = "0x32BB910", VA = "0x1832BD310")]
	public void EnableRectClipping(Rect rect)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x32BD240", Offset = "0x32BB840", VA = "0x1832BD240")]
	public void DisableRectClipping()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x32BDBB0", Offset = "0x32BC1B0", VA = "0x1832BDBB0")]
	public void SetMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x32BD560", Offset = "0x32BBB60", VA = "0x1832BD560")]
	public Material GetMaterial(int index)
	{
		return null;
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x32BDDF0", Offset = "0x32BC3F0", VA = "0x1832BDDF0")]
	public void SetPopMaterial(Material material, int index)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x32BE220", Offset = "0x32BC820", VA = "0x1832BE220")]
	public void SetTexture(Texture texture)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x32BDF00", Offset = "0x32BC500", VA = "0x1832BDF00")]
	public void SetSecondaryTextureCount(int size)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x32BDFE0", Offset = "0x32BC5E0", VA = "0x1832BDFE0")]
	public void SetSecondaryTexture(int index, string name, Texture2D texture)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x32BD650", Offset = "0x32BBC50", VA = "0x1832BD650")]
	public void SetAlphaTexture(Texture texture)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x32BDCD0", Offset = "0x32BC2D0", VA = "0x1832BDCD0")]
	public void SetMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x32BD130", Offset = "0x32BB730", VA = "0x1832BD130")]
	public void Clear()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x32BD710", Offset = "0x32BBD10", VA = "0x1832BD710")]
	public void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x32BD970", Offset = "0x32BBF70", VA = "0x1832BD970")]
	public void SetMaterial(Material material, Texture texture)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x32BD4C0", Offset = "0x32BBAC0", VA = "0x1832BD4C0")]
	public Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x32BE330", Offset = "0x32BC930", VA = "0x1832BE330")]
	public static void SplitUIVertexStreams(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x32BD1B0", Offset = "0x32BB7B0", VA = "0x1832BD1B0")]
	public static void CreateUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x32BD0A0", Offset = "0x32BB6A0", VA = "0x1832BD0A0")]
	public static void AddUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x32BE2E0", Offset = "0x32BC8E0", VA = "0x1832BE2E0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitIndicesStreamsInternal(object verts, object indices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x32BD0A0", Offset = "0x32BB6A0", VA = "0x1832BD0A0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void SplitUIVertexStreamsInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x32BD1B0", Offset = "0x32BB7B0", VA = "0x1832BD1B0")]
	[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void CreateUIVertexStreamInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents, object indices);

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CanvasRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x32BEA50", Offset = "0x32BD050", VA = "0x1832BEA50")]
	private static extern void set_hasPopInstruction_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x32BE6F0", Offset = "0x32BCCF0", VA = "0x1832BE6F0")]
	private static extern int get_materialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x32BEB30", Offset = "0x32BD130", VA = "0x1832BEB30")]
	private static extern void set_materialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x32BEC00", Offset = "0x32BD200", VA = "0x1832BEC00")]
	private static extern void set_popMaterialCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x32BE3F0", Offset = "0x32BC9F0", VA = "0x1832BE3F0")]
	private static extern int get_absoluteDepth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x32BE630", Offset = "0x32BCC30", VA = "0x1832BE630")]
	private static extern bool get_hasMoved_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x32BE4B0", Offset = "0x32BCAB0", VA = "0x1832BE4B0")]
	private static extern bool get_cullTransparentMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x32BE890", Offset = "0x32BCE90", VA = "0x1832BE890")]
	private static extern void set_cullTransparentMesh_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x32BE570", Offset = "0x32BCB70", VA = "0x1832BE570")]
	private static extern bool get_cull_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x32BE970", Offset = "0x32BCF70", VA = "0x1832BE970")]
	private static extern void set_cull_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x32BD830", Offset = "0x32BBE30", VA = "0x1832BD830")]
	private static extern void SetColor_Injected(IntPtr _unity_self, [In] ref Color color);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x32BD3A0", Offset = "0x32BB9A0", VA = "0x1832BD3A0")]
	private static extern void GetColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x32BD2C0", Offset = "0x32BB8C0", VA = "0x1832BD2C0")]
	private static extern void EnableRectClipping_Injected(IntPtr _unity_self, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x32BE7B0", Offset = "0x32BCDB0", VA = "0x1832BE7B0")]
	private static extern void set_clippingSoftness_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x32BD200", Offset = "0x32BB800", VA = "0x1832BD200")]
	private static extern void DisableRectClipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x32BD910", Offset = "0x32BBF10", VA = "0x1832BD910")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x32BD480", Offset = "0x32BBA80", VA = "0x1832BD480")]
	private static extern IntPtr GetMaterial_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x32BDD90", Offset = "0x32BC390", VA = "0x1832BDD90")]
	private static extern void SetPopMaterial_Injected(IntPtr _unity_self, IntPtr material, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x32BE1D0", Offset = "0x32BC7D0", VA = "0x1832BE1D0")]
	private static extern void SetTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x32BDEC0", Offset = "0x32BC4C0", VA = "0x1832BDEC0")]
	private static extern void SetSecondaryTextureCount_Injected(IntPtr _unity_self, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x32BDF90", Offset = "0x32BC590", VA = "0x1832BDF90")]
	private static extern void SetSecondaryTexture_Injected(IntPtr _unity_self, int index, ref UnityEngine.Bindings.ManagedSpanWrapper name, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x32BD600", Offset = "0x32BBC00", VA = "0x1832BD600")]
	private static extern void SetAlphaTexture_Injected(IntPtr _unity_self, IntPtr texture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x32BDC80", Offset = "0x32BC280", VA = "0x1832BDC80")]
	private static extern void SetMesh_Injected(IntPtr _unity_self, IntPtr mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x32BD0F0", Offset = "0x32BB6F0", VA = "0x1832BD0F0")]
	private static extern void Clear_Injected(IntPtr _unity_self);
}
