// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D9")]
[DisallowMultipleComponent]
internal sealed class GisketchDisabledSelectableOpacity : MonoBehaviour
{
	[Token(Token = "0x400046D")]
	private const float DisabledAlpha = 0.5f;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x20")]
	private Selectable _selectable;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x28")]
	private Graphic[] _graphics;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x30")]
	private Color _disabledTint;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x40")]
	private bool _initialized;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x41")]
	private bool _lastInteractable;

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x529E910", Offset = "0x529D910", VA = "0x529E910")]
	public void Setup(float disabledAlpha)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x529E950", Offset = "0x529D950", VA = "0x529E950")]
	public void Setup(Color disabledTint)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x529E960", Offset = "0x529D960", VA = "0x529E960")]
	private void Awake()
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x529EA40", Offset = "0x529DA40", VA = "0x529EA40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x529EAA0", Offset = "0x529DAA0", VA = "0x529EAA0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x529ECE0", Offset = "0x529DCE0", VA = "0x529ECE0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x529ED40", Offset = "0x529DD40", VA = "0x529ED40")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x5298510", Offset = "0x5297510", VA = "0x5298510")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x529E9F0", Offset = "0x529D9F0", VA = "0x529E9F0")]
	private void CacheGraphics()
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x529EAC0", Offset = "0x529DAC0", VA = "0x529EAC0")]
	private void ApplyTint(Color tint)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x529ED50", Offset = "0x529DD50", VA = "0x529ED50")]
	public GisketchDisabledSelectableOpacity()
	{
	}
}
