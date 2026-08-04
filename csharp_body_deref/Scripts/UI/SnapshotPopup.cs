// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000666")]
internal class SnapshotPopup : BasePopup
{
	[Token(Token = "0x4001F5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private RawImage _image;

	[Token(Token = "0x17000C37")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004051")]
		[Address(RVA = "0x42E9A70", Offset = "0x42E9A70", VA = "0x42E9A70", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C38")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004052")]
		[Address(RVA = "0x42E9A80", Offset = "0x42E9A80", VA = "0x42E9A80", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004053")]
	[Address(RVA = "0x42E9A90", Offset = "0x42E9A90", VA = "0x42E9A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004054")]
	[Address(RVA = "0x42E9B20", Offset = "0x42E9B20", VA = "0x42E9B20", Slot = "59")]
	public virtual void Load(Texture2D texture)
	{
	}

	[Token(Token = "0x6004055")]
	[Address(RVA = "0x42E9B40", Offset = "0x42E9B40", VA = "0x42E9B40")]
	public SnapshotPopup()
	{
	}
}
