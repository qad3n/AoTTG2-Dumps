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
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x69C7BC0", Offset = "0x69C6BC0", VA = "0x69C7BC0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69C7C90", Offset = "0x69C6C90", VA = "0x69C7C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float rotation
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69C7D60", Offset = "0x69C6D60", VA = "0x69C7D60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x69C7E10", Offset = "0x69C6E10", VA = "0x69C7E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Vector2 linearVelocity
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69C7EF0", Offset = "0x69C6EF0", VA = "0x69C7EF0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x69C7FC0", Offset = "0x69C6FC0", VA = "0x69C7FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularVelocity
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69C8090", Offset = "0x69C7090", VA = "0x69C8090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x69C8140", Offset = "0x69C7140", VA = "0x69C8140")]
		set
		{
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x69C8220", Offset = "0x69C7220", VA = "0x69C8220")]
	[ExcludeFromDocs]
	public void AddForce(Vector2 force)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x69C82B0", Offset = "0x69C72B0", VA = "0x69C82B0")]
	[UnityEngine.Bindings.NativeMethod("AddForce")]
	private void AddForce_Internal(Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x69C8380", Offset = "0x69C7380", VA = "0x69C8380")]
	public Rigidbody2D()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x69C7C50", Offset = "0x69C6C50", VA = "0x69C7C50")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x69C7D20", Offset = "0x69C6D20", VA = "0x69C7D20")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x69C7DE0", Offset = "0x69C6DE0", VA = "0x69C7DE0")]
	private static extern float get_rotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x69C7EA0", Offset = "0x69C6EA0", VA = "0x69C7EA0")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x69C7F80", Offset = "0x69C6F80", VA = "0x69C7F80")]
	private static extern void get_linearVelocity_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x69C8050", Offset = "0x69C7050", VA = "0x69C8050")]
	private static extern void set_linearVelocity_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x69C8110", Offset = "0x69C7110", VA = "0x69C8110")]
	private static extern float get_angularVelocity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69C81D0", Offset = "0x69C71D0", VA = "0x69C81D0")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x69C8340", Offset = "0x69C7340", VA = "0x69C8340")]
	private static extern void AddForce_Internal_Injected(IntPtr _unity_self, [In] ref Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode);
}
