// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SkinnedMeshRenderer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011B")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
public class SkinnedMeshRenderer : Renderer
{
	[Token(Token = "0x17000150")]
	public SkinQuality quality
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x68E4820", Offset = "0x68E3820", VA = "0x68E4820")]
		get
		{
			return default(SkinQuality);
		}
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x68E48D0", Offset = "0x68E38D0", VA = "0x68E48D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public bool updateWhenOffscreen
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x68E4990", Offset = "0x68E3990", VA = "0x68E4990")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public Transform rootBone
	{
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x68E4A50", Offset = "0x68E3A50", VA = "0x68E4A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x68E4B20", Offset = "0x68E3B20", VA = "0x68E4B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public Transform[] bones
	{
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x68E4C30", Offset = "0x68E3C30", VA = "0x68E4C30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073C")]
		[Address(RVA = "0x68E4CE0", Offset = "0x68E3CE0", VA = "0x68E4CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	[UnityEngine.Bindings.NativeProperty("Mesh")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x68E4DA0", Offset = "0x68E3DA0", VA = "0x68E4DA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x68E4E70", Offset = "0x68E3E70", VA = "0x68E4E70")]
		set
		{
		}
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x68E4F80", Offset = "0x68E3F80", VA = "0x68E4F80")]
	public void BakeMesh([UnityEngine.Bindings.NotNull] Mesh mesh, bool useScale)
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x68E50B0", Offset = "0x68E40B0", VA = "0x68E50B0")]
	public SkinnedMeshRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000741")]
	[Address(RVA = "0x68E48A0", Offset = "0x68E38A0", VA = "0x68E48A0")]
	private static extern SkinQuality get_quality_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000742")]
	[Address(RVA = "0x68E4950", Offset = "0x68E3950", VA = "0x68E4950")]
	private static extern void set_quality_Injected(IntPtr _unity_self, SkinQuality value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000743")]
	[Address(RVA = "0x68E4A10", Offset = "0x68E3A10", VA = "0x68E4A10")]
	private static extern void set_updateWhenOffscreen_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x68E4AF0", Offset = "0x68E3AF0", VA = "0x68E4AF0")]
	private static extern IntPtr get_rootBone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x68E4BF0", Offset = "0x68E3BF0", VA = "0x68E4BF0")]
	private static extern void set_rootBone_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x68E4CB0", Offset = "0x68E3CB0", VA = "0x68E4CB0")]
	private static extern Transform[] get_bones_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x68E4D60", Offset = "0x68E3D60", VA = "0x68E4D60")]
	private static extern void set_bones_Injected(IntPtr _unity_self, Transform[] value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x68E4E40", Offset = "0x68E3E40", VA = "0x68E4E40")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x68E4F40", Offset = "0x68E3F40", VA = "0x68E4F40")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x68E5070", Offset = "0x68E4070", VA = "0x68E5070")]
	private static extern void BakeMesh_Injected(IntPtr _unity_self, IntPtr mesh, bool useScale);
}
