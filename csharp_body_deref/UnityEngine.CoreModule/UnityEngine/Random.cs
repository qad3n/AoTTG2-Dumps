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

[Token(Token = "0x2000164")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Random/Random.bindings.h")]
public static class Random
{
	[Serializable]
	[Token(Token = "0x2000165")]
	public struct State
	{
		[Token(Token = "0x40005B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private int s0;

		[Token(Token = "0x40005B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		[SerializeField]
		private int s1;

		[Token(Token = "0x40005B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private int s2;

		[Token(Token = "0x40005B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		[SerializeField]
		private int s3;
	}

	[Token(Token = "0x17000213")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static State state
	{
		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x690E180", Offset = "0x690D180", VA = "0x690E180")]
		get
		{
			return default(State);
		}
		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x690E1F0", Offset = "0x690D1F0", VA = "0x690E1F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public static extern float value
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x690E330", Offset = "0x690D330", VA = "0x690E330")]
		[UnityEngine.Bindings.FreeFunction]
		get;
	}

	[Token(Token = "0x17000215")]
	public static Vector3 insideUnitSphere
	{
		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x690E360", Offset = "0x690D360", VA = "0x690E360")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000216")]
	public static Vector2 insideUnitCircle
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x690E410", Offset = "0x690D410", VA = "0x690E410")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000217")]
	public static Vector3 onUnitSphere
	{
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x690E450", Offset = "0x690D450", VA = "0x690E450")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x690E150", Offset = "0x690D150", VA = "0x690E150")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod("SetSeed")]
	public static extern void InitState(int seed);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x690E270", Offset = "0x690D270", VA = "0x690E270")]
	[UnityEngine.Bindings.FreeFunction]
	public static extern float Range(float minInclusive, float maxInclusive);

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x690E2B0", Offset = "0x690D2B0", VA = "0x690E2B0")]
	public static int Range(int minInclusive, int maxExclusive)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x690E2F0", Offset = "0x690D2F0", VA = "0x690E2F0")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern int RandomRangeInt(int minInclusive, int maxExclusive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x690E3E0", Offset = "0x690D3E0", VA = "0x690E3E0")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GetRandomUnitCircle(out Vector2 output);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x690E1C0", Offset = "0x690D1C0", VA = "0x690E1C0")]
	private static extern void get_state_Injected(out State ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x690E240", Offset = "0x690D240", VA = "0x690E240")]
	private static extern void set_state_Injected([In] ref State value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x690E3B0", Offset = "0x690D3B0", VA = "0x690E3B0")]
	private static extern void get_insideUnitSphere_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x690E4A0", Offset = "0x690D4A0", VA = "0x690E4A0")]
	private static extern void get_onUnitSphere_Injected(out Vector3 ret);
}
