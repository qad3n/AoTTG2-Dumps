// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCharacterBuiltin
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000452")]
[CompilerGenerated]
internal abstract class CustomLogicCharacterBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x2000453")]
	public static class Factory
	{
		[Token(Token = "0x6001E95")]
		[Address(RVA = "0x1F56C00", Offset = "0x1F55200", VA = "0x181F56C00")]
		public static CustomLogicCharacterBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000454")]
	public static class Bindings
	{
		[Token(Token = "0x400153B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E96")]
		[Address(RVA = "0x1F2D9B0", Offset = "0x1F2BFB0", VA = "0x181F2D9B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001E97")]
		[Address(RVA = "0x1F47390", Offset = "0x1F45990", VA = "0x181F47390")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentTarget()
		{
			return null;
		}

		[Token(Token = "0x6001E98")]
		[Address(RVA = "0x1F47700", Offset = "0x1F45D00", VA = "0x181F47700")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__DetectRange()
		{
			return null;
		}

		[Token(Token = "0x6001E99")]
		[Address(RVA = "0x1F4B8F0", Offset = "0x1F49EF0", VA = "0x181F4B8F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__State()
		{
			return null;
		}

		[Token(Token = "0x6001E9A")]
		[Address(RVA = "0x1F499B0", Offset = "0x1F47FB0", VA = "0x181F499B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsWalking()
		{
			return null;
		}

		[Token(Token = "0x6001E9B")]
		[Address(RVA = "0x1F463F0", Offset = "0x1F449F0", VA = "0x181F463F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__AIEnabled()
		{
			return null;
		}

		[Token(Token = "0x6001E9C")]
		[Address(RVA = "0x1F4C160", Offset = "0x1F4A760", VA = "0x181F4C160")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__UsePathfinding()
		{
			return null;
		}

		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x1F4A5E0", Offset = "0x1F48BE0", VA = "0x181F4A5E0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x6001E9E")]
		[Address(RVA = "0x1F48600", Offset = "0x1F46C00", VA = "0x181F48600")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Guild()
		{
			return null;
		}

		[Token(Token = "0x6001E9F")]
		[Address(RVA = "0x1F4A9A0", Offset = "0x1F48FA0", VA = "0x181F4A9A0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Player()
		{
			return null;
		}

		[Token(Token = "0x6001EA0")]
		[Address(RVA = "0x1F48EC0", Offset = "0x1F474C0", VA = "0x181F48EC0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAI()
		{
			return null;
		}

		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0x1F48F60", Offset = "0x1F47560", VA = "0x181F48F60")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAlive()
		{
			return null;
		}

		[Token(Token = "0x6001EA2")]
		[Address(RVA = "0x1F4C430", Offset = "0x1F4AA30", VA = "0x181F4C430")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__ViewID()
		{
			return null;
		}

		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x1F49690", Offset = "0x1F47C90", VA = "0x181F49690")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMine()
		{
			return null;
		}

		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x1F495F0", Offset = "0x1F47BF0", VA = "0x181F495F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMainCharacter()
		{
			return null;
		}

		[Token(Token = "0x6001EA5")]
		[Address(RVA = "0x1F4BEE0", Offset = "0x1F4A4E0", VA = "0x181F4BEE0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Transform()
		{
			return null;
		}

		[Token(Token = "0x6001EA6")]
		[Address(RVA = "0x1F4AB30", Offset = "0x1F49130", VA = "0x181F4AB30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x1F4B1C0", Offset = "0x1F497C0", VA = "0x181F4B1C0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x1F4AD10", Offset = "0x1F49310", VA = "0x181F4AD10")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			return null;
		}

		[Token(Token = "0x6001EA9")]
		[Address(RVA = "0x1F4C250", Offset = "0x1F4A850", VA = "0x181F4C250")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Velocity()
		{
			return null;
		}

		[Token(Token = "0x6001EAA")]
		[Address(RVA = "0x1F479D0", Offset = "0x1F45FD0", VA = "0x181F479D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6001EAB")]
		[Address(RVA = "0x1F4B030", Offset = "0x1F49630", VA = "0x181F4B030")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6001EAC")]
		[Address(RVA = "0x1F4BF80", Offset = "0x1F4A580", VA = "0x181F4BF80")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6001EAD")]
		[Address(RVA = "0x1F48830", Offset = "0x1F46E30", VA = "0x181F48830")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__HasTargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6001EAE")]
		[Address(RVA = "0x1F4B990", Offset = "0x1F49F90", VA = "0x181F4B990")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__TargetDirection()
		{
			return null;
		}

		[Token(Token = "0x6001EAF")]
		[Address(RVA = "0x1F4BD00", Offset = "0x1F4A300", VA = "0x181F4BD00")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Team()
		{
			return null;
		}

		[Token(Token = "0x6001EB0")]
		[Address(RVA = "0x1F488D0", Offset = "0x1F46ED0", VA = "0x181F488D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Health()
		{
			return null;
		}

		[Token(Token = "0x6001EB1")]
		[Address(RVA = "0x1F4A310", Offset = "0x1F48910", VA = "0x181F4A310")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__MaxHealth()
		{
			return null;
		}

		[Token(Token = "0x6001EB2")]
		[Address(RVA = "0x1F47430", Offset = "0x1F45A30", VA = "0x181F47430")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamageEnabled()
		{
			return null;
		}

		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x1F47520", Offset = "0x1F45B20", VA = "0x181F47520")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamage()
		{
			return null;
		}

		[Token(Token = "0x6001EB4")]
		[Address(RVA = "0x1F46F30", Offset = "0x1F45530", VA = "0x181F46F30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x1F48560", Offset = "0x1F46B60", VA = "0x181F48560")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Grounded()
		{
			return null;
		}

		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x1F4B120", Offset = "0x1F49720", VA = "0x181F4B120")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			return null;
		}

		[Token(Token = "0x6001EB7")]
		[Address(RVA = "0x1F42230", Offset = "0x1F40830", VA = "0x181F42230")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetTarget()
		{
			return null;
		}

		[Token(Token = "0x6001EB8")]
		[Address(RVA = "0x1F45500", Offset = "0x1F43B00", VA = "0x181F45500")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetTarget()
		{
			return null;
		}

		[Token(Token = "0x6001EB9")]
		[Address(RVA = "0x1F40EA0", Offset = "0x1F3F4A0", VA = "0x181F40EA0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ClearTarget()
		{
			return null;
		}

		[Token(Token = "0x6001EBA")]
		[Address(RVA = "0x1F42110", Offset = "0x1F40710", VA = "0x181F42110")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetNearestEnemy()
		{
			return null;
		}

		[Token(Token = "0x6001EBB")]
		[Address(RVA = "0x1F45E20", Offset = "0x1F44420", VA = "0x181F45E20")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__TargetNearestEnemy()
		{
			return null;
		}

		[Token(Token = "0x6001EBC")]
		[Address(RVA = "0x1F434B0", Offset = "0x1F41AB0", VA = "0x181F434B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveTo()
		{
			return null;
		}

		[Token(Token = "0x6001EBD")]
		[Address(RVA = "0x1F43390", Offset = "0x1F41990", VA = "0x181F43390")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveToTarget()
		{
			return null;
		}

		[Token(Token = "0x6001EBE")]
		[Address(RVA = "0x1F426D0", Offset = "0x1F40CD0", VA = "0x181F426D0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Idle()
		{
			return null;
		}

		[Token(Token = "0x6001EBF")]
		[Address(RVA = "0x1F45190", Offset = "0x1F43790", VA = "0x181F45190")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetDisplayName()
		{
			return null;
		}

		[Token(Token = "0x6001EC0")]
		[Address(RVA = "0x1F41FF0", Offset = "0x1F405F0", VA = "0x181F41FF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetKilled()
		{
			return null;
		}

		[Token(Token = "0x6001EC1")]
		[Address(RVA = "0x1F41ED0", Offset = "0x1F404D0", VA = "0x181F41ED0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetDamaged()
		{
			return null;
		}

		[Token(Token = "0x6001EC2")]
		[Address(RVA = "0x1F41460", Offset = "0x1F3FA60", VA = "0x181F41460")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Emote()
		{
			return null;
		}

		[Token(Token = "0x6001EC3")]
		[Address(RVA = "0x1F43CB0", Offset = "0x1F422B0", VA = "0x181F43CB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001EC4")]
		[Address(RVA = "0x1F43B90", Offset = "0x1F42190", VA = "0x181F43B90")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			return null;
		}

		[Token(Token = "0x6001EC5")]
		[Address(RVA = "0x1F41DB0", Offset = "0x1F403B0", VA = "0x181F41DB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001EC6")]
		[Address(RVA = "0x1F45060", Offset = "0x1F43660", VA = "0x181F45060")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001EC7")]
		[Address(RVA = "0x1F427F0", Offset = "0x1F40DF0", VA = "0x181F427F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001EC8")]
		[Address(RVA = "0x1F41C80", Offset = "0x1F40280", VA = "0x181F41C80")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x6001EC9")]
		[Address(RVA = "0x1F41900", Offset = "0x1F3FF00", VA = "0x181F41900")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ForceAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001ECA")]
		[Address(RVA = "0x1F41B50", Offset = "0x1F40150", VA = "0x181F41B50")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			return null;
		}

		[Token(Token = "0x6001ECB")]
		[Address(RVA = "0x1F42920", Offset = "0x1F40F20", VA = "0x181F42920")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingSound()
		{
			return null;
		}

		[Token(Token = "0x6001ECC")]
		[Address(RVA = "0x1F43DD0", Offset = "0x1F423D0", VA = "0x181F43DD0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlaySound()
		{
			return null;
		}

		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x1F45980", Offset = "0x1F43F80", VA = "0x181F45980")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__StopSound()
		{
			return null;
		}

		[Token(Token = "0x6001ECE")]
		[Address(RVA = "0x1F41580", Offset = "0x1F3FB80", VA = "0x181F41580")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__FadeSound()
		{
			return null;
		}

		[Token(Token = "0x6001ECF")]
		[Address(RVA = "0x1F42DE0", Offset = "0x1F413E0", VA = "0x181F42DE0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__LookAt()
		{
			return null;
		}

		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x1F40440", Offset = "0x1F3EA40", VA = "0x181F40440")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddForce()
		{
			return null;
		}

		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x1F44E10", Offset = "0x1F43410", VA = "0x181F44E10")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Reveal()
		{
			return null;
		}

		[Token(Token = "0x6001ED2")]
		[Address(RVA = "0x1F40690", Offset = "0x1F3EC90", VA = "0x181F40690")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddOutline()
		{
			return null;
		}

		[Token(Token = "0x6001ED3")]
		[Address(RVA = "0x1F44A90", Offset = "0x1F43090", VA = "0x181F44A90")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__RemoveOutline()
		{
			return null;
		}

		[Token(Token = "0x6001ED4")]
		[Address(RVA = "0x1F46190", Offset = "0x1F44790", VA = "0x181F46190")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6001ED5")]
		[Address(RVA = "0x1F462C0", Offset = "0x1F448C0", VA = "0x181F462C0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x400153A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly BaseCharacter Character;

	[Token(Token = "0x17000397")]
	private BaseAIController AIController
	{
		[Token(Token = "0x6001E39")]
		[Address(RVA = "0x1F4FAD0", Offset = "0x1F4E0D0", VA = "0x181F4FAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000398")]
	public object CurrentTarget
	{
		[Token(Token = "0x6001E3A")]
		[Address(RVA = "0x1F4EC80", Offset = "0x1F4D280", VA = "0x181F4EC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	public float DetectRange
	{
		[Token(Token = "0x6001E3B")]
		[Address(RVA = "0x1F4FC50", Offset = "0x1F4E250", VA = "0x181F4FC50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E3C")]
		[Address(RVA = "0x1F509C0", Offset = "0x1F4EFC0", VA = "0x181F509C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700039A")]
	public string State
	{
		[Token(Token = "0x6001E3D")]
		[Address(RVA = "0x1F50450", Offset = "0x1F4EA50", VA = "0x181F50450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039B")]
	public bool IsWalking
	{
		[Token(Token = "0x6001E3E")]
		[Address(RVA = "0x1F4FEB0", Offset = "0x1F4E4B0", VA = "0x181F4FEB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E3F")]
		[Address(RVA = "0x1F50B00", Offset = "0x1F4F100", VA = "0x181F50B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700039C")]
	public bool AIEnabled
	{
		[Token(Token = "0x6001E40")]
		[Address(RVA = "0x1F4FB90", Offset = "0x1F4E190", VA = "0x181F4FB90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E41")]
		[Address(RVA = "0x1F50890", Offset = "0x1F4EE90", VA = "0x181F50890")]
		set
		{
		}
	}

	[Token(Token = "0x1700039D")]
	public bool UsePathfinding
	{
		[Token(Token = "0x6001E42")]
		[Address(RVA = "0x1F507B0", Offset = "0x1F4EDB0", VA = "0x181F507B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E43")]
		[Address(RVA = "0x1F51070", Offset = "0x1F4F670", VA = "0x181F51070")]
		set
		{
		}
	}

	[Token(Token = "0x1700039E")]
	public string Name
	{
		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0x1F4FF70", Offset = "0x1F4E570", VA = "0x181F4FF70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E50")]
		[Address(RVA = "0x1F50BF0", Offset = "0x1F4F1F0", VA = "0x181F50BF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700039F")]
	public string Guild
	{
		[Token(Token = "0x6001E52")]
		[Address(RVA = "0x1F4FD40", Offset = "0x1F4E340", VA = "0x181F4FD40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E53")]
		[Address(RVA = "0x1F50A70", Offset = "0x1F4F070", VA = "0x181F50A70")]
		set
		{
		}
	}

	[Token(Token = "0x170003A0")]
	public CustomLogicPlayerBuiltin Player
	{
		[Token(Token = "0x6001E54")]
		[Address(RVA = "0x1F4FF90", Offset = "0x1F4E590", VA = "0x181F4FF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	public bool IsAI
	{
		[Token(Token = "0x6001E55")]
		[Address(RVA = "0x1F4FDB0", Offset = "0x1F4E3B0", VA = "0x181F4FDB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A2")]
	public bool IsAlive
	{
		[Token(Token = "0x6001E56")]
		[Address(RVA = "0x1F4FDD0", Offset = "0x1F4E3D0", VA = "0x181F4FDD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A3")]
	public int ViewID
	{
		[Token(Token = "0x6001E57")]
		[Address(RVA = "0x1F50860", Offset = "0x1F4EE60", VA = "0x181F50860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003A4")]
	public bool IsMine
	{
		[Token(Token = "0x6001E58")]
		[Address(RVA = "0x1F4FE80", Offset = "0x1F4E480", VA = "0x181F4FE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A5")]
	public bool IsMainCharacter
	{
		[Token(Token = "0x6001E59")]
		[Address(RVA = "0x1F4FE60", Offset = "0x1F4E460", VA = "0x181F4FE60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A6")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x6001E5A")]
		[Address(RVA = "0x1F50690", Offset = "0x1F4EC90", VA = "0x181F50690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A7")]
	public virtual CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6001E5B")]
		[Address(RVA = "0x1F50010", Offset = "0x1F4E610", VA = "0x181F50010", Slot = "13")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E5C")]
		[Address(RVA = "0x1F50C10", Offset = "0x1F4F210", VA = "0x181F50C10", Slot = "14")]
		set
		{
		}
	}

	[Token(Token = "0x170003A8")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6001E5D")]
		[Address(RVA = "0x1F50340", Offset = "0x1F4E940", VA = "0x181F50340")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E5E")]
		[Address(RVA = "0x1F50DD0", Offset = "0x1F4F3D0", VA = "0x181F50DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A9")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x6001E5F")]
		[Address(RVA = "0x1F500B0", Offset = "0x1F4E6B0", VA = "0x181F500B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E60")]
		[Address(RVA = "0x1F50CD0", Offset = "0x1F4F2D0", VA = "0x181F50CD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AA")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x6001E61")]
		[Address(RVA = "0x1F507D0", Offset = "0x1F4EDD0", VA = "0x181F507D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x1F51100", Offset = "0x1F4F700", VA = "0x181F51100")]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x1F4FC80", Offset = "0x1F4E280", VA = "0x181F4FC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x1F509F0", Offset = "0x1F4EFF0", VA = "0x181F509F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6001E65")]
		[Address(RVA = "0x1F50140", Offset = "0x1F4E740", VA = "0x181F50140")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E66")]
		[Address(RVA = "0x1F50D50", Offset = "0x1F4F350", VA = "0x181F50D50")]
		set
		{
		}
	}

	[Token(Token = "0x170003AD")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6001E67")]
		[Address(RVA = "0x1F50710", Offset = "0x1F4ED10", VA = "0x181F50710")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E68")]
		[Address(RVA = "0x1F50FF0", Offset = "0x1F4F5F0", VA = "0x181F50FF0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public bool HasTargetDirection
	{
		[Token(Token = "0x6001E69")]
		[Address(RVA = "0x1F4FD60", Offset = "0x1F4E360", VA = "0x181F4FD60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AF")]
	public CustomLogicVector3Builtin TargetDirection
	{
		[Token(Token = "0x6001E6A")]
		[Address(RVA = "0x1F505D0", Offset = "0x1F4EBD0", VA = "0x181F505D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E6B")]
		[Address(RVA = "0x1F50E90", Offset = "0x1F4F490", VA = "0x181F50E90")]
		set
		{
		}
	}

	[Token(Token = "0x170003B0")]
	public string Team
	{
		[Token(Token = "0x6001E6C")]
		[Address(RVA = "0x1F50670", Offset = "0x1F4EC70", VA = "0x181F50670")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E6D")]
		[Address(RVA = "0x1F50F90", Offset = "0x1F4F590", VA = "0x181F50F90")]
		set
		{
		}
	}

	[Token(Token = "0x170003B1")]
	public float Health
	{
		[Token(Token = "0x6001E6E")]
		[Address(RVA = "0x1F4FD80", Offset = "0x1F4E380", VA = "0x181F4FD80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E6F")]
		[Address(RVA = "0x1F50AA0", Offset = "0x1F4F0A0", VA = "0x181F50AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003B2")]
	public float MaxHealth
	{
		[Token(Token = "0x6001E70")]
		[Address(RVA = "0x1F4FF40", Offset = "0x1F4E540", VA = "0x181F4FF40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E71")]
		[Address(RVA = "0x1F50B90", Offset = "0x1F4F190", VA = "0x181F50B90")]
		set
		{
		}
	}

	[Token(Token = "0x170003B3")]
	public bool CustomDamageEnabled
	{
		[Token(Token = "0x6001E72")]
		[Address(RVA = "0x1F4FC10", Offset = "0x1F4E210", VA = "0x181F4FC10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E73")]
		[Address(RVA = "0x1F50920", Offset = "0x1F4EF20", VA = "0x181F50920")]
		set
		{
		}
	}

	[Token(Token = "0x170003B4")]
	public int CustomDamage
	{
		[Token(Token = "0x6001E74")]
		[Address(RVA = "0x1F4FC30", Offset = "0x1F4E230", VA = "0x181F4FC30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001E75")]
		[Address(RVA = "0x1F50970", Offset = "0x1F4EF70", VA = "0x181F50970")]
		set
		{
		}
	}

	[Token(Token = "0x170003B5")]
	public string CurrentAnimation
	{
		[Token(Token = "0x6001E76")]
		[Address(RVA = "0x1F4FBF0", Offset = "0x1F4E1F0", VA = "0x181F4FBF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B6")]
	public bool Grounded
	{
		[Token(Token = "0x6001E77")]
		[Address(RVA = "0x1F4FD20", Offset = "0x1F4E320", VA = "0x181F4FD20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B7")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x6001E78")]
		[Address(RVA = "0x1F501E0", Offset = "0x1F4E7E0", VA = "0x181F501E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public override string ClassName
	{
		[Token(Token = "0x6001E91")]
		[Address(RVA = "0x1F4FBC0", Offset = "0x1F4E1C0", VA = "0x181F4FBC0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E92")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BA")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E93")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E94")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x1F4EC80", Offset = "0x1F4D280", VA = "0x181F4EC80")]
	public object GetTarget()
	{
		return null;
	}

	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x1F4F4E0", Offset = "0x1F4DAE0", VA = "0x181F4F4E0")]
	public void SetTarget(object target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x1F4E920", Offset = "0x1F4CF20", VA = "0x181F4E920")]
	public void ClearTarget()
	{
	}

	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x1F4EC40", Offset = "0x1F4D240", VA = "0x181F4EC40")]
	public object GetNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x1F4F600", Offset = "0x1F4DC00", VA = "0x181F4F600")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x1F4EFE0", Offset = "0x1F4D5E0", VA = "0x181F4EFE0")]
	public void MoveTo(CustomLogicVector3Builtin position, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x1F4EE90", Offset = "0x1F4D490", VA = "0x181F4EE90")]
	public void MoveToTarget(object target, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x1F4ECC0", Offset = "0x1F4D2C0", VA = "0x181F4ECC0")]
	public void Idle(float time = -1f)
	{
	}

	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x1F4F630", Offset = "0x1F4DC30", VA = "0x181F4F630")]
	protected static ITargetable UnwrapTarget(object target)
	{
		return null;
	}

	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x1F4F720", Offset = "0x1F4DD20", VA = "0x181F4F720")]
	private static object WrapTarget(ITargetable target)
	{
		return null;
	}

	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x1F4FA10", Offset = "0x1F4E010", VA = "0x181F4FA10")]
	protected CustomLogicCharacterBuiltin(BaseCharacter character)
	{
	}

	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x1F4F440", Offset = "0x1F4DA40", VA = "0x181F4F440")]
	public void SetDisplayName(string name, bool showTag = true)
	{
	}

	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x1F4EC10", Offset = "0x1F4D210", VA = "0x181F4EC10")]
	public void GetKilled(string killer)
	{
	}

	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x1F4EBE0", Offset = "0x1F4D1E0", VA = "0x181F4EBE0")]
	public void GetDamaged(string killer, int damage)
	{
	}

	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x1F4E950", Offset = "0x1F4CF50", VA = "0x181F4E950")]
	public void Emote(string emote)
	{
	}

	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x1F4F1C0", Offset = "0x1F4D7C0", VA = "0x181F4F1C0")]
	public void PlayAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x1F4F120", Offset = "0x1F4D720", VA = "0x181F4F120")]
	public void PlayAnimationAt(string animation, float t, float fade = 0.1f, bool force = false)
	{
	}

	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x1F4EB70", Offset = "0x1F4D170", VA = "0x181F4EB70")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x1F4F3B0", Offset = "0x1F4D9B0", VA = "0x181F4F3B0")]
	public void SetAnimationSpeed(string animation, float speed, bool synced = true)
	{
	}

	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x1F4EDB0", Offset = "0x1F4D3B0", VA = "0x181F4EDB0")]
	public bool IsPlayingAnimation(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x1F4EB10", Offset = "0x1F4D110", VA = "0x181F4EB10")]
	public float GetAnimationNormalizedTime(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x1F4EA60", Offset = "0x1F4D060", VA = "0x181F4EA60")]
	public void ForceAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x1F4EAE0", Offset = "0x1F4D0E0", VA = "0x181F4EAE0")]
	public float GetAnimationLength(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x1F4EDE0", Offset = "0x1F4D3E0", VA = "0x181F4EDE0")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x1F4F240", Offset = "0x1F4D840", VA = "0x181F4F240")]
	public void PlaySound(string sound, bool local = false)
	{
	}

	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x1F4F580", Offset = "0x1F4DB80", VA = "0x181F4F580")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x1F4E9D0", Offset = "0x1F4CFD0", VA = "0x181F4E9D0")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x1F4EE00", Offset = "0x1F4D400", VA = "0x181F4EE00")]
	public void LookAt(CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x1F4E420", Offset = "0x1F4CA20", VA = "0x181F4E420")]
	public void AddForce(CustomLogicVector3Builtin force, object mode)
	{
	}

	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x1F4F380", Offset = "0x1F4D980", VA = "0x181F4F380")]
	public void Reveal(float delay)
	{
	}

	[Token(Token = "0x6001E8B")]
	[Address(RVA = "0x1F4E780", Offset = "0x1F4CD80", VA = "0x181F4E780")]
	public void AddOutline([Optional] CustomLogicColorBuiltin color, string mode = "OutlineAll")
	{
	}

	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x1F4F360", Offset = "0x1F4D960", VA = "0x181F4F360")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x1F4E9C0", Offset = "0x1F4CFC0", VA = "0x181F4E9C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x1F4F840", Offset = "0x1F4DE40", VA = "0x181F4F840", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x1F4F9F0", Offset = "0x1F4DFF0", VA = "0x181F4F9F0", Slot = "12")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x1ECE090", Offset = "0x1ECC690", VA = "0x181ECE090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
