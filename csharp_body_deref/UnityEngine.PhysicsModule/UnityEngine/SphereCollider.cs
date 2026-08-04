// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SphereCollider
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000016")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/SphereCollider.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SphereCollider : Collider
{
	[Token(Token = "0x17000036")]
	public Vector3 center
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x4E82540", Offset = "0x4E82540", VA = "0x4E82540")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x4E82640", Offset = "0x4E82640", VA = "0x4E82640")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public float radius
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x4E82730", Offset = "0x4E82730", VA = "0x4E82730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4E82800", Offset = "0x4E82800", VA = "0x4E82800")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4E82600", Offset = "0x4E82600", VA = "0x4E82600")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4E826F0", Offset = "0x4E826F0", VA = "0x4E826F0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4E827D0", Offset = "0x4E827D0", VA = "0x4E827D0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4E828B0", Offset = "0x4E828B0", VA = "0x4E828B0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);
}
