// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnityThread
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200019E")]
public static class UnityThread
{
	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x0")]
	public static Thread thread;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x8")]
	public static Action<Action> editorAsync;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x10")]
	public static ConcurrentQueue<Action> pendingQueue;

	[Token(Token = "0x170001CA")]
	public static bool allowsAPI
	{
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x4D5C0C0", Offset = "0x4D5C0C0", VA = "0x4D5C0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4D5D720", Offset = "0x4D5D720", VA = "0x4D5D720")]
	internal static void RuntimeInitialize()
	{
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x4D5D790", Offset = "0x4D5D790", VA = "0x4D5D790")]
	[Conditional("UNITY_EDITOR")]
	public static void EditorAsync(Action action)
	{
	}
}
