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

[Token(Token = "0x200072F")]
internal class TitanProjectileDetection : MonoBehaviour
{
	[Token(Token = "0x40023F7")]
	[FieldOffset(Offset = "0x20")]
	public HashSet<GameObject> _entities;

	[Token(Token = "0x40023F8")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<Hook> _hooks;

	[Token(Token = "0x40023F9")]
	[FieldOffset(Offset = "0x30")]
	public BaseTitan Owner;

	[Token(Token = "0x40023FA")]
	[FieldOffset(Offset = "0x38")]
	public bool Detect;

	[Token(Token = "0x60045C5")]
	[Address(RVA = "0x5B5F380", Offset = "0x5B5E380", VA = "0x5B5F380")]
	public static TitanProjectileDetection Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60045C6")]
	[Address(RVA = "0x5B5F590", Offset = "0x5B5E590", VA = "0x5B5F590")]
	public void RegisterHook(Hook hook)
	{
	}

	[Token(Token = "0x60045C7")]
	[Address(RVA = "0x5B5F5F0", Offset = "0x5B5E5F0", VA = "0x5B5F5F0")]
	protected void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60045C8")]
	[Address(RVA = "0x5B5F6F0", Offset = "0x5B5E6F0", VA = "0x5B5F6F0")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60045C9")]
	[Address(RVA = "0x5B5F7F0", Offset = "0x5B5E7F0", VA = "0x5B5F7F0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60045CA")]
	[Address(RVA = "0x5B5F9C0", Offset = "0x5B5E9C0", VA = "0x5B5F9C0")]
	public TitanProjectileDetection()
	{
	}
}
