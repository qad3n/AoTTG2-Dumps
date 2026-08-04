// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ConstantForce
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E82900", Offset = "0x4E82900", VA = "0x4E82900")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4E829B0", Offset = "0x4E829B0", VA = "0x4E829B0")]
	private static extern void set_force_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
