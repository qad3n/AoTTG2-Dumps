// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.OutlineGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/OutlineGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x200010E")]
internal class OutlineGizmo : BaseGizmo
{
	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<MapObject, List<Outline>> _meshOutlines;

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x423CA50", Offset = "0x423CA50", VA = "0x423CA50")]
	public static OutlineGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x423CAC0", Offset = "0x423CAC0", VA = "0x423CAC0", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x423D050", Offset = "0x423D050", VA = "0x423D050")]
	private void CreateOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x423CE80", Offset = "0x423CE80", VA = "0x423CE80")]
	private void DestroyOutline(MapObject obj)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x423D2F0", Offset = "0x423D2F0", VA = "0x423D2F0")]
	public OutlineGizmo()
	{
	}
}
