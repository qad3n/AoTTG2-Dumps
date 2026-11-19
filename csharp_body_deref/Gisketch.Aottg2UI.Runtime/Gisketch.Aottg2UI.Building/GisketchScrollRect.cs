// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollRect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B9")]
internal sealed class GisketchScrollRect : ScrollRect
{
	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x130")]
	private GisketchScrollContentLayout _contentLayout;

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x5290D90", Offset = "0x528FD90", VA = "0x5290D90", Slot = "47")]
	protected override void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x5290F00", Offset = "0x528FF00", VA = "0x5290F00", Slot = "49")]
	protected override void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x5290F20", Offset = "0x528FF20", VA = "0x5290F20", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5290F40", Offset = "0x528FF40", VA = "0x5290F40", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x52911D0", Offset = "0x52901D0", VA = "0x52911D0")]
	private bool CanScroll(Vector2 delta)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5290DB0", Offset = "0x528FDB0", VA = "0x5290DB0")]
	private void SyncContentLayout()
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5291350", Offset = "0x5290350", VA = "0x5291350")]
	public GisketchScrollRect()
	{
	}
}
