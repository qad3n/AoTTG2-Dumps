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
		[Address(RVA = "0x68B27C0", Offset = "0x68B17C0", VA = "0x68B27C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x68B2870", Offset = "0x68B1870", VA = "0x68B2870")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000003")]
	[Address(RVA = "0x68B2840", Offset = "0x68B1840", VA = "0x68B2840")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x68B28F0", Offset = "0x68B18F0", VA = "0x68B28F0")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);
}
