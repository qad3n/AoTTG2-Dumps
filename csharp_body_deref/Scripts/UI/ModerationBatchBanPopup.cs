// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationBatchBanPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModerationBatchBanPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000647")]
internal class ModerationBatchBanPopup : PromptPopup
{
	[Token(Token = "0x4001EDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _batchTargetsSetting;

	[Token(Token = "0x17000C03")]
	protected override string Title
	{
		[Token(Token = "0x6003F50")]
		[Address(RVA = "0x42D6650", Offset = "0x42D6650", VA = "0x42D6650", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C04")]
	protected override float Width
	{
		[Token(Token = "0x6003F51")]
		[Address(RVA = "0x42D6680", Offset = "0x42D6680", VA = "0x42D6680", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C05")]
	protected override float Height
	{
		[Token(Token = "0x6003F52")]
		[Address(RVA = "0x42D6690", Offset = "0x42D6690", VA = "0x42D6690", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C06")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003F53")]
		[Address(RVA = "0x42D66A0", Offset = "0x42D66A0", VA = "0x42D66A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C07")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003F54")]
		[Address(RVA = "0x42D66B0", Offset = "0x42D66B0", VA = "0x42D66B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C08")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003F55")]
		[Address(RVA = "0x42D66C0", Offset = "0x42D66C0", VA = "0x42D66C0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003F56")]
	[Address(RVA = "0x42D66D0", Offset = "0x42D66D0", VA = "0x42D66D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F57")]
	[Address(RVA = "0x42D6AE0", Offset = "0x42D6AE0", VA = "0x42D6AE0")]
	private void OnAction(Action action)
	{
	}

	[Token(Token = "0x6003F58")]
	[Address(RVA = "0x42D6B20", Offset = "0x42D6B20", VA = "0x42D6B20")]
	public ModerationBatchBanPopup()
	{
	}
}
