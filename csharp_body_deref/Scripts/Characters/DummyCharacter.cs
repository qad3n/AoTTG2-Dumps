using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004A7")]
internal class DummyCharacter : MonoBehaviour
{
	[Token(Token = "0x40014C7")]
	[FieldOffset(Offset = "0x20")]
	public AnimationHandler Animation;

	[Token(Token = "0x40014C8")]
	[FieldOffset(Offset = "0x28")]
	public DummyState State;

	[Token(Token = "0x40014C9")]
	[FieldOffset(Offset = "0x2C")]
	protected float _stateTimeLeft;

	[Token(Token = "0x60031DB")]
	[Address(RVA = "0x3EA11F0", Offset = "0x3EA11F0", VA = "0x3EA11F0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60031DC")]
	[Address(RVA = "0x3EA1260", Offset = "0x3EA1260", VA = "0x3EA1260", Slot = "5")]
	protected virtual string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60031DD")]
	[Address(RVA = "0x3EA1280", Offset = "0x3EA1280", VA = "0x3EA1280", Slot = "6")]
	protected virtual string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60031DE")]
	[Address(RVA = "0x3EA12A0", Offset = "0x3EA12A0", VA = "0x3EA12A0")]
	public void Idle()
	{
	}

	[Token(Token = "0x60031DF")]
	[Address(RVA = "0x3EA12E0", Offset = "0x3EA12E0", VA = "0x3EA12E0")]
	public void EmoteAction(string emote)
	{
	}

	[Token(Token = "0x60031E0")]
	[Address(RVA = "0x3EA1340", Offset = "0x3EA1340", VA = "0x3EA1340")]
	protected void Update()
	{
	}

	[Token(Token = "0x60031E1")]
	[Address(RVA = "0x3EA13D0", Offset = "0x3EA13D0", VA = "0x3EA13D0")]
	public DummyCharacter()
	{
	}
}
