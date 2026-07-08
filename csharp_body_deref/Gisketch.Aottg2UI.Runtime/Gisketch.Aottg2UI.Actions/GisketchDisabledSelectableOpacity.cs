using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000AF")]
[DisallowMultipleComponent]
internal sealed class GisketchDisabledSelectableOpacity : MonoBehaviour
{
	[Token(Token = "0x4000372")]
	private const float DisabledAlpha = 0.5f;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x20")]
	private Selectable _selectable;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x28")]
	private Graphic[] _graphics;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x30")]
	private bool _initialized;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x31")]
	private bool _lastInteractable;

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x3A27320", Offset = "0x3A27320", VA = "0x3A27320")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x3A27400", Offset = "0x3A27400", VA = "0x3A27400")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x3A27460", Offset = "0x3A27460", VA = "0x3A27460")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x3A27580", Offset = "0x3A27580", VA = "0x3A27580")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x3A275E0", Offset = "0x3A275E0", VA = "0x3A275E0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x3A21920", Offset = "0x3A21920", VA = "0x3A21920")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x3A273B0", Offset = "0x3A273B0", VA = "0x3A273B0")]
	private void CacheGraphics()
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x3A27480", Offset = "0x3A27480", VA = "0x3A27480")]
	private void ApplyAlpha(float alpha)
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x3A275F0", Offset = "0x3A275F0", VA = "0x3A275F0")]
	public GisketchDisabledSelectableOpacity()
	{
	}
}
