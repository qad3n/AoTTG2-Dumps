// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Cloth
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

[Token(Token = "0x2000002")]
[RequireComponent(typeof(Transform), typeof(SkinnedMeshRenderer))]
[UnityEngine.NativeClass("Unity::Cloth")]
[UnityEngine.Bindings.NativeHeader("Modules/Cloth/Cloth.h")]
public sealed class Cloth : Component
{
	[Token(Token = "0x17000001")]
	public bool enabled
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x2EB6C10", Offset = "0x2EB5210", VA = "0x182EB6C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2EB6CE0", Offset = "0x2EB52E0", VA = "0x182EB6CE0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2EB6BD0", Offset = "0x2EB51D0", VA = "0x182EB6BD0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2EB6C90", Offset = "0x2EB5290", VA = "0x182EB6C90")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);
}
