// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenu
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A6")]
public class DropdownMenu
{
	[Token(Token = "0x4000746")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<DropdownMenuItem> m_MenuItems;

	[Token(Token = "0x4000747")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DropdownMenuEventInfo m_DropdownMenuEventInfo;

	[Token(Token = "0x1700023C")]
	internal int Count
	{
		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x32421F0", Offset = "0x32407F0", VA = "0x1832421F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023D")]
	internal bool repaintPanelBeforeDisplay
	{
		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
	public List<DropdownMenuItem> MenuItems()
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x3241A30", Offset = "0x3240030", VA = "0x183241A30")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, Func<DropdownMenuAction, DropdownMenuAction.Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x3241930", Offset = "0x323FF30", VA = "0x183241930")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, DropdownMenuAction.Status status = DropdownMenuAction.Status.Normal)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x3241B50", Offset = "0x3240150", VA = "0x183241B50")]
	public void AppendSeparator([Optional] string subMenuPath)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x3241DC0", Offset = "0x32403C0", VA = "0x183241DC0")]
	public void InsertSeparator(string subMenuPath, int atIndex)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x3241F10", Offset = "0x3240510", VA = "0x183241F10")]
	public void PrepareForDisplay(EventBase e)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x3242170", Offset = "0x3240770", VA = "0x183242170")]
	public DropdownMenu()
	{
	}
}
