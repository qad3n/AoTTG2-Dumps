// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.BaseGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/BaseGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using GameManagers;
using Il2CppDummyDll;
using Map;
using UI;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000144")]
internal class BaseGizmo : MonoBehaviour
{
	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x20")]
	protected MapEditorGameManager _gameManager;

	[Token(Token = "0x400073C")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0x30")]
	protected MapEditorMenu _menu;

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
	public virtual bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x21ECD60", Offset = "0x21EB360", VA = "0x1821ECD60", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x21ED0E0", Offset = "0x21EB6E0", VA = "0x1821ED0E0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x21ECF20", Offset = "0x21EB520", VA = "0x1821ECF20")]
	protected static bool HasSelectedAncestor(MapObject obj, HashSet<int> selectedIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseGizmo()
	{
	}
}
