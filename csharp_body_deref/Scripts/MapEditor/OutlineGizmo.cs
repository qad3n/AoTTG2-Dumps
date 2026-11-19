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

[Token(Token = "0x200014D")]
internal class OutlineGizmo : BaseGizmo
{
	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<MapObject, Outline> _outlines;

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x5B936C0", Offset = "0x5B926C0", VA = "0x5B936C0")]
	public static OutlineGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x5B93730", Offset = "0x5B92730", VA = "0x5B93730", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x5B93B40", Offset = "0x5B92B40", VA = "0x5B93B40")]
	private void CreateOutline(MapObject obj)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x5B93A90", Offset = "0x5B92A90", VA = "0x5B93A90")]
	private void DestroyOutline(MapObject obj)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x5B93C00", Offset = "0x5B92C00", VA = "0x5B93C00")]
	public OutlineGizmo()
	{
	}
}
