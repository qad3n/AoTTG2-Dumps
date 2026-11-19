// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Behaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200018F")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class Behaviour : Component
{
	[Token(Token = "0x17000230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeProperty]
	public bool enabled
	{
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x6914850", Offset = "0x6913850", VA = "0x6914850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x6914900", Offset = "0x6913900", VA = "0x6914900")]
		set
		{
		}
	}

	[Token(Token = "0x17000231")]
	[UnityEngine.Bindings.NativeProperty]
	public bool isActiveAndEnabled
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x69149C0", Offset = "0x69139C0", VA = "0x69149C0")]
		[UnityEngine.Bindings.NativeMethod("IsAddedToManager")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x6914A70", Offset = "0x6913A70", VA = "0x6914A70")]
	public Behaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x69148D0", Offset = "0x69138D0", VA = "0x69148D0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x6914980", Offset = "0x6913980", VA = "0x6914980")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x6914A40", Offset = "0x6913A40", VA = "0x6914A40")]
	private static extern bool get_isActiveAndEnabled_Injected(IntPtr _unity_self);
}
