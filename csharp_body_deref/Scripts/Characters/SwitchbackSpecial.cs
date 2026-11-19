// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SwitchbackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SwitchbackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006E8")]
internal class SwitchbackSpecial : ExtendedUseable
{
	[Token(Token = "0x400207B")]
	private const float GrabIFrameDuration = 0.5f;

	[Token(Token = "0x17000B7C")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042F0")]
		[Address(RVA = "0x5B0FA50", Offset = "0x5B0EA50", VA = "0x5B0FA50", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042F1")]
	[Address(RVA = "0x5B0FA60", Offset = "0x5B0EA60", VA = "0x5B0FA60")]
	public SwitchbackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042F2")]
	[Address(RVA = "0x5B0FA80", Offset = "0x5B0EA80", VA = "0x5B0FA80")]
	public bool RegisterCollision(Human human, Collision collision, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x60042F3")]
	[Address(RVA = "0x5B0FCE0", Offset = "0x5B0ECE0", VA = "0x5B0FCE0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60042F4")]
	[Address(RVA = "0x5B0FDD0", Offset = "0x5B0EDD0", VA = "0x5B0FDD0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042F5")]
	[Address(RVA = "0x5B0FE50", Offset = "0x5B0EE50", VA = "0x5B0FE50", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
