using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20002D1")]
[CompilerGenerated]
internal class CustomLogicHumanBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20002D2")]
	public new static class Factory
	{
		[Token(Token = "0x600153F")]
		[Address(RVA = "0x3D048B0", Offset = "0x3D048B0", VA = "0x3D048B0")]
		public static CustomLogicHumanBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002D3")]
	public new static class Bindings
	{
		[Token(Token = "0x4000E4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001540")]
		[Address(RVA = "0x3D04940", Offset = "0x3D04940", VA = "0x3D04940")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001541")]
		[Address(RVA = "0x3D06A70", Offset = "0x3D06A70", VA = "0x3D06A70")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x6001542")]
		[Address(RVA = "0x3D06B50", Offset = "0x3D06B50", VA = "0x3D06B50")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Weapon()
		{
			return null;
		}

		[Token(Token = "0x6001543")]
		[Address(RVA = "0x3D06C30", Offset = "0x3D06C30", VA = "0x3D06C30")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentSpecial()
		{
			return null;
		}

		[Token(Token = "0x6001544")]
		[Address(RVA = "0x3D06D10", Offset = "0x3D06D10", VA = "0x3D06D10")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldownTime()
		{
			return null;
		}

		[Token(Token = "0x6001545")]
		[Address(RVA = "0x3D06DF0", Offset = "0x3D06DF0", VA = "0x3D06DF0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldown()
		{
			return null;
		}

		[Token(Token = "0x6001546")]
		[Address(RVA = "0x3D06ED0", Offset = "0x3D06ED0", VA = "0x3D06ED0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__ShifterLiveTime()
		{
			return null;
		}

		[Token(Token = "0x6001547")]
		[Address(RVA = "0x3D06FB0", Offset = "0x3D06FB0", VA = "0x3D06FB0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldownRatio()
		{
			return null;
		}

		[Token(Token = "0x6001548")]
		[Address(RVA = "0x3D07050", Offset = "0x3D07050", VA = "0x3D07050")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentGas()
		{
			return null;
		}

		[Token(Token = "0x6001549")]
		[Address(RVA = "0x3D07130", Offset = "0x3D07130", VA = "0x3D07130")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxGas()
		{
			return null;
		}

		[Token(Token = "0x600154A")]
		[Address(RVA = "0x3D07210", Offset = "0x3D07210", VA = "0x3D07210")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Acceleration()
		{
			return null;
		}

		[Token(Token = "0x600154B")]
		[Address(RVA = "0x3D072F0", Offset = "0x3D072F0", VA = "0x3D072F0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Speed()
		{
			return null;
		}

		[Token(Token = "0x600154C")]
		[Address(RVA = "0x3D073D0", Offset = "0x3D073D0", VA = "0x3D073D0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseFollowEnabled()
		{
			return null;
		}

		[Token(Token = "0x600154D")]
		[Address(RVA = "0x3D074B0", Offset = "0x3D074B0", VA = "0x3D074B0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseTransform()
		{
			return null;
		}

		[Token(Token = "0x600154E")]
		[Address(RVA = "0x3D07550", Offset = "0x3D07550", VA = "0x3D07550")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseSpeed()
		{
			return null;
		}

		[Token(Token = "0x600154F")]
		[Address(RVA = "0x3D07630", Offset = "0x3D07630", VA = "0x3D07630")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentBladeDurability()
		{
			return null;
		}

		[Token(Token = "0x6001550")]
		[Address(RVA = "0x3D07710", Offset = "0x3D07710", VA = "0x3D07710")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxBladeDurability()
		{
			return null;
		}

		[Token(Token = "0x6001551")]
		[Address(RVA = "0x3D077F0", Offset = "0x3D077F0", VA = "0x3D077F0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentBlade()
		{
			return null;
		}

		[Token(Token = "0x6001552")]
		[Address(RVA = "0x3D078D0", Offset = "0x3D078D0", VA = "0x3D078D0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxBlade()
		{
			return null;
		}

		[Token(Token = "0x6001553")]
		[Address(RVA = "0x3D079B0", Offset = "0x3D079B0", VA = "0x3D079B0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentAmmoRound()
		{
			return null;
		}

		[Token(Token = "0x6001554")]
		[Address(RVA = "0x3D07A90", Offset = "0x3D07A90", VA = "0x3D07A90")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxAmmoRound()
		{
			return null;
		}

		[Token(Token = "0x6001555")]
		[Address(RVA = "0x3D07B70", Offset = "0x3D07B70", VA = "0x3D07B70")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentAmmoLeft()
		{
			return null;
		}

		[Token(Token = "0x6001556")]
		[Address(RVA = "0x3D07C50", Offset = "0x3D07C50", VA = "0x3D07C50")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxAmmoTotal()
		{
			return null;
		}

		[Token(Token = "0x6001557")]
		[Address(RVA = "0x3D07D30", Offset = "0x3D07D30", VA = "0x3D07D30")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookEnabled()
		{
			return null;
		}

		[Token(Token = "0x6001558")]
		[Address(RVA = "0x3D07E10", Offset = "0x3D07E10", VA = "0x3D07E10")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookEnabled()
		{
			return null;
		}

		[Token(Token = "0x6001559")]
		[Address(RVA = "0x3D07EF0", Offset = "0x3D07EF0", VA = "0x3D07EF0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsMounted()
		{
			return null;
		}

		[Token(Token = "0x600155A")]
		[Address(RVA = "0x3D07F90", Offset = "0x3D07F90", VA = "0x3D07F90")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountState()
		{
			return null;
		}

		[Token(Token = "0x600155B")]
		[Address(RVA = "0x3D08030", Offset = "0x3D08030", VA = "0x3D08030")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountedMapObject()
		{
			return null;
		}

		[Token(Token = "0x600155C")]
		[Address(RVA = "0x3D080D0", Offset = "0x3D080D0", VA = "0x3D080D0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountedTransform()
		{
			return null;
		}

		[Token(Token = "0x600155D")]
		[Address(RVA = "0x3D08170", Offset = "0x3D08170", VA = "0x3D08170")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AutoRefillGas()
		{
			return null;
		}

		[Token(Token = "0x600155E")]
		[Address(RVA = "0x3D08250", Offset = "0x3D08250", VA = "0x3D08250")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__State()
		{
			return null;
		}

		[Token(Token = "0x600155F")]
		[Address(RVA = "0x3D082F0", Offset = "0x3D082F0", VA = "0x3D082F0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CanDodge()
		{
			return null;
		}

		[Token(Token = "0x6001560")]
		[Address(RVA = "0x3D083D0", Offset = "0x3D083D0", VA = "0x3D083D0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsInvincible()
		{
			return null;
		}

		[Token(Token = "0x6001561")]
		[Address(RVA = "0x3D084B0", Offset = "0x3D084B0", VA = "0x3D084B0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__InvincibleTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6001562")]
		[Address(RVA = "0x3D08590", Offset = "0x3D08590", VA = "0x3D08590")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsCarried()
		{
			return null;
		}

		[Token(Token = "0x6001563")]
		[Address(RVA = "0x3D08630", Offset = "0x3D08630", VA = "0x3D08630")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Grounded()
		{
			return null;
		}

		[Token(Token = "0x6001564")]
		[Address(RVA = "0x3D086D0", Offset = "0x3D086D0", VA = "0x3D086D0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Pivot()
		{
			return null;
		}

		[Token(Token = "0x6001565")]
		[Address(RVA = "0x3D08770", Offset = "0x3D08770", VA = "0x3D08770")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__PivotPosition()
		{
			return null;
		}

		[Token(Token = "0x6001566")]
		[Address(RVA = "0x3D08810", Offset = "0x3D08810", VA = "0x3D08810")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookedLeft()
		{
			return null;
		}

		[Token(Token = "0x6001567")]
		[Address(RVA = "0x3D088B0", Offset = "0x3D088B0", VA = "0x3D088B0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookedRight()
		{
			return null;
		}

		[Token(Token = "0x6001568")]
		[Address(RVA = "0x3D08950", Offset = "0x3D08950", VA = "0x3D08950")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookingLeft()
		{
			return null;
		}

		[Token(Token = "0x6001569")]
		[Address(RVA = "0x3D089F0", Offset = "0x3D089F0", VA = "0x3D089F0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookingRight()
		{
			return null;
		}

		[Token(Token = "0x600156A")]
		[Address(RVA = "0x3D08A90", Offset = "0x3D08A90", VA = "0x3D08A90")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HasHookLeft()
		{
			return null;
		}

		[Token(Token = "0x600156B")]
		[Address(RVA = "0x3D08B30", Offset = "0x3D08B30", VA = "0x3D08B30")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HasHookRight()
		{
			return null;
		}

		[Token(Token = "0x600156C")]
		[Address(RVA = "0x3D08BD0", Offset = "0x3D08BD0", VA = "0x3D08BD0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookReady()
		{
			return null;
		}

		[Token(Token = "0x600156D")]
		[Address(RVA = "0x3D08C70", Offset = "0x3D08C70", VA = "0x3D08C70")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookReady()
		{
			return null;
		}

		[Token(Token = "0x600156E")]
		[Address(RVA = "0x3D08D10", Offset = "0x3D08D10", VA = "0x3D08D10")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookPosition()
		{
			return null;
		}

		[Token(Token = "0x600156F")]
		[Address(RVA = "0x3D08DB0", Offset = "0x3D08DB0", VA = "0x3D08DB0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookPosition()
		{
			return null;
		}

		[Token(Token = "0x6001570")]
		[Address(RVA = "0x3D08E50", Offset = "0x3D08E50", VA = "0x3D08E50")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Target()
		{
			return null;
		}

		[Token(Token = "0x6001571")]
		[Address(RVA = "0x3D08F30", Offset = "0x3D08F30", VA = "0x3D08F30")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__TargetPosition()
		{
			return null;
		}

		[Token(Token = "0x6001572")]
		[Address(RVA = "0x3D09010", Offset = "0x3D09010", VA = "0x3D09010")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__TargetVelocity()
		{
			return null;
		}

		[Token(Token = "0x6001573")]
		[Address(RVA = "0x3D090B0", Offset = "0x3D090B0", VA = "0x3D090B0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsWalking()
		{
			return null;
		}

		[Token(Token = "0x6001574")]
		[Address(RVA = "0x3D09190", Offset = "0x3D09190", VA = "0x3D09190")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AllowHorse()
		{
			return null;
		}

		[Token(Token = "0x6001575")]
		[Address(RVA = "0x3D09270", Offset = "0x3D09270", VA = "0x3D09270")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AllowSkin()
		{
			return null;
		}

		[Token(Token = "0x6001576")]
		[Address(RVA = "0x3D09350", Offset = "0x3D09350", VA = "0x3D09350")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Refill()
		{
			return null;
		}

		[Token(Token = "0x6001577")]
		[Address(RVA = "0x3D094A0", Offset = "0x3D094A0", VA = "0x3D094A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__RefillImmediate()
		{
			return null;
		}

		[Token(Token = "0x6001578")]
		[Address(RVA = "0x3D095F0", Offset = "0x3D095F0", VA = "0x3D095F0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearHooks()
		{
			return null;
		}

		[Token(Token = "0x6001579")]
		[Address(RVA = "0x3D09740", Offset = "0x3D09740", VA = "0x3D09740")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearLeftHook()
		{
			return null;
		}

		[Token(Token = "0x600157A")]
		[Address(RVA = "0x3D09890", Offset = "0x3D09890", VA = "0x3D09890")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearRightHook()
		{
			return null;
		}

		[Token(Token = "0x600157B")]
		[Address(RVA = "0x3D099E0", Offset = "0x3D099E0", VA = "0x3D099E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MountMapObject()
		{
			return null;
		}

		[Token(Token = "0x600157C")]
		[Address(RVA = "0x3D09B30", Offset = "0x3D09B30", VA = "0x3D09B30")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MountTransform()
		{
			return null;
		}

		[Token(Token = "0x600157D")]
		[Address(RVA = "0x3D09C80", Offset = "0x3D09C80", VA = "0x3D09C80")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Unmount()
		{
			return null;
		}

		[Token(Token = "0x600157E")]
		[Address(RVA = "0x3D09DD0", Offset = "0x3D09DD0", VA = "0x3D09DD0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetSpecial()
		{
			return null;
		}

		[Token(Token = "0x600157F")]
		[Address(RVA = "0x3D09F20", Offset = "0x3D09F20", VA = "0x3D09F20")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ActivateSpecial()
		{
			return null;
		}

		[Token(Token = "0x6001580")]
		[Address(RVA = "0x3D0A070", Offset = "0x3D0A070", VA = "0x3D0A070")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetWeapon()
		{
			return null;
		}

		[Token(Token = "0x6001581")]
		[Address(RVA = "0x3D0A1C0", Offset = "0x3D0A1C0", VA = "0x3D0A1C0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__DisablePerks()
		{
			return null;
		}

		[Token(Token = "0x6001582")]
		[Address(RVA = "0x3D0A310", Offset = "0x3D0A310", VA = "0x3D0A310")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MoveTo()
		{
			return null;
		}

		[Token(Token = "0x6001583")]
		[Address(RVA = "0x3D0A460", Offset = "0x3D0A460", VA = "0x3D0A460")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MoveToTarget()
		{
			return null;
		}

		[Token(Token = "0x6001584")]
		[Address(RVA = "0x3D0A5B0", Offset = "0x3D0A5B0", VA = "0x3D0A5B0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Idle()
		{
			return null;
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x3D0A700", Offset = "0x3D0A700", VA = "0x3D0A700")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HasAIState()
		{
			return null;
		}

		[Token(Token = "0x6001586")]
		[Address(RVA = "0x3D0A850", Offset = "0x3D0A850", VA = "0x3D0A850")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetAIState()
		{
			return null;
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x3D0A9A0", Offset = "0x3D0A9A0", VA = "0x3D0A9A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__GetAIState()
		{
			return null;
		}

		[Token(Token = "0x6001588")]
		[Address(RVA = "0x3D0AAF0", Offset = "0x3D0AAF0", VA = "0x3D0AAF0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SwitchAIState()
		{
			return null;
		}

		[Token(Token = "0x6001589")]
		[Address(RVA = "0x3D0AC40", Offset = "0x3D0AC40", VA = "0x3D0AC40")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ResetCallback()
		{
			return null;
		}

		[Token(Token = "0x600158A")]
		[Address(RVA = "0x3D0AD90", Offset = "0x3D0AD90", VA = "0x3D0AD90")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Move()
		{
			return null;
		}

		[Token(Token = "0x600158B")]
		[Address(RVA = "0x3D0AEE0", Offset = "0x3D0AEE0", VA = "0x3D0AEE0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__AimAt()
		{
			return null;
		}

		[Token(Token = "0x600158C")]
		[Address(RVA = "0x3D0B030", Offset = "0x3D0B030", VA = "0x3D0B030")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Jump()
		{
			return null;
		}

		[Token(Token = "0x600158D")]
		[Address(RVA = "0x3D0B180", Offset = "0x3D0B180", VA = "0x3D0B180")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HorseMount()
		{
			return null;
		}

		[Token(Token = "0x600158E")]
		[Address(RVA = "0x3D0B2D0", Offset = "0x3D0B2D0", VA = "0x3D0B2D0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Dodge()
		{
			return null;
		}

		[Token(Token = "0x600158F")]
		[Address(RVA = "0x3D0B420", Offset = "0x3D0B420", VA = "0x3D0B420")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Reload()
		{
			return null;
		}

		[Token(Token = "0x6001590")]
		[Address(RVA = "0x3D0B570", Offset = "0x3D0B570", VA = "0x3D0B570")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__UseGas()
		{
			return null;
		}

		[Token(Token = "0x6001591")]
		[Address(RVA = "0x3D0B6C0", Offset = "0x3D0B6C0", VA = "0x3D0B6C0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HorseWalk()
		{
			return null;
		}

		[Token(Token = "0x6001592")]
		[Address(RVA = "0x3D0B810", Offset = "0x3D0B810", VA = "0x3D0B810")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Dash()
		{
			return null;
		}

		[Token(Token = "0x6001593")]
		[Address(RVA = "0x3D0B960", Offset = "0x3D0B960", VA = "0x3D0B960")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Reel()
		{
			return null;
		}

		[Token(Token = "0x6001594")]
		[Address(RVA = "0x3D0BAB0", Offset = "0x3D0BAB0", VA = "0x3D0BAB0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__LaunchHookLeft()
		{
			return null;
		}

		[Token(Token = "0x6001595")]
		[Address(RVA = "0x3D0BC00", Offset = "0x3D0BC00", VA = "0x3D0BC00")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__LaunchHookRight()
		{
			return null;
		}

		[Token(Token = "0x6001596")]
		[Address(RVA = "0x3D0BD50", Offset = "0x3D0BD50", VA = "0x3D0BD50")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookLeft()
		{
			return null;
		}

		[Token(Token = "0x6001597")]
		[Address(RVA = "0x3D0BEA0", Offset = "0x3D0BEA0", VA = "0x3D0BEA0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookRight()
		{
			return null;
		}

		[Token(Token = "0x6001598")]
		[Address(RVA = "0x3D0BFF0", Offset = "0x3D0BFF0", VA = "0x3D0BFF0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookAll()
		{
			return null;
		}

		[Token(Token = "0x6001599")]
		[Address(RVA = "0x3D0C140", Offset = "0x3D0C140", VA = "0x3D0C140")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Attack()
		{
			return null;
		}

		[Token(Token = "0x600159A")]
		[Address(RVA = "0x3D0C290", Offset = "0x3D0C290", VA = "0x3D0C290")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__FindNearestEnemy()
		{
			return null;
		}

		[Token(Token = "0x600159B")]
		[Address(RVA = "0x3D0C3E0", Offset = "0x3D0C3E0", VA = "0x3D0C3E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Navigation()
		{
			return null;
		}

		[Token(Token = "0x600159C")]
		[Address(RVA = "0x3D0C530", Offset = "0x3D0C530", VA = "0x3D0C530")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetParticleEffect()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Human Human;

	[Token(Token = "0x4000E4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public HumanAIController Controller;

	[Token(Token = "0x170002A6")]
	public override CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60014C0")]
		[Address(RVA = "0x3D01180", Offset = "0x3D01180", VA = "0x3D01180", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014C1")]
		[Address(RVA = "0x3D01190", Offset = "0x3D01190", VA = "0x3D01190", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public string Weapon
	{
		[Token(Token = "0x60014C2")]
		[Address(RVA = "0x3D011E0", Offset = "0x3D011E0", VA = "0x3D011E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014C3")]
		[Address(RVA = "0x3D01260", Offset = "0x3D01260", VA = "0x3D01260")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public string CurrentSpecial
	{
		[Token(Token = "0x60014C4")]
		[Address(RVA = "0x3D01AB0", Offset = "0x3D01AB0", VA = "0x3D01AB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014C5")]
		[Address(RVA = "0x3D01AD0", Offset = "0x3D01AD0", VA = "0x3D01AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public float SpecialCooldownTime
	{
		[Token(Token = "0x60014C6")]
		[Address(RVA = "0x3D01B70", Offset = "0x3D01B70", VA = "0x3D01B70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014C7")]
		[Address(RVA = "0x3D01BA0", Offset = "0x3D01BA0", VA = "0x3D01BA0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public float SpecialCooldown
	{
		[Token(Token = "0x60014C8")]
		[Address(RVA = "0x3D01BD0", Offset = "0x3D01BD0", VA = "0x3D01BD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014C9")]
		[Address(RVA = "0x3D01C00", Offset = "0x3D01C00", VA = "0x3D01C00")]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public float ShifterLiveTime
	{
		[Token(Token = "0x60014CA")]
		[Address(RVA = "0x3D01C30", Offset = "0x3D01C30", VA = "0x3D01C30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014CB")]
		[Address(RVA = "0x3D01CB0", Offset = "0x3D01CB0", VA = "0x3D01CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AC")]
	public float SpecialCooldownRatio
	{
		[Token(Token = "0x60014CC")]
		[Address(RVA = "0x3D01D50", Offset = "0x3D01D50", VA = "0x3D01D50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002AD")]
	public float CurrentGas
	{
		[Token(Token = "0x60014CD")]
		[Address(RVA = "0x3D01D80", Offset = "0x3D01D80", VA = "0x3D01D80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014CE")]
		[Address(RVA = "0x3D01DB0", Offset = "0x3D01DB0", VA = "0x3D01DB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AE")]
	public float MaxGas
	{
		[Token(Token = "0x60014CF")]
		[Address(RVA = "0x3D01DE0", Offset = "0x3D01DE0", VA = "0x3D01DE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x3D01E10", Offset = "0x3D01E10", VA = "0x3D01E10")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public int Acceleration
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x3D01E40", Offset = "0x3D01E40", VA = "0x3D01E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x3D01E60", Offset = "0x3D01E60", VA = "0x3D01E60")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public int Speed
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x3D01E90", Offset = "0x3D01E90", VA = "0x3D01E90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x3D01EB0", Offset = "0x3D01EB0", VA = "0x3D01EB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B1")]
	public bool HorseFollowEnabled
	{
		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x3D01EE0", Offset = "0x3D01EE0", VA = "0x3D01EE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x3D01F60", Offset = "0x3D01F60", VA = "0x3D01F60")]
		set
		{
		}
	}

	[Token(Token = "0x170002B2")]
	public CustomLogicTransformBuiltin HorseTransform
	{
		[Token(Token = "0x60014D7")]
		[Address(RVA = "0x3D01FE0", Offset = "0x3D01FE0", VA = "0x3D01FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B3")]
	public float HorseSpeed
	{
		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x3D020B0", Offset = "0x3D020B0", VA = "0x3D020B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014D9")]
		[Address(RVA = "0x3D020E0", Offset = "0x3D020E0", VA = "0x3D020E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B4")]
	public float CurrentBladeDurability
	{
		[Token(Token = "0x60014DA")]
		[Address(RVA = "0x3D02110", Offset = "0x3D02110", VA = "0x3D02110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014DB")]
		[Address(RVA = "0x3D02190", Offset = "0x3D02190", VA = "0x3D02190")]
		set
		{
		}
	}

	[Token(Token = "0x170002B5")]
	public float MaxBladeDurability
	{
		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x3D022F0", Offset = "0x3D022F0", VA = "0x3D022F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x3D02370", Offset = "0x3D02370", VA = "0x3D02370")]
		set
		{
		}
	}

	[Token(Token = "0x170002B6")]
	public int CurrentBlade
	{
		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x3D02410", Offset = "0x3D02410", VA = "0x3D02410")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014DF")]
		[Address(RVA = "0x3D02490", Offset = "0x3D02490", VA = "0x3D02490")]
		set
		{
		}
	}

	[Token(Token = "0x170002B7")]
	public int MaxBlade
	{
		[Token(Token = "0x60014E0")]
		[Address(RVA = "0x3D02520", Offset = "0x3D02520", VA = "0x3D02520")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E1")]
		[Address(RVA = "0x3D025A0", Offset = "0x3D025A0", VA = "0x3D025A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B8")]
	public int CurrentAmmoRound
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x3D02630", Offset = "0x3D02630", VA = "0x3D02630")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x3D026B0", Offset = "0x3D026B0", VA = "0x3D026B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B9")]
	public int MaxAmmoRound
	{
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0x3D02740", Offset = "0x3D02740", VA = "0x3D02740")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x3D027C0", Offset = "0x3D027C0", VA = "0x3D027C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002BA")]
	public int CurrentAmmoLeft
	{
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x3D02850", Offset = "0x3D02850", VA = "0x3D02850")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E7")]
		[Address(RVA = "0x3D028D0", Offset = "0x3D028D0", VA = "0x3D028D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002BB")]
	public int MaxAmmoTotal
	{
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x3D02960", Offset = "0x3D02960", VA = "0x3D02960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x3D029E0", Offset = "0x3D029E0", VA = "0x3D029E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	public bool LeftHookEnabled
	{
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x3D02A70", Offset = "0x3D02A70", VA = "0x3D02A70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014EB")]
		[Address(RVA = "0x3D02A90", Offset = "0x3D02A90", VA = "0x3D02A90")]
		set
		{
		}
	}

	[Token(Token = "0x170002BD")]
	public bool RightHookEnabled
	{
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x3D02AC0", Offset = "0x3D02AC0", VA = "0x3D02AC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014ED")]
		[Address(RVA = "0x3D02AE0", Offset = "0x3D02AE0", VA = "0x3D02AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	public bool IsMounted
	{
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0x3D02B10", Offset = "0x3D02B10", VA = "0x3D02B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BF")]
	public int MountState
	{
		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x3D02B30", Offset = "0x3D02B30", VA = "0x3D02B30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C0")]
	public CustomLogicMapObjectBuiltin MountedMapObject
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x3D02B50", Offset = "0x3D02B50", VA = "0x3D02B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C1")]
	public CustomLogicTransformBuiltin MountedTransform
	{
		[Token(Token = "0x60014F1")]
		[Address(RVA = "0x3D02BE0", Offset = "0x3D02BE0", VA = "0x3D02BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C2")]
	public bool AutoRefillGas
	{
		[Token(Token = "0x60014F2")]
		[Address(RVA = "0x3D02C90", Offset = "0x3D02C90", VA = "0x3D02C90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x3D02D60", Offset = "0x3D02D60", VA = "0x3D02D60")]
		set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	public string State
	{
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x3D02E30", Offset = "0x3D02E30", VA = "0x3D02E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C4")]
	public bool CanDodge
	{
		[Token(Token = "0x60014F5")]
		[Address(RVA = "0x3D02EA0", Offset = "0x3D02EA0", VA = "0x3D02EA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x3D02EC0", Offset = "0x3D02EC0", VA = "0x3D02EC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002C5")]
	public bool IsInvincible
	{
		[Token(Token = "0x60014F7")]
		[Address(RVA = "0x3D02EE0", Offset = "0x3D02EE0", VA = "0x3D02EE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F8")]
		[Address(RVA = "0x3D02F00", Offset = "0x3D02F00", VA = "0x3D02F00")]
		set
		{
		}
	}

	[Token(Token = "0x170002C6")]
	public float InvincibleTimeLeft
	{
		[Token(Token = "0x60014F9")]
		[Address(RVA = "0x3D02F20", Offset = "0x3D02F20", VA = "0x3D02F20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014FA")]
		[Address(RVA = "0x3D02F40", Offset = "0x3D02F40", VA = "0x3D02F40")]
		set
		{
		}
	}

	[Token(Token = "0x170002C7")]
	public bool IsCarried
	{
		[Token(Token = "0x60014FB")]
		[Address(RVA = "0x3D02F60", Offset = "0x3D02F60", VA = "0x3D02F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C8")]
	public new bool Grounded
	{
		[Token(Token = "0x60014FC")]
		[Address(RVA = "0x3D02F80", Offset = "0x3D02F80", VA = "0x3D02F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C9")]
	public bool Pivot
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x3D02FA0", Offset = "0x3D02FA0", VA = "0x3D02FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CA")]
	public CustomLogicVector3Builtin PivotPosition
	{
		[Token(Token = "0x60014FE")]
		[Address(RVA = "0x3D02FC0", Offset = "0x3D02FC0", VA = "0x3D02FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CB")]
	public bool IsHookedLeft
	{
		[Token(Token = "0x60014FF")]
		[Address(RVA = "0x3D03040", Offset = "0x3D03040", VA = "0x3D03040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CC")]
	public bool IsHookedRight
	{
		[Token(Token = "0x6001500")]
		[Address(RVA = "0x3D03070", Offset = "0x3D03070", VA = "0x3D03070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CD")]
	public bool IsHookingLeft
	{
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x3D030A0", Offset = "0x3D030A0", VA = "0x3D030A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CE")]
	public bool IsHookingRight
	{
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x3D030D0", Offset = "0x3D030D0", VA = "0x3D030D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CF")]
	public bool HasHookLeft
	{
		[Token(Token = "0x6001503")]
		[Address(RVA = "0x3D03100", Offset = "0x3D03100", VA = "0x3D03100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D0")]
	public bool HasHookRight
	{
		[Token(Token = "0x6001504")]
		[Address(RVA = "0x3D03130", Offset = "0x3D03130", VA = "0x3D03130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D1")]
	public bool LeftHookReady
	{
		[Token(Token = "0x6001505")]
		[Address(RVA = "0x3D03160", Offset = "0x3D03160", VA = "0x3D03160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D2")]
	public bool RightHookReady
	{
		[Token(Token = "0x6001506")]
		[Address(RVA = "0x3D03190", Offset = "0x3D03190", VA = "0x3D03190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D3")]
	public CustomLogicVector3Builtin LeftHookPosition
	{
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x3D031C0", Offset = "0x3D031C0", VA = "0x3D031C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D4")]
	public CustomLogicVector3Builtin RightHookPosition
	{
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x3D03250", Offset = "0x3D03250", VA = "0x3D03250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D5")]
	public object Target
	{
		[Token(Token = "0x6001509")]
		[Address(RVA = "0x3D032E0", Offset = "0x3D032E0", VA = "0x3D032E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600150A")]
		[Address(RVA = "0x3D03500", Offset = "0x3D03500", VA = "0x3D03500")]
		set
		{
		}
	}

	[Token(Token = "0x170002D6")]
	public CustomLogicVector3Builtin TargetPosition
	{
		[Token(Token = "0x600150B")]
		[Address(RVA = "0x3D03620", Offset = "0x3D03620", VA = "0x3D03620")]
		get
		{
			return null;
		}
		[Token(Token = "0x600150C")]
		[Address(RVA = "0x3D03650", Offset = "0x3D03650", VA = "0x3D03650")]
		set
		{
		}
	}

	[Token(Token = "0x170002D7")]
	public CustomLogicVector3Builtin TargetVelocity
	{
		[Token(Token = "0x600150D")]
		[Address(RVA = "0x3D03690", Offset = "0x3D03690", VA = "0x3D03690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	public bool IsWalking
	{
		[Token(Token = "0x600150E")]
		[Address(RVA = "0x3D036C0", Offset = "0x3D036C0", VA = "0x3D036C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600150F")]
		[Address(RVA = "0x3D036E0", Offset = "0x3D036E0", VA = "0x3D036E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D9")]
	public bool AllowHorse
	{
		[Token(Token = "0x6001510")]
		[Address(RVA = "0x3D03720", Offset = "0x3D03720", VA = "0x3D03720")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001511")]
		[Address(RVA = "0x3D03740", Offset = "0x3D03740", VA = "0x3D03740")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public bool AllowSkin
	{
		[Token(Token = "0x6001512")]
		[Address(RVA = "0x3D03760", Offset = "0x3D03760", VA = "0x3D03760")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001513")]
		[Address(RVA = "0x3D03780", Offset = "0x3D03780", VA = "0x3D03780")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public override string ClassName
	{
		[Token(Token = "0x600153B")]
		[Address(RVA = "0x3D04850", Offset = "0x3D04850", VA = "0x3D04850", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DC")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600153C")]
		[Address(RVA = "0x3D04880", Offset = "0x3D04880", VA = "0x3D04880", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DD")]
	public override bool IsStatic
	{
		[Token(Token = "0x600153D")]
		[Address(RVA = "0x3D04890", Offset = "0x3D04890", VA = "0x3D04890", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DE")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600153E")]
		[Address(RVA = "0x3D048A0", Offset = "0x3D048A0", VA = "0x3D048A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x3D010A0", Offset = "0x3D010A0", VA = "0x3D010A0")]
	public CustomLogicHumanBuiltin(Human human)
	{
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x3D037A0", Offset = "0x3D037A0", VA = "0x3D037A0")]
	public bool Refill()
	{
		return default(bool);
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x3D037F0", Offset = "0x3D037F0", VA = "0x3D037F0")]
	public void RefillImmediate()
	{
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x3D03820", Offset = "0x3D03820", VA = "0x3D03820")]
	public void ClearHooks()
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x3D03880", Offset = "0x3D03880", VA = "0x3D03880")]
	public void ClearLeftHook()
	{
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x3D038C0", Offset = "0x3D038C0", VA = "0x3D038C0")]
	public void ClearRightHook()
	{
	}

	[Token(Token = "0x6001519")]
	[Address(RVA = "0x3D03900", Offset = "0x3D03900", VA = "0x3D03900")]
	public void MountMapObject(CustomLogicMapObjectBuiltin mapObject, CustomLogicVector3Builtin positionOffset, CustomLogicVector3Builtin rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x3D03980", Offset = "0x3D03980", VA = "0x3D03980")]
	public void MountTransform(CustomLogicTransformBuiltin transform, CustomLogicVector3Builtin positionOffset, CustomLogicVector3Builtin rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x3D03A00", Offset = "0x3D03A00", VA = "0x3D03A00")]
	public void Unmount(bool immediate = true)
	{
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x3D01B20", Offset = "0x3D01B20", VA = "0x3D01B20")]
	public void SetSpecial(string special)
	{
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x3D03A50", Offset = "0x3D03A50", VA = "0x3D03A50")]
	public void ActivateSpecial()
	{
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x3D01270", Offset = "0x3D01270", VA = "0x3D01270")]
	public void SetWeapon(string weapon)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x3D03AD0", Offset = "0x3D03AD0", VA = "0x3D03AD0")]
	public void DisablePerks()
	{
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x3D03B10", Offset = "0x3D03B10", VA = "0x3D03B10")]
	public void MoveTo(CustomLogicVector3Builtin position, float range)
	{
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x3D03B80", Offset = "0x3D03B80", VA = "0x3D03B80")]
	public void MoveToTarget(object target, float range)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x3D03CB0", Offset = "0x3D03CB0", VA = "0x3D03CB0")]
	public void Idle()
	{
	}

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x3D03CF0", Offset = "0x3D03CF0", VA = "0x3D03CF0")]
	public bool HasAIState(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x3D03D50", Offset = "0x3D03D50", VA = "0x3D03D50")]
	public void SetAIState(string name, [Optional] UserClassInstance classInstance)
	{
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x3D03E50", Offset = "0x3D03E50", VA = "0x3D03E50")]
	public string GetAIState()
	{
		return null;
	}

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x3D03EB0", Offset = "0x3D03EB0", VA = "0x3D03EB0")]
	public void SwitchAIState(string name)
	{
	}

	[Token(Token = "0x6001527")]
	[Address(RVA = "0x3D03F50", Offset = "0x3D03F50", VA = "0x3D03F50")]
	public void ResetCallback(string callback, [Optional] UserMethod method)
	{
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x3D040D0", Offset = "0x3D040D0", VA = "0x3D040D0")]
	public void Move(CustomLogicVector3Builtin direction)
	{
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x3D04180", Offset = "0x3D04180", VA = "0x3D04180")]
	public void AimAt(CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x3D04230", Offset = "0x3D04230", VA = "0x3D04230")]
	public void Jump()
	{
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x3D04270", Offset = "0x3D04270", VA = "0x3D04270")]
	public void HorseMount(bool mount = true)
	{
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x3D042D0", Offset = "0x3D042D0", VA = "0x3D042D0")]
	public void Dodge()
	{
	}

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x3D04310", Offset = "0x3D04310", VA = "0x3D04310")]
	public void Reload()
	{
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x3D04350", Offset = "0x3D04350", VA = "0x3D04350")]
	public void UseGas(bool useGas)
	{
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x3D043A0", Offset = "0x3D043A0", VA = "0x3D043A0")]
	public void HorseWalk(bool isWalk)
	{
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x3D04400", Offset = "0x3D04400", VA = "0x3D04400")]
	public void Dash(CustomLogicVector3Builtin direction)
	{
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x3D04470", Offset = "0x3D04470", VA = "0x3D04470")]
	public void Reel(int reelAxis)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x3D044C0", Offset = "0x3D044C0", VA = "0x3D044C0")]
	public void LaunchHookLeft(CustomLogicVector3Builtin aimPoint)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x3D04530", Offset = "0x3D04530", VA = "0x3D04530")]
	public void LaunchHookRight(CustomLogicVector3Builtin aimPoint)
	{
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x3D045A0", Offset = "0x3D045A0", VA = "0x3D045A0")]
	public void ReleaseHookLeft()
	{
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x3D045E0", Offset = "0x3D045E0", VA = "0x3D045E0")]
	public void ReleaseHookRight()
	{
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x3D04620", Offset = "0x3D04620", VA = "0x3D04620")]
	public void ReleaseHookAll()
	{
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x3D04660", Offset = "0x3D04660", VA = "0x3D04660")]
	public void Attack(bool attackOn)
	{
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x3D046C0", Offset = "0x3D046C0", VA = "0x3D046C0")]
	public void FindNearestEnemy()
	{
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x3D04710", Offset = "0x3D04710", VA = "0x3D04710")]
	public void Navigation()
	{
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x3D04750", Offset = "0x3D04750", VA = "0x3D04750")]
	public void SetParticleEffect(string effectName, bool enabled)
	{
	}
}
