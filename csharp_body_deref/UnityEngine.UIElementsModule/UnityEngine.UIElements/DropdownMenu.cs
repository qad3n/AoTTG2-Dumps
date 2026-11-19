// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenu
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C5C720", Offset = "0x6C5B720", VA = "0x6C5C720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023D")]
	internal bool repaintPanelBeforeDisplay
	{
		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x6C5C760", Offset = "0x6C5B760", VA = "0x6C5C760")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x6C5C770", Offset = "0x6C5B770", VA = "0x6C5C770")]
	public List<DropdownMenuItem> MenuItems()
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x6C5C780", Offset = "0x6C5B780", VA = "0x6C5C780")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, Func<DropdownMenuAction, DropdownMenuAction.Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x6C5C8A0", Offset = "0x6C5B8A0", VA = "0x6C5C8A0")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, DropdownMenuAction.Status status = DropdownMenuAction.Status.Normal)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x6C5C9B0", Offset = "0x6C5B9B0", VA = "0x6C5C9B0")]
	public void AppendSeparator([Optional] string subMenuPath)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x6C5CC60", Offset = "0x6C5BC60", VA = "0x6C5CC60")]
	public void InsertSeparator(string subMenuPath, int atIndex)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x6C5CD90", Offset = "0x6C5BD90", VA = "0x6C5CD90")]
	public void PrepareForDisplay(EventBase e)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x6C5D040", Offset = "0x6C5C040", VA = "0x6C5D040")]
	public DropdownMenu()
	{
	}
}
