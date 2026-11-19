// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationState
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x68A88C0", Offset = "0x68A78C0", VA = "0x68A88C0")]
		public static IntPtr ConvertToNative(AnimationState animationState)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000004")]
	public float weight
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x68A8180", Offset = "0x68A7180", VA = "0x68A8180")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x68A8210", Offset = "0x68A7210", VA = "0x68A8210")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float normalizedTime
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x68A82E0", Offset = "0x68A72E0", VA = "0x68A82E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x68A8370", Offset = "0x68A7370", VA = "0x68A8370")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public float speed
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x68A8440", Offset = "0x68A7440", VA = "0x68A8440")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x68A84D0", Offset = "0x68A74D0", VA = "0x68A84D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float length
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x68A85A0", Offset = "0x68A75A0", VA = "0x68A85A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000008")]
	public int layer
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x68A8630", Offset = "0x68A7630", VA = "0x68A8630")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public AnimationClip clip
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x68A86D0", Offset = "0x68A76D0", VA = "0x68A86D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public string name
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x68A8790", Offset = "0x68A7790", VA = "0x68A8790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x68A88B0", Offset = "0x68A78B0", VA = "0x68A88B0")]
	public AnimationState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x68A81E0", Offset = "0x68A71E0", VA = "0x68A81E0")]
	private static extern float get_weight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x68A8290", Offset = "0x68A7290", VA = "0x68A8290")]
	private static extern void set_weight_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x68A8340", Offset = "0x68A7340", VA = "0x68A8340")]
	private static extern float get_normalizedTime_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x68A83F0", Offset = "0x68A73F0", VA = "0x68A83F0")]
	private static extern void set_normalizedTime_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x68A84A0", Offset = "0x68A74A0", VA = "0x68A84A0")]
	private static extern float get_speed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x68A8550", Offset = "0x68A7550", VA = "0x68A8550")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x68A8600", Offset = "0x68A7600", VA = "0x68A8600")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x68A8690", Offset = "0x68A7690", VA = "0x68A8690")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x68A8760", Offset = "0x68A7760", VA = "0x68A8760")]
	private static extern IntPtr get_clip_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x68A8870", Offset = "0x68A7870", VA = "0x68A8870")]
	private static extern void get_name_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
