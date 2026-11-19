// ==================== AoTTG2 cross-reference ====================
// Type: UI.CategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/CategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200078D")]
internal class CategoryPanel : BasePanel
{
	[Token(Token = "0x60048DE")]
	[Address(RVA = "0x5BB8300", Offset = "0x5BB7300", VA = "0x5BB8300", Slot = "33")]
	protected override float GetWidth()
	{
		// Lifted from source/cpp/UI/CategoryPanel.c (UI.CategoryPanel$$GetWidth): clean
		BasePanel pUVar1;
		float fVar2;

		pUVar1 = this.Parent;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return fVar2;
	}

	[Token(Token = "0x60048DF")]
	[Address(RVA = "0x5BB8330", Offset = "0x5BB7330", VA = "0x5BB8330", Slot = "34")]
	protected override float GetHeight()
	{
		// Lifted from source/cpp/UI/CategoryPanel.c (UI.CategoryPanel$$GetHeight): clean
		BasePanel pUVar1;
		float fVar2;

		pUVar1 = this.Parent;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return fVar2;
	}

	[Token(Token = "0x60048E0")]
	[Address(RVA = "0x5BB8360", Offset = "0x5BB7360", VA = "0x5BB8360")]
	public CategoryPanel()
	{
		// Lifted from source/cpp/UI/CategoryPanel.c (UI.CategoryPanel$$.ctor): clean
		base();
		return;
	}
}
