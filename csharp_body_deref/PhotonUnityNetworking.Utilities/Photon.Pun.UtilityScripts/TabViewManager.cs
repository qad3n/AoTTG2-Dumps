using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000030")]
public class TabViewManager : MonoBehaviour
{
	[Serializable]
	[Token(Token = "0x2000031")]
	public class TabChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x3BF5680", Offset = "0x3BF5680", VA = "0x3BF5680")]
		public TabChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000032")]
	public class Tab
	{
		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x10")]
		public string ID;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x18")]
		public Toggle Toggle;

		[Token(Token = "0x40000BD")]
		[FieldOffset(Offset = "0x20")]
		public RectTransform View;

		[Token(Token = "0x6000106")]
		[Address(RVA = "0x3BF56C0", Offset = "0x3BF56C0", VA = "0x3BF56C0")]
		public Tab()
		{
		}
	}

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x20")]
	public ToggleGroup ToggleGroup;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x28")]
	public Tab[] Tabs;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x30")]
	public TabChangeEvent OnTabChanged;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x38")]
	protected Tab CurrentTab;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<Toggle, Tab> Tab_lut;

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3BF5220", Offset = "0x3BF5220", VA = "0x3BF5220")]
	private void Start()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3BF54B0", Offset = "0x3BF54B0", VA = "0x3BF54B0")]
	public void SelectTab(string id)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3BF5540", Offset = "0x3BF5540", VA = "0x3BF5540")]
	private void OnTabSelected(Tab tab)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3BF5670", Offset = "0x3BF5670", VA = "0x3BF5670")]
	public TabViewManager()
	{
	}
}
