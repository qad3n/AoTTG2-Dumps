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

[Token(Token = "0x20004EC")]
internal class DummyCharacter : MonoBehaviour
{
	[Token(Token = "0x40015D8")]
	[FieldOffset(Offset = "0x20")]
	public AnimationHandler Animation;

	[Token(Token = "0x40015D9")]
	[FieldOffset(Offset = "0x28")]
	public DummyState State;

	[Token(Token = "0x40015DA")]
	[FieldOffset(Offset = "0x2C")]
	protected float _stateTimeLeft;

	[Token(Token = "0x60033E9")]
	[Address(RVA = "0x41ADA90", Offset = "0x41ADA90", VA = "0x41ADA90", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60033EA")]
	[Address(RVA = "0x41ADB00", Offset = "0x41ADB00", VA = "0x41ADB00", Slot = "5")]
	protected virtual string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60033EB")]
	[Address(RVA = "0x41ADB20", Offset = "0x41ADB20", VA = "0x41ADB20", Slot = "6")]
	protected virtual string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60033EC")]
	[Address(RVA = "0x41ADB40", Offset = "0x41ADB40", VA = "0x41ADB40")]
	public void Idle()
	{
	}

	[Token(Token = "0x60033ED")]
	[Address(RVA = "0x41ADB80", Offset = "0x41ADB80", VA = "0x41ADB80")]
	public void EmoteAction(string emote)
	{
	}

	[Token(Token = "0x60033EE")]
	[Address(RVA = "0x41ADBE0", Offset = "0x41ADBE0", VA = "0x41ADBE0")]
	protected void Update()
	{
	}

	[Token(Token = "0x60033EF")]
	[Address(RVA = "0x41ADC70", Offset = "0x41ADC70", VA = "0x41ADC70")]
	public DummyCharacter()
	{
	}
}
