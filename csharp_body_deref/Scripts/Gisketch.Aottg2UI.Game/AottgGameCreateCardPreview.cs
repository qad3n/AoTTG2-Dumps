// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview
// Update status: NEW in this game update
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

[Token(Token = "0x20001F7")]
internal sealed class AottgGameCreateCardPreview : MonoBehaviour
{
	[Token(Token = "0x20001F8")]
	private readonly struct StarRest
	{
		[Token(Token = "0x4000A8B")]
		[FieldOffset(Offset = "0x0")]
		public readonly RectTransform Rect;

		[Token(Token = "0x4000A8C")]
		[FieldOffset(Offset = "0x8")]
		public readonly Vector2 Position;

		[Token(Token = "0x4000A8D")]
		[FieldOffset(Offset = "0x10")]
		public readonly Quaternion Rotation;

		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x23CD850", Offset = "0x23CBE50", VA = "0x1823CD850")]
		public StarRest(RectTransform rect)
		{
		}
	}

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> ReportedFallbacks;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x20")]
	private AottgGameCreatePreviewPlane[] _planes;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x28")]
	private StarRest[] _stars;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _rect;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x38")]
	private Canvas _canvas;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x40")]
	private Material _material;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x48")]
	private Image _fallback;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x50")]
	private Material _fallbackMaterial;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x58")]
	private Camera _eventCamera;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x60")]
	private Vector2 _pointerPosition;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x68")]
	private Vector2 _tilt;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x70")]
	private int _pointerId;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x74")]
	private bool _hovered;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x78")]
	private float _starStrength;

	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x7C")]
	private float _phase;

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x23AF2E0", Offset = "0x23AD8E0", VA = "0x1823AF2E0")]
	public void Setup(Image fallback, bool favorites)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x23AE020", Offset = "0x23AC620", VA = "0x1823AE020")]
	private void BuildLayers(Image fallback)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x23AF600", Offset = "0x23ADC00", VA = "0x1823AF600")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x23ADC70", Offset = "0x23AC270", VA = "0x1823ADC70")]
	private static AottgGameCreatePreviewPlane AddPlane(Image image, float depth)
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x23AEC00", Offset = "0x23AD200", VA = "0x1823AEC00")]
	private void EnsureCanvas()
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x23AF130", Offset = "0x23AD730", VA = "0x1823AF130")]
	public void SetPointer(bool hovered, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x23AECE0", Offset = "0x23AD2E0", VA = "0x1823AECE0")]
	public void MovePointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x23AF730", Offset = "0x23ADD30", VA = "0x1823AF730")]
	private void Update()
	{
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x23ADCF0", Offset = "0x23AC2F0", VA = "0x1823ADCF0")]
	private void AnimateStars()
	{
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x23AEF30", Offset = "0x23AD530", VA = "0x1823AEF30")]
	private void ResetMotion()
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x23AEE60", Offset = "0x23AD460", VA = "0x1823AEE60")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x23AED40", Offset = "0x23AD340", VA = "0x1823AED40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x23AEE70", Offset = "0x23AD470", VA = "0x1823AEE70")]
	private static void ReportFallback(string key, string message)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x23AFCF0", Offset = "0x23AE2F0", VA = "0x1823AFCF0")]
	public AottgGameCreateCardPreview()
	{
	}
}
