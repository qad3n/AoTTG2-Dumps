using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000081")]
internal sealed class GisketchUIColorPickerVisual : MonoBehaviour
{
	[Token(Token = "0x2000082")]
	private sealed class DragTarget : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		[Token(Token = "0x40002B5")]
		[FieldOffset(Offset = "0x20")]
		private Action<PointerEventData> _drag;

		[Token(Token = "0x600039F")]
		[Address(RVA = "0x3A07070", Offset = "0x3A07070", VA = "0x3A07070")]
		public void Setup(Action<PointerEventData> drag)
		{
		}

		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x3A07080", Offset = "0x3A07080", VA = "0x3A07080", Slot = "4")]
		public void OnPointerDown(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x3A070A0", Offset = "0x3A070A0", VA = "0x3A070A0", Slot = "5")]
		public void OnDrag(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x3A070C0", Offset = "0x3A070C0", VA = "0x3A070C0")]
		public DragTarget()
		{
		}
	}

	[Token(Token = "0x40002A3")]
	private const float BarHeight = 22f;

	[Token(Token = "0x40002A4")]
	private const int AlphaTextureWidth = 384;

	[Token(Token = "0x40002A5")]
	private const int AlphaTextureHeight = 22;

	[Token(Token = "0x40002A6")]
	private const int CheckerSize = 6;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _square;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x28")]
	private RawImage _hue;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x30")]
	private RawImage _alpha;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _squareMarker;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _hueMarker;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _alphaMarker;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x50")]
	private Texture2D _squareTexture;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x58")]
	private Texture2D _hueTexture;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x68")]
	private Texture2D _circleTexture;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x70")]
	private Sprite _circleSprite;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x78")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x1700006A")]
	public bool EnableAlpha
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x3A04CF0", Offset = "0x3A04CF0", VA = "0x3A04CF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x3A04D00", Offset = "0x3A04D00", VA = "0x3A04D00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<GisketchUIColorPickerValue> Changed
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x3A03480", Offset = "0x3A03480", VA = "0x3A03480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3A03940", Offset = "0x3A03940", VA = "0x3A03940")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x3A01F50", Offset = "0x3A01F50", VA = "0x3A01F50")]
	public void Setup(string id, bool enableAlpha, GisketchTheme theme)
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x3A03530", Offset = "0x3A03530", VA = "0x3A03530")]
	public void SetValue(GisketchUIColorPickerValue value, bool notify)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x3A04D10", Offset = "0x3A04D10", VA = "0x3A04D10")]
	private void Build(GisketchTheme theme)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x3A05DB0", Offset = "0x3A05DB0", VA = "0x3A05DB0")]
	private void OnSquareDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x3A06060", Offset = "0x3A06060", VA = "0x3A06060")]
	private void OnHueDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x3A061F0", Offset = "0x3A061F0", VA = "0x3A061F0")]
	private void OnAlphaDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x3A06420", Offset = "0x3A06420", VA = "0x3A06420")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x3A05110", Offset = "0x3A05110", VA = "0x3A05110")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x3A05340", Offset = "0x3A05340", VA = "0x3A05340")]
	private void RefreshMarkers()
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x3A05560", Offset = "0x3A05560", VA = "0x3A05560")]
	private static RawImage RawImage(string name, RectTransform parent, float bottom, float height, Color fallback)
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x3A057D0", Offset = "0x3A057D0", VA = "0x3A057D0")]
	private RectTransform CircleMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3A05AE0", Offset = "0x3A05AE0", VA = "0x3A05AE0")]
	private static RectTransform LineMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x3A05F30", Offset = "0x3A05F30", VA = "0x3A05F30")]
	private static Vector2 Normalized(RectTransform rect, PointerEventData eventData)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x3A06670", Offset = "0x3A06670", VA = "0x3A06670")]
	private static void Place(RectTransform marker, float x, float y)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x3A06490", Offset = "0x3A06490", VA = "0x3A06490")]
	private static void SetTexture(ref Texture2D texture, RawImage target, int width, int height, Func<int, int, Color32> pixel)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x3A06AF0", Offset = "0x3A06AF0", VA = "0x3A06AF0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x3A06730", Offset = "0x3A06730", VA = "0x3A06730")]
	private Sprite CircleSprite()
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x3A06E30", Offset = "0x3A06E30", VA = "0x3A06E30")]
	private static byte Blend(byte back, byte front, float t)
	{
		return default(byte);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x3A06D50", Offset = "0x3A06D50", VA = "0x3A06D50")]
	private static void DestroyTexture(Texture2D texture)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x3A06DA0", Offset = "0x3A06DA0", VA = "0x3A06DA0")]
	private static void DestroyUnityObject(UnityEngine.Object target)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x3A06F80", Offset = "0x3A06F80", VA = "0x3A06F80")]
	public GisketchUIColorPickerVisual()
	{
	}
}
