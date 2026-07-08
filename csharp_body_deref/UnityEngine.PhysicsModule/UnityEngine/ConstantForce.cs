using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000017")]
[RequireComponent(typeof(Rigidbody))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/ConstantForce.h")]
public class ConstantForce : Behaviour
{
	[Token(Token = "0x17000038")]
	public Vector3 force
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x4B5AFD0", Offset = "0x4B5AFD0", VA = "0x4B5AFD0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4B5B080", Offset = "0x4B5B080", VA = "0x4B5B080")]
	private static extern void set_force_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
