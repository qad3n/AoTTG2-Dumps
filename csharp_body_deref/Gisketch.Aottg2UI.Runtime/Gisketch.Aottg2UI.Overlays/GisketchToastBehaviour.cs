// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000051")]
public sealed class GisketchToastBehaviour : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x4000193")]
	public const float DefaultDelay = 5f;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x20")]
	private Action _close;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _start;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x30")]
	private float _remaining;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x34")]
	private bool _paused;

	[Token(Token = "0x17000048")]
	public float Delay
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x5259040", Offset = "0x5258040", VA = "0x5259040")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x5259050", Offset = "0x5258050", VA = "0x5259050")]
	public void Setup(Action close)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5259070", Offset = "0x5258070", VA = "0x5259070", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x5259090", Offset = "0x5258090", VA = "0x5259090", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x52590D0", Offset = "0x52580D0", VA = "0x52590D0")]
	public void SetPaused(bool paused)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x52590E0", Offset = "0x52580E0", VA = "0x52590E0")]
	private void Update()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x52591A0", Offset = "0x52581A0", VA = "0x52591A0")]
	public GisketchToastBehaviour()
	{
	}
}
