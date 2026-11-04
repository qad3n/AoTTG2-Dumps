// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TrailRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000DD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TrailRenderer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public sealed class TrailRenderer : Renderer
{
	[Token(Token = "0x170000E3")]
	public float time
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x2EFF740", Offset = "0x2EFDD40", VA = "0x182EFF740")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x2EFF9D0", Offset = "0x2EFDFD0", VA = "0x182EFF9D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public float startWidth
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x2EFF680", Offset = "0x2EFDC80", VA = "0x182EFF680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x2EFF8F0", Offset = "0x2EFDEF0", VA = "0x182EFF8F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public float endWidth
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x2EFF5C0", Offset = "0x2EFDBC0", VA = "0x182EFF5C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x2EFF810", Offset = "0x2EFDE10", VA = "0x182EFF810")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x2EFF700", Offset = "0x2EFDD00", VA = "0x182EFF700")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x2EFF980", Offset = "0x2EFDF80", VA = "0x182EFF980")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x2EFF640", Offset = "0x2EFDC40", VA = "0x182EFF640")]
	private static extern float get_startWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x2EFF8A0", Offset = "0x2EFDEA0", VA = "0x182EFF8A0")]
	private static extern void set_startWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x2EFF580", Offset = "0x2EFDB80", VA = "0x182EFF580")]
	private static extern float get_endWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x2EFF7C0", Offset = "0x2EFDDC0", VA = "0x182EFF7C0")]
	private static extern void set_endWidth_Injected(IntPtr _unity_self, float value);
}
