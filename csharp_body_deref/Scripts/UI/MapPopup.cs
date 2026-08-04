// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000645")]
internal class MapPopup : BasePopup
{
	[Token(Token = "0x4001EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _height;

	[Token(Token = "0x4001EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4001EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RawImage _background;

	[Token(Token = "0x4001EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _label;

	[Token(Token = "0x4001EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Texture2D _texture;

	[Token(Token = "0x4001EC0")]
	private const float SyncDelay = 1f;

	[Token(Token = "0x4001EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private float _syncTimeLeft;

	[Token(Token = "0x4001EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private Vector3 _syncPosition;

	[Token(Token = "0x4001EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x17000BFE")]
	protected override string Title
	{
		[Token(Token = "0x6003F30")]
		[Address(RVA = "0x42D16B0", Offset = "0x42D16B0", VA = "0x42D16B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BFF")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003F31")]
		[Address(RVA = "0x42D16E0", Offset = "0x42D16E0", VA = "0x42D16E0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C00")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6003F32")]
		[Address(RVA = "0x42D16F0", Offset = "0x42D16F0", VA = "0x42D16F0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C01")]
	protected override float Width
	{
		[Token(Token = "0x6003F33")]
		[Address(RVA = "0x42D1700", Offset = "0x42D1700", VA = "0x42D1700", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C02")]
	protected override float Height
	{
		[Token(Token = "0x6003F34")]
		[Address(RVA = "0x42D1710", Offset = "0x42D1710", VA = "0x42D1710", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F35")]
	[Address(RVA = "0x42D1720", Offset = "0x42D1720", VA = "0x42D1720", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F36")]
	[Address(RVA = "0x42D1BD0", Offset = "0x42D1BD0", VA = "0x42D1BD0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003F37")]
	[Address(RVA = "0x42D1E40", Offset = "0x42D1E40", VA = "0x42D1E40")]
	private void Update()
	{
	}

	[Token(Token = "0x6003F38")]
	[Address(RVA = "0x42D2120", Offset = "0x42D2120", VA = "0x42D2120")]
	private void UpdateIcons()
	{
	}

	[Token(Token = "0x6003F39")]
	[Address(RVA = "0x42D1BF0", Offset = "0x42D1BF0", VA = "0x42D1BF0")]
	private void Sync()
	{
	}

	[Token(Token = "0x6003F3A")]
	[Address(RVA = "0x42D2AB0", Offset = "0x42D2AB0", VA = "0x42D2AB0")]
	private void SyncIcons()
	{
	}

	[Token(Token = "0x6003F3B")]
	[Address(RVA = "0x42D19D0", Offset = "0x42D19D0", VA = "0x42D19D0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003F3C")]
	[Address(RVA = "0x42D3180", Offset = "0x42D3180", VA = "0x42D3180")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F3D")]
	[Address(RVA = "0x42D32F0", Offset = "0x42D32F0", VA = "0x42D32F0")]
	public MapPopup()
	{
	}
}
