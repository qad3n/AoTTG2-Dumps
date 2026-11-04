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
[UnityEngine.Bindings.NativeType("Modules/Animation/AnimationClip.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClip.bindings.h")]
public sealed class AnimationClip : Motion
{
	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("Length", false, UnityEngine.Bindings.TargetType.Function)]
	public float length
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2EAA950", Offset = "0x2EA8F50", VA = "0x182EAA950")]
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
		[Address(RVA = "0x2EAA890", Offset = "0x2EA8E90", VA = "0x182EAA890")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public AnimationEvent[] events
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x2EAA9D0", Offset = "0x2EA8FD0", VA = "0x182EAA9D0")]
		set
		{
		}
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2EAA7E0", Offset = "0x2EA8DE0", VA = "0x182EAA7E0")]
	public AnimationClip()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2EAA6A0", Offset = "0x2EA8CA0", VA = "0x182EAA6A0")]
	[UnityEngine.Bindings.FreeFunction("AnimationClipBindings::Internal_CreateAnimationClip")]
	private static extern void Internal_CreateAnimationClip([UnityEngine.Writable] AnimationClip self);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2EAA740", Offset = "0x2EA8D40", VA = "0x182EAA740")]
	[UnityEngine.Bindings.FreeFunction(Name = "AnimationClipBindings::SetEventsInternal", HasExplicitThis = true)]
	private unsafe void SetEventsInternal(void* data, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2EAA910", Offset = "0x2EA8F10", VA = "0x182EAA910")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2EAA850", Offset = "0x2EA8E50", VA = "0x182EAA850")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2EAA6E0", Offset = "0x2EA8CE0", VA = "0x182EAA6E0")]
	private unsafe static extern void SetEventsInternal_Injected(IntPtr _unity_self, void* data, int length);
}
