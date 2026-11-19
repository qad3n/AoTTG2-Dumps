// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002F")]
public sealed class GisketchSurfaceMaterialOwner : MonoBehaviour
{
	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5235090", Offset = "0x5234090", VA = "0x5235090")]
	public static void Assign(Graphic graphic, Material material)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5235260", Offset = "0x5234260", VA = "0x5235260")]
	public static void ReleaseAll(GameObject root)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x52351B0", Offset = "0x52341B0", VA = "0x52351B0")]
	public void Setup(Material material)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x52353D0", Offset = "0x52343D0", VA = "0x52353D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x5235330", Offset = "0x5234330", VA = "0x5235330")]
	private static void Release(Material material)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x5235440", Offset = "0x5234440", VA = "0x5235440")]
	public GisketchSurfaceMaterialOwner()
	{
	}
}
