// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D2")]
public sealed class AottgSliderControl : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, ISubmitHandler
{
	[Token(Token = "0x400043F")]
	private const float NavigationStep = 0.05f;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x100")]
	private RectTransform _track;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform _fill;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform _thumb;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform _thumbFace;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x120")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x128")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x130")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x138")]
	private GameObject _target;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x140")]
	private float _min;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x144")]
	private float _max;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x148")]
	private float _railHeight;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x14C")]
	private float _lastVisualTrackWidth;

	[Token(Token = "0x170000A7")]
	public float Value
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x529B730", Offset = "0x529A730", VA = "0x529B730")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x529B740", Offset = "0x529A740", VA = "0x529B740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x529B750", Offset = "0x529A750", VA = "0x529B750")]
	public void Setup(RectTransform track, RectTransform fill, RectTransform thumb, RectTransform thumbFace, TextMeshProUGUI label, GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject target, float railHeight)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x529BBF0", Offset = "0x529ABF0", VA = "0x529BBF0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x529BC00", Offset = "0x529AC00", VA = "0x529BC00")]
	internal void RefreshVisualsForLayout()
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x529C160", Offset = "0x529B160", VA = "0x529C160")]
	public void SetNormalizedValue(float normalized, bool notify)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x529C1B0", Offset = "0x529B1B0", VA = "0x529C1B0")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x529C1C0", Offset = "0x529B1C0", VA = "0x529C1C0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x529C510", Offset = "0x529B510", VA = "0x529C510", Slot = "39")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x529C5F0", Offset = "0x529B5F0", VA = "0x529C5F0", Slot = "40")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x529C620", Offset = "0x529B620", VA = "0x529C620", Slot = "41")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x529C640", Offset = "0x529B640", VA = "0x529C640", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x529C6A0", Offset = "0x529B6A0", VA = "0x529C6A0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x529C800", Offset = "0x529B800", VA = "0x529C800", Slot = "42")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x529C2D0", Offset = "0x529B2D0", VA = "0x529C2D0")]
	private void SetFromPointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x529B9E0", Offset = "0x529A9E0", VA = "0x529B9E0")]
	private void SetValue(float value, bool notify, GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x529BD60", Offset = "0x529AD60", VA = "0x529BD60")]
	private void RefreshVisuals()
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x529C8B0", Offset = "0x529B8B0", VA = "0x529C8B0")]
	private float ThumbWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x529B950", Offset = "0x529A950", VA = "0x529B950")]
	private static float ParseFloat(string value, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x529C940", Offset = "0x529B940", VA = "0x529C940")]
	public AottgSliderControl()
	{
	}
}
