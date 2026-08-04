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

[Token(Token = "0x20000AB")]
public sealed class AottgSliderControl : Selectable, IDragHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x4000361")]
	private const float NavigationStep = 0.05f;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x100")]
	private RectTransform _track;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform _fill;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform _thumb;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform _thumbFace;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x120")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x128")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x130")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x138")]
	private GameObject _target;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x140")]
	private float _min;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x144")]
	private float _max;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x148")]
	private float _railHeight;

	[Token(Token = "0x17000075")]
	public float Value
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x3A90620", Offset = "0x3A90620", VA = "0x3A90620")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x3A90630", Offset = "0x3A90630", VA = "0x3A90630")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x3A90640", Offset = "0x3A90640", VA = "0x3A90640")]
	public void Setup(RectTransform track, RectTransform fill, RectTransform thumb, RectTransform thumbFace, TextMeshProUGUI label, GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject target, float railHeight)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x3A90AE0", Offset = "0x3A90AE0", VA = "0x3A90AE0")]
	public void SetNormalizedValue(float normalized, bool notify)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x3A90B30", Offset = "0x3A90B30", VA = "0x3A90B30", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x3A90E20", Offset = "0x3A90E20", VA = "0x3A90E20", Slot = "39")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x3A90E30", Offset = "0x3A90E30", VA = "0x3A90E30", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x3A90E50", Offset = "0x3A90E50", VA = "0x3A90E50", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x3A90F90", Offset = "0x3A90F90", VA = "0x3A90F90", Slot = "40")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x3A90C00", Offset = "0x3A90C00", VA = "0x3A90C00")]
	private void SetFromPointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x3A908C0", Offset = "0x3A908C0", VA = "0x3A908C0")]
	private void SetValue(float value, bool notify, GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x3A910D0", Offset = "0x3A910D0", VA = "0x3A910D0")]
	private void RefreshVisuals()
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x3A91040", Offset = "0x3A91040", VA = "0x3A91040")]
	private float ThumbWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x3A90830", Offset = "0x3A90830", VA = "0x3A90830")]
	private static float ParseFloat(string value, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x3A914A0", Offset = "0x3A914A0", VA = "0x3A914A0")]
	public AottgSliderControl()
	{
	}
}
