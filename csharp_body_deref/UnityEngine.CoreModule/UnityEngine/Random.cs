using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000135")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Random/Random.bindings.h")]
public static class Random
{
	[Serializable]
	[Token(Token = "0x2000136")]
	public struct State
	{
		[Token(Token = "0x400052C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private int s0;

		[Token(Token = "0x400052D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		[SerializeField]
		private int s1;

		[Token(Token = "0x400052E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private int s2;

		[Token(Token = "0x400052F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		[SerializeField]
		private int s3;
	}

	[Token(Token = "0x170001A8")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static State state
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x4ACA9B0", Offset = "0x4ACA9B0", VA = "0x4ACA9B0")]
		get
		{
			return default(State);
		}
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x4ACAA20", Offset = "0x4ACAA20", VA = "0x4ACAA20")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public static extern float value
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x4ACAB60", Offset = "0x4ACAB60", VA = "0x4ACAB60")]
		[UnityEngine.Bindings.FreeFunction]
		get;
	}

	[Token(Token = "0x170001AA")]
	public static Vector3 insideUnitSphere
	{
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x4ACAB90", Offset = "0x4ACAB90", VA = "0x4ACAB90")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001AB")]
	public static Vector3 onUnitSphere
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x4ACAC10", Offset = "0x4ACAC10", VA = "0x4ACAC10")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4ACA980", Offset = "0x4ACA980", VA = "0x4ACA980")]
	[UnityEngine.Bindings.NativeMethod("SetSeed")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void InitState(int seed);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4ACAAA0", Offset = "0x4ACAAA0", VA = "0x4ACAAA0")]
	[UnityEngine.Bindings.FreeFunction]
	public static extern float Range(float minInclusive, float maxInclusive);

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4ACAAE0", Offset = "0x4ACAAE0", VA = "0x4ACAAE0")]
	public static int Range(int minInclusive, int maxExclusive)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4ACAB20", Offset = "0x4ACAB20", VA = "0x4ACAB20")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern int RandomRangeInt(int minInclusive, int maxExclusive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000947")]
	[Address(RVA = "0x4ACA9F0", Offset = "0x4ACA9F0", VA = "0x4ACA9F0")]
	private static extern void get_state_Injected(out State ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000948")]
	[Address(RVA = "0x4ACAA70", Offset = "0x4ACAA70", VA = "0x4ACAA70")]
	private static extern void set_state_Injected([In] ref State value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4ACABE0", Offset = "0x4ACABE0", VA = "0x4ACABE0")]
	private static extern void get_insideUnitSphere_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4ACAC60", Offset = "0x4ACAC60", VA = "0x4ACAC60")]
	private static extern void get_onUnitSphere_Injected(out Vector3 ret);
}
