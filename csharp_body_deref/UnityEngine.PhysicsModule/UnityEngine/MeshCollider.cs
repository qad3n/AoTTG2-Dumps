// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshCollider
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
		[Address(RVA = "0x4E81660", Offset = "0x4E81660", VA = "0x4E81660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4E81730", Offset = "0x4E81730", VA = "0x4E81730")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool convex
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4E81870", Offset = "0x4E81870", VA = "0x4E81870")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4E81940", Offset = "0x4E81940", VA = "0x4E81940")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4E81700", Offset = "0x4E81700", VA = "0x4E81700")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4E81830", Offset = "0x4E81830", VA = "0x4E81830")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4E81910", Offset = "0x4E81910", VA = "0x4E81910")]
	private static extern bool get_convex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4E819E0", Offset = "0x4E819E0", VA = "0x4E819E0")]
	private static extern void set_convex_Injected(IntPtr _unity_self, bool value);
}
