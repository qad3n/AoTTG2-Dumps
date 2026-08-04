// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B2")]
[DisallowMultipleComponent]
internal sealed class GisketchDisabledSelectableOpacity : MonoBehaviour
{
	[Token(Token = "0x400038E")]
	private const float DisabledAlpha = 0.5f;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x20")]
	private Selectable _selectable;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x28")]
	private Graphic[] _graphics;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x30")]
	private bool _initialized;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x31")]
	private bool _lastInteractable;

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x3A93430", Offset = "0x3A93430", VA = "0x3A93430")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x3A93510", Offset = "0x3A93510", VA = "0x3A93510")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x3A93570", Offset = "0x3A93570", VA = "0x3A93570")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x3A93690", Offset = "0x3A93690", VA = "0x3A93690")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x3A936F0", Offset = "0x3A936F0", VA = "0x3A936F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x3A8D9C0", Offset = "0x3A8D9C0", VA = "0x3A8D9C0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x3A934C0", Offset = "0x3A934C0", VA = "0x3A934C0")]
	private void CacheGraphics()
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x3A93590", Offset = "0x3A93590", VA = "0x3A93590")]
	private void ApplyAlpha(float alpha)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x3A93700", Offset = "0x3A93700", VA = "0x3A93700")]
	public GisketchDisabledSelectableOpacity()
	{
	}
}
