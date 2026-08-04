// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.BaseGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/BaseGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using GameManagers;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010D")]
internal class BaseGizmo : MonoBehaviour
{
	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x20")]
	protected MapEditorGameManager _gameManager;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x30")]
	protected MapEditorMenu _menu;

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x423C640", Offset = "0x423C640", VA = "0x423C640", Slot = "4")]
	public virtual bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x423C650", Offset = "0x423C650", VA = "0x423C650", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x423C7F0", Offset = "0x423C7F0", VA = "0x423C7F0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x423CA30", Offset = "0x423CA30", VA = "0x423CA30", Slot = "7")]
	public virtual void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x423CA40", Offset = "0x423CA40", VA = "0x423CA40")]
	public BaseGizmo()
	{
	}
}
