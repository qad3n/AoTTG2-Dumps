// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Skybox
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

[Token(Token = "0x20000CE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Skybox.h")]
public sealed class Skybox : Behaviour
{
	[Token(Token = "0x17000103")]
	public Material material
	{
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x4DCF8C0", Offset = "0x4DCF8C0", VA = "0x4DCF8C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x4DCF990", Offset = "0x4DCF990", VA = "0x4DCF990")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4DCF960", Offset = "0x4DCF960", VA = "0x4DCF960")]
	private static extern Material get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4DCFA90", Offset = "0x4DCFA90", VA = "0x4DCFA90")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);
}
