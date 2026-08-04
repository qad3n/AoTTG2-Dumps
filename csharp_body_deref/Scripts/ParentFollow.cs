// ==================== AoTTG2 cross-reference ====================
// Type: ParentFollow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParentFollow.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F5BA10", Offset = "0x3F5BA10", VA = "0x3F5BA10")]
	private void Awake()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3F5A4F0", Offset = "0x3F5A4F0", VA = "0x3F5A4F0")]
	public void RemoveParent()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3F5AD80", Offset = "0x3F5AD80", VA = "0x3F5AD80")]
	public void SetParent(Transform transform)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3F5BA40", Offset = "0x3F5BA40", VA = "0x3F5BA40")]
	private void Update()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3F5BAD0", Offset = "0x3F5BAD0", VA = "0x3F5BAD0")]
	public ParentFollow()
	{
	}
}
