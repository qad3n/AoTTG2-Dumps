using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000158")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class Behaviour : Component
{
	[Token(Token = "0x170001BE")]
	[UnityEngine.Bindings.NativeProperty]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public bool enabled
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x4ACEB80", Offset = "0x4ACEB80", VA = "0x4ACEB80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x4ACEC40", Offset = "0x4ACEC40", VA = "0x4ACEC40")]
		set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	[UnityEngine.Bindings.NativeProperty]
	public bool isActiveAndEnabled
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x4ACED10", Offset = "0x4ACED10", VA = "0x4ACED10")]
		[UnityEngine.Bindings.NativeMethod("IsAddedToManager")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x4ACEDD0", Offset = "0x4ACEDD0", VA = "0x4ACEDD0")]
	public Behaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x4ACEC10", Offset = "0x4ACEC10", VA = "0x4ACEC10")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x4ACECD0", Offset = "0x4ACECD0", VA = "0x4ACECD0")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x4ACEDA0", Offset = "0x4ACEDA0", VA = "0x4ACEDA0")]
	private static extern bool get_isActiveAndEnabled_Injected(IntPtr _unity_self);
}
