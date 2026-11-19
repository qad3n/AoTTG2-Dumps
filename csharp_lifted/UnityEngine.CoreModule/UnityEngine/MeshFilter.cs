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

[Token(Token = "0x20000F3")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshFilter.h")]
public sealed class MeshFilter : Component
{
	[Token(Token = "0x1700014E")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x68E4450", Offset = "0x68E3450", VA = "0x68E4450")]
		get
		{
			return null;
		}
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x68E4520", Offset = "0x68E3520", VA = "0x68E4520")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public Mesh mesh
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x68E4630", Offset = "0x68E3630", VA = "0x68E4630")]
		[UnityEngine.Bindings.NativeName("GetInstantiatedMeshFromScript")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x68E4700", Offset = "0x68E3700", VA = "0x68E4700")]
		[UnityEngine.Bindings.NativeName("SetInstantiatedMesh")]
		set
		{
		}
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x68E4440", Offset = "0x68E3440", VA = "0x68E4440")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DontStripMeshFilter()
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x68E4810", Offset = "0x68E3810", VA = "0x68E4810")]
	public MeshFilter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x68E44F0", Offset = "0x68E34F0", VA = "0x68E44F0")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x68E45F0", Offset = "0x68E35F0", VA = "0x68E45F0")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x68E46D0", Offset = "0x68E36D0", VA = "0x68E46D0")]
	private static extern IntPtr get_mesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x68E47D0", Offset = "0x68E37D0", VA = "0x68E47D0")]
	private static extern void set_mesh_Injected(IntPtr _unity_self, IntPtr value);
}
