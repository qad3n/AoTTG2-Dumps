// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rigidbody2D
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
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x2000009")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/Public/Rigidbody2D.h")]
public sealed class Rigidbody2D : Component
{
	[Token(Token = "0x17000007")]
	public Vector2 position
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4E75430", Offset = "0x4E75430", VA = "0x4E75430")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4E75520", Offset = "0x4E75520", VA = "0x4E75520")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float rotation
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4E75610", Offset = "0x4E75610", VA = "0x4E75610")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4E756E0", Offset = "0x4E756E0", VA = "0x4E756E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Vector2 velocity
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4E757E0", Offset = "0x4E757E0", VA = "0x4E757E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4E758D0", Offset = "0x4E758D0", VA = "0x4E758D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularVelocity
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4E759C0", Offset = "0x4E759C0", VA = "0x4E759C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4E75A90", Offset = "0x4E75A90", VA = "0x4E75A90")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4E75B90", Offset = "0x4E75B90", VA = "0x4E75B90")]
	[ExcludeFromDocs]
	public void AddForce(Vector2 force)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4E75C40", Offset = "0x4E75C40", VA = "0x4E75C40")]
	[UnityEngine.Bindings.NativeMethod("AddForce")]
	private void AddForce_Internal(Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4E754E0", Offset = "0x4E754E0", VA = "0x4E754E0")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4E755D0", Offset = "0x4E755D0", VA = "0x4E755D0")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4E756B0", Offset = "0x4E756B0", VA = "0x4E756B0")]
	private static extern float get_rotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4E75790", Offset = "0x4E75790", VA = "0x4E75790")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4E75890", Offset = "0x4E75890", VA = "0x4E75890")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4E75980", Offset = "0x4E75980", VA = "0x4E75980")]
	private static extern void set_velocity_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4E75A60", Offset = "0x4E75A60", VA = "0x4E75A60")]
	private static extern float get_angularVelocity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4E75B40", Offset = "0x4E75B40", VA = "0x4E75B40")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4E75CF0", Offset = "0x4E75CF0", VA = "0x4E75CF0")]
	private static extern void AddForce_Internal_Injected(IntPtr _unity_self, [In] ref Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode);
}
