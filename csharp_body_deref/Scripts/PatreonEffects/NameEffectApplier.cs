using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x20000EE")]
[RequireComponent(typeof(Text))]
public class NameEffectApplier : MonoBehaviour
{
	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x20")]
	private Text _legacyText;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _tmpOverlay;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x38")]
	private NameEffectController _controller;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x40")]
	private bool _effectActive;

	[Token(Token = "0x170000B5")]
	public bool IsEffectActive
	{
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x3E22400", Offset = "0x3E22400", VA = "0x3E22400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3E21BB0", Offset = "0x3E21BB0", VA = "0x3E21BB0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3E21C00", Offset = "0x3E21C00", VA = "0x3E21C00")]
	public void ApplyForPlayer(Player player)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x3E22330", Offset = "0x3E22330", VA = "0x3E22330")]
	public void SyncText()
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x3E21E10", Offset = "0x3E21E10", VA = "0x3E21E10")]
	public void ClearEffect()
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x3E21EC0", Offset = "0x3E21EC0", VA = "0x3E21EC0")]
	private void EnsureOverlay()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x3E22410", Offset = "0x3E22410", VA = "0x3E22410")]
	private static Color ParseHex(string hex)
	{
		return default(Color);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x3E22450", Offset = "0x3E22450", VA = "0x3E22450")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x3E224D0", Offset = "0x3E224D0", VA = "0x3E224D0")]
	public NameEffectApplier()
	{
	}
}
