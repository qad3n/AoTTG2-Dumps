// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RuntimePanel
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C89650", Offset = "0x6C88650", VA = "0x6C89650", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x6C89520", Offset = "0x6C88520", VA = "0x6C89520")]
	public static RuntimePanel Create(ScriptableObject ownerObject)
	{
		return null;
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x6C89660", Offset = "0x6C88660", VA = "0x6C89660")]
	private RuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x6C899F0", Offset = "0x6C889F0", VA = "0x6C899F0", Slot = "60")]
	internal override void Update()
	{
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x6C89A70", Offset = "0x6C88A70", VA = "0x6C89A70")]
	private void OnElementFocus(FocusEvent evt)
	{
	}
}
