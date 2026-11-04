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

[Token(Token = "0x20007A1")]
internal class MapPopup : BasePopup
{
	[Token(Token = "0x400267D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x400267E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _height;

	[Token(Token = "0x400267F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4002680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RawImage _background;

	[Token(Token = "0x4002681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private TMP_Text _label;

	[Token(Token = "0x4002682")]
	private const float MapDisplaySize = 900f;

	[Token(Token = "0x4002683")]
	private const float BarHeight = 64f;

	[Token(Token = "0x4002684")]
	private const float ZoomStep = 500f;

	[Token(Token = "0x4002685")]
	private const float MinHeight = 100f;

	[Token(Token = "0x4002686")]
	private const float SyncCooldown = 0.1f;

	[Token(Token = "0x4002687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Vector3 _center;

	[Token(Token = "0x4002688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private Vector3 _renderedCenter;

	[Token(Token = "0x4002689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private float _renderedHeight;

	[Token(Token = "0x400268A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool _needSync;

	[Token(Token = "0x400268B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private float _syncCooldownLeft;

	[Token(Token = "0x400268C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x17000D58")]
	protected override string Title
	{
		[Token(Token = "0x6004A3A")]
		[Address(RVA = "0x225ABD0", Offset = "0x22591D0", VA = "0x18225ABD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D59")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004A3B")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D5A")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6004A3C")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D5B")]
	protected override float Width
	{
		[Token(Token = "0x6004A3D")]
		[Address(RVA = "0x225AC00", Offset = "0x2259200", VA = "0x18225AC00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D5C")]
	protected override float Height
	{
		[Token(Token = "0x6004A3E")]
		[Address(RVA = "0x225ABC0", Offset = "0x22591C0", VA = "0x18225ABC0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004A3F")]
	[Address(RVA = "0x22591A0", Offset = "0x22577A0", VA = "0x1822591A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A40")]
	[Address(RVA = "0x2259700", Offset = "0x2257D00", VA = "0x182259700", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004A41")]
	[Address(RVA = "0x225A6D0", Offset = "0x2258CD0", VA = "0x18225A6D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004A42")]
	[Address(RVA = "0x225A600", Offset = "0x2258C00", VA = "0x18225A600")]
	private void UpdateZoomInput()
	{
	}

	[Token(Token = "0x6004A43")]
	[Address(RVA = "0x2259180", Offset = "0x2257780", VA = "0x182259180")]
	private void SetHeight(float height)
	{
	}

	[Token(Token = "0x6004A44")]
	[Address(RVA = "0x22590D0", Offset = "0x22576D0", VA = "0x1822590D0")]
	private void OnDrag(Vector2 delta)
	{
	}

	[Token(Token = "0x6004A45")]
	[Address(RVA = "0x2259150", Offset = "0x2257750", VA = "0x182259150")]
	private void OnEndDrag()
	{
	}

	[Token(Token = "0x6004A46")]
	[Address(RVA = "0x2259D20", Offset = "0x2258320", VA = "0x182259D20")]
	private void SyncIfNeeded()
	{
	}

	[Token(Token = "0x6004A47")]
	[Address(RVA = "0x2259FC0", Offset = "0x22585C0", VA = "0x182259FC0")]
	private void UpdateIcons()
	{
	}

	[Token(Token = "0x6004A48")]
	[Address(RVA = "0x2259EA0", Offset = "0x22584A0", VA = "0x182259EA0")]
	private void Sync()
	{
	}

	[Token(Token = "0x6004A49")]
	[Address(RVA = "0x22597E0", Offset = "0x2257DE0", VA = "0x1822597E0")]
	private void SyncIcons()
	{
	}

	[Token(Token = "0x6004A4A")]
	[Address(RVA = "0x2258F60", Offset = "0x2257560", VA = "0x182258F60")]
	internal void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004A4B")]
	[Address(RVA = "0x225AA70", Offset = "0x2259070", VA = "0x18225AA70")]
	public MapPopup()
	{
	}
}
