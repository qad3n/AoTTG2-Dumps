// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200001C")]
public sealed class GisketchLogoMotionBlur : MonoBehaviour
{
	[Token(Token = "0x4000073")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Sprite Blur";

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int BlurId;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x1700000F")]
	public float Blur
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3A32F20", Offset = "0x3A32F20", VA = "0x3A32F20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3A34DA0", Offset = "0x3A34DA0", VA = "0x3A34DA0")]
	public void Setup(Image image)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3A32E60", Offset = "0x3A32E60", VA = "0x3A32E60")]
	public void SetBlur(float value)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3A34F30", Offset = "0x3A34F30", VA = "0x3A34F30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3A34FF0", Offset = "0x3A34FF0", VA = "0x3A34FF0")]
	public GisketchLogoMotionBlur()
	{
	}
}
