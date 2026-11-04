// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.RaycastResult
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C5")]
public struct RaycastResult
{
	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x0")]
	private GameObject m_GameObject;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x8")]
	public BaseRaycaster module;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x10")]
	public float distance;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x14")]
	public float index;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x18")]
	public int depth;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x1C")]
	public int sortingGroupID;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x20")]
	public int sortingGroupOrder;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x24")]
	public int sortingLayer;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x28")]
	public int sortingOrder;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 origin;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 worldPosition;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x44")]
	public Vector3 worldNormal;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x50")]
	public Vector2 screenPosition;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x58")]
	public int displayIndex;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x60")]
	public UIDocument document;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x68")]
	public VisualElement element;

	[Token(Token = "0x170001FE")]
	public GameObject gameObject
	{
		[Token(Token = "0x600077E")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600077F")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public bool isValid
	{
		[Token(Token = "0x6000780")]
		[Address(RVA = "0x32FF1B0", Offset = "0x32FD7B0", VA = "0x1832FF1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x32FEB60", Offset = "0x32FD160", VA = "0x1832FEB60")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x32FECB0", Offset = "0x32FD2B0", VA = "0x1832FECB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
