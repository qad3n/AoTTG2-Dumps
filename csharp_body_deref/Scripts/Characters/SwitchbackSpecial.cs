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

[Token(Token = "0x200052F")]
internal class SwitchbackSpecial : ExtendedUseable
{
	[Token(Token = "0x4001830")]
	private const float GrabIFrameDuration = 0.5f;

	[Token(Token = "0x170009FE")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600361A")]
		[Address(RVA = "0x41F9440", Offset = "0x41F9440", VA = "0x41F9440", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600361B")]
	[Address(RVA = "0x41F9450", Offset = "0x41F9450", VA = "0x41F9450")]
	public SwitchbackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600361C")]
	[Address(RVA = "0x41F9470", Offset = "0x41F9470", VA = "0x41F9470")]
	public bool RegisterCollision(Human human, Collision collision, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x600361D")]
	[Address(RVA = "0x41F96C0", Offset = "0x41F96C0", VA = "0x41F96C0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x600361E")]
	[Address(RVA = "0x41F97B0", Offset = "0x41F97B0", VA = "0x41F97B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600361F")]
	[Address(RVA = "0x41F9830", Offset = "0x41F9830", VA = "0x41F9830", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
