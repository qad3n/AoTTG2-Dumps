using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A8")]
public sealed class AottgSliderControl : Selectable, IDragHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x4000345")]
	private const float NavigationStep = 0.05f;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x100")]
	private RectTransform _track;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform _fill;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform _thumb;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform _thumbFace;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x120")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x128")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x130")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x138")]
	private GameObject _target;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x140")]
	private float _min;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x144")]
	private float _max;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x148")]
	private float _railHeight;

	[Token(Token = "0x17000073")]
	public float Value
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x3A244D0", Offset = "0x3A244D0", VA = "0x3A244D0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x3A244E0", Offset = "0x3A244E0", VA = "0x3A244E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x3A244F0", Offset = "0x3A244F0", VA = "0x3A244F0")]
	public void Setup(RectTransform track, RectTransform fill, RectTransform thumb, RectTransform thumbFace, TextMeshProUGUI label, GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject target, float railHeight)
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x3A249D0", Offset = "0x3A249D0", VA = "0x3A249D0")]
	public void SetNormalizedValue(float normalized, bool notify)
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x3A24A20", Offset = "0x3A24A20", VA = "0x3A24A20", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x3A24D10", Offset = "0x3A24D10", VA = "0x3A24D10", Slot = "39")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x3A24D20", Offset = "0x3A24D20", VA = "0x3A24D20", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x3A24D40", Offset = "0x3A24D40", VA = "0x3A24D40", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x3A24E80", Offset = "0x3A24E80", VA = "0x3A24E80", Slot = "40")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x3A24AF0", Offset = "0x3A24AF0", VA = "0x3A24AF0")]
	private void SetFromPointer(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x3A24770", Offset = "0x3A24770", VA = "0x3A24770")]
	private void SetValue(float value, bool notify, GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x3A24FC0", Offset = "0x3A24FC0", VA = "0x3A24FC0")]
	private void RefreshVisuals()
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x3A24F30", Offset = "0x3A24F30", VA = "0x3A24F30")]
	private float ThumbWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x3A246E0", Offset = "0x3A246E0", VA = "0x3A246E0")]
	private static float ParseFloat(string value, float fallback)
	{
		return default(float);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x3A25390", Offset = "0x3A25390", VA = "0x3A25390")]
	public AottgSliderControl()
	{
	}
}
