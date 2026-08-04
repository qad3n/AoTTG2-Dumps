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

[Token(Token = "0x2000097")]
public sealed class GisketchSidePanelOutlineSkew : BaseMeshEffect
{
	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<UIVertex> _vertices;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x30")]
	private float _bottomOffset;

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x3A87780", Offset = "0x3A87780", VA = "0x3A87780")]
	public void Setup(float bottomOffset)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x3A877B0", Offset = "0x3A877B0", VA = "0x3A877B0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x3A87C40", Offset = "0x3A87C40", VA = "0x3A87C40")]
	public GisketchSidePanelOutlineSkew()
	{
	}
}
