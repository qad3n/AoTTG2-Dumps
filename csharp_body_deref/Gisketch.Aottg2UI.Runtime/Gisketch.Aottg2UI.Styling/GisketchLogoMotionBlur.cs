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
		[Address(RVA = "0x39C7EE0", Offset = "0x39C7EE0", VA = "0x39C7EE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x39CBBA0", Offset = "0x39CBBA0", VA = "0x39CBBA0")]
	public void Setup(Image image)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x39C7E20", Offset = "0x39C7E20", VA = "0x39C7E20")]
	public void SetBlur(float value)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x39CBD30", Offset = "0x39CBD30", VA = "0x39CBD30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x39CBDF0", Offset = "0x39CBDF0", VA = "0x39CBDF0")]
	public GisketchLogoMotionBlur()
	{
	}
}
