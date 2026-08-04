// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000260")]
internal interface IScheduler
{
	[Token(Token = "0x6000FB0")]
	void Unschedule(ScheduledItem item);

	[Token(Token = "0x6000FB1")]
	void Schedule(ScheduledItem item);

	[Token(Token = "0x6000FB2")]
	void UpdateScheduledEvents();
}
