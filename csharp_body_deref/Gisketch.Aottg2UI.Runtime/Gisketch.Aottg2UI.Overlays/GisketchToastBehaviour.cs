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

[Token(Token = "0x2000039")]
public sealed class GisketchToastBehaviour : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x400011A")]
	public const float DefaultDelay = 5f;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x20")]
	private Action _close;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _start;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x30")]
	private float _remaining;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x34")]
	private bool _paused;

	[Token(Token = "0x17000030")]
	public float Delay
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3A53C00", Offset = "0x3A53C00", VA = "0x3A53C00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x3A53C10", Offset = "0x3A53C10", VA = "0x3A53C10")]
	public void Setup(Action close)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3A53C30", Offset = "0x3A53C30", VA = "0x3A53C30", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3A53C50", Offset = "0x3A53C50", VA = "0x3A53C50", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3A53CA0", Offset = "0x3A53CA0", VA = "0x3A53CA0")]
	public void SetPaused(bool paused)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3A53CB0", Offset = "0x3A53CB0", VA = "0x3A53CB0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3A53D80", Offset = "0x3A53D80", VA = "0x3A53D80")]
	public GisketchToastBehaviour()
	{
	}
}
