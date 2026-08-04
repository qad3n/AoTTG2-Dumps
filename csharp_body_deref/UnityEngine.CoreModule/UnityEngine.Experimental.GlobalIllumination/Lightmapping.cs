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

[Token(Token = "0x2000345")]
public static class Lightmapping
{
	[Token(Token = "0x2000346")]
	public delegate void RequestLightsDelegate(Light[] requests, NativeArray<LightDataGI> lightsOutput);

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static readonly RequestLightsDelegate s_DefaultDelegate;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static RequestLightsDelegate s_RequestLightsDelegate;

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x4E39D50", Offset = "0x4E39D50", VA = "0x4E39D50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void SetDelegate(RequestLightsDelegate del)
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x4E39E00", Offset = "0x4E39E00", VA = "0x4E39E00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RequestLightsDelegate GetDelegate()
	{
		return null;
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x4E39E70", Offset = "0x4E39E70", VA = "0x4E39E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void ResetDelegate()
	{
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x4E39EC0", Offset = "0x4E39EC0", VA = "0x4E39EC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RequestLights(Light[] lights, IntPtr outLightsPtr, int outLightsCount)
	{
	}
}
