// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshFilter
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000CF")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshFilter.h")]
public sealed class MeshFilter : Component
{
	[Token(Token = "0x17000104")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4DCFAE0", Offset = "0x4DCFAE0", VA = "0x4DCFAE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x4DCFBB0", Offset = "0x4DCFBB0", VA = "0x4DCFBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public Mesh mesh
	{
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x4DCFCF0", Offset = "0x4DCFCF0", VA = "0x4DCFCF0")]
		[UnityEngine.Bindings.NativeName("GetInstantiatedMeshFromScript")]
		get
		{
			return null;
		}
		[Token(Token = "0x600051D")]
		[Address(RVA = "0x4DCFDC0", Offset = "0x4DCFDC0", VA = "0x4DCFDC0")]
		[UnityEngine.Bindings.NativeName("SetInstantiatedMesh")]
		set
		{
		}
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4DCFAD0", Offset = "0x4DCFAD0", VA = "0x4DCFAD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DontStripMeshFilter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4DCFB80", Offset = "0x4DCFB80", VA = "0x4DCFB80")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4DCFCB0", Offset = "0x4DCFCB0", VA = "0x4DCFCB0")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4DCFD90", Offset = "0x4DCFD90", VA = "0x4DCFD90")]
	private static extern Mesh get_mesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4DCFEC0", Offset = "0x4DCFEC0", VA = "0x4DCFEC0")]
	private static extern void set_mesh_Injected(IntPtr _unity_self, IntPtr value);
}
