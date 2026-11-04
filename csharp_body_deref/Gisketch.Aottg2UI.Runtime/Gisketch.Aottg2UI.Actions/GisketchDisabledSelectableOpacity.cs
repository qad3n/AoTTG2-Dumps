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

[Token(Token = "0x20000D3")]
[DisallowMultipleComponent]
internal sealed class GisketchDisabledSelectableOpacity : MonoBehaviour
{
	[Token(Token = "0x4000446")]
	private const float DisabledAlpha = 0.5f;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x20")]
	private Selectable _selectable;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x28")]
	private Graphic[] _graphics;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x30")]
	private float _disabledAlpha;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x34")]
	private bool _initialized;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x35")]
	private bool _lastInteractable;

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x18FE020", Offset = "0x18FC620", VA = "0x1818FE020")]
	public void Setup(float disabledAlpha)
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x18FDD90", Offset = "0x18FC390", VA = "0x1818FDD90")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x18FDEB0", Offset = "0x18FC4B0", VA = "0x1818FDEB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x18FDE80", Offset = "0x18FC480", VA = "0x1818FDE80")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x18FDEB0", Offset = "0x18FC4B0", VA = "0x1818FDEB0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x18FDE70", Offset = "0x18FC470", VA = "0x1818FDE70")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x18FDF10", Offset = "0x18FC510", VA = "0x1818FDF10")]
	public void Refresh()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x18FDE20", Offset = "0x18FC420", VA = "0x1818FDE20")]
	private void CacheGraphics()
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x18FDB80", Offset = "0x18FC180", VA = "0x1818FDB80")]
	private void ApplyAlpha(float alpha)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x18FE050", Offset = "0x18FC650", VA = "0x1818FE050")]
	public GisketchDisabledSelectableOpacity()
	{
	}
}
