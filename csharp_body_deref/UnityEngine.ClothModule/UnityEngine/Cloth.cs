using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.NativeClass("Unity::Cloth")]
[UnityEngine.Bindings.NativeHeader("Modules/Cloth/Cloth.h")]
[RequireComponent(typeof(Transform), typeof(SkinnedMeshRenderer))]
public sealed class Cloth : Component
{
	[Token(Token = "0x17000001")]
	public bool enabled
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4A83D20", Offset = "0x4A83D20", VA = "0x4A83D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4A83DF0", Offset = "0x4A83DF0", VA = "0x4A83DF0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A83DC0", Offset = "0x4A83DC0", VA = "0x4A83DC0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4A83E90", Offset = "0x4A83E90", VA = "0x4A83E90")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);
}
