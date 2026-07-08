using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005C6")]
internal class CharacterHumanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4001BD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<GameObject> _statBars;

	[Token(Token = "0x4001BDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly string LocaleCategory;

	[Token(Token = "0x6003AFF")]
	[Address(RVA = "0x3F8E460", Offset = "0x3F8E460", VA = "0x3F8E460", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B00")]
	[Address(RVA = "0x3F904C0", Offset = "0x3F904C0", VA = "0x3F904C0")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x6003B01")]
	[Address(RVA = "0x3F8FF50", Offset = "0x3F8FF50", VA = "0x3F8FF50")]
	protected void SyncStatBars()
	{
	}

	[Token(Token = "0x6003B02")]
	[Address(RVA = "0x3F90600", Offset = "0x3F90600", VA = "0x3F90600")]
	protected void CreateStatBar(string title, int value)
	{
	}

	[Token(Token = "0x6003B03")]
	[Address(RVA = "0x3F8F330", Offset = "0x3F8F330", VA = "0x3F8F330")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6003B04")]
	[Address(RVA = "0x3F8F460", Offset = "0x3F8F460", VA = "0x3F8F460")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003B05")]
	[Address(RVA = "0x3F8FC60", Offset = "0x3F8FC60", VA = "0x3F8FC60")]
	protected string[] GetSpecialIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003B06")]
	[Address(RVA = "0x3F8FEB0", Offset = "0x3F8FEB0", VA = "0x3F8FEB0")]
	protected string[] GetSpecialTooltips(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003B07")]
	[Address(RVA = "0x3F90AD0", Offset = "0x3F90AD0", VA = "0x3F90AD0")]
	public CharacterHumanPanel()
	{
	}
}
