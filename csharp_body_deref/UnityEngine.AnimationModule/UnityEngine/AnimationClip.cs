// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationClip
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

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeType("Modules/Animation/AnimationClip.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClip.bindings.h")]
public sealed class AnimationClip : Motion
{
	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("Length", false, UnityEngine.Bindings.TargetType.Function)]
	public float length
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4DA3520", Offset = "0x4DA3520", VA = "0x4DA3520")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("SampleRate", false, UnityEngine.Bindings.TargetType.Function)]
	public float frameRate
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4DA35F0", Offset = "0x4DA35F0", VA = "0x4DA35F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationEvent[] events
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4DA36C0", Offset = "0x4DA36C0", VA = "0x4DA36C0")]
		set
		{
		}
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4DA3410", Offset = "0x4DA3410", VA = "0x4DA3410")]
	public AnimationClip()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4DA34F0", Offset = "0x4DA34F0", VA = "0x4DA34F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationClipBindings::Internal_CreateAnimationClip")]
	private static extern void Internal_CreateAnimationClip([UnityEngine.Writable] AnimationClip self);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4DA38C0", Offset = "0x4DA38C0", VA = "0x4DA38C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimationClipBindings::SetEventsInternal", HasExplicitThis = true)]
	private unsafe void SetEventsInternal(void* data, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4DA35C0", Offset = "0x4DA35C0", VA = "0x4DA35C0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4DA3690", Offset = "0x4DA3690", VA = "0x4DA3690")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4DA3970", Offset = "0x4DA3970", VA = "0x4DA3970")]
	private unsafe static extern void SetEventsInternal_Injected(IntPtr _unity_self, void* data, int length);
}
