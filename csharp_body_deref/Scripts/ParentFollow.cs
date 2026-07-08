using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000007")]
public class ParentFollow : MonoBehaviour
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x20")]
	private Transform bTransform;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x28")]
	public bool isActiveInScene;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x30")]
	private Transform parent;

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3C660C0", Offset = "0x3C660C0", VA = "0x3C660C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3C64BA0", Offset = "0x3C64BA0", VA = "0x3C64BA0")]
	public void RemoveParent()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3C65430", Offset = "0x3C65430", VA = "0x3C65430")]
	public void SetParent(Transform transform)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3C660F0", Offset = "0x3C660F0", VA = "0x3C660F0")]
	private void Update()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3C66180", Offset = "0x3C66180", VA = "0x3C66180")]
	public ParentFollow()
	{
	}
}
