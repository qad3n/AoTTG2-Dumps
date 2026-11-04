// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Random
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000163")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Random/Random.bindings.h")]
public static class Random
{
	[Serializable]
	[Token(Token = "0x2000164")]
	public struct State
	{
		[Token(Token = "0x40005AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private int s0;

		[Token(Token = "0x40005AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		[SerializeField]
		private int s1;

		[Token(Token = "0x40005AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private int s2;

		[Token(Token = "0x40005B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		[SerializeField]
		private int s3;
	}

	[Token(Token = "0x1700020E")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static State state
	{
		[Token(Token = "0x6000C4D")]
		[Address(RVA = "0x2F24F50", Offset = "0x2F23550", VA = "0x182F24F50")]
		get
		{
			return default(State);
		}
		[Token(Token = "0x6000C4E")]
		[Address(RVA = "0x2F25000", Offset = "0x2F23600", VA = "0x182F25000")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public static extern float value
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000C52")]
		[Address(RVA = "0x2F24F90", Offset = "0x2F23590", VA = "0x182F24F90")]
		[UnityEngine.Bindings.FreeFunction]
		get;
	}

	[Token(Token = "0x17000210")]
	public static Vector3 insideUnitSphere
	{
		[Token(Token = "0x6000C53")]
		[Address(RVA = "0x2F24E50", Offset = "0x2F23450", VA = "0x182F24E50")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000211")]
	public static Vector2 insideUnitCircle
	{
		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x2F24DD0", Offset = "0x2F233D0", VA = "0x182F24DD0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000212")]
	public static Vector3 onUnitSphere
	{
		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x2F24ED0", Offset = "0x2F234D0", VA = "0x182F24ED0")]
		[UnityEngine.Bindings.FreeFunction]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x2F24D00", Offset = "0x2F23300", VA = "0x182F24D00")]
	[UnityEngine.Bindings.StaticAccessor("GetScriptingRand()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod("SetSeed")]
	public static extern void InitState(int seed);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x2F24D80", Offset = "0x2F23380", VA = "0x182F24D80")]
	[UnityEngine.Bindings.FreeFunction]
	public static extern float Range(float minInclusive, float maxInclusive);

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x2F24D40", Offset = "0x2F23340", VA = "0x182F24D40")]
	public static int Range(int minInclusive, int maxExclusive)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x2F24D40", Offset = "0x2F23340", VA = "0x182F24D40")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern int RandomRangeInt(int minInclusive, int maxExclusive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x2F24CC0", Offset = "0x2F232C0", VA = "0x182F24CC0")]
	[UnityEngine.Bindings.FreeFunction]
	private static extern void GetRandomUnitCircle(out Vector2 output);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x2F24F10", Offset = "0x2F23510", VA = "0x182F24F10")]
	private static extern void get_state_Injected(out State ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x2F24FC0", Offset = "0x2F235C0", VA = "0x182F24FC0")]
	private static extern void set_state_Injected([In] ref State value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x2F24E10", Offset = "0x2F23410", VA = "0x182F24E10")]
	private static extern void get_insideUnitSphere_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x2F24E90", Offset = "0x2F23490", VA = "0x182F24E90")]
	private static extern void get_onUnitSphere_Injected(out Vector3 ret);
}
