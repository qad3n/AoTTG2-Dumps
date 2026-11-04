// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshFilter
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

[Token(Token = "0x20000F2")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshFilter.h")]
public sealed class MeshFilter : Component
{
	[Token(Token = "0x17000148")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x600071D")]
		[Address(RVA = "0x2EE6990", Offset = "0x2EE4F90", VA = "0x182EE6990")]
		get
		{
			return null;
		}
		[Token(Token = "0x600071E")]
		[Address(RVA = "0x2EE6B90", Offset = "0x2EE5190", VA = "0x182EE6B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public Mesh mesh
	{
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x2EE68B0", Offset = "0x2EE4EB0", VA = "0x182EE68B0")]
		[UnityEngine.Bindings.NativeName("GetInstantiatedMeshFromScript")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x2EE6A80", Offset = "0x2EE5080", VA = "0x182EE6A80")]
		[UnityEngine.Bindings.NativeName("SetInstantiatedMesh")]
		set
		{
		}
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DontStripMeshFilter()
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MeshFilter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x2EE6950", Offset = "0x2EE4F50", VA = "0x182EE6950")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x2EE6B40", Offset = "0x2EE5140", VA = "0x182EE6B40")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x2EE6870", Offset = "0x2EE4E70", VA = "0x182EE6870")]
	private static extern IntPtr get_mesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x2EE6A30", Offset = "0x2EE5030", VA = "0x182EE6A30")]
	private static extern void set_mesh_Injected(IntPtr _unity_self, IntPtr value);
}
