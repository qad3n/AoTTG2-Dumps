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

[Token(Token = "0x2000689")]
internal class SwitchbackSpecial : ExtendedUseable
{
	[Token(Token = "0x4001ECD")]
	private const float GrabIFrameDuration = 0.5f;

	[Token(Token = "0x17000B32")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004058")]
		[Address(RVA = "0x210FB70", Offset = "0x210E170", VA = "0x18210FB70", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004059")]
	[Address(RVA = "0x2177DC0", Offset = "0x21763C0", VA = "0x182177DC0")]
	public SwitchbackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600405A")]
	[Address(RVA = "0x2177AD0", Offset = "0x21760D0", VA = "0x182177AD0")]
	public bool RegisterCollision(Human human, Collision collision, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x600405B")]
	[Address(RVA = "0x2177CB0", Offset = "0x21762B0", VA = "0x182177CB0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x600405C")]
	[Address(RVA = "0x21779C0", Offset = "0x2175FC0", VA = "0x1821779C0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600405D")]
	[Address(RVA = "0x2177A50", Offset = "0x2176050", VA = "0x182177A50", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
