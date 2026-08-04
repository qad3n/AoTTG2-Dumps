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

[Token(Token = "0x200015B")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class Behaviour : Component
{
	[Token(Token = "0x170001BF")]
	[UnityEngine.Bindings.NativeProperty]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public bool enabled
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x4DF64B0", Offset = "0x4DF64B0", VA = "0x4DF64B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x4DF6570", Offset = "0x4DF6570", VA = "0x4DF6570")]
		set
		{
		}
	}

	[Token(Token = "0x170001C0")]
	[UnityEngine.Bindings.NativeProperty]
	public bool isActiveAndEnabled
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x4DF6640", Offset = "0x4DF6640", VA = "0x4DF6640")]
		[UnityEngine.Bindings.NativeMethod("IsAddedToManager")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x4DF6700", Offset = "0x4DF6700", VA = "0x4DF6700")]
	public Behaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x4DF6540", Offset = "0x4DF6540", VA = "0x4DF6540")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x4DF6600", Offset = "0x4DF6600", VA = "0x4DF6600")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x4DF66D0", Offset = "0x4DF66D0", VA = "0x4DF66D0")]
	private static extern bool get_isActiveAndEnabled_Injected(IntPtr _unity_self);
}
