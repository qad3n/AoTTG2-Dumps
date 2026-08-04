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
		[Address(RVA = "0x4E82160", Offset = "0x4E82160", VA = "0x4E82160")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x4E82260", Offset = "0x4E82260", VA = "0x4E82260")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public Vector3 size
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x4E82350", Offset = "0x4E82350", VA = "0x4E82350")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x4E82450", Offset = "0x4E82450", VA = "0x4E82450")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4E82220", Offset = "0x4E82220", VA = "0x4E82220")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4E82310", Offset = "0x4E82310", VA = "0x4E82310")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4E82410", Offset = "0x4E82410", VA = "0x4E82410")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4E82500", Offset = "0x4E82500", VA = "0x4E82500")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
