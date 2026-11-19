// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BoxCollider
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

[Token(Token = "0x2000007")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/BoxCollider.h")]
public class BoxCollider : Collider
{
	[Token(Token = "0x1700000D")]
	public Vector3 center
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x69D7060", Offset = "0x69D6060", VA = "0x69D7060")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x69D7140", Offset = "0x69D6140", VA = "0x69D7140")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Vector3 size
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x69D7210", Offset = "0x69D6210", VA = "0x69D7210")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x69D72F0", Offset = "0x69D62F0", VA = "0x69D72F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x69D73C0", Offset = "0x69D63C0", VA = "0x69D73C0")]
	public BoxCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69D7100", Offset = "0x69D6100", VA = "0x69D7100")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69D71D0", Offset = "0x69D61D0", VA = "0x69D71D0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69D72B0", Offset = "0x69D62B0", VA = "0x69D72B0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69D7380", Offset = "0x69D6380", VA = "0x69D7380")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
