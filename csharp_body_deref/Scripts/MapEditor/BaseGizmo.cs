using GameManagers;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010C")]
internal class BaseGizmo : MonoBehaviour
{
	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x20")]
	protected MapEditorGameManager _gameManager;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x30")]
	protected MapEditorMenu _menu;

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x3F476C0", Offset = "0x3F476C0", VA = "0x3F476C0", Slot = "4")]
	public virtual bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x3F476D0", Offset = "0x3F476D0", VA = "0x3F476D0", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x3F47870", Offset = "0x3F47870", VA = "0x3F47870", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x3F47AB0", Offset = "0x3F47AB0", VA = "0x3F47AB0", Slot = "7")]
	public virtual void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x3F47AC0", Offset = "0x3F47AC0", VA = "0x3F47AC0")]
	public BaseGizmo()
	{
	}
}
