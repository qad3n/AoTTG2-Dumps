// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IVisualElementScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000550")]
public interface IVisualElementScheduler
{
	[Token(Token = "0x600281D")]
	IVisualElementScheduledItem Execute(Action<TimerState> timerUpdateEvent);

	[Token(Token = "0x600281E")]
	IVisualElementScheduledItem Execute(Action updateEvent);
}
