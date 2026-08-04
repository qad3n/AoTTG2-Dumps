// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006B8")]
internal class MapEditorAddObjectPanel : CategoryPanel
{
	[Token(Token = "0x40020A0")]
	protected const int Columns = 8;

	[Token(Token = "0x17000D07")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60042EB")]
		[Address(RVA = "0x4317300", Offset = "0x4317300", VA = "0x4317300", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D08")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042EC")]
		[Address(RVA = "0x4317310", Offset = "0x4317310", VA = "0x4317310", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D09")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60042ED")]
		[Address(RVA = "0x4317320", Offset = "0x4317320", VA = "0x4317320", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D0A")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60042EE")]
		[Address(RVA = "0x4317330", Offset = "0x4317330", VA = "0x4317330", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60042EF")]
	[Address(RVA = "0x4317340", Offset = "0x4317340", VA = "0x4317340", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042F0")]
	[Address(RVA = "0x4318200", Offset = "0x4318200", VA = "0x4318200", Slot = "35")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x60042F1")]
	[Address(RVA = "0x43184E0", Offset = "0x43184E0", VA = "0x43184E0")]
	protected List<string> GetItemsNoVariants(List<string> items)
	{
		return null;
	}

	[Token(Token = "0x60042F2")]
	[Address(RVA = "0x43175A0", Offset = "0x43175A0", VA = "0x43175A0")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x60042F3")]
	[Address(RVA = "0x43178E0", Offset = "0x43178E0", VA = "0x43178E0")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x60042F4")]
	[Address(RVA = "0x4318830", Offset = "0x4318830", VA = "0x4318830", Slot = "36")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x60042F5")]
	[Address(RVA = "0x4318940", Offset = "0x4318940", VA = "0x4318940", Slot = "37")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x60042F6")]
	[Address(RVA = "0x4319030", Offset = "0x4319030", VA = "0x4319030")]
	public MapEditorAddObjectPanel()
	{
	}
}
