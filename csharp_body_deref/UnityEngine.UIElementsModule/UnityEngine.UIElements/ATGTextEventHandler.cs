// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ATGTextEventHandler
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000498")]
internal class ATGTextEventHandler
{
	[Token(Token = "0x4000F4B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex s_ATagRegex;

	[Token(Token = "0x4000F4C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Regex s_LinkTagRegex;

	[Token(Token = "0x4000F4D")]
	[FieldOffset(Offset = "0x10")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000F4E")]
	[FieldOffset(Offset = "0x18")]
	private EventCallback<PointerDownEvent> m_LinkTagOnPointerDown;

	[Token(Token = "0x4000F4F")]
	[FieldOffset(Offset = "0x20")]
	private EventCallback<PointerUpEvent> m_LinkTagOnPointerUp;

	[Token(Token = "0x4000F50")]
	[FieldOffset(Offset = "0x28")]
	private EventCallback<PointerMoveEvent> m_LinkTagOnPointerMove;

	[Token(Token = "0x4000F51")]
	[FieldOffset(Offset = "0x30")]
	private EventCallback<PointerOutEvent> m_LinkTagOnPointerOut;

	[Token(Token = "0x4000F52")]
	[FieldOffset(Offset = "0x38")]
	private EventCallback<PointerUpEvent> m_HyperlinkOnPointerUp;

	[Token(Token = "0x4000F53")]
	[FieldOffset(Offset = "0x40")]
	private EventCallback<PointerMoveEvent> m_HyperlinkOnPointerMove;

	[Token(Token = "0x4000F54")]
	[FieldOffset(Offset = "0x48")]
	private EventCallback<PointerOverEvent> m_HyperlinkOnPointerOver;

	[Token(Token = "0x4000F55")]
	[FieldOffset(Offset = "0x50")]
	private EventCallback<PointerOutEvent> m_HyperlinkOnPointerOut;

	[Token(Token = "0x4000F56")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Dictionary<string, string>> onComplexHyperlinkClicked;

	[Token(Token = "0x4000F57")]
	[FieldOffset(Offset = "0x58")]
	internal bool isOverridingCursor;

	[Token(Token = "0x4000F58")]
	[FieldOffset(Offset = "0x5C")]
	internal int currentLinkIDHash;

	[Token(Token = "0x6002352")]
	[Address(RVA = "0x31274E0", Offset = "0x3125AE0", VA = "0x1831274E0")]
	public ATGTextEventHandler(TextElement textElement)
	{
	}

	[Token(Token = "0x6002353")]
	[Address(RVA = "0x3126CD0", Offset = "0x31252D0", VA = "0x183126CD0")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6002354")]
	[Address(RVA = "0x3125890", Offset = "0x3123E90", VA = "0x183125890")]
	private bool HasAllocatedLinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6002355")]
	[Address(RVA = "0x31256A0", Offset = "0x3123CA0", VA = "0x1831256A0")]
	private void AllocateLinkCallbacks()
	{
	}

	[Token(Token = "0x6002356")]
	[Address(RVA = "0x3125880", Offset = "0x3123E80", VA = "0x183125880")]
	private bool HasAllocatedHyperlinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6002357")]
	[Address(RVA = "0x3125530", Offset = "0x3123B30", VA = "0x183125530")]
	private void AllocateHyperlinkCallbacks()
	{
	}

	[Token(Token = "0x6002358")]
	[Address(RVA = "0x3125810", Offset = "0x3123E10", VA = "0x183125810")]
	private void EnsureTextGenerationInfoIsValid()
	{
	}

	[Token(Token = "0x6002359")]
	[Address(RVA = "0x3125B80", Offset = "0x3124180", VA = "0x183125B80")]
	private void HyperlinkOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x600235A")]
	[Address(RVA = "0x3125DE0", Offset = "0x31243E0", VA = "0x183125DE0")]
	private static bool IsComplexHyperLink(string link, out Dictionary<string, string> hyperLinkData)
	{
		return default(bool);
	}

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x3125B70", Offset = "0x3124170", VA = "0x183125B70")]
	private void HyperlinkOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x600235C")]
	[Address(RVA = "0x31258A0", Offset = "0x3123EA0", VA = "0x1831258A0")]
	private void HyperlinkOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x600235D")]
	[Address(RVA = "0x3125B70", Offset = "0x3124170", VA = "0x183125B70")]
	private void HyperlinkOnPointerOut(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x3126180", Offset = "0x3124780", VA = "0x183126180")]
	private void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x600235F")]
	[Address(RVA = "0x3126A30", Offset = "0x3125030", VA = "0x183126A30")]
	private void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002360")]
	[Address(RVA = "0x3126420", Offset = "0x3124A20", VA = "0x183126420")]
	private void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002361")]
	[Address(RVA = "0x31268E0", Offset = "0x3124EE0", VA = "0x1831268E0")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x3126F80", Offset = "0x3125580", VA = "0x183126F80")]
	internal void RegisterLinkTagCallbacks()
	{
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x3127310", Offset = "0x3125910", VA = "0x183127310")]
	internal void UnRegisterLinkTagCallbacks()
	{
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x3126CF0", Offset = "0x31252F0", VA = "0x183126CF0")]
	internal void RegisterHyperlinkCallbacks()
	{
	}

	[Token(Token = "0x6002365")]
	[Address(RVA = "0x31271D0", Offset = "0x31257D0", VA = "0x1831271D0")]
	internal void UnRegisterHyperlinkCallbacks()
	{
	}
}
