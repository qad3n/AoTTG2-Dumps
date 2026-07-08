using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000342")]
public static class Lightmapping
{
	[Token(Token = "0x2000343")]
	public delegate void RequestLightsDelegate(Light[] requests, NativeArray<LightDataGI> lightsOutput);

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static readonly RequestLightsDelegate s_DefaultDelegate;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static RequestLightsDelegate s_RequestLightsDelegate;

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4B12420", Offset = "0x4B12420", VA = "0x4B12420")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void SetDelegate(RequestLightsDelegate del)
	{
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4B124D0", Offset = "0x4B124D0", VA = "0x4B124D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RequestLightsDelegate GetDelegate()
	{
		return null;
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x4B12540", Offset = "0x4B12540", VA = "0x4B12540")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void ResetDelegate()
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x4B12590", Offset = "0x4B12590", VA = "0x4B12590")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RequestLights(Light[] lights, IntPtr outLightsPtr, int outLightsCount)
	{
	}
}
