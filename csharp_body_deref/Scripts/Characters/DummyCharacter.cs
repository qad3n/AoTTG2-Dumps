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

[Token(Token = "0x20006A4")]
internal class DummyCharacter : MonoBehaviour
{
	[Token(Token = "0x4001DF6")]
	[FieldOffset(Offset = "0x20")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001DF7")]
	[FieldOffset(Offset = "0x28")]
	public DummyState State;

	[Token(Token = "0x4001DF8")]
	[FieldOffset(Offset = "0x2C")]
	protected float _stateTimeLeft;

	[Token(Token = "0x6004064")]
	[Address(RVA = "0x5AE65D0", Offset = "0x5AE55D0", VA = "0x5AE65D0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6004065")]
	[Address(RVA = "0x5AE6640", Offset = "0x5AE5640", VA = "0x5AE6640", Slot = "5")]
	protected virtual string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x6004066")]
	[Address(RVA = "0x5AE6660", Offset = "0x5AE5660", VA = "0x5AE6660", Slot = "6")]
	protected virtual string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x6004067")]
	[Address(RVA = "0x5AE6680", Offset = "0x5AE5680", VA = "0x5AE6680")]
	public void Idle()
	{
	}

	[Token(Token = "0x6004068")]
	[Address(RVA = "0x5AE66C0", Offset = "0x5AE56C0", VA = "0x5AE66C0")]
	public void EmoteAction(string emote)
	{
	}

	[Token(Token = "0x6004069")]
	[Address(RVA = "0x5AE6730", Offset = "0x5AE5730", VA = "0x5AE6730")]
	protected void Update()
	{
	}

	[Token(Token = "0x600406A")]
	[Address(RVA = "0x5AE67C0", Offset = "0x5AE57C0", VA = "0x5AE67C0")]
	public DummyCharacter()
	{
	}
}
