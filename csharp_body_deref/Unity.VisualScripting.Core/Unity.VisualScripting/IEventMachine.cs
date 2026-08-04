// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IEventMachine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000062")]
public interface IEventMachine : IMachine, IGraphRoot, IGraphParent, IGraphNester, IAotStubbable
{
	[Token(Token = "0x60002AF")]
	void TriggerAnimationEvent(AnimationEvent animationEvent);

	[Token(Token = "0x60002B0")]
	void TriggerUnityEvent(string name);
}
