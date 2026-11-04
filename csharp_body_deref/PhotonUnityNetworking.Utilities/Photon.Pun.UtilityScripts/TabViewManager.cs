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

[Token(Token = "0x200002E")]
public class TabViewManager : MonoBehaviour
{
	[Serializable]
	[Token(Token = "0x200002F")]
	public class TabChangeEvent : UnityEvent<string>
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x1D5F2E0", Offset = "0x1D5D8E0", VA = "0x181D5F2E0")]
		public TabChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000030")]
	public class Tab
	{
		[Token(Token = "0x40000B6")]
		[FieldOffset(Offset = "0x10")]
		public string ID;

		[Token(Token = "0x40000B7")]
		[FieldOffset(Offset = "0x18")]
		public Toggle Toggle;

		[Token(Token = "0x40000B8")]
		[FieldOffset(Offset = "0x20")]
		public RectTransform View;

		[Token(Token = "0x6000104")]
		[Address(RVA = "0x1D5F730", Offset = "0x1D5DD30", VA = "0x181D5F730")]
		public Tab()
		{
		}
	}

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x20")]
	public ToggleGroup ToggleGroup;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x28")]
	public Tab[] Tabs;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x30")]
	public TabChangeEvent OnTabChanged;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x38")]
	protected Tab CurrentTab;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<Toggle, Tab> Tab_lut;

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1D5F4D0", Offset = "0x1D5DAD0", VA = "0x181D5F4D0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1D5F450", Offset = "0x1D5DA50", VA = "0x181D5F450")]
	public void SelectTab(string id)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1D5F320", Offset = "0x1D5D920", VA = "0x181D5F320")]
	private void OnTabSelected(Tab tab)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public TabViewManager()
	{
	}
}
