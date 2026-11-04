// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rigidbody2D
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2FDA830", Offset = "0x2FD8E30", VA = "0x182FDA830")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2FDAB90", Offset = "0x2FD9190", VA = "0x182FDAB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float rotation
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2FDA900", Offset = "0x2FD8F00", VA = "0x182FDA900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2FDAC70", Offset = "0x2FD9270", VA = "0x182FDAC70")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Vector2 linearVelocity
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2FDA750", Offset = "0x2FD8D50", VA = "0x182FDA750")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2FDAAB0", Offset = "0x2FD90B0", VA = "0x182FDAAB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularVelocity
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x2FDA680", Offset = "0x2FD8C80", VA = "0x182FDA680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2FDA9D0", Offset = "0x2FD8FD0", VA = "0x182FDA9D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2FDA5B0", Offset = "0x2FD8BB0", VA = "0x182FDA5B0")]
	[ExcludeFromDocs]
	public void AddForce(Vector2 force)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2FDA520", Offset = "0x2FD8B20", VA = "0x182FDA520")]
	[UnityEngine.Bindings.NativeMethod("AddForce")]
	private void AddForce_Internal(Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Rigidbody2D()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2FDA7E0", Offset = "0x2FD8DE0", VA = "0x182FDA7E0")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2FDAB40", Offset = "0x2FD9140", VA = "0x182FDAB40")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2FDA8C0", Offset = "0x2FD8EC0", VA = "0x182FDA8C0")]
	private static extern float get_rotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2FDAC20", Offset = "0x2FD9220", VA = "0x182FDAC20")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2FDA700", Offset = "0x2FD8D00", VA = "0x182FDA700")]
	private static extern void get_linearVelocity_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2FDAA60", Offset = "0x2FD9060", VA = "0x182FDAA60")]
	private static extern void set_linearVelocity_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2FDA640", Offset = "0x2FD8C40", VA = "0x182FDA640")]
	private static extern float get_angularVelocity_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2FDA980", Offset = "0x2FD8F80", VA = "0x182FDA980")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2FDA4C0", Offset = "0x2FD8AC0", VA = "0x182FDA4C0")]
	private static extern void AddForce_Internal_Injected(IntPtr _unity_self, [In] ref Vector2 force, [DefaultValue("ForceMode2D.Force")] ForceMode2D mode);
}
