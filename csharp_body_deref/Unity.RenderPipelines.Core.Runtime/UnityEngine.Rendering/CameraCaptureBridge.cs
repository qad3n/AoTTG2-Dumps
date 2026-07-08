using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A2")]
public static class CameraCaptureBridge
{
	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Camera, HashSet<Action<RenderTargetIdentifier, CommandBuffer>>> actionDict;

	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x8")]
	private static bool _enabled;

	[Token(Token = "0x17000175")]
	public static bool enabled
	{
		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x48D1680", Offset = "0x48D1680", VA = "0x48D1680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x48D16F0", Offset = "0x48D16F0", VA = "0x48D16F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x48D1740", Offset = "0x48D1740", VA = "0x48D1740")]
	public static IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> GetCaptureActions(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x48D1850", Offset = "0x48D1850", VA = "0x48D1850")]
	public static void AddCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x48D19A0", Offset = "0x48D19A0", VA = "0x48D19A0")]
	public static void RemoveCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}
}
