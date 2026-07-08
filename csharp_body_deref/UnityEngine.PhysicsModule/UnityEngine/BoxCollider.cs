using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000015")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/BoxCollider.h")]
public class BoxCollider : Collider
{
	[Token(Token = "0x17000034")]
	public Vector3 center
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x4B5A830", Offset = "0x4B5A830", VA = "0x4B5A830")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x4B5A930", Offset = "0x4B5A930", VA = "0x4B5A930")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public Vector3 size
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x4B5AA20", Offset = "0x4B5AA20", VA = "0x4B5AA20")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x4B5AB20", Offset = "0x4B5AB20", VA = "0x4B5AB20")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4B5A8F0", Offset = "0x4B5A8F0", VA = "0x4B5A8F0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4B5A9E0", Offset = "0x4B5A9E0", VA = "0x4B5A9E0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4B5AAE0", Offset = "0x4B5AAE0", VA = "0x4B5AAE0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4B5ABD0", Offset = "0x4B5ABD0", VA = "0x4B5ABD0")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
