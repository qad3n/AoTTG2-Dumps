// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.OutlineGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/OutlineGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000145")]
internal class OutlineGizmo : BaseGizmo
{
	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<MapObject, Outline> _outlines;

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x21F2EE0", Offset = "0x21F14E0", VA = "0x1821F2EE0")]
	public static OutlineGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x21F3000", Offset = "0x21F1600", VA = "0x1821F3000", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x21F2E00", Offset = "0x21F1400", VA = "0x1821F2E00")]
	private void CreateOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x21F2F50", Offset = "0x21F1550", VA = "0x1821F2F50")]
	private void DestroyOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x21F3300", Offset = "0x21F1900", VA = "0x1821F3300")]
	public OutlineGizmo()
	{
	}
}
