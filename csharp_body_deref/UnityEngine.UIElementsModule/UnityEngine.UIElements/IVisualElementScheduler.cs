using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000475")]
public interface IVisualElementScheduler
{
	[Token(Token = "0x6001BB3")]
	IVisualElementScheduledItem Execute(Action<TimerState> timerUpdateEvent);

	[Token(Token = "0x6001BB4")]
	IVisualElementScheduledItem Execute(Action updateEvent);
}
