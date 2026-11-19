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

[Token(Token = "0x200002A")]
public sealed class GisketchLogoMotionBlur : MonoBehaviour
{
	[Token(Token = "0x40000B8")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Sprite Blur";

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int BlurId;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x1700001D")]
	public float Blur
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5227E90", Offset = "0x5226E90", VA = "0x5227E90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x5230D50", Offset = "0x522FD50", VA = "0x5230D50")]
	public void Setup(Image image)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x5227DD0", Offset = "0x5226DD0", VA = "0x5227DD0")]
	public void SetBlur(float value)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x5230EE0", Offset = "0x522FEE0", VA = "0x5230EE0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x5230FB0", Offset = "0x522FFB0", VA = "0x5230FB0")]
	public GisketchLogoMotionBlur()
	{
	}
}
