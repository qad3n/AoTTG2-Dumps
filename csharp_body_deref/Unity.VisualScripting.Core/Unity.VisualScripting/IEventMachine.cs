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
