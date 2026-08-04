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

[Token(Token = "0x20001A8")]
internal sealed class AottgGuildPresetImageShimmer : MonoBehaviour
{
	[Token(Token = "0x4000936")]
	private const string ShaderName = "UI/AoTTG Guild Image Shimmer";

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0x20")]
	private Image _source;

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x28")]
	private Material _material;

	[Token(Token = "0x4000939")]
	[FieldOffset(Offset = "0x30")]
	private Material _originalMaterial;

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x38")]
	private bool _enabled;

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x441AFC0", Offset = "0x441AFC0", VA = "0x441AFC0")]
	public static void SetEnabled(Image image, bool enabled)
	{
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x441B0F0", Offset = "0x441B0F0", VA = "0x441B0F0")]
	private void Configure(Image source, bool enabled)
	{
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x441B270", Offset = "0x441B270", VA = "0x441B270")]
	private void EnsureMaterial()
	{
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x441B1D0", Offset = "0x441B1D0", VA = "0x441B1D0")]
	private void RestoreMaterial()
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x441B360", Offset = "0x441B360", VA = "0x441B360")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x441B3F0", Offset = "0x441B3F0", VA = "0x441B3F0")]
	public AottgGuildPresetImageShimmer()
	{
	}
}
