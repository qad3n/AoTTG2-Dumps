// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BaseSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005EB")]
internal abstract class BaseSettingElement : MonoBehaviour
{
	[Token(Token = "0x4001C7C")]
	[FieldOffset(Offset = "0x20")]
	protected BaseSetting _setting;

	[Token(Token = "0x4001C7D")]
	[FieldOffset(Offset = "0x28")]
	protected SettingType _settingType;

	[Token(Token = "0x4001C7E")]
	[FieldOffset(Offset = "0x30")]
	protected ElementStyle _style;

	[Token(Token = "0x17000B7B")]
	protected virtual HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C38")]
		[Address(RVA = "0x428E740", Offset = "0x428E740", VA = "0x428E740", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C39")]
	[Address(RVA = "0x428E7A0", Offset = "0x428E7A0", VA = "0x428E7A0", Slot = "5")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip)
	{
	}

	[Token(Token = "0x6003C3A")]
	[Address(RVA = "0x428EB60", Offset = "0x428EB60", VA = "0x428EB60")]
	protected void SetupTooltip(string tooltip, ElementStyle style)
	{
	}

	[Token(Token = "0x6003C3B")]
	public abstract void SyncElement();

	[Token(Token = "0x6003C3C")]
	[Address(RVA = "0x428E8D0", Offset = "0x428E8D0", VA = "0x428E8D0")]
	protected SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6003C3D")]
	[Address(RVA = "0x428E8E0", Offset = "0x428E8E0", VA = "0x428E8E0")]
	protected void SetupTitle(string title, int fontSize, float titleWidth)
	{
	}

	[Token(Token = "0x6003C3E")]
	[Address(RVA = "0x428EC50", Offset = "0x428EC50", VA = "0x428EC50")]
	protected void SetupLabel(GameObject obj, string title, int fontSize)
	{
	}

	[Token(Token = "0x6003C3F")]
	[Address(RVA = "0x428ECD0", Offset = "0x428ECD0", VA = "0x428ECD0")]
	protected void SetupLabel(GameObject obj, string title)
	{
	}

	[Token(Token = "0x6003C40")]
	[Address(RVA = "0x428ED40", Offset = "0x428ED40", VA = "0x428ED40")]
	protected BaseSettingElement()
	{
	}
}
