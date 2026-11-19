// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003EC")]
public static class Lightmapping
{
	[Token(Token = "0x20003ED")]
	public delegate void RequestLightsDelegate(Light[] requests, NativeArray<LightDataGI> lightsOutput);

	[Token(Token = "0x4000D25")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static readonly RequestLightsDelegate s_DefaultDelegate;

	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static RequestLightsDelegate s_RequestLightsDelegate;

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x696C710", Offset = "0x696B710", VA = "0x696C710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void SetDelegate(RequestLightsDelegate del)
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x696C7B0", Offset = "0x696B7B0", VA = "0x696C7B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RequestLightsDelegate GetDelegate()
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x696C820", Offset = "0x696B820", VA = "0x696C820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void ResetDelegate()
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x696C870", Offset = "0x696B870", VA = "0x696C870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RequestLights(Light[] lights, IntPtr outLightsPtr, int outLightsCount)
	{
	}
}
