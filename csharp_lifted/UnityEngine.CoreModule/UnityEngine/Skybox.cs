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

[Token(Token = "0x20000F2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Skybox.h")]
public sealed class Skybox : Behaviour
{
	[Token(Token = "0x1700014D")]
	public Material material
	{
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x68E4250", Offset = "0x68E3250", VA = "0x68E4250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x68E4320", Offset = "0x68E3320", VA = "0x68E4320")]
		set
		{
		}
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x68E4430", Offset = "0x68E3430", VA = "0x68E4430")]
	public Skybox()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600072A")]
	[Address(RVA = "0x68E42F0", Offset = "0x68E32F0", VA = "0x68E42F0")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600072B")]
	[Address(RVA = "0x68E43F0", Offset = "0x68E33F0", VA = "0x68E43F0")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);
}
