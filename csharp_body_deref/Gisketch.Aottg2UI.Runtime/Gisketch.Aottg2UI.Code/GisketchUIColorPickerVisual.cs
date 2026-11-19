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

[Token(Token = "0x20000A2")]
internal sealed class GisketchUIColorPickerVisual : MonoBehaviour
{
	[Token(Token = "0x20000A3")]
	private sealed class DragTarget : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		[Token(Token = "0x4000388")]
		[FieldOffset(Offset = "0x20")]
		private Action<PointerEventData> _drag;

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x527AFD0", Offset = "0x5279FD0", VA = "0x527AFD0")]
		public void Setup(Action<PointerEventData> drag)
		{
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x527AFE0", Offset = "0x5279FE0", VA = "0x527AFE0", Slot = "4")]
		public void OnPointerDown(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x527B000", Offset = "0x527A000", VA = "0x527B000", Slot = "5")]
		public void OnDrag(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6000521")]
		[Address(RVA = "0x527B020", Offset = "0x527A020", VA = "0x527B020")]
		public DragTarget()
		{
		}
	}

	[Token(Token = "0x4000376")]
	private const float BarHeight = 22f;

	[Token(Token = "0x4000377")]
	private const int AlphaTextureWidth = 384;

	[Token(Token = "0x4000378")]
	private const int AlphaTextureHeight = 22;

	[Token(Token = "0x4000379")]
	private const int CheckerSize = 6;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _square;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x28")]
	private RawImage _hue;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x30")]
	private RawImage _alpha;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _squareMarker;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _hueMarker;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _alphaMarker;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x50")]
	private Texture2D _squareTexture;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x58")]
	private Texture2D _hueTexture;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x68")]
	private Texture2D _circleTexture;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x70")]
	private Sprite _circleSprite;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x78")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<GisketchUIColorPickerValue> m_Changed;

	[Token(Token = "0x17000094")]
	public bool EnableAlpha
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x5278C10", Offset = "0x5277C10", VA = "0x5278C10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x5278C20", Offset = "0x5277C20", VA = "0x5278C20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<GisketchUIColorPickerValue> Changed
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x5277440", Offset = "0x5276440", VA = "0x5277440")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000505")]
		[Address(RVA = "0x5277900", Offset = "0x5276900", VA = "0x5277900")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x5275EB0", Offset = "0x5274EB0", VA = "0x5275EB0")]
	public void Setup(string id, bool enableAlpha, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x52774F0", Offset = "0x52764F0", VA = "0x52774F0")]
	public void SetValue(GisketchUIColorPickerValue value, bool notify)
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x5278C30", Offset = "0x5277C30", VA = "0x5278C30")]
	private void Build(GisketchTheme theme)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x5279D50", Offset = "0x5278D50", VA = "0x5279D50")]
	private void OnSquareDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x527A010", Offset = "0x5279010", VA = "0x527A010")]
	private void OnHueDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x527A170", Offset = "0x5279170", VA = "0x527A170")]
	private void OnAlphaDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x527A370", Offset = "0x5279370", VA = "0x527A370")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x5279020", Offset = "0x5278020", VA = "0x5279020")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x5279250", Offset = "0x5278250", VA = "0x5279250")]
	private void RefreshMarkers()
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x5279500", Offset = "0x5278500", VA = "0x5279500")]
	private static RawImage RawImage(string name, RectTransform parent, float bottom, float height, Color fallback)
	{
		return null;
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x5279770", Offset = "0x5278770", VA = "0x5279770")]
	private RectTransform CircleMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x5279A80", Offset = "0x5278A80", VA = "0x5279A80")]
	private static RectTransform LineMarker(RectTransform parent, GisketchTheme theme)
	{
		return null;
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x5279EB0", Offset = "0x5278EB0", VA = "0x5279EB0")]
	private static Vector2 Normalized(RectTransform rect, PointerEventData eventData)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x527A5C0", Offset = "0x52795C0", VA = "0x527A5C0")]
	private static void Place(RectTransform marker, float x, float y)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x527A3E0", Offset = "0x52793E0", VA = "0x527A3E0")]
	private static void SetTexture(ref Texture2D texture, RawImage target, int width, int height, Func<int, int, Color32> pixel)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x527AA20", Offset = "0x5279A20", VA = "0x527AA20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x527A690", Offset = "0x5279690", VA = "0x527A690")]
	private Sprite CircleSprite()
	{
		return null;
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x527AD80", Offset = "0x5279D80", VA = "0x527AD80")]
	private static byte Blend(byte back, byte front, float t)
	{
		return default(byte);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x527AC80", Offset = "0x5279C80", VA = "0x527AC80")]
	private static void DestroyTexture(Texture2D texture)
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x527ACE0", Offset = "0x5279CE0", VA = "0x527ACE0")]
	private static void DestroyUnityObject(UnityEngine.Object target)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x527AED0", Offset = "0x5279ED0", VA = "0x527AED0")]
	public GisketchUIColorPickerVisual()
	{
	}
}
