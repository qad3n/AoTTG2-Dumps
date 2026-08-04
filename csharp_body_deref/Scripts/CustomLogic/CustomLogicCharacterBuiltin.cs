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
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000306")]
[CompilerGenerated]
internal abstract class CustomLogicCharacterBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x2000307")]
	public static class Factory
	{
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x4000620", Offset = "0x4000620", VA = "0x4000620")]
		public static CustomLogicCharacterBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000308")]
	public static class Bindings
	{
		[Token(Token = "0x4000F17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60015F4")]
		[Address(RVA = "0x40006B0", Offset = "0x40006B0", VA = "0x40006B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60015F5")]
		[Address(RVA = "0x40018A0", Offset = "0x40018A0", VA = "0x40018A0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x60015F6")]
		[Address(RVA = "0x4001980", Offset = "0x4001980", VA = "0x4001980")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Guild()
		{
			return null;
		}

		[Token(Token = "0x60015F7")]
		[Address(RVA = "0x4001A60", Offset = "0x4001A60", VA = "0x4001A60")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Player()
		{
			return null;
		}

		[Token(Token = "0x60015F8")]
		[Address(RVA = "0x4001B00", Offset = "0x4001B00", VA = "0x4001B00")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAI()
		{
			return null;
		}

		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x4001BA0", Offset = "0x4001BA0", VA = "0x4001BA0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAlive()
		{
			return null;
		}

		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x4001C40", Offset = "0x4001C40", VA = "0x4001C40")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__ViewID()
		{
			return null;
		}

		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x4001CE0", Offset = "0x4001CE0", VA = "0x4001CE0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMine()
		{
			return null;
		}

		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x4001D80", Offset = "0x4001D80", VA = "0x4001D80")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMainCharacter()
		{
			return null;
		}

		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x4001E20", Offset = "0x4001E20", VA = "0x4001E20")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Transform()
		{
			return null;
		}

		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x4001EC0", Offset = "0x4001EC0", VA = "0x4001EC0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x60015FF")]
		[Address(RVA = "0x4001FA0", Offset = "0x4001FA0", VA = "0x4001FA0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x6001600")]
		[Address(RVA = "0x4002080", Offset = "0x4002080", VA = "0x4002080")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			return null;
		}

		[Token(Token = "0x6001601")]
		[Address(RVA = "0x4002160", Offset = "0x4002160", VA = "0x4002160")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Velocity()
		{
			return null;
		}

		[Token(Token = "0x6001602")]
		[Address(RVA = "0x4002240", Offset = "0x4002240", VA = "0x4002240")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6001603")]
		[Address(RVA = "0x4002320", Offset = "0x4002320", VA = "0x4002320")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6001604")]
		[Address(RVA = "0x4002400", Offset = "0x4002400", VA = "0x4002400")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6001605")]
		[Address(RVA = "0x40024E0", Offset = "0x40024E0", VA = "0x40024E0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__HasTargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6001606")]
		[Address(RVA = "0x4002580", Offset = "0x4002580", VA = "0x4002580")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__TargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6001607")]
		[Address(RVA = "0x4002660", Offset = "0x4002660", VA = "0x4002660")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Team()
		{
			return null;
		}

		[Token(Token = "0x6001608")]
		[Address(RVA = "0x4002740", Offset = "0x4002740", VA = "0x4002740")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Health()
		{
			return null;
		}

		[Token(Token = "0x6001609")]
		[Address(RVA = "0x4002820", Offset = "0x4002820", VA = "0x4002820")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__MaxHealth()
		{
			return null;
		}

		[Token(Token = "0x600160A")]
		[Address(RVA = "0x4002900", Offset = "0x4002900", VA = "0x4002900")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamageEnabled()
		{
			return null;
		}

		[Token(Token = "0x600160B")]
		[Address(RVA = "0x40029E0", Offset = "0x40029E0", VA = "0x40029E0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamage()
		{
			return null;
		}

		[Token(Token = "0x600160C")]
		[Address(RVA = "0x4002AC0", Offset = "0x4002AC0", VA = "0x4002AC0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentAnimation()
		{
			return null;
		}

		[Token(Token = "0x600160D")]
		[Address(RVA = "0x4002B60", Offset = "0x4002B60", VA = "0x4002B60")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Grounded()
		{
			return null;
		}

		[Token(Token = "0x600160E")]
		[Address(RVA = "0x4002C00", Offset = "0x4002C00", VA = "0x4002C00")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			return null;
		}

		[Token(Token = "0x600160F")]
		[Address(RVA = "0x4002CA0", Offset = "0x4002CA0", VA = "0x4002CA0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetDisplayName()
		{
			return null;
		}

		[Token(Token = "0x6001610")]
		[Address(RVA = "0x4002DF0", Offset = "0x4002DF0", VA = "0x4002DF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetKilled()
		{
			return null;
		}

		[Token(Token = "0x6001611")]
		[Address(RVA = "0x4002F40", Offset = "0x4002F40", VA = "0x4002F40")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetDamaged()
		{
			return null;
		}

		[Token(Token = "0x6001612")]
		[Address(RVA = "0x4003090", Offset = "0x4003090", VA = "0x4003090")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Emote()
		{
			return null;
		}

		[Token(Token = "0x6001613")]
		[Address(RVA = "0x40031E0", Offset = "0x40031E0", VA = "0x40031E0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001614")]
		[Address(RVA = "0x4003330", Offset = "0x4003330", VA = "0x4003330")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			return null;
		}

		[Token(Token = "0x6001615")]
		[Address(RVA = "0x4003480", Offset = "0x4003480", VA = "0x4003480")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001616")]
		[Address(RVA = "0x40035D0", Offset = "0x40035D0", VA = "0x40035D0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001617")]
		[Address(RVA = "0x4003720", Offset = "0x4003720", VA = "0x4003720")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001618")]
		[Address(RVA = "0x4003870", Offset = "0x4003870", VA = "0x4003870")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x6001619")]
		[Address(RVA = "0x40039C0", Offset = "0x40039C0", VA = "0x40039C0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ForceAnimation()
		{
			return null;
		}

		[Token(Token = "0x600161A")]
		[Address(RVA = "0x4003B10", Offset = "0x4003B10", VA = "0x4003B10")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			return null;
		}

		[Token(Token = "0x600161B")]
		[Address(RVA = "0x4003C60", Offset = "0x4003C60", VA = "0x4003C60")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingSound()
		{
			return null;
		}

		[Token(Token = "0x600161C")]
		[Address(RVA = "0x4003DB0", Offset = "0x4003DB0", VA = "0x4003DB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlaySound()
		{
			return null;
		}

		[Token(Token = "0x600161D")]
		[Address(RVA = "0x4003F00", Offset = "0x4003F00", VA = "0x4003F00")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__StopSound()
		{
			return null;
		}

		[Token(Token = "0x600161E")]
		[Address(RVA = "0x4004050", Offset = "0x4004050", VA = "0x4004050")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__FadeSound()
		{
			return null;
		}

		[Token(Token = "0x600161F")]
		[Address(RVA = "0x40041A0", Offset = "0x40041A0", VA = "0x40041A0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__LookAt()
		{
			return null;
		}

		[Token(Token = "0x6001620")]
		[Address(RVA = "0x40042F0", Offset = "0x40042F0", VA = "0x40042F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddForce()
		{
			return null;
		}

		[Token(Token = "0x6001621")]
		[Address(RVA = "0x4004440", Offset = "0x4004440", VA = "0x4004440")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Reveal()
		{
			return null;
		}

		[Token(Token = "0x6001622")]
		[Address(RVA = "0x4004590", Offset = "0x4004590", VA = "0x4004590")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddOutline()
		{
			return null;
		}

		[Token(Token = "0x6001623")]
		[Address(RVA = "0x40046E0", Offset = "0x40046E0", VA = "0x40046E0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__RemoveOutline()
		{
			return null;
		}

		[Token(Token = "0x6001624")]
		[Address(RVA = "0x4004830", Offset = "0x4004830", VA = "0x4004830")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6001625")]
		[Address(RVA = "0x4004980", Offset = "0x4004980", VA = "0x4004980")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly BaseCharacter Character;

	[Token(Token = "0x170002E1")]
	public string Name
	{
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x3FFEC70", Offset = "0x3FFEC70", VA = "0x3FFEC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AE")]
		[Address(RVA = "0x3FFEC90", Offset = "0x3FFEC90", VA = "0x3FFEC90")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public string Guild
	{
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x3FFED20", Offset = "0x3FFED20", VA = "0x3FFED20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B1")]
		[Address(RVA = "0x3FFED40", Offset = "0x3FFED40", VA = "0x3FFED40")]
		set
		{
		}
	}

	[Token(Token = "0x170002E3")]
	public CustomLogicPlayerBuiltin Player
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x3FFED60", Offset = "0x3FFED60", VA = "0x3FFED60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E4")]
	public bool IsAI
	{
		[Token(Token = "0x60015B3")]
		[Address(RVA = "0x3FFEDE0", Offset = "0x3FFEDE0", VA = "0x3FFEDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E5")]
	public bool IsAlive
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x3FFEE00", Offset = "0x3FFEE00", VA = "0x3FFEE00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E6")]
	public int ViewID
	{
		[Token(Token = "0x60015B5")]
		[Address(RVA = "0x3FFEE70", Offset = "0x3FFEE70", VA = "0x3FFEE70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E7")]
	public bool IsMine
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x3FFEEA0", Offset = "0x3FFEEA0", VA = "0x3FFEEA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E8")]
	public bool IsMainCharacter
	{
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x3FFEEC0", Offset = "0x3FFEEC0", VA = "0x3FFEEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x3FFEEE0", Offset = "0x3FFEEE0", VA = "0x3FFEEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EA")]
	public virtual CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x3FFEF50", Offset = "0x3FFEF50", VA = "0x3FFEF50", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x3FFEFE0", Offset = "0x3FFEFE0", VA = "0x3FFEFE0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x170002EB")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x60015BB")]
		[Address(RVA = "0x3FFF050", Offset = "0x3FFF050", VA = "0x3FFF050")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x3FFF100", Offset = "0x3FFF100", VA = "0x3FFF100")]
		set
		{
		}
	}

	[Token(Token = "0x170002EC")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x3FFF180", Offset = "0x3FFF180", VA = "0x3FFF180")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x3FFF210", Offset = "0x3FFF210", VA = "0x3FFF210")]
		set
		{
		}
	}

	[Token(Token = "0x170002ED")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x60015BF")]
		[Address(RVA = "0x3FFF280", Offset = "0x3FFF280", VA = "0x3FFF280")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x3FFF300", Offset = "0x3FFF300", VA = "0x3FFF300")]
		set
		{
		}
	}

	[Token(Token = "0x170002EE")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x60015C1")]
		[Address(RVA = "0x3FFF380", Offset = "0x3FFF380", VA = "0x3FFF380")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x3FFF410", Offset = "0x3FFF410", VA = "0x3FFF410")]
		set
		{
		}
	}

	[Token(Token = "0x170002EF")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x60015C3")]
		[Address(RVA = "0x3FFF480", Offset = "0x3FFF480", VA = "0x3FFF480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C4")]
		[Address(RVA = "0x3FFF510", Offset = "0x3FFF510", VA = "0x3FFF510")]
		set
		{
		}
	}

	[Token(Token = "0x170002F0")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x3FFF580", Offset = "0x3FFF580", VA = "0x3FFF580")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x3FFF610", Offset = "0x3FFF610", VA = "0x3FFF610")]
		set
		{
		}
	}

	[Token(Token = "0x170002F1")]
	public bool HasTargetDirection
	{
		[Token(Token = "0x60015C7")]
		[Address(RVA = "0x3FFF680", Offset = "0x3FFF680", VA = "0x3FFF680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public CustomLogicVector3Builtin TargetDirection
	{
		[Token(Token = "0x60015C8")]
		[Address(RVA = "0x3FFF6A0", Offset = "0x3FFF6A0", VA = "0x3FFF6A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C9")]
		[Address(RVA = "0x3FFF720", Offset = "0x3FFF720", VA = "0x3FFF720")]
		set
		{
		}
	}

	[Token(Token = "0x170002F3")]
	public string Team
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x3FFF770", Offset = "0x3FFF770", VA = "0x3FFF770")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015CB")]
		[Address(RVA = "0x3FFF790", Offset = "0x3FFF790", VA = "0x3FFF790")]
		set
		{
		}
	}

	[Token(Token = "0x170002F4")]
	public float Health
	{
		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x3FFF7E0", Offset = "0x3FFF7E0", VA = "0x3FFF7E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60015CD")]
		[Address(RVA = "0x3FFF800", Offset = "0x3FFF800", VA = "0x3FFF800")]
		set
		{
		}
	}

	[Token(Token = "0x170002F5")]
	public float MaxHealth
	{
		[Token(Token = "0x60015CE")]
		[Address(RVA = "0x3FFF850", Offset = "0x3FFF850", VA = "0x3FFF850")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x3FFF870", Offset = "0x3FFF870", VA = "0x3FFF870")]
		set
		{
		}
	}

	[Token(Token = "0x170002F6")]
	public bool CustomDamageEnabled
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x3FFF8C0", Offset = "0x3FFF8C0", VA = "0x3FFF8C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015D1")]
		[Address(RVA = "0x3FFF8E0", Offset = "0x3FFF8E0", VA = "0x3FFF8E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F7")]
	public int CustomDamage
	{
		[Token(Token = "0x60015D2")]
		[Address(RVA = "0x3FFF920", Offset = "0x3FFF920", VA = "0x3FFF920")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015D3")]
		[Address(RVA = "0x3FFF940", Offset = "0x3FFF940", VA = "0x3FFF940")]
		set
		{
		}
	}

	[Token(Token = "0x170002F8")]
	public string CurrentAnimation
	{
		[Token(Token = "0x60015D4")]
		[Address(RVA = "0x3FFF980", Offset = "0x3FFF980", VA = "0x3FFF980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F9")]
	public bool Grounded
	{
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x3FFF9A0", Offset = "0x3FFF9A0", VA = "0x3FFF9A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FA")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x60015D6")]
		[Address(RVA = "0x3FFF9C0", Offset = "0x3FFF9C0", VA = "0x3FFF9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FB")]
	public override string ClassName
	{
		[Token(Token = "0x60015EF")]
		[Address(RVA = "0x40005C0", Offset = "0x40005C0", VA = "0x40005C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x40005F0", Offset = "0x40005F0", VA = "0x40005F0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FD")]
	public override bool IsStatic
	{
		[Token(Token = "0x60015F1")]
		[Address(RVA = "0x4000600", Offset = "0x4000600", VA = "0x4000600", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FE")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60015F2")]
		[Address(RVA = "0x4000610", Offset = "0x4000610", VA = "0x4000610", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x3FFEBB0", Offset = "0x3FFEBB0", VA = "0x3FFEBB0")]
	protected CustomLogicCharacterBuiltin(BaseCharacter character)
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x3FFECB0", Offset = "0x3FFECB0", VA = "0x3FFECB0")]
	public void SetDisplayName(string name, bool showTag = true)
	{
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x3FFFA30", Offset = "0x3FFFA30", VA = "0x3FFFA30")]
	public void GetKilled(string killer)
	{
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x3FFFA60", Offset = "0x3FFFA60", VA = "0x3FFFA60")]
	public void GetDamaged(string killer, int damage)
	{
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x3FFFA90", Offset = "0x3FFFA90", VA = "0x3FFFA90")]
	public void Emote(string emote)
	{
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x3FFFAF0", Offset = "0x3FFFAF0", VA = "0x3FFFAF0")]
	public void PlayAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x3FFFB50", Offset = "0x3FFFB50", VA = "0x3FFFB50")]
	public void PlayAnimationAt(string animation, float t, float fade = 0.1f, bool force = false)
	{
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x3FFFBE0", Offset = "0x3FFFBE0", VA = "0x3FFFBE0")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x3FFFC40", Offset = "0x3FFFC40", VA = "0x3FFFC40")]
	public void SetAnimationSpeed(string animation, float speed, bool synced = true)
	{
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x3FFFCC0", Offset = "0x3FFFCC0", VA = "0x3FFFCC0")]
	public bool IsPlayingAnimation(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x3FFFCF0", Offset = "0x3FFFCF0", VA = "0x3FFFCF0")]
	public float GetAnimationNormalizedTime(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x3FFFD40", Offset = "0x3FFFD40", VA = "0x3FFFD40")]
	public void ForceAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x3FFFDB0", Offset = "0x3FFFDB0", VA = "0x3FFFDB0")]
	public float GetAnimationLength(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x3FFFDE0", Offset = "0x3FFFDE0", VA = "0x3FFFDE0")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x3FFFE00", Offset = "0x3FFFE00", VA = "0x3FFFE00")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x3FFFE70", Offset = "0x3FFFE70", VA = "0x3FFFE70")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x3FFFEE0", Offset = "0x3FFFEE0", VA = "0x3FFFEE0")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x3FFFF50", Offset = "0x3FFFF50", VA = "0x3FFFF50")]
	public void LookAt(CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x3FFFFC0", Offset = "0x3FFFFC0", VA = "0x3FFFFC0")]
	public void AddForce(CustomLogicVector3Builtin force, object mode)
	{
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x4000240", Offset = "0x4000240", VA = "0x4000240")]
	public void Reveal(float delay)
	{
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x4000260", Offset = "0x4000260", VA = "0x4000260")]
	public void AddOutline([Optional] CustomLogicColorBuiltin color, string mode = "OutlineAll")
	{
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x40003A0", Offset = "0x40003A0", VA = "0x40003A0")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x40003C0", Offset = "0x40003C0", VA = "0x40003C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x40003D0", Offset = "0x40003D0", VA = "0x40003D0", Slot = "9")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x4000570", Offset = "0x4000570", VA = "0x4000570", Slot = "10")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x4000590", Offset = "0x4000590", VA = "0x4000590", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
