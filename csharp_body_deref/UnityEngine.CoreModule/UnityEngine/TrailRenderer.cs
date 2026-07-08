using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000BD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TrailRenderer.h")]
public sealed class TrailRenderer : Renderer
{
	[Token(Token = "0x170000B6")]
	public float time
	{
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4A9CF70", Offset = "0x4A9CF70", VA = "0x4A9CF70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4A9D040", Offset = "0x4A9D040", VA = "0x4A9D040")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public float startWidth
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x4A9D140", Offset = "0x4A9D140", VA = "0x4A9D140")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x4A9D210", Offset = "0x4A9D210", VA = "0x4A9D210")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public float endWidth
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x4A9D310", Offset = "0x4A9D310", VA = "0x4A9D310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x4A9D3E0", Offset = "0x4A9D3E0", VA = "0x4A9D3E0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4A9D010", Offset = "0x4A9D010", VA = "0x4A9D010")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4A9D0F0", Offset = "0x4A9D0F0", VA = "0x4A9D0F0")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4A9D1E0", Offset = "0x4A9D1E0", VA = "0x4A9D1E0")]
	private static extern float get_startWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4A9D2C0", Offset = "0x4A9D2C0", VA = "0x4A9D2C0")]
	private static extern void set_startWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4A9D3B0", Offset = "0x4A9D3B0", VA = "0x4A9D3B0")]
	private static extern float get_endWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4A9D490", Offset = "0x4A9D490", VA = "0x4A9D490")]
	private static extern void set_endWidth_Injected(IntPtr _unity_self, float value);
}
