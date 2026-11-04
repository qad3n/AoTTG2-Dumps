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

[Token(Token = "0x200018E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Behaviour : Component
{
	[Token(Token = "0x1700022B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeProperty]
	public bool enabled
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x2F129F0", Offset = "0x2F10FF0", VA = "0x182F129F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x2F12B80", Offset = "0x2F11180", VA = "0x182F12B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700022C")]
	[UnityEngine.Bindings.NativeProperty]
	public bool isActiveAndEnabled
	{
		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x2F12AB0", Offset = "0x2F110B0", VA = "0x182F12AB0")]
		[UnityEngine.Bindings.NativeMethod("IsAddedToManager")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x2F12960", Offset = "0x2F10F60", VA = "0x182F12960")]
	public Behaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x2F129B0", Offset = "0x2F10FB0", VA = "0x182F129B0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x2F12B30", Offset = "0x2F11130", VA = "0x182F12B30")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x2F12A70", Offset = "0x2F11070", VA = "0x182F12A70")]
	private static extern bool get_isActiveAndEnabled_Injected(IntPtr _unity_self);
}
