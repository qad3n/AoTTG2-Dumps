// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ATGTextEventHandler
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6B29660", Offset = "0x6B28660", VA = "0x6B29660")]
	public ATGTextEventHandler(TextElement textElement)
	{
	}

	[Token(Token = "0x6002353")]
	[Address(RVA = "0x6B296F0", Offset = "0x6B286F0", VA = "0x6B296F0")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6002354")]
	[Address(RVA = "0x6B299A0", Offset = "0x6B289A0", VA = "0x6B299A0")]
	private bool HasAllocatedLinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6002355")]
	[Address(RVA = "0x6B299B0", Offset = "0x6B289B0", VA = "0x6B299B0")]
	private void AllocateLinkCallbacks()
	{
	}

	[Token(Token = "0x6002356")]
	[Address(RVA = "0x6B29B30", Offset = "0x6B28B30", VA = "0x6B29B30")]
	private bool HasAllocatedHyperlinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6002357")]
	[Address(RVA = "0x6B29B40", Offset = "0x6B28B40", VA = "0x6B29B40")]
	private void AllocateHyperlinkCallbacks()
	{
	}

	[Token(Token = "0x6002358")]
	[Address(RVA = "0x6B29CC0", Offset = "0x6B28CC0", VA = "0x6B29CC0")]
	private void EnsureTextGenerationInfoIsValid()
	{
	}

	[Token(Token = "0x6002359")]
	[Address(RVA = "0x6B29D20", Offset = "0x6B28D20", VA = "0x6B29D20")]
	private void HyperlinkOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x600235A")]
	[Address(RVA = "0x6B2A0D0", Offset = "0x6B290D0", VA = "0x6B2A0D0")]
	private static bool IsComplexHyperLink(string link, out Dictionary<string, string> hyperLinkData)
	{
		return default(bool);
	}

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x6B2A550", Offset = "0x6B29550", VA = "0x6B2A550")]
	private void HyperlinkOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x600235C")]
	[Address(RVA = "0x6B2A560", Offset = "0x6B29560", VA = "0x6B2A560")]
	private void HyperlinkOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x600235D")]
	[Address(RVA = "0x6B2A8C0", Offset = "0x6B298C0", VA = "0x6B2A8C0")]
	private void HyperlinkOnPointerOut(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x6B2A8D0", Offset = "0x6B298D0", VA = "0x6B2A8D0")]
	private void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x600235F")]
	[Address(RVA = "0x6B2AB90", Offset = "0x6B29B90", VA = "0x6B2AB90")]
	private void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002360")]
	[Address(RVA = "0x6B2AE50", Offset = "0x6B29E50", VA = "0x6B2AE50")]
	private void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002361")]
	[Address(RVA = "0x6B2B3C0", Offset = "0x6B2A3C0", VA = "0x6B2B3C0")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x6B2B580", Offset = "0x6B2A580", VA = "0x6B2B580")]
	internal void RegisterLinkTagCallbacks()
	{
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x6B29710", Offset = "0x6B28710", VA = "0x6B29710")]
	internal void UnRegisterLinkTagCallbacks()
	{
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x6B2B680", Offset = "0x6B2A680", VA = "0x6B2B680")]
	internal void RegisterHyperlinkCallbacks()
	{
	}

	[Token(Token = "0x6002365")]
	[Address(RVA = "0x6B297F0", Offset = "0x6B287F0", VA = "0x6B297F0")]
	internal void UnRegisterHyperlinkCallbacks()
	{
	}
}
