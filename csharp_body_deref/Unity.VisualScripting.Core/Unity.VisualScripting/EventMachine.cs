using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200005E")]
public abstract class EventMachine<TGraph, TMacro> : Machine<TGraph, TMacro>, IEventMachine, IMachine, IGraphRoot, IGraphParent, IGraphNester, IAotStubbable where TGraph : class, IGraph, new() where TMacro : Macro<TGraph>, new()
{
	[Token(Token = "0x6000294")]
	protected void TriggerEvent(string name)
	{
	}

	[Token(Token = "0x6000295")]
	protected void TriggerEvent<TArgs>(string name, TArgs args)
	{
	}

	[Token(Token = "0x6000296")]
	protected void TriggerUnregisteredEvent(string name)
	{
	}

	[Token(Token = "0x6000297")]
	protected virtual void TriggerRegisteredEvent<TArgs>(EventHook hook, TArgs args)
	{
	}

	[Token(Token = "0x6000298")]
	protected virtual void TriggerUnregisteredEvent<TArgs>(EventHook hook, TArgs args)
	{
	}

	[Token(Token = "0x6000299")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600029A")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600029B")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600029C")]
	protected override void OnInstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x600029D")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600029E")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x600029F")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60002A0")]
	protected override void OnUninstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x60002A1")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002A2")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60002A3")]
	public override void TriggerAnimationEvent(AnimationEvent animationEvent)
	{
	}

	[Token(Token = "0x60002A4")]
	public override void TriggerUnityEvent(string name)
	{
	}

	[Token(Token = "0x60002A5")]
	protected virtual void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60002A6")]
	protected virtual void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x60002A7")]
	protected EventMachine()
	{
	}
}
