// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraCaptureBridge
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001BB")]
public static class CameraCaptureBridge
{
	[Token(Token = "0x20001BC")]
	private class CameraEntry
	{
		[Token(Token = "0x40008A7")]
		[FieldOffset(Offset = "0x10")]
		internal HashSet<Action<RenderTargetIdentifier, CommandBuffer>> actions;

		[Token(Token = "0x40008A8")]
		[FieldOffset(Offset = "0x18")]
		internal IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> cachedEnumerator;

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CameraEntry()
		{
		}
	}

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Camera, CameraEntry> actionDict;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x8")]
	private static bool _enabled;

	[Token(Token = "0x170001C0")]
	public static bool enabled
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x2B3F9D0", Offset = "0x2B3DFD0", VA = "0x182B3F9D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x2B3FA20", Offset = "0x2B3E020", VA = "0x182B3FA20")]
		set
		{
		}
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x2B3F690", Offset = "0x2B3DC90", VA = "0x182B3F690")]
	public static IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> GetCaptureActions(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x2B3F520", Offset = "0x2B3DB20", VA = "0x182B3F520")]
	internal static IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> GetCachedCaptureActionsEnumerator(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x2B3F2E0", Offset = "0x2B3D8E0", VA = "0x182B3F2E0")]
	public static void AddCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x2B3F7B0", Offset = "0x2B3DDB0", VA = "0x182B3F7B0")]
	public static void RemoveCaptureAction(Camera camera, Action<RenderTargetIdentifier, CommandBuffer> action)
	{
	}
}
