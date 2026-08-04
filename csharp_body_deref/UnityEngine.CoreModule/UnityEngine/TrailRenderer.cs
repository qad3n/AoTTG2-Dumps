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

[Token(Token = "0x20000BD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/TrailRenderer.h")]
public sealed class TrailRenderer : Renderer
{
	[Token(Token = "0x170000B6")]
	public float time
	{
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4DC4790", Offset = "0x4DC4790", VA = "0x4DC4790")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4DC4860", Offset = "0x4DC4860", VA = "0x4DC4860")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public float startWidth
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x4DC4960", Offset = "0x4DC4960", VA = "0x4DC4960")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x4DC4A30", Offset = "0x4DC4A30", VA = "0x4DC4A30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public float endWidth
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x4DC4B30", Offset = "0x4DC4B30", VA = "0x4DC4B30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x4DC4C00", Offset = "0x4DC4C00", VA = "0x4DC4C00")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4DC4830", Offset = "0x4DC4830", VA = "0x4DC4830")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4DC4910", Offset = "0x4DC4910", VA = "0x4DC4910")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4DC4A00", Offset = "0x4DC4A00", VA = "0x4DC4A00")]
	private static extern float get_startWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4DC4AE0", Offset = "0x4DC4AE0", VA = "0x4DC4AE0")]
	private static extern void set_startWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4DC4BD0", Offset = "0x4DC4BD0", VA = "0x4DC4BD0")]
	private static extern float get_endWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4DC4CB0", Offset = "0x4DC4CB0", VA = "0x4DC4CB0")]
	private static extern void set_endWidth_Injected(IntPtr _unity_self, float value);
}
