// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCharacterBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCharacterBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004B1")]
[CompilerGenerated]
internal abstract class CustomLogicCharacterBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x20004B2")]
	public static class Factory
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x590E260", Offset = "0x590D260", VA = "0x590E260")]
		public static CustomLogicCharacterBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004B3")]
	public static class Bindings
	{
		[Token(Token = "0x40016DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600210D")]
		[Address(RVA = "0x590E2F0", Offset = "0x590D2F0", VA = "0x590E2F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600210E")]
		[Address(RVA = "0x590FA30", Offset = "0x590EA30", VA = "0x590FA30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentTarget()
		{
			return null;
		}

		[Token(Token = "0x600210F")]
		[Address(RVA = "0x590FAD0", Offset = "0x590EAD0", VA = "0x590FAD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__DetectRange()
		{
			return null;
		}

		[Token(Token = "0x6002110")]
		[Address(RVA = "0x590FBB0", Offset = "0x590EBB0", VA = "0x590FBB0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__State()
		{
			return null;
		}

		[Token(Token = "0x6002111")]
		[Address(RVA = "0x590FC50", Offset = "0x590EC50", VA = "0x590FC50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsWalking()
		{
			return null;
		}

		[Token(Token = "0x6002112")]
		[Address(RVA = "0x590FD30", Offset = "0x590ED30", VA = "0x590FD30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__AIEnabled()
		{
			return null;
		}

		[Token(Token = "0x6002113")]
		[Address(RVA = "0x590FE10", Offset = "0x590EE10", VA = "0x590FE10")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__UsePathfinding()
		{
			return null;
		}

		[Token(Token = "0x6002114")]
		[Address(RVA = "0x590FEF0", Offset = "0x590EEF0", VA = "0x590FEF0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x6002115")]
		[Address(RVA = "0x590FFD0", Offset = "0x590EFD0", VA = "0x590FFD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Guild()
		{
			return null;
		}

		[Token(Token = "0x6002116")]
		[Address(RVA = "0x59100B0", Offset = "0x590F0B0", VA = "0x59100B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Player()
		{
			return null;
		}

		[Token(Token = "0x6002117")]
		[Address(RVA = "0x5910150", Offset = "0x590F150", VA = "0x5910150")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAI()
		{
			return null;
		}

		[Token(Token = "0x6002118")]
		[Address(RVA = "0x59101F0", Offset = "0x590F1F0", VA = "0x59101F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAlive()
		{
			return null;
		}

		[Token(Token = "0x6002119")]
		[Address(RVA = "0x5910290", Offset = "0x590F290", VA = "0x5910290")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__ViewID()
		{
			return null;
		}

		[Token(Token = "0x600211A")]
		[Address(RVA = "0x5910330", Offset = "0x590F330", VA = "0x5910330")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMine()
		{
			return null;
		}

		[Token(Token = "0x600211B")]
		[Address(RVA = "0x59103D0", Offset = "0x590F3D0", VA = "0x59103D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMainCharacter()
		{
			return null;
		}

		[Token(Token = "0x600211C")]
		[Address(RVA = "0x5910470", Offset = "0x590F470", VA = "0x5910470")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Transform()
		{
			return null;
		}

		[Token(Token = "0x600211D")]
		[Address(RVA = "0x5910510", Offset = "0x590F510", VA = "0x5910510")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x600211E")]
		[Address(RVA = "0x59105F0", Offset = "0x590F5F0", VA = "0x59105F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x600211F")]
		[Address(RVA = "0x59106D0", Offset = "0x590F6D0", VA = "0x59106D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			return null;
		}

		[Token(Token = "0x6002120")]
		[Address(RVA = "0x59107B0", Offset = "0x590F7B0", VA = "0x59107B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Velocity()
		{
			return null;
		}

		[Token(Token = "0x6002121")]
		[Address(RVA = "0x5910890", Offset = "0x590F890", VA = "0x5910890")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6002122")]
		[Address(RVA = "0x5910970", Offset = "0x590F970", VA = "0x5910970")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6002123")]
		[Address(RVA = "0x5910A50", Offset = "0x590FA50", VA = "0x5910A50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6002124")]
		[Address(RVA = "0x5910B30", Offset = "0x590FB30", VA = "0x5910B30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__HasTargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6002125")]
		[Address(RVA = "0x5910BD0", Offset = "0x590FBD0", VA = "0x5910BD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__TargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6002126")]
		[Address(RVA = "0x5910CB0", Offset = "0x590FCB0", VA = "0x5910CB0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Team()
		{
			return null;
		}

		[Token(Token = "0x6002127")]
		[Address(RVA = "0x5910D90", Offset = "0x590FD90", VA = "0x5910D90")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Health()
		{
			return null;
		}

		[Token(Token = "0x6002128")]
		[Address(RVA = "0x5910E70", Offset = "0x590FE70", VA = "0x5910E70")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__MaxHealth()
		{
			return null;
		}

		[Token(Token = "0x6002129")]
		[Address(RVA = "0x5910F50", Offset = "0x590FF50", VA = "0x5910F50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamageEnabled()
		{
			return null;
		}

		[Token(Token = "0x600212A")]
		[Address(RVA = "0x5911030", Offset = "0x5910030", VA = "0x5911030")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamage()
		{
			return null;
		}

		[Token(Token = "0x600212B")]
		[Address(RVA = "0x5911110", Offset = "0x5910110", VA = "0x5911110")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentAnimation()
		{
			return null;
		}

		[Token(Token = "0x600212C")]
		[Address(RVA = "0x59111B0", Offset = "0x59101B0", VA = "0x59111B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Grounded()
		{
			return null;
		}

		[Token(Token = "0x600212D")]
		[Address(RVA = "0x5911250", Offset = "0x5910250", VA = "0x5911250")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			return null;
		}

		[Token(Token = "0x600212E")]
		[Address(RVA = "0x59112F0", Offset = "0x59102F0", VA = "0x59112F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetTarget()
		{
			return null;
		}

		[Token(Token = "0x600212F")]
		[Address(RVA = "0x5911430", Offset = "0x5910430", VA = "0x5911430")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetTarget()
		{
			return null;
		}

		[Token(Token = "0x6002130")]
		[Address(RVA = "0x5911570", Offset = "0x5910570", VA = "0x5911570")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ClearTarget()
		{
			return null;
		}

		[Token(Token = "0x6002131")]
		[Address(RVA = "0x59116B0", Offset = "0x59106B0", VA = "0x59116B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetNearestEnemy()
		{
			return null;
		}

		[Token(Token = "0x6002132")]
		[Address(RVA = "0x59117F0", Offset = "0x59107F0", VA = "0x59117F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__TargetNearestEnemy()
		{
			return null;
		}

		[Token(Token = "0x6002133")]
		[Address(RVA = "0x5911930", Offset = "0x5910930", VA = "0x5911930")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveTo()
		{
			return null;
		}

		[Token(Token = "0x6002134")]
		[Address(RVA = "0x5911A70", Offset = "0x5910A70", VA = "0x5911A70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveToTarget()
		{
			return null;
		}

		[Token(Token = "0x6002135")]
		[Address(RVA = "0x5911BB0", Offset = "0x5910BB0", VA = "0x5911BB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Idle()
		{
			return null;
		}

		[Token(Token = "0x6002136")]
		[Address(RVA = "0x5911CF0", Offset = "0x5910CF0", VA = "0x5911CF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetDisplayName()
		{
			return null;
		}

		[Token(Token = "0x6002137")]
		[Address(RVA = "0x5911E30", Offset = "0x5910E30", VA = "0x5911E30")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetKilled()
		{
			return null;
		}

		[Token(Token = "0x6002138")]
		[Address(RVA = "0x5911F70", Offset = "0x5910F70", VA = "0x5911F70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetDamaged()
		{
			return null;
		}

		[Token(Token = "0x6002139")]
		[Address(RVA = "0x59120B0", Offset = "0x59110B0", VA = "0x59120B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Emote()
		{
			return null;
		}

		[Token(Token = "0x600213A")]
		[Address(RVA = "0x59121F0", Offset = "0x59111F0", VA = "0x59121F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			return null;
		}

		[Token(Token = "0x600213B")]
		[Address(RVA = "0x5912330", Offset = "0x5911330", VA = "0x5912330")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			return null;
		}

		[Token(Token = "0x600213C")]
		[Address(RVA = "0x5912470", Offset = "0x5911470", VA = "0x5912470")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x600213D")]
		[Address(RVA = "0x59125B0", Offset = "0x59115B0", VA = "0x59125B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x600213E")]
		[Address(RVA = "0x59126F0", Offset = "0x59116F0", VA = "0x59126F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			return null;
		}

		[Token(Token = "0x600213F")]
		[Address(RVA = "0x5912830", Offset = "0x5911830", VA = "0x5912830")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x6002140")]
		[Address(RVA = "0x5912970", Offset = "0x5911970", VA = "0x5912970")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ForceAnimation()
		{
			return null;
		}

		[Token(Token = "0x6002141")]
		[Address(RVA = "0x5912AB0", Offset = "0x5911AB0", VA = "0x5912AB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			return null;
		}

		[Token(Token = "0x6002142")]
		[Address(RVA = "0x5912BF0", Offset = "0x5911BF0", VA = "0x5912BF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingSound()
		{
			return null;
		}

		[Token(Token = "0x6002143")]
		[Address(RVA = "0x5912D30", Offset = "0x5911D30", VA = "0x5912D30")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlaySound()
		{
			return null;
		}

		[Token(Token = "0x6002144")]
		[Address(RVA = "0x5912E70", Offset = "0x5911E70", VA = "0x5912E70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__StopSound()
		{
			return null;
		}

		[Token(Token = "0x6002145")]
		[Address(RVA = "0x5912FB0", Offset = "0x5911FB0", VA = "0x5912FB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__FadeSound()
		{
			return null;
		}

		[Token(Token = "0x6002146")]
		[Address(RVA = "0x59130F0", Offset = "0x59120F0", VA = "0x59130F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__LookAt()
		{
			return null;
		}

		[Token(Token = "0x6002147")]
		[Address(RVA = "0x5913230", Offset = "0x5912230", VA = "0x5913230")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddForce()
		{
			return null;
		}

		[Token(Token = "0x6002148")]
		[Address(RVA = "0x5913370", Offset = "0x5912370", VA = "0x5913370")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Reveal()
		{
			return null;
		}

		[Token(Token = "0x6002149")]
		[Address(RVA = "0x59134B0", Offset = "0x59124B0", VA = "0x59134B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddOutline()
		{
			return null;
		}

		[Token(Token = "0x600214A")]
		[Address(RVA = "0x59135F0", Offset = "0x59125F0", VA = "0x59135F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__RemoveOutline()
		{
			return null;
		}

		[Token(Token = "0x600214B")]
		[Address(RVA = "0x5913730", Offset = "0x5912730", VA = "0x5913730")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x600214C")]
		[Address(RVA = "0x5913870", Offset = "0x5912870", VA = "0x5913870")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x40016DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly BaseCharacter Character;

	[Token(Token = "0x170003D8")]
	private BaseAIController AIController
	{
		[Token(Token = "0x60020B0")]
		[Address(RVA = "0x590B9C0", Offset = "0x590A9C0", VA = "0x590B9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D9")]
	public object CurrentTarget
	{
		[Token(Token = "0x60020B1")]
		[Address(RVA = "0x590BA80", Offset = "0x590AA80", VA = "0x590BA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DA")]
	public float DetectRange
	{
		[Token(Token = "0x60020B2")]
		[Address(RVA = "0x590BAE0", Offset = "0x590AAE0", VA = "0x590BAE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60020B3")]
		[Address(RVA = "0x590BB00", Offset = "0x590AB00", VA = "0x590BB00")]
		set
		{
		}
	}

	[Token(Token = "0x170003DB")]
	public string State
	{
		[Token(Token = "0x60020B4")]
		[Address(RVA = "0x590BB30", Offset = "0x590AB30", VA = "0x590BB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public bool IsWalking
	{
		[Token(Token = "0x60020B5")]
		[Address(RVA = "0x590BCB0", Offset = "0x590ACB0", VA = "0x590BCB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60020B6")]
		[Address(RVA = "0x590BD30", Offset = "0x590AD30", VA = "0x590BD30")]
		set
		{
		}
	}

	[Token(Token = "0x170003DD")]
	public bool AIEnabled
	{
		[Token(Token = "0x60020B7")]
		[Address(RVA = "0x590BDB0", Offset = "0x590ADB0", VA = "0x590BDB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60020B8")]
		[Address(RVA = "0x590BDD0", Offset = "0x590ADD0", VA = "0x590BDD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003DE")]
	public bool UsePathfinding
	{
		[Token(Token = "0x60020B9")]
		[Address(RVA = "0x590BE50", Offset = "0x590AE50", VA = "0x590BE50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0x590BE70", Offset = "0x590AE70", VA = "0x590BE70")]
		set
		{
		}
	}

	[Token(Token = "0x170003DF")]
	public string Name
	{
		[Token(Token = "0x60020C6")]
		[Address(RVA = "0x590C660", Offset = "0x590B660", VA = "0x590C660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020C7")]
		[Address(RVA = "0x590C680", Offset = "0x590B680", VA = "0x590C680")]
		set
		{
		}
	}

	[Token(Token = "0x170003E0")]
	public string Guild
	{
		[Token(Token = "0x60020C9")]
		[Address(RVA = "0x590C710", Offset = "0x590B710", VA = "0x590C710")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020CA")]
		[Address(RVA = "0x590C730", Offset = "0x590B730", VA = "0x590C730")]
		set
		{
		}
	}

	[Token(Token = "0x170003E1")]
	public CustomLogicPlayerBuiltin Player
	{
		[Token(Token = "0x60020CB")]
		[Address(RVA = "0x590C750", Offset = "0x590B750", VA = "0x590C750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E2")]
	public bool IsAI
	{
		[Token(Token = "0x60020CC")]
		[Address(RVA = "0x590C7D0", Offset = "0x590B7D0", VA = "0x590C7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E3")]
	public bool IsAlive
	{
		[Token(Token = "0x60020CD")]
		[Address(RVA = "0x590C7F0", Offset = "0x590B7F0", VA = "0x590C7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E4")]
	public int ViewID
	{
		[Token(Token = "0x60020CE")]
		[Address(RVA = "0x590C860", Offset = "0x590B860", VA = "0x590C860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E5")]
	public bool IsMine
	{
		[Token(Token = "0x60020CF")]
		[Address(RVA = "0x590C890", Offset = "0x590B890", VA = "0x590C890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E6")]
	public bool IsMainCharacter
	{
		[Token(Token = "0x60020D0")]
		[Address(RVA = "0x590C8C0", Offset = "0x590B8C0", VA = "0x590C8C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E7")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x60020D1")]
		[Address(RVA = "0x590C8E0", Offset = "0x590B8E0", VA = "0x590C8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public virtual CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60020D2")]
		[Address(RVA = "0x590C950", Offset = "0x590B950", VA = "0x590C950", Slot = "13")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020D3")]
		[Address(RVA = "0x590C9E0", Offset = "0x590B9E0", VA = "0x590C9E0", Slot = "14")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x60020D4")]
		[Address(RVA = "0x590CA90", Offset = "0x590BA90", VA = "0x590CA90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020D5")]
		[Address(RVA = "0x590CB50", Offset = "0x590BB50", VA = "0x590CB50")]
		set
		{
		}
	}

	[Token(Token = "0x170003EA")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x60020D6")]
		[Address(RVA = "0x590CBF0", Offset = "0x590BBF0", VA = "0x590CBF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020D7")]
		[Address(RVA = "0x590CC80", Offset = "0x590BC80", VA = "0x590CC80")]
		set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x60020D8")]
		[Address(RVA = "0x590CD00", Offset = "0x590BD00", VA = "0x590CD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020D9")]
		[Address(RVA = "0x590CD80", Offset = "0x590BD80", VA = "0x590CD80")]
		set
		{
		}
	}

	[Token(Token = "0x170003EC")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x60020DA")]
		[Address(RVA = "0x590CE10", Offset = "0x590BE10", VA = "0x590CE10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020DB")]
		[Address(RVA = "0x590CEA0", Offset = "0x590BEA0", VA = "0x590CEA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003ED")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x60020DC")]
		[Address(RVA = "0x590CF20", Offset = "0x590BF20", VA = "0x590CF20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020DD")]
		[Address(RVA = "0x590CFB0", Offset = "0x590BFB0", VA = "0x590CFB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003EE")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x60020DE")]
		[Address(RVA = "0x590D030", Offset = "0x590C030", VA = "0x590D030")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020DF")]
		[Address(RVA = "0x590D0C0", Offset = "0x590C0C0", VA = "0x590D0C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003EF")]
	public bool HasTargetDirection
	{
		[Token(Token = "0x60020E0")]
		[Address(RVA = "0x590D140", Offset = "0x590C140", VA = "0x590D140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F0")]
	public CustomLogicVector3Builtin TargetDirection
	{
		[Token(Token = "0x60020E1")]
		[Address(RVA = "0x590D160", Offset = "0x590C160", VA = "0x590D160")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020E2")]
		[Address(RVA = "0x590D1E0", Offset = "0x590C1E0", VA = "0x590D1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	public string Team
	{
		[Token(Token = "0x60020E3")]
		[Address(RVA = "0x590D2A0", Offset = "0x590C2A0", VA = "0x590D2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60020E4")]
		[Address(RVA = "0x590D2C0", Offset = "0x590C2C0", VA = "0x590D2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	public float Health
	{
		[Token(Token = "0x60020E5")]
		[Address(RVA = "0x590D310", Offset = "0x590C310", VA = "0x590D310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60020E6")]
		[Address(RVA = "0x590D330", Offset = "0x590C330", VA = "0x590D330")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	public float MaxHealth
	{
		[Token(Token = "0x60020E7")]
		[Address(RVA = "0x590D390", Offset = "0x590C390", VA = "0x590D390")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60020E8")]
		[Address(RVA = "0x590D3B0", Offset = "0x590C3B0", VA = "0x590D3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	public bool CustomDamageEnabled
	{
		[Token(Token = "0x60020E9")]
		[Address(RVA = "0x590D410", Offset = "0x590C410", VA = "0x590D410")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60020EA")]
		[Address(RVA = "0x590D430", Offset = "0x590C430", VA = "0x590D430")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public int CustomDamage
	{
		[Token(Token = "0x60020EB")]
		[Address(RVA = "0x590D470", Offset = "0x590C470", VA = "0x590D470")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60020EC")]
		[Address(RVA = "0x590D490", Offset = "0x590C490", VA = "0x590D490")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public string CurrentAnimation
	{
		[Token(Token = "0x60020ED")]
		[Address(RVA = "0x590D4D0", Offset = "0x590C4D0", VA = "0x590D4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F7")]
	public bool Grounded
	{
		[Token(Token = "0x60020EE")]
		[Address(RVA = "0x590D4F0", Offset = "0x590C4F0", VA = "0x590D4F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F8")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x60020EF")]
		[Address(RVA = "0x590D510", Offset = "0x590C510", VA = "0x590D510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public override string ClassName
	{
		[Token(Token = "0x6002108")]
		[Address(RVA = "0x590E200", Offset = "0x590D200", VA = "0x590E200", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002109")]
		[Address(RVA = "0x590E230", Offset = "0x590D230", VA = "0x590E230", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003FB")]
	public override bool IsStatic
	{
		[Token(Token = "0x600210A")]
		[Address(RVA = "0x590E240", Offset = "0x590D240", VA = "0x590E240", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003FC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600210B")]
		[Address(RVA = "0x590E250", Offset = "0x590D250", VA = "0x590E250", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x590BAB0", Offset = "0x590AAB0", VA = "0x590BAB0")]
	public object GetTarget()
	{
		return null;
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x590C050", Offset = "0x590B050", VA = "0x590C050")]
	public void SetTarget(object target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x590C1D0", Offset = "0x590B1D0", VA = "0x590C1D0")]
	public void ClearTarget()
	{
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x590C1F0", Offset = "0x590B1F0", VA = "0x590C1F0")]
	public object GetNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x590C220", Offset = "0x590B220", VA = "0x590C220")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
	}

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x590C250", Offset = "0x590B250", VA = "0x590C250")]
	public void MoveTo(CustomLogicVector3Builtin position, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x590C360", Offset = "0x590B360", VA = "0x590C360")]
	public void MoveToTarget(object target, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x590C4A0", Offset = "0x590B4A0", VA = "0x590C4A0")]
	public void Idle(float time = -1f)
	{
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x590C0F0", Offset = "0x590B0F0", VA = "0x590C0F0")]
	protected static ITargetable UnwrapTarget(object target)
	{
		return null;
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x590BEF0", Offset = "0x590AEF0", VA = "0x590BEF0")]
	private static object WrapTarget(ITargetable target)
	{
		return null;
	}

	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x590C5A0", Offset = "0x590B5A0", VA = "0x590C5A0")]
	protected CustomLogicCharacterBuiltin(BaseCharacter character)
	{
	}

	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x590C6A0", Offset = "0x590B6A0", VA = "0x590C6A0")]
	public void SetDisplayName(string name, bool showTag = true)
	{
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x590D580", Offset = "0x590C580", VA = "0x590D580")]
	public void GetKilled(string killer)
	{
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x590D5B0", Offset = "0x590C5B0", VA = "0x590D5B0")]
	public void GetDamaged(string killer, int damage)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x590D5E0", Offset = "0x590C5E0", VA = "0x590D5E0")]
	public void Emote(string emote)
	{
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x590D640", Offset = "0x590C640", VA = "0x590D640")]
	public void PlayAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x590D6B0", Offset = "0x590C6B0", VA = "0x590D6B0")]
	public void PlayAnimationAt(string animation, float t, float fade = 0.1f, bool force = false)
	{
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x590D750", Offset = "0x590C750", VA = "0x590D750")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x590D7B0", Offset = "0x590C7B0", VA = "0x590D7B0")]
	public void SetAnimationSpeed(string animation, float speed, bool synced = true)
	{
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x590D840", Offset = "0x590C840", VA = "0x590D840")]
	public bool IsPlayingAnimation(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x590D870", Offset = "0x590C870", VA = "0x590D870")]
	public float GetAnimationNormalizedTime(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x590D8C0", Offset = "0x590C8C0", VA = "0x590D8C0")]
	public void ForceAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x590D930", Offset = "0x590C930", VA = "0x590D930")]
	public float GetAnimationLength(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x590D960", Offset = "0x590C960", VA = "0x590D960")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x590D980", Offset = "0x590C980", VA = "0x590D980")]
	public void PlaySound(string sound, bool local = false)
	{
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x590DA80", Offset = "0x590CA80", VA = "0x590DA80")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x590DAF0", Offset = "0x590CAF0", VA = "0x590DAF0")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x590DB60", Offset = "0x590CB60", VA = "0x590DB60")]
	public void LookAt(CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6002100")]
	[Address(RVA = "0x590DBE0", Offset = "0x590CBE0", VA = "0x590DBE0")]
	public void AddForce(CustomLogicVector3Builtin force, object mode)
	{
	}

	[Token(Token = "0x6002101")]
	[Address(RVA = "0x590DE70", Offset = "0x590CE70", VA = "0x590DE70")]
	public void Reveal(float delay)
	{
	}

	[Token(Token = "0x6002102")]
	[Address(RVA = "0x590DE90", Offset = "0x590CE90", VA = "0x590DE90")]
	public void AddOutline([Optional] CustomLogicColorBuiltin color, string mode = "OutlineAll")
	{
	}

	[Token(Token = "0x6002103")]
	[Address(RVA = "0x590DFD0", Offset = "0x590CFD0", VA = "0x590DFD0")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x6002104")]
	[Address(RVA = "0x590DFF0", Offset = "0x590CFF0", VA = "0x590DFF0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x590E000", Offset = "0x590D000", VA = "0x590E000", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x590E1B0", Offset = "0x590D1B0", VA = "0x590E1B0", Slot = "12")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x590E1D0", Offset = "0x590D1D0", VA = "0x590E1D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
