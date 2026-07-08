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
		[Address(RVA = "0x4B4DB00", Offset = "0x4B4DB00", VA = "0x4B4DB00")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4B4DBF0", Offset = "0x4B4DBF0", VA = "0x4B4DBF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float rotation
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4B4DCE0", Offset = "0x4B4DCE0", VA = "0x4B4DCE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4B4DDB0", Offset = "0x4B4DDB0", VA = "0x4B4DDB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Vector2 velocity
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B4DEB0", Offset = "0x4B4DEB0", VA = "0x4B4DEB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4B4DFA0", Offset = "0x4B4DFA0", VA = "0x4B4DFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularVelocity
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4B4E090", Offset = "0x4B4E090", VA = "0x4B4E090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4B4E160", Offset = "0x4B4E160", VA = "0x4B4E160")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B4E260", Offset = "0x4B4E260", VA = "0x4B4E260")]
	[ExcludeFromDocs]
	public void AddForce(Vector2 force)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B4E310", Offset = "0x4B4E310", VA = "0x4B4E310")]
	[UnityEngine.Bindings.NativeMethod("AddForce")]
	private void AddForce_Internal(Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B4DBB0", Offset = "0x4B4DBB0", VA = "0x4B4DBB0")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B4DCA0", Offset = "0x4B4DCA0", VA = "0x4B4DCA0")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B4DD80", Offset = "0x4B4DD80", VA = "0x4B4DD80")]
	private static extern float get_rotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B4DE60", Offset = "0x4B4DE60", VA = "0x4B4DE60")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B4DF60", Offset = "0x4B4DF60", VA = "0x4B4DF60")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4B4E050", Offset = "0x4B4E050", VA = "0x4B4E050")]
	private static extern void set_velocity_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B4E130", Offset = "0x4B4E130", VA = "0x4B4E130")]
	private static extern float get_angularVelocity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B4E210", Offset = "0x4B4E210", VA = "0x4B4E210")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4B4E3C0", Offset = "0x4B4E3C0", VA = "0x4B4E3C0")]
	private static extern void AddForce_Internal_Injected(IntPtr _unity_self, [In] ref Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode);
}
