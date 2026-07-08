using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000176")]
internal sealed class AottgGuildPresetImageShimmer : MonoBehaviour
{
	[Token(Token = "0x4000872")]
	private const string ShaderName = "UI/AoTTG Guild Image Shimmer";

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x20")]
	private Image _source;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x28")]
	private Material _material;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x30")]
	private Material _originalMaterial;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x38")]
	private bool _enabled;

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x40E9D70", Offset = "0x40E9D70", VA = "0x40E9D70")]
	public static void SetEnabled(Image image, bool enabled)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x40E9EA0", Offset = "0x40E9EA0", VA = "0x40E9EA0")]
	private void Configure(Image source, bool enabled)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x40EA020", Offset = "0x40EA020", VA = "0x40EA020")]
	private void EnsureMaterial()
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x40E9F80", Offset = "0x40E9F80", VA = "0x40E9F80")]
	private void RestoreMaterial()
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x40EA110", Offset = "0x40EA110", VA = "0x40EA110")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x40EA1A0", Offset = "0x40EA1A0", VA = "0x40EA1A0")]
	public AottgGuildPresetImageShimmer()
	{
	}
}
