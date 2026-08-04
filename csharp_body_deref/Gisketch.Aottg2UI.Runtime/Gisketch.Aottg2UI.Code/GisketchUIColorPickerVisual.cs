// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000084")]
internal sealed class GisketchUIColorPickerVisual : MonoBehaviour
{
	[Token(Token = "0x2000085")]
	private sealed class DragTarget : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		[Token(Token = "0x40002D1")]
		[FieldOffset(Offset = "0x20")]
		private Action<PointerEventData> _drag;

		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x3A73030", Offset = "0x3A73030", VA = "0x3A73030")]
		public void Setup(Action<PointerEventData> drag)
		{
		}

		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x3A73040", Offset = "0x3A73040", VA = "0x3A73040", Slot = "4")]
		public void OnPointerDown(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x3A73060", Offset = "0x3A73060", VA = "0x3A73060", Slot = "5")]
		public void OnDrag(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x3A73080", Offset = "0x3A73080", VA = "0x3A73080")]
		public DragTarget()
		{
		}
	}

	[Token(Token = "0x40002BF")]
	private const float BarHeight = 22f;

	[Token(Token = "0x40002C0")]
	private const int AlphaTextureWidth = 384;

	[Token(Token = "0x40002C1")]
	private const int AlphaTextureHeight = 22;

	[Token(Token = "0x40002C2")]
	private const int CheckerSize = 6;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _square;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x28")]
	private RawImage _hue;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x30")]
	private RawImage _alpha;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _squareMarker;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _hueMarker;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _alphaMarker;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x50")]
	private Texture2D _squareTexture;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x58")]
	private Texture2D _hueTexture;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x68")]
	private Texture2D _circleTexture;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x70")]
	private Sprite _circleSprite;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x78")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x1700006C")]
	public bool EnableAlpha
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x3A70CB0", Offset = "0x3A70CB0", VA = "0x3A70CB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x3A70CC0", Offset = "0x3A70CC0", VA = "0x3A70CC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<GisketchUIColorPickerValue> Changed
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x3A6F440", Offset = "0x3A6F440", VA = "0x3A6F440")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x3A6F900", Offset = "0x3A6F900", VA = "0x3A6F900")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x3A6DE90", Offset = "0x3A6DE90", VA = "0x3A6DE90")]
	public void Setup(string id, bool enableAlpha, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3A6F4F0", Offset = "0x3A6F4F0", VA = "0x3A6F4F0")]
	public void SetValue(GisketchUIColorPickerValue value, bool notify)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3A70CD0", Offset = "0x3A70CD0", VA = "0x3A70CD0")]
	private void Build(GisketchTheme theme)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x3A71D70", Offset = "0x3A71D70", VA = "0x3A71D70")]
	private void OnSquareDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x3A72020", Offset = "0x3A72020", VA = "0x3A72020")]
	private void OnHueDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x3A721B0", Offset = "0x3A721B0", VA = "0x3A721B0")]
	private void OnAlphaDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x3A723E0", Offset = "0x3A723E0", VA = "0x3A723E0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3A710D0", Offset = "0x3A710D0", VA = "0x3A710D0")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x3A71300", Offset = "0x3A71300", VA = "0x3A71300")]
	private void RefreshMarkers()
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3A71520", Offset = "0x3A71520", VA = "0x3A71520")]
	private static RawImage RawImage(string name, RectTransform parent, float bottom, float height, Color fallback)
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3A71790", Offset = "0x3A71790", VA = "0x3A71790")]
	private RectTransform CircleMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3A71AA0", Offset = "0x3A71AA0", VA = "0x3A71AA0")]
	private static RectTransform LineMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3A71EF0", Offset = "0x3A71EF0", VA = "0x3A71EF0")]
	private static Vector2 Normalized(RectTransform rect, PointerEventData eventData)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3A72630", Offset = "0x3A72630", VA = "0x3A72630")]
	private static void Place(RectTransform marker, float x, float y)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3A72450", Offset = "0x3A72450", VA = "0x3A72450")]
	private static void SetTexture(ref Texture2D texture, RawImage target, int width, int height, Func<int, int, Color32> pixel)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3A72AB0", Offset = "0x3A72AB0", VA = "0x3A72AB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3A726F0", Offset = "0x3A726F0", VA = "0x3A726F0")]
	private Sprite CircleSprite()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x3A72DF0", Offset = "0x3A72DF0", VA = "0x3A72DF0")]
	private static byte Blend(byte back, byte front, float t)
	{
		return default(byte);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x3A72D10", Offset = "0x3A72D10", VA = "0x3A72D10")]
	private static void DestroyTexture(Texture2D texture)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x3A72D60", Offset = "0x3A72D60", VA = "0x3A72D60")]
	private static void DestroyUnityObject(UnityEngine.Object target)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x3A72F40", Offset = "0x3A72F40", VA = "0x3A72F40")]
	public GisketchUIColorPickerVisual()
	{
	}
}
