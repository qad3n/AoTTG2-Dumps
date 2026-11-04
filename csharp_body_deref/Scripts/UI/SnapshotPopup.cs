// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SnapshotPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007C2")]
internal class SnapshotPopup : BasePopup
{
	[Token(Token = "0x4002739")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private RawImage _image;

	[Token(Token = "0x17000D7F")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004B4B")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D80")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004B4C")]
		[Address(RVA = "0x21BC890", Offset = "0x21BAE90", VA = "0x1821BC890", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D81")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004B4D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004B4E")]
	[Address(RVA = "0x227F160", Offset = "0x227D760", VA = "0x18227F160", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B4F")]
	[Address(RVA = "0x227F130", Offset = "0x227D730", VA = "0x18227F130", Slot = "62")]
	public virtual void Load(Texture2D texture)
	{
	}

	[Token(Token = "0x6004B50")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public SnapshotPopup()
	{
	}
}
