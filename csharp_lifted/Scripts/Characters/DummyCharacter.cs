// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyCharacter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyCharacter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/DummyCharacter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$Awake): clean
		GameObject owner;
		AnimationHandler __this_00;

		owner = this.gameObject;
		__this_00 = new AnimationHandler(owner);
		this.Animation = __this_00;
		return;
	}

	[Token(Token = "0x6004065")]
	[Address(RVA = "0x5AE6640", Offset = "0x5AE5640", VA = "0x5AE6640", Slot = "5")]
	protected virtual string GetIdleAnimation()
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$GetIdleAnimation): clean
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6004066")]
	[Address(RVA = "0x5AE6660", Offset = "0x5AE5660", VA = "0x5AE6660", Slot = "6")]
	protected virtual string GetEmoteAnimation(string emote)
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$GetEmoteAnimation): clean
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6004067")]
	[Address(RVA = "0x5AE6680", Offset = "0x5AE5680", VA = "0x5AE6680")]
	public void Idle()
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$Idle): clean
		AnimationHandler __this_00;
		String name;

		this.State = 0;
		__this_00 = this.Animation;
		name = this.GetIdleAnimation();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CrossFade(name, 0.1, 0.0);
		return;
	}

	[Token(Token = "0x6004068")]
	[Address(RVA = "0x5AE66C0", Offset = "0x5AE56C0", VA = "0x5AE66C0")]
	public void EmoteAction(string emote)
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$EmoteAction): clean
		AnimationHandler pCVar1;
		String name;
		float fVar2;

		this.State = 1;
		name = this.GetEmoteAnimation(emote);
		pCVar1 = this.Animation;
		if (pCVar1 != null) {
			pCVar1.CrossFade(name, 0.1, 0.0);
			pCVar1 = this.Animation;
			if (pCVar1 != null) {
				fVar2 = pCVar1.GetLength(name);
				this._stateTimeLeft = fVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004069")]
	[Address(RVA = "0x5AE6730", Offset = "0x5AE5730", VA = "0x5AE6730")]
	protected void Update()
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$Update): clean
		AnimationHandler __this_00;
		String name;
		float fVar1;
		float fVar2;

		if (this.State != 0) {
			fVar2 = this._stateTimeLeft;
			fVar1 = Time.deltaTime;
			fVar2 = fVar2 - fVar1;
			this._stateTimeLeft = fVar2;
			if (fVar2 <= 0.0) {
				this.State = 0;
				__this_00 = this.Animation;
				name = this.GetIdleAnimation();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.CrossFade(name, 0.1, 0.0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600406A")]
	[Address(RVA = "0x5AE67C0", Offset = "0x5AE57C0", VA = "0x5AE67C0")]
	public DummyCharacter()
	{
		// Lifted from source/cpp/Characters/DummyCharacter.c (Characters.DummyCharacter$$.ctor): clean
		base();
		return;
	}
}
