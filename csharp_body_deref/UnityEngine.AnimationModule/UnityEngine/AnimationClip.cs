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

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClip.bindings.h")]
[UnityEngine.Bindings.NativeType("Modules/Animation/AnimationClip.h")]
public sealed class AnimationClip : Motion
{
	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("Length", false, UnityEngine.Bindings.TargetType.Function)]
	public float length
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x68A9420", Offset = "0x68A8420", VA = "0x68A9420")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("SampleRate", false, UnityEngine.Bindings.TargetType.Function)]
	public float frameRate
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x68A94D0", Offset = "0x68A84D0", VA = "0x68A94D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationEvent[] events
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x68A9580", Offset = "0x68A8580", VA = "0x68A9580")]
		set
		{
		}
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x68A9310", Offset = "0x68A8310", VA = "0x68A9310")]
	public AnimationClip()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x68A93F0", Offset = "0x68A83F0", VA = "0x68A93F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationClipBindings::Internal_CreateAnimationClip")]
	private static extern void Internal_CreateAnimationClip([UnityEngine.Writable] AnimationClip self);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x68A9740", Offset = "0x68A8740", VA = "0x68A9740")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimationClipBindings::SetEventsInternal", HasExplicitThis = true)]
	private unsafe void SetEventsInternal(void* data, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x68A94A0", Offset = "0x68A84A0", VA = "0x68A94A0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x68A9550", Offset = "0x68A8550", VA = "0x68A9550")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x68A97D0", Offset = "0x68A87D0", VA = "0x68A97D0")]
	private unsafe static extern void SetEventsInternal_Injected(IntPtr _unity_self, void* data, int length);
}
