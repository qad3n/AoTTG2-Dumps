// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Skybox
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000F1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Skybox.h")]
public sealed class Skybox : Behaviour
{
	[Token(Token = "0x17000147")]
	public Material material
	{
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x2EF8A50", Offset = "0x2EF7050", VA = "0x182EF8A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x2EF8B40", Offset = "0x2EF7140", VA = "0x182EF8B40")]
		set
		{
		}
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Skybox()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x2EF8A10", Offset = "0x2EF7010", VA = "0x182EF8A10")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x2EF8AF0", Offset = "0x2EF70F0", VA = "0x182EF8AF0")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);
}
