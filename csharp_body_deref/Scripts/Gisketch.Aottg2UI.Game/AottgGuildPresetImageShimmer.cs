// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030B")]
internal sealed class AottgGuildPresetImageShimmer : MonoBehaviour
{
	[Token(Token = "0x4000F72")]
	private const string ShaderName = "UI/AoTTG Guild Image Shimmer";

	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x20")]
	private Image _source;

	[Token(Token = "0x4000F74")]
	[FieldOffset(Offset = "0x28")]
	private Material _material;

	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x30")]
	private Material _originalMaterial;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0x38")]
	private bool _enabled;

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x57F7930", Offset = "0x57F6930", VA = "0x57F7930")]
	public static void SetEnabled(Image image, bool enabled)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x57F7A60", Offset = "0x57F6A60", VA = "0x57F7A60")]
	private void Configure(Image source, bool enabled)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x57F7BE0", Offset = "0x57F6BE0", VA = "0x57F7BE0")]
	private void EnsureMaterial()
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x57F7B40", Offset = "0x57F6B40", VA = "0x57F7B40")]
	private void RestoreMaterial()
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x57F7CD0", Offset = "0x57F6CD0", VA = "0x57F7CD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x57F7D60", Offset = "0x57F6D60", VA = "0x57F7D60")]
	public AottgGuildPresetImageShimmer()
	{
	}
}
