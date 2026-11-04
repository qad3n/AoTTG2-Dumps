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

[Token(Token = "0x200009C")]
internal sealed class GisketchUIColorPickerVisual : MonoBehaviour
{
	[Token(Token = "0x200009D")]
	private sealed class DragTarget : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		[Token(Token = "0x4000361")]
		[FieldOffset(Offset = "0x20")]
		private Action<PointerEventData> _drag;

		[Token(Token = "0x60004D1")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		public void Setup(Action<PointerEventData> drag)
		{
		}

		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x18DA480", Offset = "0x18D8A80", VA = "0x1818DA480", Slot = "4")]
		public void OnPointerDown(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x18DA480", Offset = "0x18D8A80", VA = "0x1818DA480", Slot = "5")]
		public void OnDrag(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public DragTarget()
		{
		}
	}

	[Token(Token = "0x400034F")]
	private const float BarHeight = 22f;

	[Token(Token = "0x4000350")]
	private const int AlphaTextureWidth = 384;

	[Token(Token = "0x4000351")]
	private const int AlphaTextureHeight = 22;

	[Token(Token = "0x4000352")]
	private const int CheckerSize = 6;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _square;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x28")]
	private RawImage _hue;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x30")]
	private RawImage _alpha;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _squareMarker;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _hueMarker;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _alphaMarker;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x50")]
	private Texture2D _squareTexture;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x58")]
	private Texture2D _hueTexture;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x68")]
	private Texture2D _circleTexture;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x70")]
	private Sprite _circleSprite;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x78")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<GisketchUIColorPickerValue> m_Changed;

	[Token(Token = "0x17000094")]
	public bool EnableAlpha
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<GisketchUIColorPickerValue> Changed
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x18F2FE0", Offset = "0x18F15E0", VA = "0x1818F2FE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x18F3090", Offset = "0x18F1690", VA = "0x1818F3090")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x18F2DE0", Offset = "0x18F13E0", VA = "0x1818F2DE0")]
	public void Setup(string id, bool enableAlpha, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x18F2D80", Offset = "0x18F1380", VA = "0x1818F2D80")]
	public void SetValue(GisketchUIColorPickerValue value, bool notify)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x18F0F50", Offset = "0x18EF550", VA = "0x1818F0F50")]
	private void Build(GisketchTheme theme)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x18F23D0", Offset = "0x18F09D0", VA = "0x1818F23D0")]
	private void OnSquareDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x18F22A0", Offset = "0x18F08A0", VA = "0x1818F22A0")]
	private void OnHueDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x18F1F90", Offset = "0x18F0590", VA = "0x1818F1F90")]
	private void OnAlphaDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x18F2360", Offset = "0x18F0960", VA = "0x1818F2360")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x18F2900", Offset = "0x18F0F00", VA = "0x1818F2900")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x18F2840", Offset = "0x18F0E40", VA = "0x1818F2840")]
	private void RefreshMarkers()
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x18F25D0", Offset = "0x18F0BD0", VA = "0x1818F25D0")]
	private static RawImage RawImage(string name, RectTransform parent, float bottom, float height, Color fallback)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x18F1350", Offset = "0x18EF950", VA = "0x1818F1350")]
	private RectTransform CircleMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x18F1A80", Offset = "0x18F0080", VA = "0x1818F1A80")]
	private static RectTransform LineMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x18F1DC0", Offset = "0x18F03C0", VA = "0x1818F1DC0")]
	private static Vector2 Normalized(RectTransform rect, PointerEventData eventData)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x18F2490", Offset = "0x18F0A90", VA = "0x1818F2490")]
	private static void Place(RectTransform marker, float x, float y)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x18F2B70", Offset = "0x18F1170", VA = "0x1818F2B70")]
	private static void SetTexture(ref Texture2D texture, RawImage target, int width, int height, Func<int, int, Color32> pixel)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x18F20F0", Offset = "0x18F06F0", VA = "0x1818F20F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x18F16D0", Offset = "0x18EFCD0", VA = "0x1818F16D0")]
	private Sprite CircleSprite()
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x18F0EF0", Offset = "0x18EF4F0", VA = "0x1818F0EF0")]
	private static byte Blend(byte back, byte front, float t)
	{
		return default(byte);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x18F1980", Offset = "0x18EFF80", VA = "0x1818F1980")]
	private static void DestroyTexture(Texture2D texture)
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x18F19E0", Offset = "0x18EFFE0", VA = "0x1818F19E0")]
	private static void DestroyUnityObject(UnityEngine.Object target)
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchUIColorPickerVisual()
	{
	}
}
