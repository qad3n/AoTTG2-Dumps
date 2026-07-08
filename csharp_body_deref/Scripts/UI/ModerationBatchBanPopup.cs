using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005FC")]
internal class ModerationBatchBanPopup : PromptPopup
{
	[Token(Token = "0x4001D95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _batchTargetsSetting;

	[Token(Token = "0x17000B8B")]
	protected override string Title
	{
		[Token(Token = "0x6003D03")]
		[Address(RVA = "0x3FC4160", Offset = "0x3FC4160", VA = "0x3FC4160", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B8C")]
	protected override float Width
	{
		[Token(Token = "0x6003D04")]
		[Address(RVA = "0x3FC4190", Offset = "0x3FC4190", VA = "0x3FC4190", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B8D")]
	protected override float Height
	{
		[Token(Token = "0x6003D05")]
		[Address(RVA = "0x3FC41A0", Offset = "0x3FC41A0", VA = "0x3FC41A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B8E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003D06")]
		[Address(RVA = "0x3FC41B0", Offset = "0x3FC41B0", VA = "0x3FC41B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B8F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003D07")]
		[Address(RVA = "0x3FC41C0", Offset = "0x3FC41C0", VA = "0x3FC41C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B90")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003D08")]
		[Address(RVA = "0x3FC41D0", Offset = "0x3FC41D0", VA = "0x3FC41D0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003D09")]
	[Address(RVA = "0x3FC41E0", Offset = "0x3FC41E0", VA = "0x3FC41E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D0A")]
	[Address(RVA = "0x3FC45F0", Offset = "0x3FC45F0", VA = "0x3FC45F0")]
	private void OnAction(Action action)
	{
	}

	[Token(Token = "0x6003D0B")]
	[Address(RVA = "0x3FC4630", Offset = "0x3FC4630", VA = "0x3FC4630")]
	public ModerationBatchBanPopup()
	{
	}
}
