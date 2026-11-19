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

[Token(Token = "0x200000D")]
[RequireComponent(typeof(Rigidbody))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/ConstantForce.h")]
public class ConstantForce : Behaviour
{
	[Token(Token = "0x1700001D")]
	public Vector3 force
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x69D8E20", Offset = "0x69D7E20", VA = "0x69D8E20")]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x69D8EF0", Offset = "0x69D7EF0", VA = "0x69D8EF0")]
	public ConstantForce()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x69D8EB0", Offset = "0x69D7EB0", VA = "0x69D8EB0")]
	private static extern void set_force_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
