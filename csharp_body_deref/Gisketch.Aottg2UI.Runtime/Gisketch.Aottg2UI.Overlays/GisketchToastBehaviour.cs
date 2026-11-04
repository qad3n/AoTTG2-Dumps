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

[Token(Token = "0x200004A")]
public sealed class GisketchToastBehaviour : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x400016E")]
	public const float DefaultDelay = 5f;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x20")]
	private Action _close;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _start;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x30")]
	private float _remaining;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x34")]
	private bool _paused;

	[Token(Token = "0x17000048")]
	public float Delay
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x18B5610", Offset = "0x18B3C10", VA = "0x1818B5610")]
	public void Setup(Action close)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x18B55E0", Offset = "0x18B3BE0", VA = "0x1818B55E0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x18B5590", Offset = "0x18B3B90", VA = "0x1818B5590", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0xAB9F80", Offset = "0xAB8580", VA = "0x180AB9F80")]
	public void SetPaused(bool paused)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x18B5640", Offset = "0x18B3C40", VA = "0x1818B5640")]
	private void Update()
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x18B56D0", Offset = "0x18B3CD0", VA = "0x1818B56D0")]
	public GisketchToastBehaviour()
	{
	}
}
