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

[Token(Token = "0x20002AE")]
internal sealed class AottgGuildPresetImageShimmer : MonoBehaviour
{
	[Token(Token = "0x4000DDD")]
	private const string ShaderName = "UI/AoTTG Guild Image Shimmer";

	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x20")]
	private Image _source;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x28")]
	private Material _material;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0x30")]
	private Material _originalMaterial;

	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0x38")]
	private bool _enabled;

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x1E13590", Offset = "0x1E11B90", VA = "0x181E13590")]
	public static void SetEnabled(Image image, bool enabled)
	{
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x1E131B0", Offset = "0x1E117B0", VA = "0x181E131B0")]
	private void Configure(Image source, bool enabled)
	{
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x1E13370", Offset = "0x1E11970", VA = "0x181E13370")]
	private void EnsureMaterial()
	{
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x1E134F0", Offset = "0x1E11AF0", VA = "0x181E134F0")]
	private void RestoreMaterial()
	{
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x1E13460", Offset = "0x1E11A60", VA = "0x181E13460")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGuildPresetImageShimmer()
	{
	}
}
