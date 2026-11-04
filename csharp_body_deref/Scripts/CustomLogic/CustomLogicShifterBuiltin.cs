// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicShifterBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicShifterBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicShifterBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000473")]
[CompilerGenerated]
internal class CustomLogicShifterBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x2000474")]
	public new static class Factory
	{
		[Token(Token = "0x6002290")]
		[Address(RVA = "0x1F7BF60", Offset = "0x1F7A560", VA = "0x181F7BF60")]
		public static CustomLogicShifterBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000475")]
	public new static class Bindings
	{
		[Token(Token = "0x40015DA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002291")]
		[Address(RVA = "0x1F5F1D0", Offset = "0x1F5D7D0", VA = "0x181F5F1D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002292")]
		[Address(RVA = "0x1F6DC80", Offset = "0x1F6C280", VA = "0x181F6DC80")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__Size()
		{
			return null;
		}

		[Token(Token = "0x6002293")]
		[Address(RVA = "0x1F6D8C0", Offset = "0x1F6BEC0", VA = "0x181F6D8C0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RunSpeedBase()
		{
			return null;
		}

		[Token(Token = "0x6002294")]
		[Address(RVA = "0x1F6ED60", Offset = "0x1F6D360", VA = "0x181F6ED60")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__WalkSpeedBase()
		{
			return null;
		}

		[Token(Token = "0x6002295")]
		[Address(RVA = "0x1F6EE50", Offset = "0x1F6D450", VA = "0x181F6EE50")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__WalkSpeedPerLevel()
		{
			return null;
		}

		[Token(Token = "0x6002296")]
		[Address(RVA = "0x1F6D9B0", Offset = "0x1F6BFB0", VA = "0x181F6D9B0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RunSpeedPerLevel()
		{
			return null;
		}

		[Token(Token = "0x6002297")]
		[Address(RVA = "0x1F6E9F0", Offset = "0x1F6CFF0", VA = "0x181F6E9F0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__TurnSpeed()
		{
			return null;
		}

		[Token(Token = "0x6002298")]
		[Address(RVA = "0x1F6D5F0", Offset = "0x1F6BBF0", VA = "0x181F6D5F0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RotateSpeed()
		{
			return null;
		}

		[Token(Token = "0x6002299")]
		[Address(RVA = "0x1F6C3D0", Offset = "0x1F6A9D0", VA = "0x181F6C3D0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__JumpForce()
		{
			return null;
		}

		[Token(Token = "0x600229A")]
		[Address(RVA = "0x1F6AC10", Offset = "0x1F69210", VA = "0x181F6AC10")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__ActionPause()
		{
			return null;
		}

		[Token(Token = "0x600229B")]
		[Address(RVA = "0x1F6B160", Offset = "0x1F69760", VA = "0x181F6B160")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackPause()
		{
			return null;
		}

		[Token(Token = "0x600229C")]
		[Address(RVA = "0x1F6E900", Offset = "0x1F6CF00", VA = "0x181F6E900")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__TurnPause()
		{
			return null;
		}

		[Token(Token = "0x600229D")]
		[Address(RVA = "0x1F6BC50", Offset = "0x1F6A250", VA = "0x181F6BC50")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FocusRange()
		{
			return null;
		}

		[Token(Token = "0x600229E")]
		[Address(RVA = "0x1F6BD40", Offset = "0x1F6A340", VA = "0x181F6BD40")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FocusTime()
		{
			return null;
		}

		[Token(Token = "0x600229F")]
		[Address(RVA = "0x1F6BB60", Offset = "0x1F6A160", VA = "0x181F6BB60")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FarAttackCooldown()
		{
			return null;
		}

		[Token(Token = "0x60022A0")]
		[Address(RVA = "0x1F6B340", Offset = "0x1F69940", VA = "0x181F6B340")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackWait()
		{
			return null;
		}

		[Token(Token = "0x60022A1")]
		[Address(RVA = "0x1F6B250", Offset = "0x1F69850", VA = "0x181F6B250")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackSpeedMultiplier()
		{
			return null;
		}

		[Token(Token = "0x60022A2")]
		[Address(RVA = "0x1F6CB50", Offset = "0x1F6B150", VA = "0x181F6CB50")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__NapePosition()
		{
			return null;
		}

		[Token(Token = "0x60022A3")]
		[Address(RVA = "0x1F6C060", Offset = "0x1F6A660", VA = "0x181F6C060")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__HeadMount()
		{
			return null;
		}

		[Token(Token = "0x60022A4")]
		[Address(RVA = "0x1F6CBF0", Offset = "0x1F6B1F0", VA = "0x181F6CBF0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__NeckMount()
		{
			return null;
		}

		[Token(Token = "0x60022A5")]
		[Address(RVA = "0x1F6B8E0", Offset = "0x1F69EE0", VA = "0x181F6B8E0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__DeathAnimLength()
		{
			return null;
		}

		[Token(Token = "0x60022A6")]
		[Address(RVA = "0x1F697B0", Offset = "0x1F67DB0", VA = "0x181F697B0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__MoveToExact()
		{
			return null;
		}

		[Token(Token = "0x60022A7")]
		[Address(RVA = "0x1F69690", Offset = "0x1F67C90", VA = "0x181F69690")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__MoveToExactCallback()
		{
			return null;
		}

		[Token(Token = "0x60022A8")]
		[Address(RVA = "0x1F6A8B0", Offset = "0x1F68EB0", VA = "0x181F6A8B0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Target()
		{
			return null;
		}

		[Token(Token = "0x60022A9")]
		[Address(RVA = "0x1F6AAF0", Offset = "0x1F690F0", VA = "0x181F6AAF0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Wander()
		{
			return null;
		}

		[Token(Token = "0x60022AA")]
		[Address(RVA = "0x1F67E40", Offset = "0x1F66440", VA = "0x181F67E40")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Blind()
		{
			return null;
		}

		[Token(Token = "0x60022AB")]
		[Address(RVA = "0x1F682D0", Offset = "0x1F668D0", VA = "0x181F682D0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Cripple()
		{
			return null;
		}

		[Token(Token = "0x60022AC")]
		[Address(RVA = "0x1F67D20", Offset = "0x1F66320", VA = "0x181F67D20")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Attack()
		{
			return null;
		}

		[Token(Token = "0x60022AD")]
		[Address(RVA = "0x1F6A790", Offset = "0x1F68D90", VA = "0x181F6A790")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Stun()
		{
			return null;
		}
	}

	[Token(Token = "0x40015D8")]
	[FieldOffset(Offset = "0x38")]
	public readonly BaseShifter Shifter;

	[Token(Token = "0x40015D9")]
	[FieldOffset(Offset = "0x40")]
	public readonly BaseTitanAIController Controller;

	[Token(Token = "0x17000446")]
	public float Size
	{
		[Token(Token = "0x600225F")]
		[Address(RVA = "0x1F7AA40", Offset = "0x1F79040", VA = "0x181F7AA40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002260")]
		[Address(RVA = "0x1F7AF00", Offset = "0x1F79500", VA = "0x181F7AF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000447")]
	public float RunSpeedBase
	{
		[Token(Token = "0x6002261")]
		[Address(RVA = "0x1F7AA00", Offset = "0x1F79000", VA = "0x181F7AA00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002262")]
		[Address(RVA = "0x1F7AE60", Offset = "0x1F79460", VA = "0x181F7AE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000448")]
	public float WalkSpeedBase
	{
		[Token(Token = "0x6002263")]
		[Address(RVA = "0x1F7AAA0", Offset = "0x1F790A0", VA = "0x181F7AAA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002264")]
		[Address(RVA = "0x1F7B000", Offset = "0x1F79600", VA = "0x181F7B000")]
		set
		{
		}
	}

	[Token(Token = "0x17000449")]
	public float WalkSpeedPerLevel
	{
		[Token(Token = "0x6002265")]
		[Address(RVA = "0x1F7AAC0", Offset = "0x1F790C0", VA = "0x181F7AAC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002266")]
		[Address(RVA = "0x1F7B050", Offset = "0x1F79650", VA = "0x181F7B050")]
		set
		{
		}
	}

	[Token(Token = "0x1700044A")]
	public float RunSpeedPerLevel
	{
		[Token(Token = "0x6002267")]
		[Address(RVA = "0x1F7AA20", Offset = "0x1F79020", VA = "0x181F7AA20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002268")]
		[Address(RVA = "0x1F7AEB0", Offset = "0x1F794B0", VA = "0x181F7AEB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044B")]
	public float TurnSpeed
	{
		[Token(Token = "0x6002269")]
		[Address(RVA = "0x1F7AA80", Offset = "0x1F79080", VA = "0x181F7AA80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600226A")]
		[Address(RVA = "0x1F7AFB0", Offset = "0x1F795B0", VA = "0x181F7AFB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044C")]
	public float RotateSpeed
	{
		[Token(Token = "0x600226B")]
		[Address(RVA = "0x1F7A9E0", Offset = "0x1F78FE0", VA = "0x181F7A9E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600226C")]
		[Address(RVA = "0x1F7AE10", Offset = "0x1F79410", VA = "0x181F7AE10")]
		set
		{
		}
	}

	[Token(Token = "0x1700044D")]
	public float JumpForce
	{
		[Token(Token = "0x600226D")]
		[Address(RVA = "0x1F7A8D0", Offset = "0x1F78ED0", VA = "0x181F7A8D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600226E")]
		[Address(RVA = "0x1F7ADC0", Offset = "0x1F793C0", VA = "0x181F7ADC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044E")]
	public float ActionPause
	{
		[Token(Token = "0x600226F")]
		[Address(RVA = "0x1F7A670", Offset = "0x1F78C70", VA = "0x181F7A670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002270")]
		[Address(RVA = "0x1F7AAE0", Offset = "0x1F790E0", VA = "0x181F7AAE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044F")]
	public float AttackPause
	{
		[Token(Token = "0x6002271")]
		[Address(RVA = "0x1F7A690", Offset = "0x1F78C90", VA = "0x181F7A690")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002272")]
		[Address(RVA = "0x1F7AB30", Offset = "0x1F79130", VA = "0x181F7AB30")]
		set
		{
		}
	}

	[Token(Token = "0x17000450")]
	public float TurnPause
	{
		[Token(Token = "0x6002273")]
		[Address(RVA = "0x1F7AA60", Offset = "0x1F79060", VA = "0x181F7AA60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002274")]
		[Address(RVA = "0x1F7AF60", Offset = "0x1F79560", VA = "0x181F7AF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000451")]
	public float FocusRange
	{
		[Token(Token = "0x6002275")]
		[Address(RVA = "0x1F7A7E0", Offset = "0x1F78DE0", VA = "0x181F7A7E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002276")]
		[Address(RVA = "0x1F7AD00", Offset = "0x1F79300", VA = "0x181F7AD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000452")]
	public float FocusTime
	{
		[Token(Token = "0x6002277")]
		[Address(RVA = "0x1F7A840", Offset = "0x1F78E40", VA = "0x181F7A840")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002278")]
		[Address(RVA = "0x1F7AD60", Offset = "0x1F79360", VA = "0x181F7AD60")]
		set
		{
		}
	}

	[Token(Token = "0x17000453")]
	public float FarAttackCooldown
	{
		[Token(Token = "0x6002279")]
		[Address(RVA = "0x1F7A780", Offset = "0x1F78D80", VA = "0x181F7A780")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600227A")]
		[Address(RVA = "0x1F7AC90", Offset = "0x1F79290", VA = "0x181F7AC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000454")]
	public float AttackWait
	{
		[Token(Token = "0x600227B")]
		[Address(RVA = "0x1F7A6D0", Offset = "0x1F78CD0", VA = "0x181F7A6D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600227C")]
		[Address(RVA = "0x1F7ABD0", Offset = "0x1F791D0", VA = "0x181F7ABD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000455")]
	public float AttackSpeedMultiplier
	{
		[Token(Token = "0x600227D")]
		[Address(RVA = "0x1F7A6B0", Offset = "0x1F78CB0", VA = "0x181F7A6B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600227E")]
		[Address(RVA = "0x1F7AB80", Offset = "0x1F79180", VA = "0x181F7AB80")]
		set
		{
		}
	}

	[Token(Token = "0x17000456")]
	public CustomLogicVector3Builtin NapePosition
	{
		[Token(Token = "0x600227F")]
		[Address(RVA = "0x1F7A8F0", Offset = "0x1F78EF0", VA = "0x181F7A8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	public CustomLogicTransformBuiltin HeadMount
	{
		[Token(Token = "0x6002280")]
		[Address(RVA = "0x1F7A8A0", Offset = "0x1F78EA0", VA = "0x181F7A8A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	public CustomLogicTransformBuiltin NeckMount
	{
		[Token(Token = "0x6002281")]
		[Address(RVA = "0x1F7A9B0", Offset = "0x1F78FB0", VA = "0x181F7A9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000459")]
	public float DeathAnimLength
	{
		[Token(Token = "0x6002282")]
		[Address(RVA = "0x1F7A760", Offset = "0x1F78D60", VA = "0x181F7A760")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002283")]
		[Address(RVA = "0x1F7AC40", Offset = "0x1F79240", VA = "0x181F7AC40")]
		set
		{
		}
	}

	[Token(Token = "0x1700045A")]
	public override string ClassName
	{
		[Token(Token = "0x600228C")]
		[Address(RVA = "0x1F7A730", Offset = "0x1F78D30", VA = "0x181F7A730", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600228D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045C")]
	public override bool IsStatic
	{
		[Token(Token = "0x600228E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600228F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600225E")]
	[Address(RVA = "0x1F7A5F0", Offset = "0x1F78BF0", VA = "0x181F7A5F0")]
	public CustomLogicShifterBuiltin(BaseShifter shifter)
	{
	}

	[Token(Token = "0x6002284")]
	[Address(RVA = "0x1F7A3E0", Offset = "0x1F789E0", VA = "0x181F7A3E0")]
	public void MoveToExact(CustomLogicVector3Builtin position, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6002285")]
	[Address(RVA = "0x1F7A280", Offset = "0x1F78880", VA = "0x181F7A280")]
	public void MoveToExactCallback(UserMethod method, CustomLogicVector3Builtin position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6002286")]
	[Address(RVA = "0x1F7A580", Offset = "0x1F78B80", VA = "0x181F7A580")]
	[Obsolete("Use SetTarget(target, focusDuration) instead.")]
	public void Target(object enemyObj, float focus)
	{
	}

	[Token(Token = "0x6002287")]
	[Address(RVA = "0x1F7A590", Offset = "0x1F78B90", VA = "0x181F7A590")]
	public void Wander()
	{
	}

	[Token(Token = "0x6002288")]
	[Address(RVA = "0x1F7A1B0", Offset = "0x1F787B0", VA = "0x181F7A1B0")]
	public void Blind()
	{
	}

	[Token(Token = "0x6002289")]
	[Address(RVA = "0x1F7A210", Offset = "0x1F78810", VA = "0x181F7A210")]
	public void Cripple(float time)
	{
	}

	[Token(Token = "0x600228A")]
	[Address(RVA = "0x1F7A130", Offset = "0x1F78730", VA = "0x181F7A130")]
	public void Attack(string attack)
	{
	}

	[Token(Token = "0x600228B")]
	[Address(RVA = "0x1F7A490", Offset = "0x1F78A90", VA = "0x181F7A490")]
	public void Stun(float duration = 0f)
	{
	}
}
