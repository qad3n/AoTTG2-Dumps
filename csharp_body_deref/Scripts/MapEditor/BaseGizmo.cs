// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.BaseGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/BaseGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UI;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014C")]
internal class BaseGizmo : MonoBehaviour
{
	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x20")]
	protected MapEditorGameManager _gameManager;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x30")]
	protected MapEditorMenu _menu;

	[Token(Token = "0x170000D4")]
	protected Vector3 PointerPosition
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x5B92D20", Offset = "0x5B91D20", VA = "0x5B92D20")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x5B92D30", Offset = "0x5B91D30", VA = "0x5B92D30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x5B92D40", Offset = "0x5B91D40", VA = "0x5B92D40", Slot = "4")]
	public virtual bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x5B92D50", Offset = "0x5B91D50", VA = "0x5B92D50", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x5B92EF0", Offset = "0x5B91EF0", VA = "0x5B92EF0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x5B93140", Offset = "0x5B92140", VA = "0x5B93140")]
	protected bool TryGetPointerDown(KeybindSetting selectKey, out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x5B93380", Offset = "0x5B92380", VA = "0x5B93380")]
	protected bool IsPointerHeld(KeybindSetting selectKey, out Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x5B932F0", Offset = "0x5B922F0", VA = "0x5B932F0")]
	protected void CancelPointer()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x5B93490", Offset = "0x5B92490", VA = "0x5B93490", Slot = "7")]
	public virtual void OnSelectionChange()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x5B934A0", Offset = "0x5B924A0", VA = "0x5B934A0")]
	protected static bool HasSelectedAncestor(MapObject obj, HashSet<int> selectedIds)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x5B936B0", Offset = "0x5B926B0", VA = "0x5B936B0")]
	public BaseGizmo()
	{
	}
}
