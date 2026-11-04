// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropagationPaths
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000237")]
internal class PropagationPaths : IDisposable
{
	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<PropagationPaths> s_Pool;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x10")]
	public readonly List<VisualElement> trickleDownPath;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<VisualElement> bubbleUpPath;

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x326E110", Offset = "0x326C710", VA = "0x18326E110")]
	public PropagationPaths()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x326DD40", Offset = "0x326C340", VA = "0x18326DD40")]
	[NotNull]
	public static PropagationPaths Build(VisualElement elem, EventBase evt, int eventCategories)
	{
		return null;
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x326DF20", Offset = "0x326C520", VA = "0x18326DF20", Slot = "4")]
	public void Dispose()
	{
	}
}
