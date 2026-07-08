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
		[Address(RVA = "0x4D922E0", Offset = "0x4D922E0", VA = "0x4D922E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4D923B0", Offset = "0x4D923B0", VA = "0x4D923B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("Interactable", false, UnityEngine.Bindings.TargetType.Function)]
	public bool interactable
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4D924B0", Offset = "0x4D924B0", VA = "0x4D924B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4D92580", Offset = "0x4D92580", VA = "0x4D92580")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("BlocksRaycasts", false, UnityEngine.Bindings.TargetType.Function)]
	public bool blocksRaycasts
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4D92660", Offset = "0x4D92660", VA = "0x4D92660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4D92730", Offset = "0x4D92730", VA = "0x4D92730")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("IgnoreParentGroups", false, UnityEngine.Bindings.TargetType.Function)]
	public bool ignoreParentGroups
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4D92810", Offset = "0x4D92810", VA = "0x4D92810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4D928E0", Offset = "0x4D928E0", VA = "0x4D928E0", Slot = "4")]
	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4D92380", Offset = "0x4D92380", VA = "0x4D92380")]
	private static extern float get_alpha_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4D92460", Offset = "0x4D92460", VA = "0x4D92460")]
	private static extern void set_alpha_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4D92550", Offset = "0x4D92550", VA = "0x4D92550")]
	private static extern bool get_interactable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4D92620", Offset = "0x4D92620", VA = "0x4D92620")]
	private static extern void set_interactable_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4D92700", Offset = "0x4D92700", VA = "0x4D92700")]
	private static extern bool get_blocksRaycasts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4D927D0", Offset = "0x4D927D0", VA = "0x4D927D0")]
	private static extern void set_blocksRaycasts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4D928B0", Offset = "0x4D928B0", VA = "0x4D928B0")]
	private static extern bool get_ignoreParentGroups_Injected(IntPtr _unity_self);
}
