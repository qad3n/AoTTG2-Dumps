// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x5027F20", Offset = "0x5027F20", VA = "0x5027F20")]
	public List<DropdownMenuItem> MenuItems()
	{
		return null;
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x5027F30", Offset = "0x5027F30", VA = "0x5027F30")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, Func<DropdownMenuAction, DropdownMenuAction.Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x5028050", Offset = "0x5028050", VA = "0x5028050")]
	public void AppendAction(string actionName, Action<DropdownMenuAction> action, DropdownMenuAction.Status status = DropdownMenuAction.Status.Normal)
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x5028170", Offset = "0x5028170", VA = "0x5028170")]
	public void AppendSeparator([Optional] string subMenuPath)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x50282D0", Offset = "0x50282D0", VA = "0x50282D0")]
	public void InsertSeparator(string subMenuPath, int atIndex)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x5028400", Offset = "0x5028400", VA = "0x5028400")]
	public void PrepareForDisplay(EventBase e)
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x50286D0", Offset = "0x50286D0", VA = "0x50286D0")]
	public DropdownMenu()
	{
	}
}
