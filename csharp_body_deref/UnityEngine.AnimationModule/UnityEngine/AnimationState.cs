// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimationState.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class AnimationState : TrackedReference
{
	[Token(Token = "0x200000B")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(AnimationState animationState)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000004")]
	public float weight
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2EACBF0", Offset = "0x2EAB1F0", VA = "0x182EACBF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2EACEC0", Offset = "0x2EAB4C0", VA = "0x182EACEC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float normalizedTime
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2EACAB0", Offset = "0x2EAB0B0", VA = "0x182EACAB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2EACD40", Offset = "0x2EAB340", VA = "0x182EACD40")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public float speed
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x2EACB50", Offset = "0x2EAB150", VA = "0x182EACB50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2EACE00", Offset = "0x2EAB400", VA = "0x182EACE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float length
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2EAC8F0", Offset = "0x2EAAEF0", VA = "0x182EAC8F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000008")]
	public int layer
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2EACC90", Offset = "0x2EAB290", VA = "0x182EACC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public AnimationClip clip
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x2EAC820", Offset = "0x2EAAE20", VA = "0x182EAC820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public string name
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x2EAC9A0", Offset = "0x2EAAFA0", VA = "0x182EAC9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AnimationState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2EACBB0", Offset = "0x2EAB1B0", VA = "0x182EACBB0")]
	private static extern float get_weight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2EACE70", Offset = "0x2EAB470", VA = "0x182EACE70")]
	private static extern void set_weight_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2EACA70", Offset = "0x2EAB070", VA = "0x182EACA70")]
	private static extern float get_normalizedTime_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2EACCF0", Offset = "0x2EAB2F0", VA = "0x182EACCF0")]
	private static extern void set_normalizedTime_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2EACB10", Offset = "0x2EAB110", VA = "0x182EACB10")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2EACDB0", Offset = "0x2EAB3B0", VA = "0x182EACDB0")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2EAC8B0", Offset = "0x2EAAEB0", VA = "0x182EAC8B0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2EACC50", Offset = "0x2EAB250", VA = "0x182EACC50")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2EAC7E0", Offset = "0x2EAADE0", VA = "0x182EAC7E0")]
	private static extern IntPtr get_clip_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2EAC950", Offset = "0x2EAAF50", VA = "0x182EAC950")]
	private static extern void get_name_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
