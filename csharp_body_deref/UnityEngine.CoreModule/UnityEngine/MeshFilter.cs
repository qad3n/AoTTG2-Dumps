using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000CD")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshFilter.h")]
public sealed class MeshFilter : Component
{
	[Token(Token = "0x17000103")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x4AA81B0", Offset = "0x4AA81B0", VA = "0x4AA81B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000519")]
		[Address(RVA = "0x4AA8280", Offset = "0x4AA8280", VA = "0x4AA8280")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public Mesh mesh
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4AA83C0", Offset = "0x4AA83C0", VA = "0x4AA83C0")]
		[UnityEngine.Bindings.NativeName("GetInstantiatedMeshFromScript")]
		get
		{
			return null;
		}
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x4AA8490", Offset = "0x4AA8490", VA = "0x4AA8490")]
		[UnityEngine.Bindings.NativeName("SetInstantiatedMesh")]
		set
		{
		}
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4AA81A0", Offset = "0x4AA81A0", VA = "0x4AA81A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DontStripMeshFilter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4AA8250", Offset = "0x4AA8250", VA = "0x4AA8250")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4AA8380", Offset = "0x4AA8380", VA = "0x4AA8380")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4AA8460", Offset = "0x4AA8460", VA = "0x4AA8460")]
	private static extern Mesh get_mesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4AA8590", Offset = "0x4AA8590", VA = "0x4AA8590")]
	private static extern void set_mesh_Injected(IntPtr _unity_self, IntPtr value);
}
