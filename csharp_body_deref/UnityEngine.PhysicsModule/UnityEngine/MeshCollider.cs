using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000013")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/MeshCollider.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/Mesh.h")]
public class MeshCollider : Collider
{
	[Token(Token = "0x1700002E")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4B59D30", Offset = "0x4B59D30", VA = "0x4B59D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4B59E00", Offset = "0x4B59E00", VA = "0x4B59E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool convex
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4B59F40", Offset = "0x4B59F40", VA = "0x4B59F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4B5A010", Offset = "0x4B5A010", VA = "0x4B5A010")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4B59DD0", Offset = "0x4B59DD0", VA = "0x4B59DD0")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4B59F00", Offset = "0x4B59F00", VA = "0x4B59F00")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4B59FE0", Offset = "0x4B59FE0", VA = "0x4B59FE0")]
	private static extern bool get_convex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4B5A0B0", Offset = "0x4B5A0B0", VA = "0x4B5A0B0")]
	private static extern void set_convex_Injected(IntPtr _unity_self, bool value);
}
