using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x200010D")]
internal class OutlineGizmo : BaseGizmo
{
	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<MapObject, List<Outline>> _meshOutlines;

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x3F47AD0", Offset = "0x3F47AD0", VA = "0x3F47AD0")]
	public static OutlineGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x3F47B40", Offset = "0x3F47B40", VA = "0x3F47B40", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3F480D0", Offset = "0x3F480D0", VA = "0x3F480D0")]
	private void CreateOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3F47F00", Offset = "0x3F47F00", VA = "0x3F47F00")]
	private void DestroyOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3F48370", Offset = "0x3F48370", VA = "0x3F48370")]
	public OutlineGizmo()
	{
	}
}
