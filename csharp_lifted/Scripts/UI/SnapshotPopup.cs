// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/SnapshotPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200086E")]
internal class SnapshotPopup : BasePopup
{
	[Token(Token = "0x4002AB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private RawImage _image;

	[Token(Token = "0x17000DF0")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x600506B")]
		[Address(RVA = "0x5C4FA30", Offset = "0x5C4EA30", VA = "0x5C4FA30", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DF1")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600506C")]
		[Address(RVA = "0x5C4FA40", Offset = "0x5C4EA40", VA = "0x5C4FA40", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$get_AnimationTime): clean
			return 0.1;
		}
	}

	[Token(Token = "0x17000DF2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600506D")]
		[Address(RVA = "0x5C4FA50", Offset = "0x5C4EA50", VA = "0x5C4FA50", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x600506E")]
	[Address(RVA = "0x5C4FA60", Offset = "0x5C4EA60", VA = "0x5C4FA60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$Setup): clean
		Transform pUVar1;
		RawImage pUVar2;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Image");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<RawImage>();
				this._image = pUVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600506F")]
	[Address(RVA = "0x5C4FAF0", Offset = "0x5C4EAF0", VA = "0x5C4FAF0", Slot = "62")]
	public virtual void Load(Texture2D texture)
	{
		// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$Load): clean
		RawImage __this_00;

		__this_00 = this._image;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.texture = (Texture)texture;
		return;
	}

	[Token(Token = "0x6005070")]
	[Address(RVA = "0x5C4FB10", Offset = "0x5C4EB10", VA = "0x5C4FB10")]
	public SnapshotPopup()
	{
		// Lifted from source/cpp/UI/SnapshotPopup.c (UI.SnapshotPopup$$.ctor): clean
		base();
		return;
	}
}
