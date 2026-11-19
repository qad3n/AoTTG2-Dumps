// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LODGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200011F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroup.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroupManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetLODGroupManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public class LODGroup : Component
{
	[Token(Token = "0x17000155")]
	public Vector3 localReferencePoint
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x68E50F0", Offset = "0x68E40F0", VA = "0x68E50F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000156")]
	public float size
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x68E51D0", Offset = "0x68E41D0", VA = "0x68E51D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000157")]
	public LODFadeMode fadeMode
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x68E5280", Offset = "0x68E4280", VA = "0x68E5280")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public bool animateCrossFading
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x68E5340", Offset = "0x68E4340", VA = "0x68E5340")]
		set
		{
		}
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x68E5400", Offset = "0x68E4400", VA = "0x68E5400")]
	[UnityEngine.Bindings.FreeFunction("UpdateLODGroupBoundingBox", HasExplicitThis = true)]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x68E54B0", Offset = "0x68E44B0", VA = "0x68E54B0")]
	[UnityEngine.Bindings.FreeFunction("GetLODs_Binding", HasExplicitThis = true)]
	public LOD[] GetLODs()
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x68E5560", Offset = "0x68E4560", VA = "0x68E5560")]
	[UnityEngine.Bindings.FreeFunction("SetLODs_Binding", HasExplicitThis = true)]
	public void SetLODs([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] LOD[] lods)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000754")]
	[Address(RVA = "0x68E5190", Offset = "0x68E4190", VA = "0x68E5190")]
	private static extern void get_localReferencePoint_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x68E5250", Offset = "0x68E4250", VA = "0x68E5250")]
	private static extern float get_size_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x68E5300", Offset = "0x68E4300", VA = "0x68E5300")]
	private static extern void set_fadeMode_Injected(IntPtr _unity_self, LODFadeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000757")]
	[Address(RVA = "0x68E53C0", Offset = "0x68E43C0", VA = "0x68E53C0")]
	private static extern void set_animateCrossFading_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000758")]
	[Address(RVA = "0x68E5480", Offset = "0x68E4480", VA = "0x68E5480")]
	private static extern void RecalculateBounds_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000759")]
	[Address(RVA = "0x68E5530", Offset = "0x68E4530", VA = "0x68E5530")]
	private static extern LOD[] GetLODs_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600075A")]
	[Address(RVA = "0x68E55E0", Offset = "0x68E45E0", VA = "0x68E55E0")]
	private static extern void SetLODs_Injected(IntPtr _unity_self, LOD[] lods);
}
