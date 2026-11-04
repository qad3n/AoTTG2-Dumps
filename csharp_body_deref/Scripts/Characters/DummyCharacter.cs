// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyCharacter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyCharacter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/DummyCharacter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000645")]
internal class DummyCharacter : MonoBehaviour
{
	[Token(Token = "0x4001C4A")]
	[FieldOffset(Offset = "0x20")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001C4B")]
	[FieldOffset(Offset = "0x28")]
	public DummyState State;

	[Token(Token = "0x4001C4C")]
	[FieldOffset(Offset = "0x2C")]
	protected float _stateTimeLeft;

	[Token(Token = "0x6003DCF")]
	[Address(RVA = "0x2116B70", Offset = "0x2115170", VA = "0x182116B70", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003DD0")]
	[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "5")]
	protected virtual string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003DD1")]
	[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "6")]
	protected virtual string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x6003DD2")]
	[Address(RVA = "0x2116C70", Offset = "0x2115270", VA = "0x182116C70")]
	public void Idle()
	{
	}

	[Token(Token = "0x6003DD3")]
	[Address(RVA = "0x2116BF0", Offset = "0x21151F0", VA = "0x182116BF0")]
	public void EmoteAction(string emote)
	{
	}

	[Token(Token = "0x6003DD4")]
	[Address(RVA = "0x2116CD0", Offset = "0x21152D0", VA = "0x182116CD0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003DD5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DummyCharacter()
	{
	}
}
