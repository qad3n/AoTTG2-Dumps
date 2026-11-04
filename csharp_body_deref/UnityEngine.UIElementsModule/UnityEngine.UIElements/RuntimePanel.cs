// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RuntimePanel
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200027A")]
internal class RuntimePanel : BaseRuntimePanel, IRuntimePanel, IPanel, IDisposable
{
	[Token(Token = "0x400094F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EventDispatcher s_EventDispatcher;

	[Token(Token = "0x4000950")]
	[FieldOffset(Offset = "0x220")]
	private readonly PanelSettings m_PanelSettings;

	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<UIDocument> s_EmptyDocumentList;

	[Token(Token = "0x1700036A")]
	public PanelSettings panelSettings
	{
		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x3284DC0", Offset = "0x32833C0", VA = "0x183284DC0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x32847D0", Offset = "0x3282DD0", VA = "0x1832847D0")]
	public static RuntimePanel Create(ScriptableObject ownerObject)
	{
		return null;
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x3284A20", Offset = "0x3283020", VA = "0x183284A20")]
	private RuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x32848A0", Offset = "0x3282EA0", VA = "0x1832848A0", Slot = "60")]
	internal override void Update()
	{
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x3284830", Offset = "0x3282E30", VA = "0x183284830")]
	private void OnElementFocus(FocusEvent evt)
	{
	}
}
