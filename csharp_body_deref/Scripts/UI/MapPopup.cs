using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005FA")]
internal class MapPopup : BasePopup
{
	[Token(Token = "0x4001D74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001D75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _height;

	[Token(Token = "0x4001D76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4001D77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RawImage _background;

	[Token(Token = "0x4001D78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _label;

	[Token(Token = "0x4001D79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Texture2D _texture;

	[Token(Token = "0x4001D7A")]
	private const float SyncDelay = 1f;

	[Token(Token = "0x4001D7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private float _syncTimeLeft;

	[Token(Token = "0x4001D7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private Vector3 _syncPosition;

	[Token(Token = "0x4001D7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x17000B86")]
	protected override string Title
	{
		[Token(Token = "0x6003CE3")]
		[Address(RVA = "0x3FBF1C0", Offset = "0x3FBF1C0", VA = "0x3FBF1C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B87")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003CE4")]
		[Address(RVA = "0x3FBF1F0", Offset = "0x3FBF1F0", VA = "0x3FBF1F0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B88")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6003CE5")]
		[Address(RVA = "0x3FBF200", Offset = "0x3FBF200", VA = "0x3FBF200", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B89")]
	protected override float Width
	{
		[Token(Token = "0x6003CE6")]
		[Address(RVA = "0x3FBF210", Offset = "0x3FBF210", VA = "0x3FBF210", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B8A")]
	protected override float Height
	{
		[Token(Token = "0x6003CE7")]
		[Address(RVA = "0x3FBF220", Offset = "0x3FBF220", VA = "0x3FBF220", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003CE8")]
	[Address(RVA = "0x3FBF230", Offset = "0x3FBF230", VA = "0x3FBF230", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003CE9")]
	[Address(RVA = "0x3FBF6E0", Offset = "0x3FBF6E0", VA = "0x3FBF6E0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003CEA")]
	[Address(RVA = "0x3FBF950", Offset = "0x3FBF950", VA = "0x3FBF950")]
	private void Update()
	{
	}

	[Token(Token = "0x6003CEB")]
	[Address(RVA = "0x3FBFC30", Offset = "0x3FBFC30", VA = "0x3FBFC30")]
	private void UpdateIcons()
	{
	}

	[Token(Token = "0x6003CEC")]
	[Address(RVA = "0x3FBF700", Offset = "0x3FBF700", VA = "0x3FBF700")]
	private void Sync()
	{
	}

	[Token(Token = "0x6003CED")]
	[Address(RVA = "0x3FC05C0", Offset = "0x3FC05C0", VA = "0x3FC05C0")]
	private void SyncIcons()
	{
	}

	[Token(Token = "0x6003CEE")]
	[Address(RVA = "0x3FBF4E0", Offset = "0x3FBF4E0", VA = "0x3FBF4E0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003CEF")]
	[Address(RVA = "0x3FC0C90", Offset = "0x3FC0C90", VA = "0x3FC0C90")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003CF0")]
	[Address(RVA = "0x3FC0E00", Offset = "0x3FC0E00", VA = "0x3FC0E00")]
	public MapPopup()
	{
	}
}
