// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.RaycastResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C8")]
public struct RaycastResult
{
	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x0")]
	private GameObject m_GameObject;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x8")]
	public BaseRaycaster module;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x10")]
	public float distance;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x14")]
	public float index;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x18")]
	public int depth;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x1C")]
	public int sortingGroupID;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x20")]
	public int sortingGroupOrder;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x24")]
	public int sortingLayer;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x28")]
	public int sortingOrder;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 worldPosition;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 worldNormal;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x44")]
	public Vector2 screenPosition;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x4C")]
	public int displayIndex;

	[Token(Token = "0x170001F8")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x5103FF0", Offset = "0x5103FF0", VA = "0x5103FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x5104000", Offset = "0x5104000", VA = "0x5104000")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public bool isValid
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x5104010", Offset = "0x5104010", VA = "0x5104010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x5104090", Offset = "0x5104090", VA = "0x5104090")]
	public void Clear()
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x50F6180", Offset = "0x50F6180", VA = "0x50F6180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
