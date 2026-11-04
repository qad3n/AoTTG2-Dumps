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

[Token(Token = "0x2000025")]
public sealed class GisketchLogoMotionBlur : MonoBehaviour
{
	[Token(Token = "0x400009D")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Sprite Blur";

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int BlurId;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x1700001D")]
	public float Blur
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x18856A0", Offset = "0x1883CA0", VA = "0x1818856A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x18854B0", Offset = "0x1883AB0", VA = "0x1818854B0")]
	public void Setup(Image image)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x18853F0", Offset = "0x18839F0", VA = "0x1818853F0")]
	public void SetBlur(float value)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x1885320", Offset = "0x1883920", VA = "0x181885320")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchLogoMotionBlur()
	{
	}
}
