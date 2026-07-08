using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000038")]
public sealed class GisketchToastBehaviour : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x4000114")]
	public const float DefaultDelay = 5f;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x20")]
	private Action _close;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _start;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x30")]
	private float _remaining;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x34")]
	private bool _paused;

	[Token(Token = "0x1700002F")]
	public float Delay
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x39E92E0", Offset = "0x39E92E0", VA = "0x39E92E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x39E92F0", Offset = "0x39E92F0", VA = "0x39E92F0")]
	public void Setup(Action close)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x39E9310", Offset = "0x39E9310", VA = "0x39E9310", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x39E9330", Offset = "0x39E9330", VA = "0x39E9330", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x39E9380", Offset = "0x39E9380", VA = "0x39E9380")]
	public void SetPaused(bool paused)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x39E9390", Offset = "0x39E9390", VA = "0x39E9390")]
	private void Update()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x39E9460", Offset = "0x39E9460", VA = "0x39E9460")]
	public GisketchToastBehaviour()
	{
	}
}
