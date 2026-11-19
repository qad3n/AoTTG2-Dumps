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

[Token(Token = "0x2000174")]
public sealed class AddComponentMenu : Attribute
{
	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x10")]
	private string m_AddComponentMenu;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x18")]
	private int m_Ordering;

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x69112A0", Offset = "0x69102A0", VA = "0x69112A0")]
	public AddComponentMenu(string menuName)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x69112D0", Offset = "0x69102D0", VA = "0x69112D0")]
	public AddComponentMenu(string menuName, int order)
	{
	}
}
