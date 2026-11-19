// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000211")]
internal sealed class AottgGameCreateCardPreview : MonoBehaviour
{
	[Token(Token = "0x2000212")]
	private readonly struct StarRest
	{
		[Token(Token = "0x4000B05")]
		[FieldOffset(Offset = "0x0")]
		public readonly RectTransform Rect;

		[Token(Token = "0x4000B06")]
		[FieldOffset(Offset = "0x8")]
		public readonly Vector2 Position;

		[Token(Token = "0x4000B07")]
		[FieldOffset(Offset = "0x10")]
		public readonly Quaternion Rotation;

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x5D87EE0", Offset = "0x5D86EE0", VA = "0x5D87EE0")]
		public StarRest(RectTransform rect)
		{
		}
	}

	[Token(Token = "0x2000213")]
	private readonly struct GearRest
	{
		[Token(Token = "0x4000B08")]
		[FieldOffset(Offset = "0x0")]
		public readonly RectTransform Rect;

		[Token(Token = "0x4000B09")]
		[FieldOffset(Offset = "0x8")]
		public readonly Vector2 Position;

		[Token(Token = "0x4000B0A")]
		[FieldOffset(Offset = "0x10")]
		public readonly Quaternion Rotation;

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x5D87F30", Offset = "0x5D86F30", VA = "0x5D87F30")]
		public GearRest(RectTransform rect)
		{
		}
	}

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> ReportedFallbacks;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x20")]
	private AottgGameCreatePreviewPlane[] _planes;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x28")]
	private StarRest[] _stars;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x30")]
	private GearRest[] _gears;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _rect;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x40")]
	private Canvas _canvas;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x48")]
	private Material _material;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x50")]
	private Image _fallback;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x58")]
	private Material _fallbackMaterial;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x68")]
	private Vector2 _pointerPosition;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 _tilt;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x78")]
	private int _pointerId;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x7C")]
	private bool _hovered;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x80")]
	private float _starStrength;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x84")]
	private float _gearStrength;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x88")]
	private float _phase;

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x5D877C0", Offset = "0x5D867C0", VA = "0x5D877C0")]
	public void Setup(Image fallback, bool favorites, bool sandbox)
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x5D87F80", Offset = "0x5D86F80", VA = "0x5D87F80")]
	private void BuildLayers(Image fallback)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x5D88D40", Offset = "0x5D87D40", VA = "0x5D88D40")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x5D88CA0", Offset = "0x5D87CA0", VA = "0x5D88CA0")]
	private static AottgGameCreatePreviewPlane AddPlane(Image image, float depth)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x5D88BB0", Offset = "0x5D87BB0", VA = "0x5D88BB0")]
	private void EnsureCanvas()
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x5D88E80", Offset = "0x5D87E80", VA = "0x5D88E80")]
	public void SetPointer(bool hovered, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x5D89000", Offset = "0x5D88000", VA = "0x5D89000")]
	public void MovePointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x5D89370", Offset = "0x5D88370", VA = "0x5D89370")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x5D89920", Offset = "0x5D88920", VA = "0x5D89920")]
	private void AnimateStars()
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x5D89BB0", Offset = "0x5D88BB0", VA = "0x5D89BB0")]
	private void AnimateGears()
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x5D89050", Offset = "0x5D88050", VA = "0x5D89050")]
	private void ResetMotion()
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x5D89DC0", Offset = "0x5D88DC0", VA = "0x5D89DC0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x5D89DD0", Offset = "0x5D88DD0", VA = "0x5D89DD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x5D88AC0", Offset = "0x5D87AC0", VA = "0x5D88AC0")]
	private static void ReportFallback(string key, string message)
	{
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x5D89EE0", Offset = "0x5D88EE0", VA = "0x5D89EE0")]
	public AottgGameCreateCardPreview()
	{
	}
}
