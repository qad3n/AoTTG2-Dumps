// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSidePanelOutlineSkew.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B5")]
public sealed class GisketchSidePanelOutlineSkew : BaseMeshEffect
{
	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<UIVertex> _vertices;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x30")]
	private float _bottomOffset;

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x1907790", Offset = "0x1905D90", VA = "0x181907790")]
	public void Setup(float bottomOffset)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x1907440", Offset = "0x1905A40", VA = "0x181907440", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x19077D0", Offset = "0x1905DD0", VA = "0x1819077D0")]
	public GisketchSidePanelOutlineSkew()
	{
	}
}
