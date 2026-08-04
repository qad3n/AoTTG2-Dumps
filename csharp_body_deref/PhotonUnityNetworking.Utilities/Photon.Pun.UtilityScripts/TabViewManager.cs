// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.TabViewManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/TabViewManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F0DB50", Offset = "0x3F0DB50", VA = "0x3F0DB50")]
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
		[Address(RVA = "0x3F0DB90", Offset = "0x3F0DB90", VA = "0x3F0DB90")]
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
	[Address(RVA = "0x3F0D6F0", Offset = "0x3F0D6F0", VA = "0x3F0D6F0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3F0D980", Offset = "0x3F0D980", VA = "0x3F0D980")]
	public void SelectTab(string id)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3F0DA10", Offset = "0x3F0DA10", VA = "0x3F0DA10")]
	private void OnTabSelected(Tab tab)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3F0DB40", Offset = "0x3F0DB40", VA = "0x3F0DB40")]
	public TabViewManager()
	{
	}
}
