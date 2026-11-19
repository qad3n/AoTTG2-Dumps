// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200084E")]
internal class MapPopup : BasePopup
{
	[Token(Token = "0x40029FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private float _height;

	[Token(Token = "0x40029FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x40029FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _background;

	[Token(Token = "0x4002A00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private TMP_Text _label;

	[Token(Token = "0x4002A01")]
	private const float MapDisplaySize = 900f;

	[Token(Token = "0x4002A02")]
	private const float BarHeight = 64f;

	[Token(Token = "0x4002A03")]
	private const float ZoomStep = 500f;

	[Token(Token = "0x4002A04")]
	private const float MinHeight = 100f;

	[Token(Token = "0x4002A05")]
	private const float SyncCooldown = 0.1f;

	[Token(Token = "0x4002A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Vector3 _center;

	[Token(Token = "0x4002A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	private Vector3 _renderedCenter;

	[Token(Token = "0x4002A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private float _renderedHeight;

	[Token(Token = "0x4002A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private bool _needSync;

	[Token(Token = "0x4002A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private float _syncCooldownLeft;

	[Token(Token = "0x4002A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x17000DD4")]
	protected override string Title
	{
		[Token(Token = "0x6004F68")]
		[Address(RVA = "0x5C35210", Offset = "0x5C34210", VA = "0x5C35210", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DD5")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F69")]
		[Address(RVA = "0x5C35270", Offset = "0x5C34270", VA = "0x5C35270", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DD6")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6004F6A")]
		[Address(RVA = "0x5C35280", Offset = "0x5C34280", VA = "0x5C35280", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DD7")]
	protected override float Width
	{
		[Token(Token = "0x6004F6B")]
		[Address(RVA = "0x5C35290", Offset = "0x5C34290", VA = "0x5C35290", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DD8")]
	protected override float Height
	{
		[Token(Token = "0x6004F6C")]
		[Address(RVA = "0x5C352A0", Offset = "0x5C342A0", VA = "0x5C352A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004F6D")]
	[Address(RVA = "0x5C352B0", Offset = "0x5C342B0", VA = "0x5C352B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F6E")]
	[Address(RVA = "0x5C358B0", Offset = "0x5C348B0", VA = "0x5C358B0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004F6F")]
	[Address(RVA = "0x5C35970", Offset = "0x5C34970", VA = "0x5C35970")]
	private void Update()
	{
	}

	[Token(Token = "0x6004F70")]
	[Address(RVA = "0x5C35CA0", Offset = "0x5C34CA0", VA = "0x5C35CA0")]
	private void UpdateZoomInput()
	{
	}

	[Token(Token = "0x6004F71")]
	[Address(RVA = "0x5C369B0", Offset = "0x5C359B0", VA = "0x5C369B0")]
	private void SetHeight(float height)
	{
	}

	[Token(Token = "0x6004F72")]
	[Address(RVA = "0x5C369D0", Offset = "0x5C359D0", VA = "0x5C369D0")]
	private void OnDrag(Vector2 delta)
	{
	}

	[Token(Token = "0x6004F73")]
	[Address(RVA = "0x5C36A30", Offset = "0x5C35A30", VA = "0x5C36A30")]
	private void OnEndDrag()
	{
	}

	[Token(Token = "0x6004F74")]
	[Address(RVA = "0x5C35D60", Offset = "0x5C34D60", VA = "0x5C35D60")]
	private void SyncIfNeeded()
	{
	}

	[Token(Token = "0x6004F75")]
	[Address(RVA = "0x5C362C0", Offset = "0x5C352C0", VA = "0x5C362C0")]
	private void UpdateIcons()
	{
	}

	[Token(Token = "0x6004F76")]
	[Address(RVA = "0x5C36AB0", Offset = "0x5C35AB0", VA = "0x5C36AB0")]
	private void Sync()
	{
	}

	[Token(Token = "0x6004F77")]
	[Address(RVA = "0x5C35DD0", Offset = "0x5C34DD0", VA = "0x5C35DD0")]
	private void SyncIcons()
	{
	}

	[Token(Token = "0x6004F78")]
	[Address(RVA = "0x5C36C70", Offset = "0x5C35C70", VA = "0x5C36C70")]
	internal void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004F79")]
	[Address(RVA = "0x5C36DE0", Offset = "0x5C35DE0", VA = "0x5C36DE0")]
	public MapPopup()
	{
	}
}
