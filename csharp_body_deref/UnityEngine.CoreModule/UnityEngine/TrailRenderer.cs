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

[Token(Token = "0x20000DE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TrailRenderer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public sealed class TrailRenderer : Renderer
{
	[Token(Token = "0x170000E9")]
	public float time
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x68D5130", Offset = "0x68D4130", VA = "0x68D5130")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x68D51E0", Offset = "0x68D41E0", VA = "0x68D51E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public float startWidth
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x68D52C0", Offset = "0x68D42C0", VA = "0x68D52C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x68D5370", Offset = "0x68D4370", VA = "0x68D5370")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public float endWidth
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x68D5450", Offset = "0x68D4450", VA = "0x68D5450")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x68D5500", Offset = "0x68D4500", VA = "0x68D5500")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x68D51B0", Offset = "0x68D41B0", VA = "0x68D51B0")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x68D5270", Offset = "0x68D4270", VA = "0x68D5270")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x68D5340", Offset = "0x68D4340", VA = "0x68D5340")]
	private static extern float get_startWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x68D5400", Offset = "0x68D4400", VA = "0x68D5400")]
	private static extern void set_startWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x68D54D0", Offset = "0x68D44D0", VA = "0x68D54D0")]
	private static extern float get_endWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x68D5590", Offset = "0x68D4590", VA = "0x68D5590")]
	private static extern void set_endWidth_Injected(IntPtr _unity_self, float value);
}
