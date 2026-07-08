using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C3")]
public struct RaycastResult
{
	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x0")]
	private GameObject m_GameObject;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x8")]
	public BaseRaycaster module;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x10")]
	public float distance;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x14")]
	public float index;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x18")]
	public int depth;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x1C")]
	public int sortingGroupID;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x20")]
	public int sortingGroupOrder;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x24")]
	public int sortingLayer;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x28")]
	public int sortingOrder;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 worldPosition;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 worldNormal;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x44")]
	public Vector2 screenPosition;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x4C")]
	public int displayIndex;

	[Token(Token = "0x170001EE")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x4DDA9B0", Offset = "0x4DDA9B0", VA = "0x4DDA9B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x4DDA9C0", Offset = "0x4DDA9C0", VA = "0x4DDA9C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public bool isValid
	{
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x4DDA9D0", Offset = "0x4DDA9D0", VA = "0x4DDA9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4DDAA50", Offset = "0x4DDAA50", VA = "0x4DDAA50")]
	public void Clear()
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4DCE830", Offset = "0x4DCE830", VA = "0x4DCE830", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
