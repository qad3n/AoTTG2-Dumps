// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000CC")]
public sealed class AottgSliderControl : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, ISubmitHandler
{
	[Token(Token = "0x4000418")]
	private const float NavigationStep = 0.05f;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x100")]
	private RectTransform _track;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform _fill;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform _thumb;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform _thumbFace;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x120")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x128")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x130")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x138")]
	private GameObject _target;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x140")]
	private float _min;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x144")]
	private float _max;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x148")]
	private float _railHeight;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x14C")]
	private float _lastVisualTrackWidth;

	[Token(Token = "0x170000A7")]
	public float Value
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x18FB090", Offset = "0x18F9690", VA = "0x1818FB090")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x18FB0A0", Offset = "0x18F96A0", VA = "0x1818FB0A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x18FAD70", Offset = "0x18F9370", VA = "0x1818FAD70")]
	public void Setup(RectTransform track, RectTransform fill, RectTransform thumb, RectTransform thumbFace, TextMeshProUGUI label, GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject target, float railHeight)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x18FA090", Offset = "0x18F8690", VA = "0x1818FA090")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x18FA090", Offset = "0x18F8690", VA = "0x1818FA090")]
	internal void RefreshVisualsForLayout()
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x18FAAE0", Offset = "0x18F90E0", VA = "0x1818FAAE0")]
	public void SetNormalizedValue(float normalized, bool notify)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x18FAB50", Offset = "0x18F9150", VA = "0x1818FAB50")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x18FA320", Offset = "0x18F8920", VA = "0x1818FA320", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x18FA170", Offset = "0x18F8770", VA = "0x1818FA170", Slot = "39")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x18FA1C0", Offset = "0x18F87C0", VA = "0x1818FA1C0", Slot = "40")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x18FA200", Offset = "0x18F8800", VA = "0x1818FA200", Slot = "41")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x18FA3A0", Offset = "0x18F89A0", VA = "0x1818FA3A0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x18FA220", Offset = "0x18F8820", VA = "0x1818FA220", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x18FA410", Offset = "0x18F8A10", VA = "0x1818FA410", Slot = "42")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x18FA8C0", Offset = "0x18F8EC0", VA = "0x1818FA8C0")]
	private void SetFromPointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x18FAB70", Offset = "0x18F9170", VA = "0x1818FAB70")]
	private void SetValue(float value, bool notify, GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x18FA4C0", Offset = "0x18F8AC0", VA = "0x1818FA4C0")]
	private void RefreshVisuals()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x18FAF90", Offset = "0x18F9590", VA = "0x1818FAF90")]
	private float ThumbWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x18FA420", Offset = "0x18F8A20", VA = "0x1818FA420")]
	private static float ParseFloat(string value, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x18FB030", Offset = "0x18F9630", VA = "0x1818FB030")]
	public AottgSliderControl()
	{
	}
}
