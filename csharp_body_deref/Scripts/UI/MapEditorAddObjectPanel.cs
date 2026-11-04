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

[Token(Token = "0x2000813")]
internal class MapEditorAddObjectPanel : CategoryPanel
{
	[Token(Token = "0x4002874")]
	protected const int Columns = 8;

	[Token(Token = "0x17000E4D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004DDF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004DE0")]
		[Address(RVA = "0x21C0C80", Offset = "0x21BF280", VA = "0x1821C0C80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E4F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004DE1")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E50")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004DE2")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004DE3")]
	[Address(RVA = "0x229F280", Offset = "0x229D880", VA = "0x18229F280", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004DE4")]
	[Address(RVA = "0x229EB30", Offset = "0x229D130", VA = "0x18229EB30", Slot = "35")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6004DE5")]
	[Address(RVA = "0x229E940", Offset = "0x229CF40", VA = "0x18229E940")]
	protected List<string> GetItemsNoVariants(List<string> items)
	{
		return null;
	}

	[Token(Token = "0x6004DE6")]
	[Address(RVA = "0x229E740", Offset = "0x229CD40", VA = "0x18229E740")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6004DE7")]
	[Address(RVA = "0x229E140", Offset = "0x229C740", VA = "0x18229E140")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6004DE8")]
	[Address(RVA = "0x229EE20", Offset = "0x229D420", VA = "0x18229EE20", Slot = "36")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6004DE9")]
	[Address(RVA = "0x229EF20", Offset = "0x229D520", VA = "0x18229EF20", Slot = "37")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6004DEA")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public MapEditorAddObjectPanel()
	{
	}
}
