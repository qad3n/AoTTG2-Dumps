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

	[Token(Token = "0x4000D27")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static readonly RequestLightsDelegate s_DefaultDelegate;

	[Token(Token = "0x4000D28")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static RequestLightsDelegate s_RequestLightsDelegate;

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x2F79530", Offset = "0x2F77B30", VA = "0x182F79530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void SetDelegate(RequestLightsDelegate del)
	{
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x2F793A0", Offset = "0x2F779A0", VA = "0x182F793A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RequestLightsDelegate GetDelegate()
	{
		return null;
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x2F794C0", Offset = "0x2F77AC0", VA = "0x182F794C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void ResetDelegate()
	{
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x2F793F0", Offset = "0x2F779F0", VA = "0x182F793F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RequestLights(Light[] lights, IntPtr outLightsPtr, int outLightsCount)
	{
	}
}
