using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Skybox.h")]
public sealed class Skybox : Behaviour
{
	[Token(Token = "0x17000102")]
	public Material material
	{
		[Token(Token = "0x6000513")]
		[Address(RVA = "0x4AA7F90", Offset = "0x4AA7F90", VA = "0x4AA7F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000514")]
		[Address(RVA = "0x4AA8060", Offset = "0x4AA8060", VA = "0x4AA8060")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4AA8030", Offset = "0x4AA8030", VA = "0x4AA8030")]
	private static extern Material get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4AA8160", Offset = "0x4AA8160", VA = "0x4AA8160")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);
}
