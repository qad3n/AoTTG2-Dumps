// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AddComponentMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000173")]
public sealed class AddComponentMenu : Attribute
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x10")]
	private string m_AddComponentMenu;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x18")]
	private int m_Ordering;

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x2F0E240", Offset = "0x2F0C840", VA = "0x182F0E240")]
	public AddComponentMenu(string menuName)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	public AddComponentMenu(string menuName, int order)
	{
	}
}
