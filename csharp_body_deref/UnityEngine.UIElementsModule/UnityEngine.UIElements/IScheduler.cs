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
