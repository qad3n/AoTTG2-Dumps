// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IVisualElementScheduledItem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200054F")]
public interface IVisualElementScheduledItem
{
	[Token(Token = "0x17000A34")]
	bool isActive
	{
		[Token(Token = "0x6002816")]
		get;
	}

	[Token(Token = "0x6002817")]
	void Resume();

	[Token(Token = "0x6002818")]
	void Pause();

	[Token(Token = "0x6002819")]
	void ExecuteLater(long delayMs);

	[Token(Token = "0x600281A")]
	IVisualElementScheduledItem StartingIn(long delayMs);

	[Token(Token = "0x600281B")]
	IVisualElementScheduledItem Every(long intervalMs);

	[Token(Token = "0x600281C")]
	IVisualElementScheduledItem Until(Func<bool> stopCondition);
}
