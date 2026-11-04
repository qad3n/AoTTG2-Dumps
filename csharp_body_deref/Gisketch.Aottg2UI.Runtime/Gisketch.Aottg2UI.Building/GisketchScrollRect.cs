// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollRect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B3")]
internal sealed class GisketchScrollRect : ScrollRect
{
	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x130")]
	private GisketchScrollContentLayout _contentLayout;

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x1904F20", Offset = "0x1903520", VA = "0x181904F20", Slot = "47")]
	protected override void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x1904F40", Offset = "0x1903540", VA = "0x181904F40", Slot = "49")]
	protected override void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x1904B00", Offset = "0x1903100", VA = "0x181904B00", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x1904B20", Offset = "0x1903120", VA = "0x181904B20", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x1904930", Offset = "0x1902F30", VA = "0x181904930")]
	private bool CanScroll(Vector2 delta)
	{
		return default(bool);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x1904F60", Offset = "0x1903560", VA = "0x181904F60")]
	private void SyncContentLayout()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x19050C0", Offset = "0x19036C0", VA = "0x1819050C0")]
	public GisketchScrollRect()
	{
	}
}
