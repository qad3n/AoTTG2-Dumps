using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000062")]
[RequireComponent(typeof(CanvasRenderer))]
public class TMP_SelectionCaret : MaskableGraphic
{
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x493D6D0", Offset = "0x493D6D0", VA = "0x493D6D0", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x493D770", Offset = "0x493D770", VA = "0x493D770", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x493D780", Offset = "0x493D780", VA = "0x493D780")]
	public TMP_SelectionCaret()
	{
	}
}
