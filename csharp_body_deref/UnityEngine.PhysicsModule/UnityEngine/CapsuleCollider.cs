// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CapsuleCollider
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

[Token(Token = "0x2000014")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/CapsuleCollider.h")]
public class CapsuleCollider : Collider
{
	[Token(Token = "0x17000030")]
	public Vector3 center
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4E81A20", Offset = "0x4E81A20", VA = "0x4E81A20")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4E81B20", Offset = "0x4E81B20", VA = "0x4E81B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public float radius
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x4E81C10", Offset = "0x4E81C10", VA = "0x4E81C10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x4E81CE0", Offset = "0x4E81CE0", VA = "0x4E81CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public float height
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x4E81DE0", Offset = "0x4E81DE0", VA = "0x4E81DE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x4E81EB0", Offset = "0x4E81EB0", VA = "0x4E81EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int direction
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4E81FB0", Offset = "0x4E81FB0", VA = "0x4E81FB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4E82080", Offset = "0x4E82080", VA = "0x4E82080")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4E81AE0", Offset = "0x4E81AE0", VA = "0x4E81AE0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4E81BD0", Offset = "0x4E81BD0", VA = "0x4E81BD0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4E81CB0", Offset = "0x4E81CB0", VA = "0x4E81CB0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4E81D90", Offset = "0x4E81D90", VA = "0x4E81D90")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4E81E80", Offset = "0x4E81E80", VA = "0x4E81E80")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4E81F60", Offset = "0x4E81F60", VA = "0x4E81F60")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4E82050", Offset = "0x4E82050", VA = "0x4E82050")]
	private static extern int get_direction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4E82120", Offset = "0x4E82120", VA = "0x4E82120")]
	private static extern void set_direction_Injected(IntPtr _unity_self, int value);
}
