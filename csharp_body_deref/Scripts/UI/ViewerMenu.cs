// ==================== AoTTG2 cross-reference ====================
// Type: UI.ViewerMenu
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ViewerMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007AE")]
internal abstract class ViewerMenu : BaseMenu
{
	[Token(Token = "0x40026B5")]
	[FieldOffset(Offset = "0x0")]
	protected static readonly Vector2 ContentCenter;

	[Token(Token = "0x40026B6")]
	[FieldOffset(Offset = "0x98")]
	private int _index;

	[Token(Token = "0x17000CDE")]
	protected abstract int Count
	{
		[Token(Token = "0x6004A10")]
		get;
	}

	[Token(Token = "0x6004A11")]
	protected abstract void Load(int index);

	[Token(Token = "0x6004A12")]
	[Address(RVA = "0x5BC9530", Offset = "0x5BC8530", VA = "0x5BC9530")]
	public void Step(int delta)
	{
	}

	[Token(Token = "0x6004A13")]
	[Address(RVA = "0x5BC9610", Offset = "0x5BC8610", VA = "0x5BC9610")]
	protected void ShowCurrent()
	{
	}

	[Token(Token = "0x6004A14")]
	[Address(RVA = "0x5BC96B0", Offset = "0x5BC86B0", VA = "0x5BC96B0")]
	protected ViewerMenu()
	{
	}
}
