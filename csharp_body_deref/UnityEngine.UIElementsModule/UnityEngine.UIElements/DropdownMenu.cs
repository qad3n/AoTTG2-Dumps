using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000161")]
public class DropdownMenu
{
	[Token(Token = "0x4000616")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<DropdownMenuItem> m_MenuItems;

	[Token(Token = "0x4000617")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DropdownMenuEventInfo m_DropdownMenuEventInfo;

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x4D005F0", Offset = "0x4D005F0", VA = "0x4D005F0")]
	public List<DropdownMenuItem> MenuItems()
	{
		return null;
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x4D00600", Offset = "0x4D00600", VA = "0x4D00600")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, Func<DropdownMenuAction, DropdownMenuAction.Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x4D00720", Offset = "0x4D00720", VA = "0x4D00720")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, DropdownMenuAction.Status status = DropdownMenuAction.Status.Normal)
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x4D00840", Offset = "0x4D00840", VA = "0x4D00840")]
	public void AppendSeparator([Optional] string subMenuPath)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x4D009A0", Offset = "0x4D009A0", VA = "0x4D009A0")]
	public void InsertSeparator(string subMenuPath, int atIndex)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x4D00AD0", Offset = "0x4D00AD0", VA = "0x4D00AD0")]
	public void PrepareForDisplay(EventBase e)
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x4D00DA0", Offset = "0x4D00DA0", VA = "0x4D00DA0")]
	public DropdownMenu()
	{
	}
}
