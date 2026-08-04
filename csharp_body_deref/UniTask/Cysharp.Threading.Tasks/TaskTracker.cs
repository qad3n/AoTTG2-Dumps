// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TaskTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000030")]
public static class TaskTracker
{
	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x0")]
	private static List<KeyValuePair<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)>> listPool;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x8")]
	private static readonly WeakDictionary<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)> tracking;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x10")]
	private static bool dirty;

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x49D59F0", Offset = "0x49D59F0", VA = "0x49D59F0")]
	[Conditional("UNITY_EDITOR")]
	public static void TrackActiveTask(IUniTaskSource task, int skipFrame)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x49D5A00", Offset = "0x49D5A00", VA = "0x49D5A00")]
	[Conditional("UNITY_EDITOR")]
	public static void RemoveTracking(IUniTaskSource task)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x49D5A10", Offset = "0x49D5A10", VA = "0x49D5A10")]
	public static bool CheckAndResetDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x49D5A60", Offset = "0x49D5A60", VA = "0x49D5A60")]
	public static void ForEachActiveTask(Action<int, string, UniTaskStatus, DateTime, string> action)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x49D6080", Offset = "0x49D6080", VA = "0x49D6080")]
	private static void TypeBeautify(Type type, StringBuilder sb)
	{
	}
}
