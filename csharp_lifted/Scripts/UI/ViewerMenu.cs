// ==================== AoTTG2 cross-reference ====================
// Type: UI.ViewerMenu
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ViewerMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/UI/ViewerMenu.c (UI.ViewerMenu$$Step): clean
		int iVar1;
		int count;
		int iVar2;

		iVar2 = delta + this._index;
		iVar1 = this.get_Count();
		iVar1 = iVar1 + -1;
		if (iVar1 < 1) {
			iVar1 = 0;
		}
		if (iVar2 < iVar1) {
			iVar1 = iVar2;
		}
		if (iVar2 < 0) {
			iVar1 = 0;
		}
		if (iVar1 == this._index) {
			return;
		}
		this._index = iVar1;
		if (Il2CppMethodInitialized_07547b6c == false) {
			Il2CppMethodInitialized_07547b6c = true;
			iVar1 = this._index;
		}
		this.Load(iVar1);
		iVar1 = this.get_Count();
		if (iVar1 == 0) {
			iVar1 = 0;
		}
		else {
			iVar1 = this._index + 1;
		}
		count = this.get_Count();
		AottgViewerScreen.SetCounter(iVar1, count);
		return;
	}

	[Token(Token = "0x6004A13")]
	[Address(RVA = "0x5BC9610", Offset = "0x5BC8610", VA = "0x5BC9610")]
	protected void ShowCurrent()
	{
		// Lifted from source/cpp/UI/ViewerMenu.c (UI.ViewerMenu$$ShowCurrent): clean
		int iVar1;
		int count;

		this.Load(this._index);
		iVar1 = this.get_Count();
		if (iVar1 == 0) {
			iVar1 = 0;
		}
		else {
			iVar1 = this._index + 1;
		}
		count = this.get_Count();
		AottgViewerScreen.SetCounter(iVar1, count);
		return;
	}

	[Token(Token = "0x6004A14")]
	[Address(RVA = "0x5BC96B0", Offset = "0x5BC86B0", VA = "0x5BC96B0")]
	protected ViewerMenu()
	{
		// Lifted from source/cpp/UI/ViewerMenu.c (UI.ViewerMenu$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ViewerMenu.c.

	// UI.ViewerMenu$$.cctor: clean
	static ViewerMenu()
	{
		(ViewerMenu.ContentCenter) = (Vector2)0x43838000;
		return;
	}
}
