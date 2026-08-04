// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Random
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000138")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Random/Random.bindings.h")]
public static class Random
{
	[Serializable]
	[Token(Token = "0x2000139")]
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

	[Token(Token = "0x170001A9")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static State state
	{
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x4DF22E0", Offset = "0x4DF22E0", VA = "0x4DF22E0")]
		get
		{
			return default(State);
		}
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x4DF2350", Offset = "0x4DF2350", VA = "0x4DF2350")]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public static extern float value
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x4DF2490", Offset = "0x4DF2490", VA = "0x4DF2490")]
		[UnityEngine.Bindings.FreeFunction]
		get;
	}

	[Token(Token = "0x170001AB")]
	public static Vector3 insideUnitSphere
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x4DF24C0", Offset = "0x4DF24C0", VA = "0x4DF24C0")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001AC")]
	public static Vector3 onUnitSphere
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x4DF2540", Offset = "0x4DF2540", VA = "0x4DF2540")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4DF22B0", Offset = "0x4DF22B0", VA = "0x4DF22B0")]
	[UnityEngine.Bindings.NativeMethod("SetSeed")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void InitState(int seed);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4DF23D0", Offset = "0x4DF23D0", VA = "0x4DF23D0")]
	[UnityEngine.Bindings.FreeFunction]
	public static extern float Range(float minInclusive, float maxInclusive);

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x4DF2410", Offset = "0x4DF2410", VA = "0x4DF2410")]
	public static int Range(int minInclusive, int maxExclusive)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000945")]
	[Address(RVA = "0x4DF2450", Offset = "0x4DF2450", VA = "0x4DF2450")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern int RandomRangeInt(int minInclusive, int maxExclusive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4DF2320", Offset = "0x4DF2320", VA = "0x4DF2320")]
	private static extern void get_state_Injected(out State ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4DF23A0", Offset = "0x4DF23A0", VA = "0x4DF23A0")]
	private static extern void set_state_Injected([In] ref State value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094B")]
	[Address(RVA = "0x4DF2510", Offset = "0x4DF2510", VA = "0x4DF2510")]
	private static extern void get_insideUnitSphere_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094C")]
	[Address(RVA = "0x4DF2590", Offset = "0x4DF2590", VA = "0x4DF2590")]
	private static extern void get_onUnitSphere_Injected(out Vector3 ret);
}
