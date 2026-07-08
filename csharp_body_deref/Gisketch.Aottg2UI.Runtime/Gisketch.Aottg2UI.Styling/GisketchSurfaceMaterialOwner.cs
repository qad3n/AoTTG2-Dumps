using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200001F")]
public sealed class GisketchSurfaceMaterialOwner : MonoBehaviour
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x39CDC00", Offset = "0x39CDC00", VA = "0x39CDC00")]
	public void Setup(Material material)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x39CDC10", Offset = "0x39CDC10", VA = "0x39CDC10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x39CDCD0", Offset = "0x39CDCD0", VA = "0x39CDCD0")]
	public GisketchSurfaceMaterialOwner()
	{
	}
}
