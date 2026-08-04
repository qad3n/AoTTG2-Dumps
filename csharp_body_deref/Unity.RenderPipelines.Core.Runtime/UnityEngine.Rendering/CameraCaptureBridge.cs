// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraCaptureBridge
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4BF66F0", Offset = "0x4BF66F0", VA = "0x4BF66F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x4BF6760", Offset = "0x4BF6760", VA = "0x4BF6760")]
		set
		{
		}
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4BF67B0", Offset = "0x4BF67B0", VA = "0x4BF67B0")]
	public static IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> GetCaptureActions(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4BF68C0", Offset = "0x4BF68C0", VA = "0x4BF68C0")]
	public static void AddCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x4BF6A10", Offset = "0x4BF6A10", VA = "0x4BF6A10")]
	public static void RemoveCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}
}
