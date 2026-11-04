// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanProjectileDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanProjectileDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006CD")]
internal class TitanProjectileDetection : MonoBehaviour
{
	[Token(Token = "0x4002204")]
	[FieldOffset(Offset = "0x20")]
	public HashSet<GameObject> _entities;

	[Token(Token = "0x4002205")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<Hook> _hooks;

	[Token(Token = "0x4002206")]
	[FieldOffset(Offset = "0x30")]
	public BaseTitan Owner;

	[Token(Token = "0x4002207")]
	[FieldOffset(Offset = "0x38")]
	public bool Detect;

	[Token(Token = "0x6004304")]
	[Address(RVA = "0x21CD050", Offset = "0x21CB650", VA = "0x1821CD050")]
	public static TitanProjectileDetection Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x6004305")]
	[Address(RVA = "0x21CD6C0", Offset = "0x21CBCC0", VA = "0x1821CD6C0")]
	public void RegisterHook(Hook hook)
	{
	}

	[Token(Token = "0x6004306")]
	[Address(RVA = "0x21CD4C0", Offset = "0x21CBAC0", VA = "0x1821CD4C0")]
	protected void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6004307")]
	[Address(RVA = "0x21CD5D0", Offset = "0x21CBBD0", VA = "0x1821CD5D0")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6004308")]
	[Address(RVA = "0x21CD2E0", Offset = "0x21CB8E0", VA = "0x1821CD2E0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6004309")]
	[Address(RVA = "0x21CD720", Offset = "0x21CBD20", VA = "0x1821CD720")]
	public TitanProjectileDetection()
	{
	}
}
