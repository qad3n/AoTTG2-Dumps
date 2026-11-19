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

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasGroup.h")]
[UnityEngine.UIModuleHelpURL("class-CanvasGroup")]
[UnityEngine.NativeClass("UI::CanvasGroup")]
public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter
{
	[Token(Token = "0x17000001")]
	[UnityEngine.Bindings.NativeProperty("Alpha", false, UnityEngine.Bindings.TargetType.Function)]
	public float alpha
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x6CC9290", Offset = "0x6CC8290", VA = "0x6CC9290")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x6CC9340", Offset = "0x6CC8340", VA = "0x6CC9340")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("Interactable", false, UnityEngine.Bindings.TargetType.Function)]
	public bool interactable
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6CC9420", Offset = "0x6CC8420", VA = "0x6CC9420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x6CC94D0", Offset = "0x6CC84D0", VA = "0x6CC94D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("BlocksRaycasts", false, UnityEngine.Bindings.TargetType.Function)]
	public bool blocksRaycasts
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x6CC9590", Offset = "0x6CC8590", VA = "0x6CC9590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x6CC9640", Offset = "0x6CC8640", VA = "0x6CC9640")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("IgnoreParentGroups", false, UnityEngine.Bindings.TargetType.Function)]
	public bool ignoreParentGroups
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x6CC9700", Offset = "0x6CC8700", VA = "0x6CC9700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x6CC97B0", Offset = "0x6CC87B0", VA = "0x6CC97B0")]
		set
		{
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6CC9870", Offset = "0x6CC8870", VA = "0x6CC9870", Slot = "4")]
	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6CC98F0", Offset = "0x6CC88F0", VA = "0x6CC98F0")]
	public CanvasGroup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6CC9310", Offset = "0x6CC8310", VA = "0x6CC9310")]
	private static extern float get_alpha_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6CC93D0", Offset = "0x6CC83D0", VA = "0x6CC93D0")]
	private static extern void set_alpha_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6CC94A0", Offset = "0x6CC84A0", VA = "0x6CC94A0")]
	private static extern bool get_interactable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6CC9550", Offset = "0x6CC8550", VA = "0x6CC9550")]
	private static extern void set_interactable_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6CC9610", Offset = "0x6CC8610", VA = "0x6CC9610")]
	private static extern bool get_blocksRaycasts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6CC96C0", Offset = "0x6CC86C0", VA = "0x6CC96C0")]
	private static extern void set_blocksRaycasts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6CC9780", Offset = "0x6CC8780", VA = "0x6CC9780")]
	private static extern bool get_ignoreParentGroups_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6CC9830", Offset = "0x6CC8830", VA = "0x6CC9830")]
	private static extern void set_ignoreParentGroups_Injected(IntPtr _unity_self, bool value);
}
