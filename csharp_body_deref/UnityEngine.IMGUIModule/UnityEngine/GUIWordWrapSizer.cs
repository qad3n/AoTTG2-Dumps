using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000022")]
internal sealed class GUIWordWrapSizer : GUILayoutEntry
{
	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x48")]
	private readonly GUIContent m_Content;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x50")]
	private readonly float m_ForcedMinHeight;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x54")]
	private readonly float m_ForcedMaxHeight;

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4B36120", Offset = "0x4B36120", VA = "0x4B36120")]
	public GUIWordWrapSizer(GUIStyle style, GUIContent content, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4B361F0", Offset = "0x4B361F0", VA = "0x4B361F0", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4B362A0", Offset = "0x4B362A0", VA = "0x4B362A0", Slot = "9")]
	public override void CalcHeight()
	{
	}
}
