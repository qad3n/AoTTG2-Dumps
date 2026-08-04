// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CanvasGroup
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

[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasGroup.h")]
[UnityEngine.NativeClass("UI::CanvasGroup")]
public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter
{
	[Token(Token = "0x17000001")]
	[UnityEngine.Bindings.NativeProperty("Alpha", false, UnityEngine.Bindings.TargetType.Function)]
	public float alpha
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x50B9C10", Offset = "0x50B9C10", VA = "0x50B9C10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x50B9CE0", Offset = "0x50B9CE0", VA = "0x50B9CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("Interactable", false, UnityEngine.Bindings.TargetType.Function)]
	public bool interactable
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x50B9DE0", Offset = "0x50B9DE0", VA = "0x50B9DE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x50B9EB0", Offset = "0x50B9EB0", VA = "0x50B9EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("BlocksRaycasts", false, UnityEngine.Bindings.TargetType.Function)]
	public bool blocksRaycasts
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x50B9F90", Offset = "0x50B9F90", VA = "0x50B9F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x50BA060", Offset = "0x50BA060", VA = "0x50BA060")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("IgnoreParentGroups", false, UnityEngine.Bindings.TargetType.Function)]
	public bool ignoreParentGroups
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x50BA140", Offset = "0x50BA140", VA = "0x50BA140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x50BA210", Offset = "0x50BA210", VA = "0x50BA210", Slot = "4")]
	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x50B9CB0", Offset = "0x50B9CB0", VA = "0x50B9CB0")]
	private static extern float get_alpha_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x50B9D90", Offset = "0x50B9D90", VA = "0x50B9D90")]
	private static extern void set_alpha_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x50B9E80", Offset = "0x50B9E80", VA = "0x50B9E80")]
	private static extern bool get_interactable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x50B9F50", Offset = "0x50B9F50", VA = "0x50B9F50")]
	private static extern void set_interactable_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x50BA030", Offset = "0x50BA030", VA = "0x50BA030")]
	private static extern bool get_blocksRaycasts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x50BA100", Offset = "0x50BA100", VA = "0x50BA100")]
	private static extern void set_blocksRaycasts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x50BA1E0", Offset = "0x50BA1E0", VA = "0x50BA1E0")]
	private static extern bool get_ignoreParentGroups_Injected(IntPtr _unity_self);
}
