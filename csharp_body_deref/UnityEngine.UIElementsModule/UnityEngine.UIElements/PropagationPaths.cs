using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001ED")]
internal class PropagationPaths : IDisposable
{
	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<PropagationPaths> s_Pool;

	[Token(Token = "0x4000705")]
	[FieldOffset(Offset = "0x10")]
	public readonly List<VisualElement> trickleDownPath;

	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<VisualElement> targetElements;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x20")]
	public readonly List<VisualElement> bubbleUpPath;

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4D140D0", Offset = "0x4D140D0", VA = "0x4D140D0")]
	public PropagationPaths()
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4D141B0", Offset = "0x4D141B0", VA = "0x4D141B0")]
	[NotNull]
	public static PropagationPaths Build(VisualElement elem, EventBase evt)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4D144D0", Offset = "0x4D144D0", VA = "0x4D144D0")]
	[NotNull]
	public static PropagationPaths BuildAtTarget(VisualElement elem, EventBase evt)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4D14740", Offset = "0x4D14740", VA = "0x4D14740", Slot = "4")]
	public void Dispose()
	{
	}
}
