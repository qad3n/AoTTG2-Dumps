using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000094")]
public sealed class GisketchSidePanelOutlineSkew : BaseMeshEffect
{
	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<UIVertex> _vertices;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x30")]
	private float _bottomOffset;

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x3A1B540", Offset = "0x3A1B540", VA = "0x3A1B540")]
	public void Setup(float bottomOffset)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x3A1B570", Offset = "0x3A1B570", VA = "0x3A1B570", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3A1BA00", Offset = "0x3A1BA00", VA = "0x3A1BA00")]
	public GisketchSidePanelOutlineSkew()
	{
	}
}
