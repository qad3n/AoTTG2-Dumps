// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropagationPaths
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x503BA00", Offset = "0x503BA00", VA = "0x503BA00")]
	public PropagationPaths()
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x503BAE0", Offset = "0x503BAE0", VA = "0x503BAE0")]
	[NotNull]
	public static PropagationPaths Build(VisualElement elem, EventBase evt)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x503BE00", Offset = "0x503BE00", VA = "0x503BE00")]
	[NotNull]
	public static PropagationPaths BuildAtTarget(VisualElement elem, EventBase evt)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x503C070", Offset = "0x503C070", VA = "0x503C070", Slot = "4")]
	public void Dispose()
	{
	}
}
