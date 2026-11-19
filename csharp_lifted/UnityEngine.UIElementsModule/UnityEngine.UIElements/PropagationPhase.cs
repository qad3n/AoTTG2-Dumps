// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropagationPhase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D1")]
public enum PropagationPhase
{
	[Token(Token = "0x40007B4")]
	None = 0,
	[Token(Token = "0x40007B5")]
	TrickleDown = 1,
	[Token(Token = "0x40007B6")]
	BubbleUp = 3,
	[Token(Token = "0x40007B7")]
	[Obsolete("PropagationPhase.AtTarget has been removed as part of an event propagation simplification. Events now propagate through the TrickleDown phase followed immediately by the BubbleUp phase. Please use TrickleDown or BubbleUp. You can check if the event target is the current element by testing event.target == this in your local callback.", false)]
	AtTarget = 2,
	[Token(Token = "0x40007B8")]
	[Obsolete("PropagationPhase.DefaultAction has been removed as part of an event propagation simplification. ExecuteDefaultAction now occurs as part of the BubbleUp phase. Please use BubbleUp.", false)]
	DefaultAction = 4,
	[Token(Token = "0x40007B9")]
	[Obsolete("PropagationPhase.DefaultActionAtTarget has been removed as part of an event propagation simplification. ExecuteDefaultActionAtTarget now occurs as part of the BubbleUp phase. Please use BubbleUp", false)]
	DefaultActionAtTarget = 5
}
