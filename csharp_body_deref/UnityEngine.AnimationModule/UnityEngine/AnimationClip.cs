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
		[Address(RVA = "0x4A7BD00", Offset = "0x4A7BD00", VA = "0x4A7BD00")]
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
		[Address(RVA = "0x4A7BDD0", Offset = "0x4A7BDD0", VA = "0x4A7BDD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationEvent[] events
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4A7BEA0", Offset = "0x4A7BEA0", VA = "0x4A7BEA0")]
		set
		{
		}
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4A7BBF0", Offset = "0x4A7BBF0", VA = "0x4A7BBF0")]
	public AnimationClip()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4A7BCD0", Offset = "0x4A7BCD0", VA = "0x4A7BCD0")]
	[UnityEngine.Bindings.FreeFunction("AnimationClipBindings::Internal_CreateAnimationClip")]
	private static extern void Internal_CreateAnimationClip([UnityEngine.Writable] AnimationClip self);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4A7C0A0", Offset = "0x4A7C0A0", VA = "0x4A7C0A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimationClipBindings::SetEventsInternal", HasExplicitThis = true)]
	private unsafe void SetEventsInternal(void* data, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4A7BDA0", Offset = "0x4A7BDA0", VA = "0x4A7BDA0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4A7BE70", Offset = "0x4A7BE70", VA = "0x4A7BE70")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4A7C150", Offset = "0x4A7C150", VA = "0x4A7C150")]
	private unsafe static extern void SetEventsInternal_Injected(IntPtr _unity_self, void* data, int length);
}
