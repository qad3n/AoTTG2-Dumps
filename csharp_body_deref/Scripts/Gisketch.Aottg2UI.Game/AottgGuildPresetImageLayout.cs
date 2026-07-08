using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000177")]
internal sealed class AottgGuildPresetImageLayout : MonoBehaviour
{
	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x20")]
	private LayoutElement _layout;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x28")]
	private float _baseWidth;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x2C")]
	private float _baseHeight;

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x40E9D20", Offset = "0x40E9D20", VA = "0x40E9D20")]
	public static void Configure(Image image, float width, float height)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x40E9E70", Offset = "0x40E9E70", VA = "0x40E9E70")]
	public static void Scale(Image image, float scale)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x40EA1B0", Offset = "0x40EA1B0", VA = "0x40EA1B0")]
	private static AottgGuildPresetImageLayout Runtime(Image image)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x40EA400", Offset = "0x40EA400", VA = "0x40EA400")]
	private void Apply(float scale)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x40EA510", Offset = "0x40EA510", VA = "0x40EA510")]
	public AottgGuildPresetImageLayout()
	{
	}
}
