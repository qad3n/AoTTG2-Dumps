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

[Token(Token = "0x20000BB")]
public sealed class GisketchSidePanelOutlineSkew : BaseMeshEffect
{
	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<UIVertex> _vertices;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x30")]
	private float _bottomOffset;

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5291A60", Offset = "0x5290A60", VA = "0x5291A60")]
	public void Setup(float bottomOffset)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5291A90", Offset = "0x5290A90", VA = "0x5291A90", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5291EA0", Offset = "0x5290EA0", VA = "0x5291EA0")]
	public GisketchSidePanelOutlineSkew()
	{
	}
}
