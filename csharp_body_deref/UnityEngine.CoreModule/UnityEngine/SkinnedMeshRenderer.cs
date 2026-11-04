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

[Token(Token = "0x200011A")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
public class SkinnedMeshRenderer : Renderer
{
	[Token(Token = "0x1700014A")]
	public SkinQuality quality
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x2EF8320", Offset = "0x2EF6920", VA = "0x182EF8320")]
		get
		{
			return default(SkinQuality);
		}
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x2EF8680", Offset = "0x2EF6C80", VA = "0x182EF8680")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public bool updateWhenOffscreen
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x2EF8980", Offset = "0x2EF6F80", VA = "0x182EF8980")]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public Transform rootBone
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x2EF83E0", Offset = "0x2EF69E0", VA = "0x182EF83E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x2EF8760", Offset = "0x2EF6D60", VA = "0x182EF8760")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public Transform[] bones
	{
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x2EF8260", Offset = "0x2EF6860", VA = "0x182EF8260")]
		get
		{
			return null;
		}
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x2EF85B0", Offset = "0x2EF6BB0", VA = "0x182EF85B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	[UnityEngine.Bindings.NativeProperty("Mesh")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x2EF84C0", Offset = "0x2EF6AC0", VA = "0x182EF84C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x2EF8870", Offset = "0x2EF6E70", VA = "0x182EF8870")]
		set
		{
		}
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x2EF8050", Offset = "0x2EF6650", VA = "0x182EF8050")]
	public void BakeMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x2EF8130", Offset = "0x2EF6730", VA = "0x182EF8130")]
	public void BakeMesh([UnityEngine.Bindings.NotNull] Mesh mesh, bool useScale)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SkinnedMeshRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x2EF82E0", Offset = "0x2EF68E0", VA = "0x182EF82E0")]
	private static extern SkinQuality get_quality_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x2EF8640", Offset = "0x2EF6C40", VA = "0x182EF8640")]
	private static extern void set_quality_Injected(IntPtr _unity_self, SkinQuality value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x2EF8930", Offset = "0x2EF6F30", VA = "0x182EF8930")]
	private static extern void set_updateWhenOffscreen_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x2EF83A0", Offset = "0x2EF69A0", VA = "0x182EF83A0")]
	private static extern IntPtr get_rootBone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x2EF8710", Offset = "0x2EF6D10", VA = "0x182EF8710")]
	private static extern void set_rootBone_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000737")]
	[Address(RVA = "0x2EF8220", Offset = "0x2EF6820", VA = "0x182EF8220")]
	private static extern Transform[] get_bones_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000738")]
	[Address(RVA = "0x2EF8560", Offset = "0x2EF6B60", VA = "0x182EF8560")]
	private static extern void set_bones_Injected(IntPtr _unity_self, Transform[] value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000739")]
	[Address(RVA = "0x2EF8480", Offset = "0x2EF6A80", VA = "0x182EF8480")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073A")]
	[Address(RVA = "0x2EF8820", Offset = "0x2EF6E20", VA = "0x182EF8820")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x2EF7FF0", Offset = "0x2EF65F0", VA = "0x182EF7FF0")]
	private static extern void BakeMesh_Injected(IntPtr _unity_self, IntPtr mesh, bool useScale);
}
